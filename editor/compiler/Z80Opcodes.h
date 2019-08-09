// THIS IS A GENERATED FILE. DO NOT EDIT!
#ifndef COMPILER_Z80OPCODES_H
#define COMPILER_Z80OPCODES_H

#include "ProgramOpcode.h"
#include "ProgramBinary.h"

class ADC_A_A : public ProgramOpcode
{
public:
    ADC_A_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_A_A)
};

class ADC_A_B : public ProgramOpcode
{
public:
    ADC_A_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_A_B)
};

class ADC_A_C : public ProgramOpcode
{
public:
    ADC_A_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_A_C)
};

class ADC_A_D : public ProgramOpcode
{
public:
    ADC_A_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_A_D)
};

class ADC_A_E : public ProgramOpcode
{
public:
    ADC_A_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_A_E)
};

class ADC_A_H : public ProgramOpcode
{
public:
    ADC_A_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_A_H)
};

class ADC_A_L : public ProgramOpcode
{
public:
    ADC_A_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_A_L)
};

class ADC_A_n : public ProgramOpcode
{
public:
    ADC_A_n(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 7; }
    unsigned tstatesIfTaken() const override { return 7; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(ADC_A_n)
};

class ADC_A_mHL : public ProgramOpcode
{
public:
    ADC_A_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 7; }
    unsigned tstatesIfTaken() const override { return 7; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_A_mHL)
};

class ADC_A_mIXn : public ProgramOpcode
{
public:
    ADC_A_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 3; }
    unsigned tstatesIfNotTaken() const override { return 19; }
    unsigned tstatesIfTaken() const override { return 19; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(ADC_A_mIXn)
};

class ADC_A_mIYn : public ProgramOpcode
{
public:
    ADC_A_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 3; }
    unsigned tstatesIfNotTaken() const override { return 19; }
    unsigned tstatesIfTaken() const override { return 19; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(ADC_A_mIYn)
};

class ADC_HL_BC : public ProgramOpcode
{
public:
    ADC_HL_BC(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_HL_BC)
};

class ADC_HL_DE : public ProgramOpcode
{
public:
    ADC_HL_DE(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_HL_DE)
};

class ADC_HL_HL : public ProgramOpcode
{
public:
    ADC_HL_HL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_HL_HL)
};

class ADC_HL_SP : public ProgramOpcode
{
public:
    ADC_HL_SP(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADC_HL_SP)
};

class ADD_A_A : public ProgramOpcode
{
public:
    ADD_A_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_A_A)
};

class ADD_A_B : public ProgramOpcode
{
public:
    ADD_A_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_A_B)
};

class ADD_A_C : public ProgramOpcode
{
public:
    ADD_A_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_A_C)
};

class ADD_A_D : public ProgramOpcode
{
public:
    ADD_A_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_A_D)
};

class ADD_A_E : public ProgramOpcode
{
public:
    ADD_A_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_A_E)
};

class ADD_A_H : public ProgramOpcode
{
public:
    ADD_A_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_A_H)
};

class ADD_A_L : public ProgramOpcode
{
public:
    ADD_A_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_A_L)
};

class ADD_A_n : public ProgramOpcode
{
public:
    ADD_A_n(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 7; }
    unsigned tstatesIfTaken() const override { return 7; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(ADD_A_n)
};

class ADD_A_mHL : public ProgramOpcode
{
public:
    ADD_A_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 7; }
    unsigned tstatesIfTaken() const override { return 7; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_A_mHL)
};

class ADD_A_mIXn : public ProgramOpcode
{
public:
    ADD_A_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 3; }
    unsigned tstatesIfNotTaken() const override { return 19; }
    unsigned tstatesIfTaken() const override { return 19; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(ADD_A_mIXn)
};

class ADD_A_mIYn : public ProgramOpcode
{
public:
    ADD_A_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 3; }
    unsigned tstatesIfNotTaken() const override { return 19; }
    unsigned tstatesIfTaken() const override { return 19; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(ADD_A_mIYn)
};

class ADD_HL_BC : public ProgramOpcode
{
public:
    ADD_HL_BC(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 11; }
    unsigned tstatesIfTaken() const override { return 11; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_HL_BC)
};

class ADD_HL_DE : public ProgramOpcode
{
public:
    ADD_HL_DE(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 11; }
    unsigned tstatesIfTaken() const override { return 11; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_HL_DE)
};

