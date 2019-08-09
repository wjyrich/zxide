#include "ProgramLabel.h"
#include "ProgramSection.h"

ProgramLabel::ProgramLabel(const Token& token, ProgramSection* section, std::string name)
    : ProgramOpcode(token)
    , mSection(section)
    , mName(std::move(name))
    , mAddress(0)
    , mHasAddress(false)
{
    Q_ASSERT(section != nullptr);
    if (section)
        section->mLabels.emplace_back(this);
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

void ProgramLabel::emit(std::vector<unsigned char>&) const
{
}
