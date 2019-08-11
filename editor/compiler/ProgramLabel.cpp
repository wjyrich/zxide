#include "ProgramLabel.h"

ProgramLabel::ProgramLabel(const Token& token, ProgramSection* section, std::string name)
    : ProgramOpcode(token)
    , mSection(section)
    , mName(std::move(name))
    , mAddress(0)
    , mHasAddress(false)
{
}

ProgramLabel::~ProgramLabel()
{
}

unsigned ProgramLabel::lengthInBytes() const
{
    return 0;
}

unsigned ProgramLabel::tstatesIfNotTaken() const
{
    return 0;
}

unsigned ProgramLabel::tstatesIfTaken() const
{
    return 0;
}

void ProgramLabel::resolveAddress(const ProgramSection* section, quint32& address)
{
    Q_ASSERT(!mHasAddress);
    mHasAddress = true;
    mAddress = unsigned(address);
}

void ProgramLabel::emitBinary(IErrorReporter* reporter, ProgramBinary* bin) const
{
}