class ADD_HL_HL : public ProgramOpcode
{
public:
    ADD_HL_HL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 11; }
    unsigned tstatesIfTaken() const override { return 11; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_HL_HL)
};

class ADD_HL_SP : public ProgramOpcode
{
public:
    ADD_HL_SP(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 11; }
    unsigned tstatesIfTaken() const override { return 11; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_HL_SP)
};

class ADD_IX_BC : public ProgramOpcode
{
public:
    ADD_IX_BC(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_IX_BC)
};

class ADD_IX_DE : public ProgramOpcode
{
public:
    ADD_IX_DE(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_IX_DE)
};

class ADD_IX_IX : public ProgramOpcode
{
public:
    ADD_IX_IX(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_IX_IX)
};

class ADD_IX_SP : public ProgramOpcode
{
public:
    ADD_IX_SP(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_IX_SP)
};

class ADD_IY_BC : public ProgramOpcode
{
public:
    ADD_IY_BC(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_IY_BC)
};

class ADD_IY_DE : public ProgramOpcode
{
public:
    ADD_IY_DE(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_IY_DE)
};

class ADD_IY_IY : public ProgramOpcode
{
public:
    ADD_IY_IY(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_IY_IY)
};

class ADD_IY_SP : public ProgramOpcode
{
public:
    ADD_IY_SP(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 15; }
    unsigned tstatesIfTaken() const override { return 15; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(ADD_IY_SP)
};

class AND_A : public ProgramOpcode
{
public:
    AND_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(AND_A)
};

class AND_B : public ProgramOpcode
{
public:
    AND_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(AND_B)
};

class AND_C : public ProgramOpcode
{
public:
    AND_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(AND_C)
};

class AND_D : public ProgramOpcode
{
public:
    AND_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(AND_D)
};

class AND_E : public ProgramOpcode
{
public:
    AND_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(AND_E)
};

class AND_H : public ProgramOpcode
{
public:
    AND_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(AND_H)
};

class AND_L : public ProgramOpcode
{
public:
    AND_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(AND_L)
};

class AND_n : public ProgramOpcode
{
public:
    AND_n(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 7; }
    unsigned tstatesIfTaken() const override { return 7; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(AND_n)
};

class AND_mHL : public ProgramOpcode
{
public:
    AND_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 7; }
    unsigned tstatesIfTaken() const override { return 7; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(AND_mHL)
};

class AND_mIXn : public ProgramOpcode
{
public:
    AND_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 3; }
    unsigned tstatesIfNotTaken() const override { return 19; }
    unsigned tstatesIfTaken() const override { return 19; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(AND_mIXn)
};

class AND_mIYn : public ProgramOpcode
{
public:
    AND_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 3; }
    unsigned tstatesIfNotTaken() const override { return 19; }
    unsigned tstatesIfTaken() const override { return 19; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(AND_mIYn)
};

class BIT_0_mHL : public ProgramOpcode
{
public:
    BIT_0_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 12; }
    unsigned tstatesIfTaken() const override { return 12; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_0_mHL)
};

class BIT_1_mHL : public ProgramOpcode
{
public:
    BIT_1_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 12; }
    unsigned tstatesIfTaken() const override { return 12; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_1_mHL)
};

class BIT_2_mHL : public ProgramOpcode
{
public:
    BIT_2_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 12; }
    unsigned tstatesIfTaken() const override { return 12; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_2_mHL)
};

class BIT_3_mHL : public ProgramOpcode
{
public:
    BIT_3_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 12; }
    unsigned tstatesIfTaken() const override { return 12; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_3_mHL)
};

class BIT_4_mHL : public ProgramOpcode
{
public:
    BIT_4_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 12; }
    unsigned tstatesIfTaken() const override { return 12; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_4_mHL)
};

class BIT_5_mHL : public ProgramOpcode
{
public:
    BIT_5_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 12; }
    unsigned tstatesIfTaken() const override { return 12; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_5_mHL)
};

class BIT_6_mHL : public ProgramOpcode
{
public:
    BIT_6_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 12; }
    unsigned tstatesIfTaken() const override { return 12; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_6_mHL)
};

class BIT_7_mHL : public ProgramOpcode
{
public:
    BIT_7_mHL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 12; }
    unsigned tstatesIfTaken() const override { return 12; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_7_mHL)
};

