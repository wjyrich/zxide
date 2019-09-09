#include "AssemblerParser.h"
#include "AssemblerLexer.h"
#include "AssemblerContext.h"
#include "IErrorReporter.h"
#include "Z80Opcodes.h"
#include "Expression.h"
#include "ExprEvalContext.h"
#include "Util.h"
#include "Program.h"
#include <sstream>

std::unordered_map<std::string, void(AssemblerParser::*)()> AssemblerParser::mDataDirectives = {
        { "db", &AssemblerParser::parseDefByte },
        { "dw", &AssemblerParser::parseDefWord },
        { "dd", &AssemblerParser::parseDefDWord },
        { "defb", &AssemblerParser::parseDefByte },
        { "defw", &AssemblerParser::parseDefWord },
    };

std::unordered_map<std::string, void(AssemblerParser::*)()> AssemblerParser::mDirectives = {
        { "section", &AssemblerParser::parseSectionDecl },
        { "repeat", &AssemblerParser::parseRepeatDecl },
        { "endrepeat", &AssemblerParser::parseEndRepeatDecl },
        { "if", &AssemblerParser::parseIfDecl },
        { "else", &AssemblerParser::parseElseDecl },
        { "endif", &AssemblerParser::parseEndIfDecl },
    };

AssemblerParser::AssemblerParser(AssemblerLexer* lexer, Program* program, IErrorReporter* reporter)
    : mLexer(lexer)
    , mProgram(program)
    , mReporter(reporter)
    , mContext(new AssemblerDefaultContext(mProgram))
{
}

AssemblerParser::~AssemblerParser()
{
}

void AssemblerParser::parse()
{
    while (nextToken() != T_EOF)
        parseLine();

    if (mContext->prev()) {
        if (mContext->isRepeat())
            error(tr("missing 'endrepeat'"));
        else if (mContext->isIf())
            error(tr("missing 'endif'"));
        else {
            Q_ASSERT(false);
            error(tr("internal compiler error"));
        }
    }
}

template <typename T, typename... ARGS> T* AssemblerParser::pushContext(ARGS&&... args)
{
    auto uniq = std::make_unique<T>(std::move(mContext), std::forward<ARGS>(args)...);
    auto ptr = uniq.get();
    mContext = std::move(uniq);
    return ptr;
}

void AssemblerParser::popContext()
{
    mContext = mContext->takePrev();
    Q_ASSERT(mContext != nullptr);
    if (!mContext)
        error(tr("internal compiler error"));
}

