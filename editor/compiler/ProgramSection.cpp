#include "ProgramSection.h"
#include "ProgramOpcode.h"
#include "ProgramBinary.h"
#include "IErrorReporter.h"
#include <QCoreApplication>

ProgramSection::ProgramSection(Program* program, std::string name)
    : mProgram(program)
    , mName(std::move(name))
    , mBase(0)
    , mAlignment(1)
    , mHasBase(false)
    , mHasAlignment(false)
{
}

ProgramSection::~ProgramSection()
{
}

bool ProgramSection::resolveAddresses(IErrorReporter* reporter, Program* program, quint32& address) const
{
    if (mHasBase)
        address = mBase;
    else if (mHasAlignment && mAlignment > 1)
        address = (address + mAlignment - 1) / mAlignment * mAlignment;

    if (address > 0xFFFF) {
        reporter->error(nullptr, 0, QCoreApplication::tr("section '%1' overflows 64K barrier").arg(nameCStr()));
        return false;
    }

    return CodeEmitter::resolveAddresses(reporter, program, address);
}

void ProgramSection::emitCode(Program* program, ProgramBinary* binary, IErrorReporter* reporter) const
{
    if (mHasBase) {
        while (binary->endAddress() < mBase)
            binary->emitByte(nullptr, 0, 0); // NOP
    } else if (mHasAlignment && mAlignment > 1) {
        quint64 alignedAddress = (binary->endAddress() + mAlignment - 1) / mAlignment * mAlignment;
        while (binary->endAddress() < alignedAddress)
            binary->emitByte(nullptr, 0, 0); // NOP
    }

    CodeEmitter::emitCode(program, binary, reporter);
}