class BIT_0_mIXn : public ProgramOpcode
{
public:
    BIT_0_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_0_mIXn)
};

class BIT_1_mIXn : public ProgramOpcode
{
public:
    BIT_1_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_1_mIXn)
};

class BIT_2_mIXn : public ProgramOpcode
{
public:
    BIT_2_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_2_mIXn)
};

class BIT_3_mIXn : public ProgramOpcode
{
public:
    BIT_3_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_3_mIXn)
};

class BIT_4_mIXn : public ProgramOpcode
{
public:
    BIT_4_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_4_mIXn)
};

class BIT_5_mIXn : public ProgramOpcode
{
public:
    BIT_5_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_5_mIXn)
};

class BIT_6_mIXn : public ProgramOpcode
{
public:
    BIT_6_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_6_mIXn)
};

class BIT_7_mIXn : public ProgramOpcode
{
public:
    BIT_7_mIXn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_7_mIXn)
};

class BIT_0_mIYn : public ProgramOpcode
{
public:
    BIT_0_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_0_mIYn)
};

class BIT_1_mIYn : public ProgramOpcode
{
public:
    BIT_1_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_1_mIYn)
};

class BIT_2_mIYn : public ProgramOpcode
{
public:
    BIT_2_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_2_mIYn)
};

class BIT_3_mIYn : public ProgramOpcode
{
public:
    BIT_3_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_3_mIYn)
};

class BIT_4_mIYn : public ProgramOpcode
{
public:
    BIT_4_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_4_mIYn)
};

class BIT_5_mIYn : public ProgramOpcode
{
public:
    BIT_5_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_5_mIYn)
};

class BIT_6_mIYn : public ProgramOpcode
{
public:
    BIT_6_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_6_mIYn)
};

class BIT_7_mIYn : public ProgramOpcode
{
public:
    BIT_7_mIYn(const Token& token, unsigned literal1)
        : ProgramOpcode(token)
        , mLiteral1(literal1)
    {
    }

    unsigned lengthInBytes() const override { return 4; }
    unsigned tstatesIfNotTaken() const override { return 20; }
    unsigned tstatesIfTaken() const override { return 20; }

    void emitBinary(ProgramBinary* bin) const override;

private:
    unsigned mLiteral1;

    Q_DISABLE_COPY(BIT_7_mIYn)
};

class BIT_0_A : public ProgramOpcode
{
public:
    BIT_0_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_0_A)
};

class BIT_0_B : public ProgramOpcode
{
public:
    BIT_0_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_0_B)
};

class BIT_0_C : public ProgramOpcode
{
public:
    BIT_0_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_0_C)
};

class BIT_0_D : public ProgramOpcode
{
public:
    BIT_0_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_0_D)
};

class BIT_0_E : public ProgramOpcode
{
public:
    BIT_0_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_0_E)
};

class BIT_0_H : public ProgramOpcode
{
public:
    BIT_0_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_0_H)
};

class BIT_0_L : public ProgramOpcode
{
public:
    BIT_0_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_0_L)
};

class BIT_1_A : public ProgramOpcode
{
public:
    BIT_1_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_1_A)
};

class BIT_1_B : public ProgramOpcode
{
public:
    BIT_1_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_1_B)
};

class BIT_1_C : public ProgramOpcode
{
public:
    BIT_1_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_1_C)
};

class BIT_1_D : public ProgramOpcode
{
public:
    BIT_1_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_1_D)
};

class BIT_1_E : public ProgramOpcode
{
public:
    BIT_1_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_1_E)
};

class BIT_1_H : public ProgramOpcode
{
public:
    BIT_1_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_1_H)
};

class BIT_1_L : public ProgramOpcode
{
public:
    BIT_1_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_1_L)
};

class BIT_2_A : public ProgramOpcode
{
public:
    BIT_2_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_2_A)
};

class BIT_2_B : public ProgramOpcode
{
public:
    BIT_2_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_2_B)
};

class BIT_2_C : public ProgramOpcode
{
public:
    BIT_2_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_2_C)
};

class BIT_2_D : public ProgramOpcode
{
public:
    BIT_2_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_2_D)
};

class BIT_2_E : public ProgramOpcode
{
public:
    BIT_2_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_2_E)
};

class BIT_2_H : public ProgramOpcode
{
public:
    BIT_2_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_2_H)
};