void AssemblerParser::parseLine()
{
    ProgramLabel* label = nullptr;

    // read label, if any
    if (lastTokenId() == T_LABEL || lastTokenId() == T_FULL_LABEL|| lastTokenId() == T_LOCAL_LABEL) {
        if (lastTokenId() != T_LOCAL_LABEL && !mContext->areGlobalLabelsAllowed())
            error(tr("global labels are not allowed in this context"));

        std::string name = readLabelName(lastTokenId());
        label = mProgram->addLabel(lastToken(), mContext->codeEmitter(), name);
        if (!label || mContext->hasVariable(name))
            error(tr("duplicate identifier '%1'").arg(name.c_str()));

        mContext->adjustLabel(label);

        nextToken();
    }

    // skip empty or label-only lines
    if (matchEol())
        return;

    // read directive / instruction
    if (lastTokenId() == T_IDENTIFIER) {
        auto str = toLower(lastTokenText());
        if (parseOpcode(str))
            return;

        auto it = mDirectives.find(str);
        if (it != mDirectives.end()) {
            (this->*(it->second))();
            return;
        }

        auto jt = mDataDirectives.find(str);
        if (jt != mDataDirectives.end()) {
            (this->*(jt->second))();
            return;
        }
    }

    // 'equ' and data directives handling (may be preceded by label without ':')

    // read label name
    Token nameToken = lastToken();
    std::string name;
    if (lastTokenId() == T_IDENTIFIER)
        name = nameToken.text.c_str();
    else if (lastTokenId() == T_LOCAL_LABEL_NAME)
        name = readLabelName(lastTokenId());
    else
        error(tr("expected opcode or directive"));

    // read directive
    nextToken();
    std::unordered_map<std::string, void(AssemblerParser::*)()>::iterator iter;
    std::string lower = toLower(lastTokenText());
    if (lastTokenId() == T_IDENTIFIER && (iter = mDataDirectives.find(lower)) != mDataDirectives.end()) {
        if (nameToken.id != T_LOCAL_LABEL_NAME && !mContext->areGlobalLabelsAllowed())
            error(tr("global labels are not allowed in this context"));

        label = mProgram->addLabel(nameToken, mContext->codeEmitter(), name);
        if (!label || mContext->hasVariable(name))
            error(tr("duplicate identifier '%1'").arg(name.c_str()));

        mContext->adjustLabel(label);

        if (nameToken.id == T_IDENTIFIER)
            mContext->setLocalLabelsPrefix(name, nameToken, mReporter);
        (this->*(iter->second))();
    } else if ((lastTokenId() == T_IDENTIFIER && lower == "equ") || lastTokenId() == T_ASSIGN) {
        auto expr = parseExpression(nextToken(), true);
        if (!expr)
            error(tr("expected expression after 'equ'"));
        if (!mProgram->addConstant(name, std::move(expr)) || mContext->hasVariable(name))
            error(nameToken, tr("duplicate identifier '%1'").arg(name.c_str()));
    } else {
        if (nameToken.id == T_IDENTIFIER)
            error(nameToken, tr("unknown opcode '%1'").arg(name.c_str()));
        else
            error(nameToken, tr("missing ':' after local label name"));
    }
}

void AssemblerParser::parseSectionDecl()
{
    std::string sectionName = expectIdentifier(nextToken());
    auto section = mProgram->getOrCreateSection(sectionName, lastToken());

    if (!mContext->setCurrentSection(section))
        error(tr("'section' directive is not allowed in this context"));

    if (nextToken() == T_LBRACKET) {
        for (;;) {
            auto param = toLower(expectIdentifier(nextToken()));
            if (param == "align") {
                auto alignment = (unsigned)parseNumber(nextToken(), 1, 0xFFFF);
                if (section->hasAlignment() && section->alignment() != alignment) {
                    error(tr("conflicting alignment for section '%1' (%2 != %3)")
                        .arg(section->nameCStr()).arg(alignment).arg(section->alignment()));
                }
                if (section->hasBase() && (section->base() % alignment) != 0) {
                    error(tr("base address 0x%2 of section '%1' is not aligned to %3")
                        .arg(section->nameCStr()).arg(section->base(), 0, 16).arg(alignment));
                }
                section->setAlignment(alignment);
            } else if (param == "base") {
                auto base = (unsigned)parseNumber(nextToken());
                if (section->hasBase() && section->base() != base) {
                    error(tr("conflicting base address for section '%1' (0x%2 != 0x%3)")
                        .arg(section->nameCStr()).arg(base, 0, 16).arg(section->base(), 0, 16));
                }
                if (section->hasAlignment() && (base % section->alignment()) != 0) {
                    error(tr("base address 0x%2 of section '%1' is not aligned to %3")
                        .arg(section->nameCStr()).arg(base, 0, 16).arg(section->alignment()));
                }
                if (section->hasBank() && !ProgramSection::isValidBaseForBank(section->bank(), base)) {
                    error(tr("invalid base address 0x%1 for section '%2' in bank %3")
                        .arg(base, 0, 16).arg(section->nameCStr()).arg(section->bank()));
                }
                section->setBase(base);
            } else if (param == "bank") {
                auto bank = (unsigned)parseNumber(nextToken(), 0, 0xFFFFFFFF);
                if (!ProgramSection::isValidBankNumber(bank))
                    error(tr("invalid bank %1").arg(bank));
                if (section->hasBank() && section->bank() != bank) {
                    error(tr("conflicting bank for section '%1' (%2 != %3)")
                        .arg(section->nameCStr()).arg(bank).arg(section->bank()));
                }
                if (section->hasBase() && !ProgramSection::isValidBaseForBank(bank, section->base())) {
                    error(tr("invalid base address 0x%1 for section '%2' in bank %3")
                        .arg(section->base(), 0, 16).arg(section->nameCStr()).arg(bank));
                }
                section->setBank(bank);
            } else
                error(tr("unexpected '%1'").arg(lastTokenCStr()));

            if (lastTokenId() == T_RBRACKET) {
                nextToken();
                break;
            }

            expectComma(lastTokenId());
        }
    }

    expectEol(lastTokenId());
}