class BIT_2_L : public ProgramOpcode
{
public:
    BIT_2_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_2_L)
};

class BIT_3_A : public ProgramOpcode
{
public:
    BIT_3_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_3_A)
};

class BIT_3_B : public ProgramOpcode
{
public:
    BIT_3_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_3_B)
};

class BIT_3_C : public ProgramOpcode
{
public:
    BIT_3_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_3_C)
};

class BIT_3_D : public ProgramOpcode
{
public:
    BIT_3_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_3_D)
};

class BIT_3_E : public ProgramOpcode
{
public:
    BIT_3_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_3_E)
};

class BIT_3_H : public ProgramOpcode
{
public:
    BIT_3_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_3_H)
};

class BIT_3_L : public ProgramOpcode
{
public:
    BIT_3_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_3_L)
};

class BIT_4_A : public ProgramOpcode
{
public:
    BIT_4_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_4_A)
};

class BIT_4_B : public ProgramOpcode
{
public:
    BIT_4_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_4_B)
};

class BIT_4_C : public ProgramOpcode
{
public:
    BIT_4_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_4_C)
};

class BIT_4_D : public ProgramOpcode
{
public:
    BIT_4_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_4_D)
};

class BIT_4_E : public ProgramOpcode
{
public:
    BIT_4_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_4_E)
};

class BIT_4_H : public ProgramOpcode
{
public:
    BIT_4_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_4_H)
};

class BIT_4_L : public ProgramOpcode
{
public:
    BIT_4_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_4_L)
};

class BIT_5_A : public ProgramOpcode
{
public:
    BIT_5_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_5_A)
};

class BIT_5_B : public ProgramOpcode
{
public:
    BIT_5_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_5_B)
};

class BIT_5_C : public ProgramOpcode
{
public:
    BIT_5_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_5_C)
};

class BIT_5_D : public ProgramOpcode
{
public:
    BIT_5_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_5_D)
};

class BIT_5_E : public ProgramOpcode
{
public:
    BIT_5_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_5_E)
};

class BIT_5_H : public ProgramOpcode
{
public:
    BIT_5_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_5_H)
};

class BIT_5_L : public ProgramOpcode
{
public:
    BIT_5_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_5_L)
};

class BIT_6_A : public ProgramOpcode
{
public:
    BIT_6_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_6_A)
};

class BIT_6_B : public ProgramOpcode
{
public:
    BIT_6_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_6_B)
};

class BIT_6_C : public ProgramOpcode
{
public:
    BIT_6_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_6_C)
};

class BIT_6_D : public ProgramOpcode
{
public:
    BIT_6_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_6_D)
};

class BIT_6_E : public ProgramOpcode
{
public:
    BIT_6_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_6_E)
};

class BIT_6_H : public ProgramOpcode
{
public:
    BIT_6_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_6_H)
};

class BIT_6_L : public ProgramOpcode
{
public:
    BIT_6_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_6_L)
};

class BIT_7_A : public ProgramOpcode
{
public:
    BIT_7_A(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_7_A)
};

class BIT_7_B : public ProgramOpcode
{
public:
    BIT_7_B(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_7_B)
};

class BIT_7_C : public ProgramOpcode
{
public:
    BIT_7_C(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_7_C)
};

class BIT_7_D : public ProgramOpcode
{
public:
    BIT_7_D(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_7_D)
};

class BIT_7_E : public ProgramOpcode
{
public:
    BIT_7_E(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_7_E)
};

class BIT_7_H : public ProgramOpcode
{
public:
    BIT_7_H(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_7_H)
};

class BIT_7_L : public ProgramOpcode
{
public:
    BIT_7_L(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(BIT_7_L)
};

class CCF : public ProgramOpcode
{
public:
    CCF(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(CCF)
};

class CPD : public ProgramOpcode
{
public:
    CPD(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 16; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(CPD)
};

class CPDR : public ProgramOpcode
{
public:
    CPDR(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 21; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(CPDR)
};

class CPI : public ProgramOpcode
{
public:
    CPI(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 16; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(CPI)
};

class CPIR : public ProgramOpcode
{
public:
    CPIR(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 21; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(CPIR)
};

class CPL : public ProgramOpcode
{
public:
    CPL(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(CPL)
};

class DAA : public ProgramOpcode
{
public:
    DAA(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(DAA)
};

class DI : public ProgramOpcode
{
public:
    DI(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(DI)
};

class EI : public ProgramOpcode
{
public:
    EI(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(EI)
};

class EXX : public ProgramOpcode
{
public:
    EXX(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(EXX)
};

class HALT : public ProgramOpcode
{
public:
    HALT(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(HALT)
};

class IND : public ProgramOpcode
{
public:
    IND(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 16; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(IND)
};

class INDR : public ProgramOpcode
{
public:
    INDR(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 21; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(INDR)
};

class INI : public ProgramOpcode
{
public:
    INI(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 16; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(INI)
};

class INIR : public ProgramOpcode
{
public:
    INIR(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 21; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(INIR)
};

class LDD : public ProgramOpcode
{
public:
    LDD(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 16; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(LDD)
};

class LDDR : public ProgramOpcode
{
public:
    LDDR(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 21; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(LDDR)
};

class LDI : public ProgramOpcode
{
public:
    LDI(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 16; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(LDI)
};

class LDIR : public ProgramOpcode
{
public:
    LDIR(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 17; }
    unsigned tstatesIfTaken() const override { return 21; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(LDIR)
};

class OTDR : public ProgramOpcode
{
public:
    OTDR(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 21; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(OTDR)
};

class OTIR : public ProgramOpcode
{
public:
    OTIR(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 21; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(OTIR)
};

class OUTD : public ProgramOpcode
{
public:
    OUTD(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 16; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(OUTD)
};

class OUTI : public ProgramOpcode
{
public:
    OUTI(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 16; }
    unsigned tstatesIfTaken() const override { return 16; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(OUTI)
};

class NEG : public ProgramOpcode
{
public:
    NEG(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 8; }
    unsigned tstatesIfTaken() const override { return 8; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(NEG)
};

class NOP : public ProgramOpcode
{
public:
    NOP(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(NOP)
};

class RET : public ProgramOpcode
{
public:
    RET(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 10; }
    unsigned tstatesIfTaken() const override { return 10; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(RET)
};

class RETI : public ProgramOpcode
{
public:
    RETI(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 14; }
    unsigned tstatesIfTaken() const override { return 14; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(RETI)
};

class RETN : public ProgramOpcode
{
public:
    RETN(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 14; }
    unsigned tstatesIfTaken() const override { return 14; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(RETN)
};

class RLA : public ProgramOpcode
{
public:
    RLA(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(RLA)
};

class RLCA : public ProgramOpcode
{
public:
    RLCA(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(RLCA)
};

class RLD : public ProgramOpcode
{
public:
    RLD(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 18; }
    unsigned tstatesIfTaken() const override { return 18; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(RLD)
};

class RRA : public ProgramOpcode
{
public:
    RRA(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(RRA)
};

class RRCA : public ProgramOpcode
{
public:
    RRCA(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(RRCA)
};

class RRD : public ProgramOpcode
{
public:
    RRD(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 2; }
    unsigned tstatesIfNotTaken() const override { return 18; }
    unsigned tstatesIfTaken() const override { return 18; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(RRD)
};

class SCF : public ProgramOpcode
{
public:
    SCF(const Token& token)
        : ProgramOpcode(token)
    {
    }

    unsigned lengthInBytes() const override { return 1; }
    unsigned tstatesIfNotTaken() const override { return 4; }
    unsigned tstatesIfTaken() const override { return 4; }

    void emitBinary(ProgramBinary* bin) const override;