void AssemblerParser::parseRepeatDecl()
{
    Token token = lastToken();

    auto count = parseExpression(nextToken(), true);
    std::string variable;

    if (lastTokenId() == T_COMMA) {
        variable = expectIdentifier(nextToken());
        if (mContext->hasVariable(variable) || mProgram->isDeclared(variable))
            error(tr("duplicate identifier '%1'").arg(variable.c_str()));
        nextToken();
    }

    auto parentCodeEmitter = mContext->codeEmitter();

    auto context = pushContext<AssemblerRepeatContext>(token, std::move(variable), std::move(count));
    parentCodeEmitter->emit<RepeatMacro>(token, context->codeEmitterSharedPtr());

    expectEol(lastTokenId());
}

void AssemblerParser::parseEndRepeatDecl()
{
    if (!mContext->isRepeat())
        error(tr("mismatched 'endrepeat'"));

    popContext();

    expectEol(nextToken());
}

void AssemblerParser::parseIfDecl()
{
    Token token = lastToken();

    auto cond = parseExpression(nextToken(), true);
    auto parentCodeEmitter = mContext->codeEmitter();

    auto context = pushContext<AssemblerIfContext>(token);
    parentCodeEmitter->emit<IfMacro>(token, std::move(cond), context->thenCodeEmitter(), context->elseCodeEmitter());

    expectEol(lastTokenId());
}

void AssemblerParser::parseElseDecl()
{
    if (!mContext->isIf() || mContext->hasElse())
        error(tr("unexpected 'else'"));

    mContext->beginElse(mReporter, lastToken());

    expectEol(nextToken());
}

void AssemblerParser::parseEndIfDecl()
{
    if (!mContext->isIf())
        error(tr("mismatched 'endif'"));

    popContext();

    expectEol(nextToken());
}

void AssemblerParser::parseDefByte()
{
    do {
        auto token = (nextToken(), lastToken());
        if (token.id == T_STRING) {
            std::string text = lastTokenText();
            if (!text.empty())
                mContext->codeEmitter()->emit<DEFB_STRING>(token, std::move(text));
            nextToken();
        } else {
            auto expr = parseExpression(token.id, true);
            if (!expr)
                error(mExpressionError);
            mContext->codeEmitter()->emit<DEFB>(token, std::move(expr));
        }
    } while (lastTokenId() == T_COMMA);
    expectEol(lastTokenId());
}

void AssemblerParser::parseDefWord()
{
    do {
        auto token = (nextToken(), lastToken());
        auto expr = parseExpression(token.id, true);
        if (!expr)
            error(mExpressionError);
        mContext->codeEmitter()->emit<DEFW>(token, std::move(expr));
    } while (lastTokenId() == T_COMMA);
    expectEol(lastTokenId());
}

void AssemblerParser::parseDefDWord()
{
    do {
        auto token = (nextToken(), lastToken());
        auto expr = parseExpression(token.id, true);
        if (!expr)
            error(mExpressionError);
        mContext->codeEmitter()->emit<DEFD>(token, std::move(expr));
    } while (lastTokenId() == T_COMMA);
    expectEol(lastTokenId());
}

bool AssemblerParser::parseOpcode(const std::string& str)
{
    switch (parseOpcode_generated(str)) {
        case OpcodeParseResult::Success:
            return true;
        case OpcodeParseResult::UnknownOpcode:
            return false;
        case OpcodeParseResult::SyntaxError:
            break;
    }

    error(tr("syntax error"));
    return true;
}

std::string AssemblerParser::readLabelName(int tokenId)
{
    switch (tokenId) {
        case T_LABEL: {
            const auto& name = lastTokenText();
            mContext->setLocalLabelsPrefix(name, lastToken(), mReporter);
            return name;
        }

        case T_FULL_LABEL:
            return lastTokenText();

        case T_LOCAL_LABEL:
        case T_LOCAL_LABEL_NAME: {
            auto prefix = mContext->localLabelsPrefix();
            if (prefix.empty())
                error(tr("found local label name without previous global label"));

            std::stringstream ss;
            ss << prefix;
            ss << "@@";
            ss << lastTokenText();
            return ss.str();
        }
    }

    Q_ASSERT(false);
    error(tr("internal compiler error"));
    return std::string();
}

quint32 AssemblerParser::parseNumber(int tokenId, quint32 min, quint32 max)
{
    auto expr = parseExpression(tokenId, true);
    if (!expr)
        error(mExpressionError);

    ExprEvalContext context(mProgram, mReporter);
    Value value = context.evaluate(expr);
    if (value.number < qint64(min) || value.number > qint64(max)) {
        error(tr("numeric value 0x%1 is out of range (valid range is 0x%2..0x%3 inclusive)")
            .arg(value.number, 0, 16).arg(min, 0, 16).arg(max, 0, 16));
    }

    return quint32(value.number);
}

std::string AssemblerParser::expectIdentifier(int tokenId)
{
    if (tokenId != T_IDENTIFIER)
        error(tr("expected identifier"));
    return lastTokenText();
}

void AssemblerParser::expectComma(int tokenId)
{
    if (tokenId != T_COMMA)
        error(tr("expected ','"));
}

void AssemblerParser::expectEol(int tokenId)
{
    if (!matchEol())
        error(tr("expected end of line"));
}

bool AssemblerParser::matchEol()
{
    auto id = lastTokenId();
    return (id == T_EOL || id == T_EOF);
}

bool AssemblerParser::matchToken(int token)
{
    if (lastTokenId() != token)
        return false;
    nextToken();
    return true;
}

bool AssemblerParser::matchIdentifier(const char* ident)
{
    if (lastTokenId() != T_IDENTIFIER || toLower(lastTokenText()) != ident)
        return false;
    nextToken();
    return true;
}

bool AssemblerParser::matchExpression(std::unique_ptr<Expression>* out)
{
    return tryParseExpression(lastTokenId(), out, false);
}

bool AssemblerParser::matchExpressionNegative(const Token& minusToken, std::unique_ptr<Expression>* out)
{
    if (!matchExpression(out))
        return false;
    out->reset(new NegateExpression(minusToken, std::move(*out)));
    return true;
}

bool AssemblerParser::matchByte(quint8* out)
{
    std::unique_ptr<Expression> expr;
    if (!matchExpression(&expr))
        return false;

    ExprEvalContext context(mProgram, mReporter);
    *out = context.evaluateByte(expr);

    return true;
}

int AssemblerParser::nextToken() const
{
    return mLexer->nextToken().id;
}

const Token& AssemblerParser::lastToken() const
{
    return mLexer->lastToken();
}

int AssemblerParser::lastTokenId() const
{
    return lastToken().id;
}

const std::string& AssemblerParser::lastTokenText() const
{
    return mLexer->lastToken().text;
}

const char* AssemblerParser::lastTokenCStr() const
{
    return mLexer->lastToken().text.c_str();
}

void AssemblerParser::error(const QString& message)
{
    error(mLexer->lastToken(), message);
}

void AssemblerParser::error(const Token& token, const QString& message)
{
    mReporter->error(token.file, token.line, message);
    throw ParserError();
}