    Q_DISABLE_COPY(SCF)
};

#define PARSE_OPCODE \
    if (opcode == "adc") { \
        nextToken(); \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_A_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_A_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_A_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_A_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_A_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_A_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_A_L>(token); \
                        return; \
                    } \
                } \
                if (expectByteLiteral(&literal1)) { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_A_n>(token, literal1); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<ADC_A_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<ADC_A_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<ADC_A_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "bc") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_HL_BC>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "de") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_HL_DE>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_HL_HL>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "sp") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADC_HL_SP>(token); \
                        return; \
                    } \
                } \
            } \
        } \
    } \
    if (opcode == "add") { \
        nextToken(); \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_A_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_A_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_A_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_A_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_A_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_A_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_A_L>(token); \
                        return; \
                    } \
                } \
                if (expectByteLiteral(&literal1)) { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_A_n>(token, literal1); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<ADD_A_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<ADD_A_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<ADD_A_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "bc") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_HL_BC>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "de") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_HL_DE>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_HL_HL>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "sp") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_HL_SP>(token); \
                        return; \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "bc") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_IX_BC>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "de") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_IX_DE>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_IX_IX>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "sp") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_IX_SP>(token); \
                        return; \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "bc") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_IY_BC>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "de") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_IY_DE>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_IY_IY>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "sp") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<ADD_IY_SP>(token); \
                        return; \
                    } \
                } \
            } \
        } \
    } \
    if (opcode == "and") { \
        nextToken(); \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
            nextToken(); \
            if (lastTokenId() == T_EOL) { \
                mSection->emit<AND_A>(token); \
                return; \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
            nextToken(); \
            if (lastTokenId() == T_EOL) { \
                mSection->emit<AND_B>(token); \
                return; \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
            nextToken(); \
            if (lastTokenId() == T_EOL) { \
                mSection->emit<AND_C>(token); \
                return; \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
            nextToken(); \
            if (lastTokenId() == T_EOL) { \
                mSection->emit<AND_D>(token); \
                return; \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
            nextToken(); \
            if (lastTokenId() == T_EOL) { \
                mSection->emit<AND_E>(token); \
                return; \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
            nextToken(); \
            if (lastTokenId() == T_EOL) { \
                mSection->emit<AND_H>(token); \
                return; \
            } \
        } \
        if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
            nextToken(); \
            if (lastTokenId() == T_EOL) { \
                mSection->emit<AND_L>(token); \
                return; \
            } \
        } \
        if (expectByteLiteral(&literal1)) { \
            nextToken(); \
            if (lastTokenId() == T_EOL) { \
                mSection->emit<AND_n>(token, literal1); \
                return; \
            } \
        } \
        if (lastTokenId() == T_LPAREN) { \
            nextToken(); \
            if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                nextToken(); \
                if (lastTokenId() == T_RPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<AND_mHL>(token); \
                        return; \
                    } \
                } \
            } \
            if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                nextToken(); \
                if (lastTokenId() == T_PLUS) { \
                    nextToken(); \
                    if (expectByteLiteral(&literal1)) { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<AND_mIXn>(token, literal1); \
                                return; \
                            } \
                        } \
                    } \
                } \
            } \
            if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                nextToken(); \
                if (lastTokenId() == T_PLUS) { \
                    nextToken(); \
                    if (expectByteLiteral(&literal1)) { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<AND_mIYn>(token, literal1); \
                                return; \
                            } \
                        } \
                    } \
                } \
            } \
        } \
    } \
    if (opcode == "bit") { \
        nextToken(); \
        if (lastTokenId() == T_NUMBER && lastToken().number == 0) { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<BIT_0_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_0_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_0_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_0_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_0_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_0_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_0_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_0_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_0_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_0_L>(token); \
                        return; \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_NUMBER && lastToken().number == 1) { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<BIT_1_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_1_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_1_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_1_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_1_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_1_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_1_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_1_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_1_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_1_L>(token); \
                        return; \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_NUMBER && lastToken().number == 2) { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<BIT_2_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_2_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_2_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_2_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_2_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_2_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_2_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_2_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_2_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_2_L>(token); \
                        return; \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_NUMBER && lastToken().number == 3) { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<BIT_3_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_3_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_3_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_3_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_3_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_3_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_3_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_3_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_3_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_3_L>(token); \
                        return; \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_NUMBER && lastToken().number == 4) { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<BIT_4_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_4_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_4_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_4_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_4_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_4_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_4_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_4_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_4_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_4_L>(token); \
                        return; \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_NUMBER && lastToken().number == 5) { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<BIT_5_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_5_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_5_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_5_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_5_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_5_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_5_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_5_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_5_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_5_L>(token); \
                        return; \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_NUMBER && lastToken().number == 6) { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<BIT_6_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_6_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_6_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_6_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_6_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_6_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_6_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_6_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_6_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_6_L>(token); \
                        return; \
                    } \
                } \
            } \
        } \
        if (lastTokenId() == T_NUMBER && lastToken().number == 7) { \
            nextToken(); \
            if (lastTokenId() == T_COMMA) { \
                nextToken(); \
                if (lastTokenId() == T_LPAREN) { \
                    nextToken(); \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "hl") { \
                        nextToken(); \
                        if (lastTokenId() == T_RPAREN) { \
                            nextToken(); \
                            if (lastTokenId() == T_EOL) { \
                                mSection->emit<BIT_7_mHL>(token); \
                                return; \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "ix") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_7_mIXn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                    if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "iy") { \
                        nextToken(); \
                        if (lastTokenId() == T_PLUS) { \
                            nextToken(); \
                            if (expectByteLiteral(&literal1)) { \
                                nextToken(); \
                                if (lastTokenId() == T_RPAREN) { \
                                    nextToken(); \
                                    if (lastTokenId() == T_EOL) { \
                                        mSection->emit<BIT_7_mIYn>(token, literal1); \
                                        return; \
                                    } \
                                } \
                            } \
                        } \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "a") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_7_A>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "b") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_7_B>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "c") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_7_C>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "d") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_7_D>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "e") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_7_E>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "h") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_7_H>(token); \
                        return; \
                    } \
                } \
                if (lastTokenId() == T_IDENTIFIER && lastTokenText() == "l") { \
                    nextToken(); \
                    if (lastTokenId() == T_EOL) { \
                        mSection->emit<BIT_7_L>(token); \
                        return; \
                    } \
                } \
            } \
        } \
    } \
    if (opcode == "ccf") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<CCF>(token); \
            return; \
        } \
    } \
    if (opcode == "cpd") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<CPD>(token); \
            return; \
        } \
    } \
    if (opcode == "cpdr") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<CPDR>(token); \
            return; \
        } \
    } \
    if (opcode == "cpi") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<CPI>(token); \
            return; \
        } \
    } \
    if (opcode == "cpir") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<CPIR>(token); \
            return; \
        } \
    } \
    if (opcode == "cpl") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<CPL>(token); \
            return; \
        } \
    } \
    if (opcode == "daa") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<DAA>(token); \
            return; \
        } \
    } \
    if (opcode == "di") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<DI>(token); \
            return; \
        } \
    } \
    if (opcode == "ei") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<EI>(token); \
            return; \
        } \
    } \
    if (opcode == "exx") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<EXX>(token); \
            return; \
        } \
    } \
    if (opcode == "halt") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<HALT>(token); \
            return; \
        } \
    } \
    if (opcode == "ind") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<IND>(token); \
            return; \
        } \
    } \
    if (opcode == "indr") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<INDR>(token); \
            return; \
        } \
    } \
    if (opcode == "ini") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<INI>(token); \
            return; \
        } \
    } \
    if (opcode == "inir") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<INIR>(token); \
            return; \
        } \
    } \
    if (opcode == "ldd") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<LDD>(token); \
            return; \
        } \
    } \
    if (opcode == "lddr") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<LDDR>(token); \
            return; \
        } \
    } \
    if (opcode == "ldi") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<LDI>(token); \
            return; \
        } \
    } \
    if (opcode == "ldir") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<LDIR>(token); \
            return; \
        } \
    } \
    if (opcode == "otdr") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<OTDR>(token); \
            return; \
        } \
    } \
    if (opcode == "otir") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<OTIR>(token); \
            return; \
        } \
    } \
    if (opcode == "outd") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<OUTD>(token); \
            return; \
        } \
    } \
    if (opcode == "outi") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<OUTI>(token); \
            return; \
        } \
    } \
    if (opcode == "neg") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<NEG>(token); \
            return; \
        } \
    } \
    if (opcode == "nop") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<NOP>(token); \
            return; \
        } \
    } \
    if (opcode == "ret") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<RET>(token); \
            return; \
        } \
    } \
    if (opcode == "reti") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<RETI>(token); \
            return; \
        } \
    } \
    if (opcode == "retn") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<RETN>(token); \
            return; \
        } \
    } \
    if (opcode == "rla") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<RLA>(token); \
            return; \
        } \
    } \
    if (opcode == "rlca") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<RLCA>(token); \
            return; \
        } \
    } \
    if (opcode == "rld") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<RLD>(token); \
            return; \
        } \
    } \
    if (opcode == "rra") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<RRA>(token); \
            return; \
        } \
    } \
    if (opcode == "rrca") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<RRCA>(token); \
            return; \
        } \
    } \
    if (opcode == "rrd") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<RRD>(token); \
            return; \
        } \
    } \
    if (opcode == "scf") { \
        nextToken(); \
        if (lastTokenId() == T_EOL) { \
            mSection->emit<SCF>(token); \
            return; \
        } \
    } \

#endif
