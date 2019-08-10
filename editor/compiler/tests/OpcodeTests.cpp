// THIS IS A GENERATED FILE. DO NOT EDIT!
#include "3rdparty/catch.hpp"
#include "DataBlob.h"
#include "ErrorConsumer.h"
#include "TestUtil.h"

TEST_CASE("adc a, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x8e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, (ix+170)\n"
        "adc a, (ix+85)\n"
        "adc a, (ix+0)\n"
        "adc a, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x8e,
        0xaa,
        0xdd,
        0x8e,
        0x55,
        0xdd,
        0x8e,
        0x00,
        0xdd,
        0x8e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, (iy+170)\n"
        "adc a, (iy+85)\n"
        "adc a, (iy+0)\n"
        "adc a, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x8e,
        0xaa,
        0xfd,
        0x8e,
        0x55,
        0xfd,
        0x8e,
        0x00,
        0xfd,
        0x8e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, a\n"
        ;

    static const unsigned char binary[] = {
        0x8f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, b\n"
        ;

    static const unsigned char binary[] = {
        0x88,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, c\n"
        ;

    static const unsigned char binary[] = {
        0x89,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, d\n"
        ;

    static const unsigned char binary[] = {
        0x8a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, e\n"
        ;

    static const unsigned char binary[] = {
        0x8b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, h\n"
        ;

    static const unsigned char binary[] = {
        0x8c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, l\n"
        ;

    static const unsigned char binary[] = {
        0x8d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc a, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc a, 170\n"
        "adc a, 85\n"
        "adc a, 0\n"
        "adc a, 255\n"
        ;

    static const unsigned char binary[] = {
        0xce,
        0xaa,
        0xce,
        0x55,
        0xce,
        0x00,
        0xce,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc hl, bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc hl, bc\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x4a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc hl, de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc hl, de\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x5a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc hl, hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc hl, hl\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x6a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("adc hl, sp", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "adc hl, sp\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x7a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x86,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, (ix+170)\n"
        "add a, (ix+85)\n"
        "add a, (ix+0)\n"
        "add a, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x86,
        0xaa,
        0xdd,
        0x86,
        0x55,
        0xdd,
        0x86,
        0x00,
        0xdd,
        0x86,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, (iy+170)\n"
        "add a, (iy+85)\n"
        "add a, (iy+0)\n"
        "add a, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x86,
        0xaa,
        0xfd,
        0x86,
        0x55,
        0xfd,
        0x86,
        0x00,
        0xfd,
        0x86,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, a\n"
        ;

    static const unsigned char binary[] = {
        0x87,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, b\n"
        ;

    static const unsigned char binary[] = {
        0x80,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, c\n"
        ;

    static const unsigned char binary[] = {
        0x81,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, d\n"
        ;

    static const unsigned char binary[] = {
        0x82,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, e\n"
        ;

    static const unsigned char binary[] = {
        0x83,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, h\n"
        ;

    static const unsigned char binary[] = {
        0x84,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, l\n"
        ;

    static const unsigned char binary[] = {
        0x85,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add a, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add a, 170\n"
        "add a, 85\n"
        "add a, 0\n"
        "add a, 255\n"
        ;

    static const unsigned char binary[] = {
        0xc6,
        0xaa,
        0xc6,
        0x55,
        0xc6,
        0x00,
        0xc6,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add hl, bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add hl, bc\n"
        ;

    static const unsigned char binary[] = {
        0x09,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add hl, de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add hl, de\n"
        ;

    static const unsigned char binary[] = {
        0x19,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add hl, hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add hl, hl\n"
        ;

    static const unsigned char binary[] = {
        0x29,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add hl, sp", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add hl, sp\n"
        ;

    static const unsigned char binary[] = {
        0x39,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add ix, bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add ix, bc\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x09,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add ix, de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add ix, de\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x19,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add ix, ix", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add ix, ix\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x29,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add ix, sp", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add ix, sp\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x39,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add iy, bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add iy, bc\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x09,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add iy, de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add iy, de\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x19,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add iy, iy", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add iy, iy\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x29,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("add iy, sp", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "add iy, sp\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x39,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xa6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and (ix+170)\n"
        "and (ix+85)\n"
        "and (ix+0)\n"
        "and (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xa6,
        0xaa,
        0xdd,
        0xa6,
        0x55,
        0xdd,
        0xa6,
        0x00,
        0xdd,
        0xa6,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and (iy+170)\n"
        "and (iy+85)\n"
        "and (iy+0)\n"
        "and (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xa6,
        0xaa,
        0xfd,
        0xa6,
        0x55,
        0xfd,
        0xa6,
        0x00,
        0xfd,
        0xa6,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and a\n"
        ;

    static const unsigned char binary[] = {
        0xa7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and b\n"
        ;

    static const unsigned char binary[] = {
        0xa0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and c\n"
        ;

    static const unsigned char binary[] = {
        0xa1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and d\n"
        ;

    static const unsigned char binary[] = {
        0xa2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and e\n"
        ;

    static const unsigned char binary[] = {
        0xa3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and h\n"
        ;

    static const unsigned char binary[] = {
        0xa4,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and l\n"
        ;

    static const unsigned char binary[] = {
        0xa5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("and #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "and 170\n"
        "and 85\n"
        "and 0\n"
        "and 255\n"
        ;

    static const unsigned char binary[] = {
        0xe6,
        0xaa,
        0xe6,
        0x55,
        0xe6,
        0x00,
        0xe6,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x46,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, (ix+170)\n"
        "bit 0, (ix+85)\n"
        "bit 0, (ix+0)\n"
        "bit 0, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x46,
        0xdd,
        0xcb,
        0x55,
        0x46,
        0xdd,
        0xcb,
        0x00,
        0x46,
        0xdd,
        0xcb,
        0xff,
        0x46,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, (iy+170)\n"
        "bit 0, (iy+85)\n"
        "bit 0, (iy+0)\n"
        "bit 0, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x46,
        0xfd,
        0xcb,
        0x55,
        0x46,
        0xfd,
        0xcb,
        0x00,
        0x46,
        0xfd,
        0xcb,
        0xff,
        0x46,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x47,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x40,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x41,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x42,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x43,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x44,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 0, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 0, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x45,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x4e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, (ix+170)\n"
        "bit 1, (ix+85)\n"
        "bit 1, (ix+0)\n"
        "bit 1, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x4e,
        0xdd,
        0xcb,
        0x55,
        0x4e,
        0xdd,
        0xcb,
        0x00,
        0x4e,
        0xdd,
        0xcb,
        0xff,
        0x4e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, (iy+170)\n"
        "bit 1, (iy+85)\n"
        "bit 1, (iy+0)\n"
        "bit 1, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x4e,
        0xfd,
        0xcb,
        0x55,
        0x4e,
        0xfd,
        0xcb,
        0x00,
        0x4e,
        0xfd,
        0xcb,
        0xff,
        0x4e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x4f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x48,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x49,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x4a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x4b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x4c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 1, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 1, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x4d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x56,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, (ix+170)\n"
        "bit 2, (ix+85)\n"
        "bit 2, (ix+0)\n"
        "bit 2, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x56,
        0xdd,
        0xcb,
        0x55,
        0x56,
        0xdd,
        0xcb,
        0x00,
        0x56,
        0xdd,
        0xcb,
        0xff,
        0x56,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, (iy+170)\n"
        "bit 2, (iy+85)\n"
        "bit 2, (iy+0)\n"
        "bit 2, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x56,
        0xfd,
        0xcb,
        0x55,
        0x56,
        0xfd,
        0xcb,
        0x00,
        0x56,
        0xfd,
        0xcb,
        0xff,
        0x56,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x57,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x50,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x51,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x52,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x53,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x54,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 2, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 2, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x55,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x5e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, (ix+170)\n"
        "bit 3, (ix+85)\n"
        "bit 3, (ix+0)\n"
        "bit 3, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x5e,
        0xdd,
        0xcb,
        0x55,
        0x5e,
        0xdd,
        0xcb,
        0x00,
        0x5e,
        0xdd,
        0xcb,
        0xff,
        0x5e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, (iy+170)\n"
        "bit 3, (iy+85)\n"
        "bit 3, (iy+0)\n"
        "bit 3, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x5e,
        0xfd,
        0xcb,
        0x55,
        0x5e,
        0xfd,
        0xcb,
        0x00,
        0x5e,
        0xfd,
        0xcb,
        0xff,
        0x5e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x5f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x58,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x59,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x5a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x5b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x5c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 3, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 3, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x5d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x66,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, (ix+170)\n"
        "bit 4, (ix+85)\n"
        "bit 4, (ix+0)\n"
        "bit 4, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x66,
        0xdd,
        0xcb,
        0x55,
        0x66,
        0xdd,
        0xcb,
        0x00,
        0x66,
        0xdd,
        0xcb,
        0xff,
        0x66,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, (iy+170)\n"
        "bit 4, (iy+85)\n"
        "bit 4, (iy+0)\n"
        "bit 4, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x66,
        0xfd,
        0xcb,
        0x55,
        0x66,
        0xfd,
        0xcb,
        0x00,
        0x66,
        0xfd,
        0xcb,
        0xff,
        0x66,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x67,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x60,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x61,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x62,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x63,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x64,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 4, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 4, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x65,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x6e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, (ix+170)\n"
        "bit 5, (ix+85)\n"
        "bit 5, (ix+0)\n"
        "bit 5, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x6e,
        0xdd,
        0xcb,
        0x55,
        0x6e,
        0xdd,
        0xcb,
        0x00,
        0x6e,
        0xdd,
        0xcb,
        0xff,
        0x6e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, (iy+170)\n"
        "bit 5, (iy+85)\n"
        "bit 5, (iy+0)\n"
        "bit 5, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x6e,
        0xfd,
        0xcb,
        0x55,
        0x6e,
        0xfd,
        0xcb,
        0x00,
        0x6e,
        0xfd,
        0xcb,
        0xff,
        0x6e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x6f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x68,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x69,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x6a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x6b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x6c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 5, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 5, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x6d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x76,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, (ix+170)\n"
        "bit 6, (ix+85)\n"
        "bit 6, (ix+0)\n"
        "bit 6, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x76,
        0xdd,
        0xcb,
        0x55,
        0x76,
        0xdd,
        0xcb,
        0x00,
        0x76,
        0xdd,
        0xcb,
        0xff,
        0x76,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, (iy+170)\n"
        "bit 6, (iy+85)\n"
        "bit 6, (iy+0)\n"
        "bit 6, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x76,
        0xfd,
        0xcb,
        0x55,
        0x76,
        0xfd,
        0xcb,
        0x00,
        0x76,
        0xfd,
        0xcb,
        0xff,
        0x76,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x77,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x70,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x71,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x72,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x73,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x74,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 6, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 6, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x75,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x7e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, (ix+170)\n"
        "bit 7, (ix+85)\n"
        "bit 7, (ix+0)\n"
        "bit 7, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x7e,
        0xdd,
        0xcb,
        0x55,
        0x7e,
        0xdd,
        0xcb,
        0x00,
        0x7e,
        0xdd,
        0xcb,
        0xff,
        0x7e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, (iy+170)\n"
        "bit 7, (iy+85)\n"
        "bit 7, (iy+0)\n"
        "bit 7, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x7e,
        0xfd,
        0xcb,
        0x55,
        0x7e,
        0xfd,
        0xcb,
        0x00,
        0x7e,
        0xfd,
        0xcb,
        0xff,
        0x7e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x7f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x78,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x79,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x7a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x7b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x7c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("bit 7, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "bit 7, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x7d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("call ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "call 4660\n"
        "call 16945\n"
        "call 0\n"
        "call 65535\n"
        ;

    static const unsigned char binary[] = {
        0xcd,
        0x34,
        0x12,
        0xcd,
        0x31,
        0x42,
        0xcd,
        0x00,
        0x00,
        0xcd,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("call c, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "call c, 4660\n"
        "call c, 16945\n"
        "call c, 0\n"
        "call c, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xdc,
        0x34,
        0x12,
        0xdc,
        0x31,
        0x42,
        0xdc,
        0x00,
        0x00,
        0xdc,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("call m, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "call m, 4660\n"
        "call m, 16945\n"
        "call m, 0\n"
        "call m, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xfc,
        0x34,
        0x12,
        0xfc,
        0x31,
        0x42,
        0xfc,
        0x00,
        0x00,
        0xfc,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("call nc, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "call nc, 4660\n"
        "call nc, 16945\n"
        "call nc, 0\n"
        "call nc, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xd4,
        0x34,
        0x12,
        0xd4,
        0x31,
        0x42,
        0xd4,
        0x00,
        0x00,
        0xd4,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("call nz, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "call nz, 4660\n"
        "call nz, 16945\n"
        "call nz, 0\n"
        "call nz, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xc4,
        0x34,
        0x12,
        0xc4,
        0x31,
        0x42,
        0xc4,
        0x00,
        0x00,
        0xc4,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("call p, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "call p, 4660\n"
        "call p, 16945\n"
        "call p, 0\n"
        "call p, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xf4,
        0x34,
        0x12,
        0xf4,
        0x31,
        0x42,
        0xf4,
        0x00,
        0x00,
        0xf4,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("call pe, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "call pe, 4660\n"
        "call pe, 16945\n"
        "call pe, 0\n"
        "call pe, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xec,
        0x34,
        0x12,
        0xec,
        0x31,
        0x42,
        0xec,
        0x00,
        0x00,
        0xec,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("call po, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "call po, 4660\n"
        "call po, 16945\n"
        "call po, 0\n"
        "call po, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xe4,
        0x34,
        0x12,
        0xe4,
        0x31,
        0x42,
        0xe4,
        0x00,
        0x00,
        0xe4,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("call z, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "call z, 4660\n"
        "call z, 16945\n"
        "call z, 0\n"
        "call z, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xcc,
        0x34,
        0x12,
        0xcc,
        0x31,
        0x42,
        0xcc,
        0x00,
        0x00,
        0xcc,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ccf", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ccf\n"
        ;

    static const unsigned char binary[] = {
        0x3f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xbe,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp (ix+170)\n"
        "cp (ix+85)\n"
        "cp (ix+0)\n"
        "cp (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xbe,
        0xaa,
        0xdd,
        0xbe,
        0x55,
        0xdd,
        0xbe,
        0x00,
        0xdd,
        0xbe,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp (iy+170)\n"
        "cp (iy+85)\n"
        "cp (iy+0)\n"
        "cp (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xbe,
        0xaa,
        0xfd,
        0xbe,
        0x55,
        0xfd,
        0xbe,
        0x00,
        0xfd,
        0xbe,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp a\n"
        ;

    static const unsigned char binary[] = {
        0xbf,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp b\n"
        ;

    static const unsigned char binary[] = {
        0xb8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp c\n"
        ;

    static const unsigned char binary[] = {
        0xb9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp d\n"
        ;

    static const unsigned char binary[] = {
        0xba,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp e\n"
        ;

    static const unsigned char binary[] = {
        0xbb,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp h\n"
        ;

    static const unsigned char binary[] = {
        0xbc,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp l\n"
        ;

    static const unsigned char binary[] = {
        0xbd,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cp #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cp 170\n"
        "cp 85\n"
        "cp 0\n"
        "cp 255\n"
        ;

    static const unsigned char binary[] = {
        0xfe,
        0xaa,
        0xfe,
        0x55,
        0xfe,
        0x00,
        0xfe,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cpd", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cpd\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xa9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cpdr", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cpdr\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xb9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cpir", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cpir\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xb1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cpi", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cpi\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xa1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("cpl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "cpl\n"
        ;

    static const unsigned char binary[] = {
        0x2f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("daa", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "daa\n"
        ;

    static const unsigned char binary[] = {
        0x27,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x35,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec (ix+170)\n"
        "dec (ix+85)\n"
        "dec (ix+0)\n"
        "dec (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x35,
        0xaa,
        0xdd,
        0x35,
        0x55,
        0xdd,
        0x35,
        0x00,
        0xdd,
        0x35,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec (iy+170)\n"
        "dec (iy+85)\n"
        "dec (iy+0)\n"
        "dec (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x35,
        0xaa,
        0xfd,
        0x35,
        0x55,
        0xfd,
        0x35,
        0x00,
        0xfd,
        0x35,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec a\n"
        ;

    static const unsigned char binary[] = {
        0x3d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec b\n"
        ;

    static const unsigned char binary[] = {
        0x05,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec bc\n"
        ;

    static const unsigned char binary[] = {
        0x0b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec c\n"
        ;

    static const unsigned char binary[] = {
        0x0d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec d\n"
        ;

    static const unsigned char binary[] = {
        0x15,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec de\n"
        ;

    static const unsigned char binary[] = {
        0x1b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec e\n"
        ;

    static const unsigned char binary[] = {
        0x1d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec h\n"
        ;

    static const unsigned char binary[] = {
        0x25,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec hl\n"
        ;

    static const unsigned char binary[] = {
        0x2b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec ix", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec ix\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x2b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec iy", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec iy\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x2b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec l\n"
        ;

    static const unsigned char binary[] = {
        0x2d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("dec sp", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "dec sp\n"
        ;

    static const unsigned char binary[] = {
        0x3b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("di", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "di\n"
        ;

    static const unsigned char binary[] = {
        0xf3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("djnz $+#", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "djnz -41\n"
        "djnz 44\n"
        "djnz 129\n"
        "djnz -126\n"
        ;

    static const unsigned char binary[] = {
        0x10,
        0xd5,
        0x10,
        0x2a,
        0x10,
        0x7f,
        0x10,
        0x80,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ei", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ei\n"
        ;

    static const unsigned char binary[] = {
        0xfb,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ex (sp), hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ex (sp), hl\n"
        ;

    static const unsigned char binary[] = {
        0xe3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ex (sp), ix", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ex (sp), ix\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xe3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ex (sp), iy", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ex (sp), iy\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xe3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ex af, af'", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ex af, af'\n"
        ;

    static const unsigned char binary[] = {
        0x08,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ex de, hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ex de, hl\n"
        ;

    static const unsigned char binary[] = {
        0xeb,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("exx", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "exx\n"
        ;

    static const unsigned char binary[] = {
        0xd9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("halt", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "halt\n"
        ;

    static const unsigned char binary[] = {
        0x76,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("im 0", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "im 0\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x46,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("im 1", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "im 1\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x56,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("im 2", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "im 2\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x5e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("in a, (#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "in a, (170)\n"
        "in a, (85)\n"
        "in a, (0)\n"
        "in a, (255)\n"
        ;

    static const unsigned char binary[] = {
        0xdb,
        0xaa,
        0xdb,
        0x55,
        0xdb,
        0x00,
        0xdb,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("in a, (c)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "in a, (c)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x78,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("in b, (c)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "in b, (c)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x40,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("in c, (c)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "in c, (c)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x48,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("in d, (c)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "in d, (c)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x50,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("in e, (c)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "in e, (c)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x58,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("in h, (c)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "in h, (c)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x60,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("in l, (c)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "in l, (c)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x68,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x34,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc (ix+170)\n"
        "inc (ix+85)\n"
        "inc (ix+0)\n"
        "inc (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x34,
        0xaa,
        0xdd,
        0x34,
        0x55,
        0xdd,
        0x34,
        0x00,
        0xdd,
        0x34,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc (iy+170)\n"
        "inc (iy+85)\n"
        "inc (iy+0)\n"
        "inc (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x34,
        0xaa,
        0xfd,
        0x34,
        0x55,
        0xfd,
        0x34,
        0x00,
        0xfd,
        0x34,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc a\n"
        ;

    static const unsigned char binary[] = {
        0x3c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc b\n"
        ;

    static const unsigned char binary[] = {
        0x04,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc bc\n"
        ;

    static const unsigned char binary[] = {
        0x03,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc c\n"
        ;

    static const unsigned char binary[] = {
        0x0c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc d\n"
        ;

    static const unsigned char binary[] = {
        0x14,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc de\n"
        ;

    static const unsigned char binary[] = {
        0x13,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc e\n"
        ;

    static const unsigned char binary[] = {
        0x1c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc h\n"
        ;

    static const unsigned char binary[] = {
        0x24,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc hl\n"
        ;

    static const unsigned char binary[] = {
        0x23,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc ix", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc ix\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x23,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc iy", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc iy\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x23,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc l\n"
        ;

    static const unsigned char binary[] = {
        0x2c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inc sp", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inc sp\n"
        ;

    static const unsigned char binary[] = {
        0x33,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ind", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ind\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xaa,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("indr", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "indr\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xba,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ini", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ini\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xa2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("inir", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "inir\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xb2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp 4660\n"
        "jp 16945\n"
        "jp 0\n"
        "jp 65535\n"
        ;

    static const unsigned char binary[] = {
        0xc3,
        0x34,
        0x12,
        0xc3,
        0x31,
        0x42,
        0xc3,
        0x00,
        0x00,
        0xc3,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp c, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp c, 4660\n"
        "jp c, 16945\n"
        "jp c, 0\n"
        "jp c, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xda,
        0x34,
        0x12,
        0xda,
        0x31,
        0x42,
        0xda,
        0x00,
        0x00,
        0xda,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp m, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp m, 4660\n"
        "jp m, 16945\n"
        "jp m, 0\n"
        "jp m, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xfa,
        0x34,
        0x12,
        0xfa,
        0x31,
        0x42,
        0xfa,
        0x00,
        0x00,
        0xfa,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp nc, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp nc, 4660\n"
        "jp nc, 16945\n"
        "jp nc, 0\n"
        "jp nc, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xd2,
        0x34,
        0x12,
        0xd2,
        0x31,
        0x42,
        0xd2,
        0x00,
        0x00,
        0xd2,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp nz, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp nz, 4660\n"
        "jp nz, 16945\n"
        "jp nz, 0\n"
        "jp nz, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xc2,
        0x34,
        0x12,
        0xc2,
        0x31,
        0x42,
        0xc2,
        0x00,
        0x00,
        0xc2,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp p, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp p, 4660\n"
        "jp p, 16945\n"
        "jp p, 0\n"
        "jp p, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xf2,
        0x34,
        0x12,
        0xf2,
        0x31,
        0x42,
        0xf2,
        0x00,
        0x00,
        0xf2,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp pe, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp pe, 4660\n"
        "jp pe, 16945\n"
        "jp pe, 0\n"
        "jp pe, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xea,
        0x34,
        0x12,
        0xea,
        0x31,
        0x42,
        0xea,
        0x00,
        0x00,
        0xea,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp po, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp po, 4660\n"
        "jp po, 16945\n"
        "jp po, 0\n"
        "jp po, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xe2,
        0x34,
        0x12,
        0xe2,
        0x31,
        0x42,
        0xe2,
        0x00,
        0x00,
        0xe2,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp z, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp z, 4660\n"
        "jp z, 16945\n"
        "jp z, 0\n"
        "jp z, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xca,
        0x34,
        0x12,
        0xca,
        0x31,
        0x42,
        0xca,
        0x00,
        0x00,
        0xca,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xe9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp (ix)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp (ix)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xe9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jp (iy)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jp (iy)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xe9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jr c, $+#", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jr c, -41\n"
        "jr c, 44\n"
        "jr c, 129\n"
        "jr c, -126\n"
        ;

    static const unsigned char binary[] = {
        0x38,
        0xd5,
        0x38,
        0x2a,
        0x38,
        0x7f,
        0x38,
        0x80,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jr nc, $+#", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jr nc, -41\n"
        "jr nc, 44\n"
        "jr nc, 129\n"
        "jr nc, -126\n"
        ;

    static const unsigned char binary[] = {
        0x30,
        0xd5,
        0x30,
        0x2a,
        0x30,
        0x7f,
        0x30,
        0x80,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jr nz, $+#", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jr nz, -41\n"
        "jr nz, 44\n"
        "jr nz, 129\n"
        "jr nz, -126\n"
        ;

    static const unsigned char binary[] = {
        0x20,
        0xd5,
        0x20,
        0x2a,
        0x20,
        0x7f,
        0x20,
        0x80,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jr z, $+#", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jr z, -41\n"
        "jr z, 44\n"
        "jr z, 129\n"
        "jr z, -126\n"
        ;

    static const unsigned char binary[] = {
        0x28,
        0xd5,
        0x28,
        0x2a,
        0x28,
        0x7f,
        0x28,
        0x80,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("jr $+#", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "jr -41\n"
        "jr 44\n"
        "jr 129\n"
        "jr -126\n"
        ;

    static const unsigned char binary[] = {
        0x18,
        0xd5,
        0x18,
        0x2a,
        0x18,
        0x7f,
        0x18,
        0x80,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (bc), a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (bc), a\n"
        ;

    static const unsigned char binary[] = {
        0x02,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (de), a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (de), a\n"
        ;

    static const unsigned char binary[] = {
        0x12,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (hl), a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (hl), a\n"
        ;

    static const unsigned char binary[] = {
        0x77,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (hl), b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (hl), b\n"
        ;

    static const unsigned char binary[] = {
        0x70,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (hl), c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (hl), c\n"
        ;

    static const unsigned char binary[] = {
        0x71,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (hl), d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (hl), d\n"
        ;

    static const unsigned char binary[] = {
        0x72,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (hl), e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (hl), e\n"
        ;

    static const unsigned char binary[] = {
        0x73,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (hl), h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (hl), h\n"
        ;

    static const unsigned char binary[] = {
        0x74,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (hl), l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (hl), l\n"
        ;

    static const unsigned char binary[] = {
        0x75,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (hl), #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (hl), 170\n"
        "ld (hl), 85\n"
        "ld (hl), 0\n"
        "ld (hl), 255\n"
        ;

    static const unsigned char binary[] = {
        0x36,
        0xaa,
        0x36,
        0x55,
        0x36,
        0x00,
        0x36,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (ix+#), a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (ix+170), a\n"
        "ld (ix+85), a\n"
        "ld (ix+0), a\n"
        "ld (ix+255), a\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x77,
        0xaa,
        0xdd,
        0x77,
        0x55,
        0xdd,
        0x77,
        0x00,
        0xdd,
        0x77,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (ix+#), b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (ix+170), b\n"
        "ld (ix+85), b\n"
        "ld (ix+0), b\n"
        "ld (ix+255), b\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x70,
        0xaa,
        0xdd,
        0x70,
        0x55,
        0xdd,
        0x70,
        0x00,
        0xdd,
        0x70,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (ix+#), c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (ix+170), c\n"
        "ld (ix+85), c\n"
        "ld (ix+0), c\n"
        "ld (ix+255), c\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x71,
        0xaa,
        0xdd,
        0x71,
        0x55,
        0xdd,
        0x71,
        0x00,
        0xdd,
        0x71,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (ix+#), d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (ix+170), d\n"
        "ld (ix+85), d\n"
        "ld (ix+0), d\n"
        "ld (ix+255), d\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x72,
        0xaa,
        0xdd,
        0x72,
        0x55,
        0xdd,
        0x72,
        0x00,
        0xdd,
        0x72,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (ix+#), e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (ix+170), e\n"
        "ld (ix+85), e\n"
        "ld (ix+0), e\n"
        "ld (ix+255), e\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x73,
        0xaa,
        0xdd,
        0x73,
        0x55,
        0xdd,
        0x73,
        0x00,
        0xdd,
        0x73,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (ix+#), h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (ix+170), h\n"
        "ld (ix+85), h\n"
        "ld (ix+0), h\n"
        "ld (ix+255), h\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x74,
        0xaa,
        0xdd,
        0x74,
        0x55,
        0xdd,
        0x74,
        0x00,
        0xdd,
        0x74,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (ix+#), l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (ix+170), l\n"
        "ld (ix+85), l\n"
        "ld (ix+0), l\n"
        "ld (ix+255), l\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x75,
        0xaa,
        0xdd,
        0x75,
        0x55,
        0xdd,
        0x75,
        0x00,
        0xdd,
        0x75,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (ix+#), #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (ix+170), 170\n"
        "ld (ix+170), 85\n"
        "ld (ix+170), 0\n"
        "ld (ix+170), 255\n"
        "ld (ix+85), 170\n"
        "ld (ix+85), 85\n"
        "ld (ix+85), 0\n"
        "ld (ix+85), 255\n"
        "ld (ix+0), 170\n"
        "ld (ix+0), 85\n"
        "ld (ix+0), 0\n"
        "ld (ix+0), 255\n"
        "ld (ix+255), 170\n"
        "ld (ix+255), 85\n"
        "ld (ix+255), 0\n"
        "ld (ix+255), 255\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x36,
        0xaa,
        0xaa,
        0xdd,
        0x36,
        0xaa,
        0x55,
        0xdd,
        0x36,
        0xaa,
        0x00,
        0xdd,
        0x36,
        0xaa,
        0xff,
        0xdd,
        0x36,
        0x55,
        0xaa,
        0xdd,
        0x36,
        0x55,
        0x55,
        0xdd,
        0x36,
        0x55,
        0x00,
        0xdd,
        0x36,
        0x55,
        0xff,
        0xdd,
        0x36,
        0x00,
        0xaa,
        0xdd,
        0x36,
        0x00,
        0x55,
        0xdd,
        0x36,
        0x00,
        0x00,
        0xdd,
        0x36,
        0x00,
        0xff,
        0xdd,
        0x36,
        0xff,
        0xaa,
        0xdd,
        0x36,
        0xff,
        0x55,
        0xdd,
        0x36,
        0xff,
        0x00,
        0xdd,
        0x36,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (iy+#), a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (iy+170), a\n"
        "ld (iy+85), a\n"
        "ld (iy+0), a\n"
        "ld (iy+255), a\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x77,
        0xaa,
        0xfd,
        0x77,
        0x55,
        0xfd,
        0x77,
        0x00,
        0xfd,
        0x77,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (iy+#), b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (iy+170), b\n"
        "ld (iy+85), b\n"
        "ld (iy+0), b\n"
        "ld (iy+255), b\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x70,
        0xaa,
        0xfd,
        0x70,
        0x55,
        0xfd,
        0x70,
        0x00,
        0xfd,
        0x70,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (iy+#), c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (iy+170), c\n"
        "ld (iy+85), c\n"
        "ld (iy+0), c\n"
        "ld (iy+255), c\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x71,
        0xaa,
        0xfd,
        0x71,
        0x55,
        0xfd,
        0x71,
        0x00,
        0xfd,
        0x71,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (iy+#), d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (iy+170), d\n"
        "ld (iy+85), d\n"
        "ld (iy+0), d\n"
        "ld (iy+255), d\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x72,
        0xaa,
        0xfd,
        0x72,
        0x55,
        0xfd,
        0x72,
        0x00,
        0xfd,
        0x72,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (iy+#), e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (iy+170), e\n"
        "ld (iy+85), e\n"
        "ld (iy+0), e\n"
        "ld (iy+255), e\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x73,
        0xaa,
        0xfd,
        0x73,
        0x55,
        0xfd,
        0x73,
        0x00,
        0xfd,
        0x73,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (iy+#), h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (iy+170), h\n"
        "ld (iy+85), h\n"
        "ld (iy+0), h\n"
        "ld (iy+255), h\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x74,
        0xaa,
        0xfd,
        0x74,
        0x55,
        0xfd,
        0x74,
        0x00,
        0xfd,
        0x74,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (iy+#), l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (iy+170), l\n"
        "ld (iy+85), l\n"
        "ld (iy+0), l\n"
        "ld (iy+255), l\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x75,
        0xaa,
        0xfd,
        0x75,
        0x55,
        0xfd,
        0x75,
        0x00,
        0xfd,
        0x75,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (iy+#), #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (iy+170), 170\n"
        "ld (iy+170), 85\n"
        "ld (iy+170), 0\n"
        "ld (iy+170), 255\n"
        "ld (iy+85), 170\n"
        "ld (iy+85), 85\n"
        "ld (iy+85), 0\n"
        "ld (iy+85), 255\n"
        "ld (iy+0), 170\n"
        "ld (iy+0), 85\n"
        "ld (iy+0), 0\n"
        "ld (iy+0), 255\n"
        "ld (iy+255), 170\n"
        "ld (iy+255), 85\n"
        "ld (iy+255), 0\n"
        "ld (iy+255), 255\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x36,
        0xaa,
        0xaa,
        0xfd,
        0x36,
        0xaa,
        0x55,
        0xfd,
        0x36,
        0xaa,
        0x00,
        0xfd,
        0x36,
        0xaa,
        0xff,
        0xfd,
        0x36,
        0x55,
        0xaa,
        0xfd,
        0x36,
        0x55,
        0x55,
        0xfd,
        0x36,
        0x55,
        0x00,
        0xfd,
        0x36,
        0x55,
        0xff,
        0xfd,
        0x36,
        0x00,
        0xaa,
        0xfd,
        0x36,
        0x00,
        0x55,
        0xfd,
        0x36,
        0x00,
        0x00,
        0xfd,
        0x36,
        0x00,
        0xff,
        0xfd,
        0x36,
        0xff,
        0xaa,
        0xfd,
        0x36,
        0xff,
        0x55,
        0xfd,
        0x36,
        0xff,
        0x00,
        0xfd,
        0x36,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (##), a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (4660), a\n"
        "ld (16945), a\n"
        "ld (0), a\n"
        "ld (65535), a\n"
        ;

    static const unsigned char binary[] = {
        0x32,
        0x34,
        0x12,
        0x32,
        0x31,
        0x42,
        0x32,
        0x00,
        0x00,
        0x32,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (##), bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (4660), bc\n"
        "ld (16945), bc\n"
        "ld (0), bc\n"
        "ld (65535), bc\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x43,
        0x34,
        0x12,
        0xed,
        0x43,
        0x31,
        0x42,
        0xed,
        0x43,
        0x00,
        0x00,
        0xed,
        0x43,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (##), de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (4660), de\n"
        "ld (16945), de\n"
        "ld (0), de\n"
        "ld (65535), de\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x53,
        0x34,
        0x12,
        0xed,
        0x53,
        0x31,
        0x42,
        0xed,
        0x53,
        0x00,
        0x00,
        0xed,
        0x53,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (##), hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (4660), hl\n"
        "ld (16945), hl\n"
        "ld (0), hl\n"
        "ld (65535), hl\n"
        ;

    static const unsigned char binary[] = {
        0x22,
        0x34,
        0x12,
        0x22,
        0x31,
        0x42,
        0x22,
        0x00,
        0x00,
        0x22,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (##), ix", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (4660), ix\n"
        "ld (16945), ix\n"
        "ld (0), ix\n"
        "ld (65535), ix\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x22,
        0x34,
        0x12,
        0xdd,
        0x22,
        0x31,
        0x42,
        0xdd,
        0x22,
        0x00,
        0x00,
        0xdd,
        0x22,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (##), iy", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (4660), iy\n"
        "ld (16945), iy\n"
        "ld (0), iy\n"
        "ld (65535), iy\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x22,
        0x34,
        0x12,
        0xfd,
        0x22,
        0x31,
        0x42,
        0xfd,
        0x22,
        0x00,
        0x00,
        0xfd,
        0x22,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld (##), sp", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld (4660), sp\n"
        "ld (16945), sp\n"
        "ld (0), sp\n"
        "ld (65535), sp\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x73,
        0x34,
        0x12,
        0xed,
        0x73,
        0x31,
        0x42,
        0xed,
        0x73,
        0x00,
        0x00,
        0xed,
        0x73,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, (bc)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, (bc)\n"
        ;

    static const unsigned char binary[] = {
        0x0a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, (de)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, (de)\n"
        ;

    static const unsigned char binary[] = {
        0x1a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x7e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, (ix+170)\n"
        "ld a, (ix+85)\n"
        "ld a, (ix+0)\n"
        "ld a, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x7e,
        0xaa,
        0xdd,
        0x7e,
        0x55,
        0xdd,
        0x7e,
        0x00,
        0xdd,
        0x7e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, (iy+170)\n"
        "ld a, (iy+85)\n"
        "ld a, (iy+0)\n"
        "ld a, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x7e,
        0xaa,
        0xfd,
        0x7e,
        0x55,
        0xfd,
        0x7e,
        0x00,
        0xfd,
        0x7e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, (##)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, (4660)\n"
        "ld a, (16945)\n"
        "ld a, (0)\n"
        "ld a, (65535)\n"
        ;

    static const unsigned char binary[] = {
        0x3a,
        0x34,
        0x12,
        0x3a,
        0x31,
        0x42,
        0x3a,
        0x00,
        0x00,
        0x3a,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, a\n"
        ;

    static const unsigned char binary[] = {
        0x7f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, b\n"
        ;

    static const unsigned char binary[] = {
        0x78,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, c\n"
        ;

    static const unsigned char binary[] = {
        0x79,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, d\n"
        ;

    static const unsigned char binary[] = {
        0x7a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, e\n"
        ;

    static const unsigned char binary[] = {
        0x7b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, h\n"
        ;

    static const unsigned char binary[] = {
        0x7c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, i", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, i\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x57,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, l\n"
        ;

    static const unsigned char binary[] = {
        0x7d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, 170\n"
        "ld a, 85\n"
        "ld a, 0\n"
        "ld a, 255\n"
        ;

    static const unsigned char binary[] = {
        0x3e,
        0xaa,
        0x3e,
        0x55,
        0x3e,
        0x00,
        0x3e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld a, r", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld a, r\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x5f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x46,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, (ix+170)\n"
        "ld b, (ix+85)\n"
        "ld b, (ix+0)\n"
        "ld b, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x46,
        0xaa,
        0xdd,
        0x46,
        0x55,
        0xdd,
        0x46,
        0x00,
        0xdd,
        0x46,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, (iy+170)\n"
        "ld b, (iy+85)\n"
        "ld b, (iy+0)\n"
        "ld b, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x46,
        0xaa,
        0xfd,
        0x46,
        0x55,
        0xfd,
        0x46,
        0x00,
        0xfd,
        0x46,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, a\n"
        ;

    static const unsigned char binary[] = {
        0x47,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, b\n"
        ;

    static const unsigned char binary[] = {
        0x40,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, c\n"
        ;

    static const unsigned char binary[] = {
        0x41,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, d\n"
        ;

    static const unsigned char binary[] = {
        0x42,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, e\n"
        ;

    static const unsigned char binary[] = {
        0x43,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, h\n"
        ;

    static const unsigned char binary[] = {
        0x44,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, l\n"
        ;

    static const unsigned char binary[] = {
        0x45,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld b, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld b, 170\n"
        "ld b, 85\n"
        "ld b, 0\n"
        "ld b, 255\n"
        ;

    static const unsigned char binary[] = {
        0x06,
        0xaa,
        0x06,
        0x55,
        0x06,
        0x00,
        0x06,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld bc, (##)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld bc, (4660)\n"
        "ld bc, (16945)\n"
        "ld bc, (0)\n"
        "ld bc, (65535)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x4b,
        0x34,
        0x12,
        0xed,
        0x4b,
        0x31,
        0x42,
        0xed,
        0x4b,
        0x00,
        0x00,
        0xed,
        0x4b,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld bc, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld bc, 4660\n"
        "ld bc, 16945\n"
        "ld bc, 0\n"
        "ld bc, 65535\n"
        ;

    static const unsigned char binary[] = {
        0x01,
        0x34,
        0x12,
        0x01,
        0x31,
        0x42,
        0x01,
        0x00,
        0x00,
        0x01,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x4e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, (ix+170)\n"
        "ld c, (ix+85)\n"
        "ld c, (ix+0)\n"
        "ld c, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x4e,
        0xaa,
        0xdd,
        0x4e,
        0x55,
        0xdd,
        0x4e,
        0x00,
        0xdd,
        0x4e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, (iy+170)\n"
        "ld c, (iy+85)\n"
        "ld c, (iy+0)\n"
        "ld c, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x4e,
        0xaa,
        0xfd,
        0x4e,
        0x55,
        0xfd,
        0x4e,
        0x00,
        0xfd,
        0x4e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, a\n"
        ;

    static const unsigned char binary[] = {
        0x4f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, b\n"
        ;

    static const unsigned char binary[] = {
        0x48,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, c\n"
        ;

    static const unsigned char binary[] = {
        0x49,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, d\n"
        ;

    static const unsigned char binary[] = {
        0x4a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, e\n"
        ;

    static const unsigned char binary[] = {
        0x4b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, h\n"
        ;

    static const unsigned char binary[] = {
        0x4c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, l\n"
        ;

    static const unsigned char binary[] = {
        0x4d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld c, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld c, 170\n"
        "ld c, 85\n"
        "ld c, 0\n"
        "ld c, 255\n"
        ;

    static const unsigned char binary[] = {
        0x0e,
        0xaa,
        0x0e,
        0x55,
        0x0e,
        0x00,
        0x0e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x56,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, (ix+170)\n"
        "ld d, (ix+85)\n"
        "ld d, (ix+0)\n"
        "ld d, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x56,
        0xaa,
        0xdd,
        0x56,
        0x55,
        0xdd,
        0x56,
        0x00,
        0xdd,
        0x56,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, (iy+170)\n"
        "ld d, (iy+85)\n"
        "ld d, (iy+0)\n"
        "ld d, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x56,
        0xaa,
        0xfd,
        0x56,
        0x55,
        0xfd,
        0x56,
        0x00,
        0xfd,
        0x56,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, a\n"
        ;

    static const unsigned char binary[] = {
        0x57,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, b\n"
        ;

    static const unsigned char binary[] = {
        0x50,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, c\n"
        ;

    static const unsigned char binary[] = {
        0x51,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, d\n"
        ;

    static const unsigned char binary[] = {
        0x52,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, e\n"
        ;

    static const unsigned char binary[] = {
        0x53,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, h\n"
        ;

    static const unsigned char binary[] = {
        0x54,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, l\n"
        ;

    static const unsigned char binary[] = {
        0x55,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld d, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld d, 170\n"
        "ld d, 85\n"
        "ld d, 0\n"
        "ld d, 255\n"
        ;

    static const unsigned char binary[] = {
        0x16,
        0xaa,
        0x16,
        0x55,
        0x16,
        0x00,
        0x16,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld de, (##)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld de, (4660)\n"
        "ld de, (16945)\n"
        "ld de, (0)\n"
        "ld de, (65535)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x5b,
        0x34,
        0x12,
        0xed,
        0x5b,
        0x31,
        0x42,
        0xed,
        0x5b,
        0x00,
        0x00,
        0xed,
        0x5b,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld de, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld de, 4660\n"
        "ld de, 16945\n"
        "ld de, 0\n"
        "ld de, 65535\n"
        ;

    static const unsigned char binary[] = {
        0x11,
        0x34,
        0x12,
        0x11,
        0x31,
        0x42,
        0x11,
        0x00,
        0x00,
        0x11,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x5e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, (ix+170)\n"
        "ld e, (ix+85)\n"
        "ld e, (ix+0)\n"
        "ld e, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x5e,
        0xaa,
        0xdd,
        0x5e,
        0x55,
        0xdd,
        0x5e,
        0x00,
        0xdd,
        0x5e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, (iy+170)\n"
        "ld e, (iy+85)\n"
        "ld e, (iy+0)\n"
        "ld e, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x5e,
        0xaa,
        0xfd,
        0x5e,
        0x55,
        0xfd,
        0x5e,
        0x00,
        0xfd,
        0x5e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, a\n"
        ;

    static const unsigned char binary[] = {
        0x5f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, b\n"
        ;

    static const unsigned char binary[] = {
        0x58,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, c\n"
        ;

    static const unsigned char binary[] = {
        0x59,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, d\n"
        ;

    static const unsigned char binary[] = {
        0x5a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, e\n"
        ;

    static const unsigned char binary[] = {
        0x5b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, h\n"
        ;

    static const unsigned char binary[] = {
        0x5c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, l\n"
        ;

    static const unsigned char binary[] = {
        0x5d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld e, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld e, 170\n"
        "ld e, 85\n"
        "ld e, 0\n"
        "ld e, 255\n"
        ;

    static const unsigned char binary[] = {
        0x1e,
        0xaa,
        0x1e,
        0x55,
        0x1e,
        0x00,
        0x1e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x66,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, (ix+170)\n"
        "ld h, (ix+85)\n"
        "ld h, (ix+0)\n"
        "ld h, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x66,
        0xaa,
        0xdd,
        0x66,
        0x55,
        0xdd,
        0x66,
        0x00,
        0xdd,
        0x66,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, (iy+170)\n"
        "ld h, (iy+85)\n"
        "ld h, (iy+0)\n"
        "ld h, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x66,
        0xaa,
        0xfd,
        0x66,
        0x55,
        0xfd,
        0x66,
        0x00,
        0xfd,
        0x66,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, a\n"
        ;

    static const unsigned char binary[] = {
        0x67,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, b\n"
        ;

    static const unsigned char binary[] = {
        0x60,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, c\n"
        ;

    static const unsigned char binary[] = {
        0x61,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, d\n"
        ;

    static const unsigned char binary[] = {
        0x62,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, e\n"
        ;

    static const unsigned char binary[] = {
        0x63,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, h\n"
        ;

    static const unsigned char binary[] = {
        0x64,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, l\n"
        ;

    static const unsigned char binary[] = {
        0x65,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld h, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld h, 170\n"
        "ld h, 85\n"
        "ld h, 0\n"
        "ld h, 255\n"
        ;

    static const unsigned char binary[] = {
        0x26,
        0xaa,
        0x26,
        0x55,
        0x26,
        0x00,
        0x26,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld hl, (##)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld hl, (4660)\n"
        "ld hl, (16945)\n"
        "ld hl, (0)\n"
        "ld hl, (65535)\n"
        ;

    static const unsigned char binary[] = {
        0x2a,
        0x34,
        0x12,
        0x2a,
        0x31,
        0x42,
        0x2a,
        0x00,
        0x00,
        0x2a,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld hl, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld hl, 4660\n"
        "ld hl, 16945\n"
        "ld hl, 0\n"
        "ld hl, 65535\n"
        ;

    static const unsigned char binary[] = {
        0x21,
        0x34,
        0x12,
        0x21,
        0x31,
        0x42,
        0x21,
        0x00,
        0x00,
        0x21,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld i, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld i, a\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x47,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld ix, (##)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld ix, (4660)\n"
        "ld ix, (16945)\n"
        "ld ix, (0)\n"
        "ld ix, (65535)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x2a,
        0x34,
        0x12,
        0xdd,
        0x2a,
        0x31,
        0x42,
        0xdd,
        0x2a,
        0x00,
        0x00,
        0xdd,
        0x2a,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld ix, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld ix, 4660\n"
        "ld ix, 16945\n"
        "ld ix, 0\n"
        "ld ix, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x21,
        0x34,
        0x12,
        0xdd,
        0x21,
        0x31,
        0x42,
        0xdd,
        0x21,
        0x00,
        0x00,
        0xdd,
        0x21,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld iy, (##)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld iy, (4660)\n"
        "ld iy, (16945)\n"
        "ld iy, (0)\n"
        "ld iy, (65535)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x2a,
        0x34,
        0x12,
        0xfd,
        0x2a,
        0x31,
        0x42,
        0xfd,
        0x2a,
        0x00,
        0x00,
        0xfd,
        0x2a,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld iy, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld iy, 4660\n"
        "ld iy, 16945\n"
        "ld iy, 0\n"
        "ld iy, 65535\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x21,
        0x34,
        0x12,
        0xfd,
        0x21,
        0x31,
        0x42,
        0xfd,
        0x21,
        0x00,
        0x00,
        0xfd,
        0x21,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x6e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, (ix+170)\n"
        "ld l, (ix+85)\n"
        "ld l, (ix+0)\n"
        "ld l, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x6e,
        0xaa,
        0xdd,
        0x6e,
        0x55,
        0xdd,
        0x6e,
        0x00,
        0xdd,
        0x6e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, (iy+170)\n"
        "ld l, (iy+85)\n"
        "ld l, (iy+0)\n"
        "ld l, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x6e,
        0xaa,
        0xfd,
        0x6e,
        0x55,
        0xfd,
        0x6e,
        0x00,
        0xfd,
        0x6e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, a\n"
        ;

    static const unsigned char binary[] = {
        0x6f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, b\n"
        ;

    static const unsigned char binary[] = {
        0x68,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, c\n"
        ;

    static const unsigned char binary[] = {
        0x69,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, d\n"
        ;

    static const unsigned char binary[] = {
        0x6a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, e\n"
        ;

    static const unsigned char binary[] = {
        0x6b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, h\n"
        ;

    static const unsigned char binary[] = {
        0x6c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, l\n"
        ;

    static const unsigned char binary[] = {
        0x6d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld l, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld l, 170\n"
        "ld l, 85\n"
        "ld l, 0\n"
        "ld l, 255\n"
        ;

    static const unsigned char binary[] = {
        0x2e,
        0xaa,
        0x2e,
        0x55,
        0x2e,
        0x00,
        0x2e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld r, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld r, a\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x4f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld sp, (##)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld sp, (4660)\n"
        "ld sp, (16945)\n"
        "ld sp, (0)\n"
        "ld sp, (65535)\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x7b,
        0x34,
        0x12,
        0xed,
        0x7b,
        0x31,
        0x42,
        0xed,
        0x7b,
        0x00,
        0x00,
        0xed,
        0x7b,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld sp, hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld sp, hl\n"
        ;

    static const unsigned char binary[] = {
        0xf9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld sp, ix", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld sp, ix\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xf9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld sp, iy", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld sp, iy\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xf9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ld sp, ##", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ld sp, 4660\n"
        "ld sp, 16945\n"
        "ld sp, 0\n"
        "ld sp, 65535\n"
        ;

    static const unsigned char binary[] = {
        0x31,
        0x34,
        0x12,
        0x31,
        0x31,
        0x42,
        0x31,
        0x00,
        0x00,
        0x31,
        0xff,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ldd", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ldd\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xa8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("lddr", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "lddr\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xb8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ldi", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ldi\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xa0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ldir", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ldir\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xb0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("neg", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "neg\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x44,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("nop", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "nop\n"
        ;

    static const unsigned char binary[] = {
        0x00,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xb6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or (ix+170)\n"
        "or (ix+85)\n"
        "or (ix+0)\n"
        "or (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xb6,
        0xaa,
        0xdd,
        0xb6,
        0x55,
        0xdd,
        0xb6,
        0x00,
        0xdd,
        0xb6,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or (iy+170)\n"
        "or (iy+85)\n"
        "or (iy+0)\n"
        "or (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xb6,
        0xaa,
        0xfd,
        0xb6,
        0x55,
        0xfd,
        0xb6,
        0x00,
        0xfd,
        0xb6,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or a\n"
        ;

    static const unsigned char binary[] = {
        0xb7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or b\n"
        ;

    static const unsigned char binary[] = {
        0xb0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or c\n"
        ;

    static const unsigned char binary[] = {
        0xb1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or d\n"
        ;

    static const unsigned char binary[] = {
        0xb2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or e\n"
        ;

    static const unsigned char binary[] = {
        0xb3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or h\n"
        ;

    static const unsigned char binary[] = {
        0xb4,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or l\n"
        ;

    static const unsigned char binary[] = {
        0xb5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("or #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "or 170\n"
        "or 85\n"
        "or 0\n"
        "or 255\n"
        ;

    static const unsigned char binary[] = {
        0xf6,
        0xaa,
        0xf6,
        0x55,
        0xf6,
        0x00,
        0xf6,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("otdr", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "otdr\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xbb,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("otir", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "otir\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xb3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("out (c), a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "out (c), a\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x79,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("out (c), b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "out (c), b\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x41,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("out (c), c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "out (c), c\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x49,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("out (c), d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "out (c), d\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x51,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("out (c), e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "out (c), e\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x59,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("out (c), h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "out (c), h\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x61,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("out (c), l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "out (c), l\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x69,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("out (#), a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "out (170), a\n"
        "out (85), a\n"
        "out (0), a\n"
        "out (255), a\n"
        ;

    static const unsigned char binary[] = {
        0xd3,
        0xaa,
        0xd3,
        0x55,
        0xd3,
        0x00,
        0xd3,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("outd", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "outd\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xab,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("outi", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "outi\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0xa3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("pop af", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "pop af\n"
        ;

    static const unsigned char binary[] = {
        0xf1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("pop bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "pop bc\n"
        ;

    static const unsigned char binary[] = {
        0xc1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("pop de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "pop de\n"
        ;

    static const unsigned char binary[] = {
        0xd1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("pop hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "pop hl\n"
        ;

    static const unsigned char binary[] = {
        0xe1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("pop ix", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "pop ix\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xe1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("pop iy", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "pop iy\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xe1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("push af", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "push af\n"
        ;

    static const unsigned char binary[] = {
        0xf5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("push bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "push bc\n"
        ;

    static const unsigned char binary[] = {
        0xc5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("push de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "push de\n"
        ;

    static const unsigned char binary[] = {
        0xd5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("push hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "push hl\n"
        ;

    static const unsigned char binary[] = {
        0xe5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("push ix", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "push ix\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xe5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("push iy", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "push iy\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xe5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x86,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, (ix+170)\n"
        "res 0, (ix+85)\n"
        "res 0, (ix+0)\n"
        "res 0, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x86,
        0xdd,
        0xcb,
        0x55,
        0x86,
        0xdd,
        0xcb,
        0x00,
        0x86,
        0xdd,
        0xcb,
        0xff,
        0x86,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, (iy+170)\n"
        "res 0, (iy+85)\n"
        "res 0, (iy+0)\n"
        "res 0, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x86,
        0xfd,
        0xcb,
        0x55,
        0x86,
        0xfd,
        0xcb,
        0x00,
        0x86,
        0xfd,
        0xcb,
        0xff,
        0x86,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x87,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x80,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x81,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x82,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x83,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x84,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 0, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 0, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x85,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x8e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, (ix+170)\n"
        "res 1, (ix+85)\n"
        "res 1, (ix+0)\n"
        "res 1, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x8e,
        0xdd,
        0xcb,
        0x55,
        0x8e,
        0xdd,
        0xcb,
        0x00,
        0x8e,
        0xdd,
        0xcb,
        0xff,
        0x8e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, (iy+170)\n"
        "res 1, (iy+85)\n"
        "res 1, (iy+0)\n"
        "res 1, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x8e,
        0xfd,
        0xcb,
        0x55,
        0x8e,
        0xfd,
        0xcb,
        0x00,
        0x8e,
        0xfd,
        0xcb,
        0xff,
        0x8e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x8f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x88,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x89,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x8a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x8b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x8c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 1, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 1, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x8d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x96,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, (ix+170)\n"
        "res 2, (ix+85)\n"
        "res 2, (ix+0)\n"
        "res 2, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x96,
        0xdd,
        0xcb,
        0x55,
        0x96,
        0xdd,
        0xcb,
        0x00,
        0x96,
        0xdd,
        0xcb,
        0xff,
        0x96,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, (iy+170)\n"
        "res 2, (iy+85)\n"
        "res 2, (iy+0)\n"
        "res 2, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x96,
        0xfd,
        0xcb,
        0x55,
        0x96,
        0xfd,
        0xcb,
        0x00,
        0x96,
        0xfd,
        0xcb,
        0xff,
        0x96,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x97,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x90,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x91,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x92,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x93,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x94,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 2, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 2, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x95,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x9e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, (ix+170)\n"
        "res 3, (ix+85)\n"
        "res 3, (ix+0)\n"
        "res 3, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x9e,
        0xdd,
        0xcb,
        0x55,
        0x9e,
        0xdd,
        0xcb,
        0x00,
        0x9e,
        0xdd,
        0xcb,
        0xff,
        0x9e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, (iy+170)\n"
        "res 3, (iy+85)\n"
        "res 3, (iy+0)\n"
        "res 3, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x9e,
        0xfd,
        0xcb,
        0x55,
        0x9e,
        0xfd,
        0xcb,
        0x00,
        0x9e,
        0xfd,
        0xcb,
        0xff,
        0x9e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x9f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x98,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x99,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x9a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x9b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x9c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 3, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 3, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x9d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, (ix+170)\n"
        "res 4, (ix+85)\n"
        "res 4, (ix+0)\n"
        "res 4, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xa6,
        0xdd,
        0xcb,
        0x55,
        0xa6,
        0xdd,
        0xcb,
        0x00,
        0xa6,
        0xdd,
        0xcb,
        0xff,
        0xa6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, (iy+170)\n"
        "res 4, (iy+85)\n"
        "res 4, (iy+0)\n"
        "res 4, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xa6,
        0xfd,
        0xcb,
        0x55,
        0xa6,
        0xfd,
        0xcb,
        0x00,
        0xa6,
        0xfd,
        0xcb,
        0xff,
        0xa6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa4,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 4, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 4, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xae,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, (ix+170)\n"
        "res 5, (ix+85)\n"
        "res 5, (ix+0)\n"
        "res 5, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xae,
        0xdd,
        0xcb,
        0x55,
        0xae,
        0xdd,
        0xcb,
        0x00,
        0xae,
        0xdd,
        0xcb,
        0xff,
        0xae,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, (iy+170)\n"
        "res 5, (iy+85)\n"
        "res 5, (iy+0)\n"
        "res 5, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xae,
        0xfd,
        0xcb,
        0x55,
        0xae,
        0xfd,
        0xcb,
        0x00,
        0xae,
        0xfd,
        0xcb,
        0xff,
        0xae,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xaf,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xa9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xaa,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xab,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xac,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 5, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 5, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xad,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, (ix+170)\n"
        "res 6, (ix+85)\n"
        "res 6, (ix+0)\n"
        "res 6, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xb6,
        0xdd,
        0xcb,
        0x55,
        0xb6,
        0xdd,
        0xcb,
        0x00,
        0xb6,
        0xdd,
        0xcb,
        0xff,
        0xb6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, (iy+170)\n"
        "res 6, (iy+85)\n"
        "res 6, (iy+0)\n"
        "res 6, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xb6,
        0xfd,
        0xcb,
        0x55,
        0xb6,
        0xfd,
        0xcb,
        0x00,
        0xb6,
        0xfd,
        0xcb,
        0xff,
        0xb6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb4,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 6, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 6, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xbe,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, (ix+170)\n"
        "res 7, (ix+85)\n"
        "res 7, (ix+0)\n"
        "res 7, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xbe,
        0xdd,
        0xcb,
        0x55,
        0xbe,
        0xdd,
        0xcb,
        0x00,
        0xbe,
        0xdd,
        0xcb,
        0xff,
        0xbe,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, (iy+170)\n"
        "res 7, (iy+85)\n"
        "res 7, (iy+0)\n"
        "res 7, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xbe,
        0xfd,
        0xcb,
        0x55,
        0xbe,
        0xfd,
        0xcb,
        0x00,
        0xbe,
        0xfd,
        0xcb,
        0xff,
        0xbe,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xbf,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xb9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xba,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xbb,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xbc,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("res 7, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "res 7, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xbd,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ret", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ret\n"
        ;

    static const unsigned char binary[] = {
        0xc9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ret c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ret c\n"
        ;

    static const unsigned char binary[] = {
        0xd8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ret m", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ret m\n"
        ;

    static const unsigned char binary[] = {
        0xf8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ret nc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ret nc\n"
        ;

    static const unsigned char binary[] = {
        0xd0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ret nz", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ret nz\n"
        ;

    static const unsigned char binary[] = {
        0xc0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ret p", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ret p\n"
        ;

    static const unsigned char binary[] = {
        0xf0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ret pe", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ret pe\n"
        ;

    static const unsigned char binary[] = {
        0xe8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ret po", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ret po\n"
        ;

    static const unsigned char binary[] = {
        0xe0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("ret z", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "ret z\n"
        ;

    static const unsigned char binary[] = {
        0xc8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("reti", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "reti\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x4d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("retn", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "retn\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x45,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x16,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl (ix+170)\n"
        "rl (ix+85)\n"
        "rl (ix+0)\n"
        "rl (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x16,
        0xdd,
        0xcb,
        0x55,
        0x16,
        0xdd,
        0xcb,
        0x00,
        0x16,
        0xdd,
        0xcb,
        0xff,
        0x16,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl (iy+170)\n"
        "rl (iy+85)\n"
        "rl (iy+0)\n"
        "rl (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x16,
        0xfd,
        0xcb,
        0x55,
        0x16,
        0xfd,
        0xcb,
        0x00,
        0x16,
        0xfd,
        0xcb,
        0xff,
        0x16,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x17,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x10,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x11,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x12,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x13,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x14,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rl l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rl l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x15,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rla", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rla\n"
        ;

    static const unsigned char binary[] = {
        0x17,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x06,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc (ix+170)\n"
        "rlc (ix+85)\n"
        "rlc (ix+0)\n"
        "rlc (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x06,
        0xdd,
        0xcb,
        0x55,
        0x06,
        0xdd,
        0xcb,
        0x00,
        0x06,
        0xdd,
        0xcb,
        0xff,
        0x06,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc (iy+170)\n"
        "rlc (iy+85)\n"
        "rlc (iy+0)\n"
        "rlc (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x06,
        0xfd,
        0xcb,
        0x55,
        0x06,
        0xfd,
        0xcb,
        0x00,
        0x06,
        0xfd,
        0xcb,
        0xff,
        0x06,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x07,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x00,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x01,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x02,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x03,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x04,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlc l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlc l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x05,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rlca", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rlca\n"
        ;

    static const unsigned char binary[] = {
        0x07,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rld", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rld\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x6f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x1e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr (ix+170)\n"
        "rr (ix+85)\n"
        "rr (ix+0)\n"
        "rr (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x1e,
        0xdd,
        0xcb,
        0x55,
        0x1e,
        0xdd,
        0xcb,
        0x00,
        0x1e,
        0xdd,
        0xcb,
        0xff,
        0x1e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr (iy+170)\n"
        "rr (iy+85)\n"
        "rr (iy+0)\n"
        "rr (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x1e,
        0xfd,
        0xcb,
        0x55,
        0x1e,
        0xfd,
        0xcb,
        0x00,
        0x1e,
        0xfd,
        0xcb,
        0xff,
        0x1e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x1f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x18,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x19,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x1a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x1b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x1c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rr l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rr l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x1d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rra", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rra\n"
        ;

    static const unsigned char binary[] = {
        0x1f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x0e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc (ix+170)\n"
        "rrc (ix+85)\n"
        "rrc (ix+0)\n"
        "rrc (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x0e,
        0xdd,
        0xcb,
        0x55,
        0x0e,
        0xdd,
        0xcb,
        0x00,
        0x0e,
        0xdd,
        0xcb,
        0xff,
        0x0e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc (iy+170)\n"
        "rrc (iy+85)\n"
        "rrc (iy+0)\n"
        "rrc (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x0e,
        0xfd,
        0xcb,
        0x55,
        0x0e,
        0xfd,
        0xcb,
        0x00,
        0x0e,
        0xfd,
        0xcb,
        0xff,
        0x0e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x0f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x08,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x09,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x0a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x0b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x0c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrc l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrc l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x0d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrca", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrca\n"
        ;

    static const unsigned char binary[] = {
        0x0f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rrd", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rrd\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x67,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rst 0", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rst 0\n"
        ;

    static const unsigned char binary[] = {
        0xc7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rst 8", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rst 8\n"
        ;

    static const unsigned char binary[] = {
        0xcf,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rst 10h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rst 10h\n"
        ;

    static const unsigned char binary[] = {
        0xd7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rst 18h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rst 18h\n"
        ;

    static const unsigned char binary[] = {
        0xdf,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rst 20h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rst 20h\n"
        ;

    static const unsigned char binary[] = {
        0xe7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rst 28h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rst 28h\n"
        ;

    static const unsigned char binary[] = {
        0xef,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rst 30h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rst 30h\n"
        ;

    static const unsigned char binary[] = {
        0xf7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("rst 38h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "rst 38h\n"
        ;

    static const unsigned char binary[] = {
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, 170\n"
        "sbc a, 85\n"
        "sbc a, 0\n"
        "sbc a, 255\n"
        ;

    static const unsigned char binary[] = {
        0xde,
        0xaa,
        0xde,
        0x55,
        0xde,
        0x00,
        0xde,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x9e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, (ix+170)\n"
        "sbc a, (ix+85)\n"
        "sbc a, (ix+0)\n"
        "sbc a, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x9e,
        0xaa,
        0xdd,
        0x9e,
        0x55,
        0xdd,
        0x9e,
        0x00,
        0xdd,
        0x9e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, (iy+170)\n"
        "sbc a, (iy+85)\n"
        "sbc a, (iy+0)\n"
        "sbc a, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x9e,
        0xaa,
        0xfd,
        0x9e,
        0x55,
        0xfd,
        0x9e,
        0x00,
        0xfd,
        0x9e,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, a\n"
        ;

    static const unsigned char binary[] = {
        0x9f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, b\n"
        ;

    static const unsigned char binary[] = {
        0x98,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, c\n"
        ;

    static const unsigned char binary[] = {
        0x99,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, d\n"
        ;

    static const unsigned char binary[] = {
        0x9a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, e\n"
        ;

    static const unsigned char binary[] = {
        0x9b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, h\n"
        ;

    static const unsigned char binary[] = {
        0x9c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc a, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc a, l\n"
        ;

    static const unsigned char binary[] = {
        0x9d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc hl, bc", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc hl, bc\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x42,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc hl, de", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc hl, de\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x52,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc hl, hl", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc hl, hl\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x62,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sbc hl, sp", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sbc hl, sp\n"
        ;

    static const unsigned char binary[] = {
        0xed,
        0x72,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("scf", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "scf\n"
        ;

    static const unsigned char binary[] = {
        0x37,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, (ix+170)\n"
        "set 0, (ix+85)\n"
        "set 0, (ix+0)\n"
        "set 0, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xc6,
        0xdd,
        0xcb,
        0x55,
        0xc6,
        0xdd,
        0xcb,
        0x00,
        0xc6,
        0xdd,
        0xcb,
        0xff,
        0xc6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, (iy+170)\n"
        "set 0, (iy+85)\n"
        "set 0, (iy+0)\n"
        "set 0, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xc6,
        0xfd,
        0xcb,
        0x55,
        0xc6,
        0xfd,
        0xcb,
        0x00,
        0xc6,
        0xfd,
        0xcb,
        0xff,
        0xc6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc4,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 0, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 0, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xce,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, (ix+170)\n"
        "set 1, (ix+85)\n"
        "set 1, (ix+0)\n"
        "set 1, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xce,
        0xdd,
        0xcb,
        0x55,
        0xce,
        0xdd,
        0xcb,
        0x00,
        0xce,
        0xdd,
        0xcb,
        0xff,
        0xce,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, (iy+170)\n"
        "set 1, (iy+85)\n"
        "set 1, (iy+0)\n"
        "set 1, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xce,
        0xfd,
        0xcb,
        0x55,
        0xce,
        0xfd,
        0xcb,
        0x00,
        0xce,
        0xfd,
        0xcb,
        0xff,
        0xce,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xcf,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xc9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xca,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xcb,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xcc,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 1, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 1, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xcd,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, (ix+170)\n"
        "set 2, (ix+85)\n"
        "set 2, (ix+0)\n"
        "set 2, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xd6,
        0xdd,
        0xcb,
        0x55,
        0xd6,
        0xdd,
        0xcb,
        0x00,
        0xd6,
        0xdd,
        0xcb,
        0xff,
        0xd6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, (iy+170)\n"
        "set 2, (iy+85)\n"
        "set 2, (iy+0)\n"
        "set 2, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xd6,
        0xfd,
        0xcb,
        0x55,
        0xd6,
        0xfd,
        0xcb,
        0x00,
        0xd6,
        0xfd,
        0xcb,
        0xff,
        0xd6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd4,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 2, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 2, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xde,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, (ix+170)\n"
        "set 3, (ix+85)\n"
        "set 3, (ix+0)\n"
        "set 3, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xde,
        0xdd,
        0xcb,
        0x55,
        0xde,
        0xdd,
        0xcb,
        0x00,
        0xde,
        0xdd,
        0xcb,
        0xff,
        0xde,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, (iy+170)\n"
        "set 3, (iy+85)\n"
        "set 3, (iy+0)\n"
        "set 3, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xde,
        0xfd,
        0xcb,
        0x55,
        0xde,
        0xfd,
        0xcb,
        0x00,
        0xde,
        0xfd,
        0xcb,
        0xff,
        0xde,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xdf,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xd9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xda,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xdb,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xdc,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 3, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 3, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xdd,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, (ix+170)\n"
        "set 4, (ix+85)\n"
        "set 4, (ix+0)\n"
        "set 4, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xe6,
        0xdd,
        0xcb,
        0x55,
        0xe6,
        0xdd,
        0xcb,
        0x00,
        0xe6,
        0xdd,
        0xcb,
        0xff,
        0xe6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, (iy+170)\n"
        "set 4, (iy+85)\n"
        "set 4, (iy+0)\n"
        "set 4, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xe6,
        0xfd,
        0xcb,
        0x55,
        0xe6,
        0xfd,
        0xcb,
        0x00,
        0xe6,
        0xfd,
        0xcb,
        0xff,
        0xe6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe4,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 4, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 4, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xee,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, (ix+170)\n"
        "set 5, (ix+85)\n"
        "set 5, (ix+0)\n"
        "set 5, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xee,
        0xdd,
        0xcb,
        0x55,
        0xee,
        0xdd,
        0xcb,
        0x00,
        0xee,
        0xdd,
        0xcb,
        0xff,
        0xee,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, (iy+170)\n"
        "set 5, (iy+85)\n"
        "set 5, (iy+0)\n"
        "set 5, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xee,
        0xfd,
        0xcb,
        0x55,
        0xee,
        0xfd,
        0xcb,
        0x00,
        0xee,
        0xfd,
        0xcb,
        0xff,
        0xee,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xef,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xe9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xea,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xeb,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xec,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 5, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 5, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xed,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, (ix+170)\n"
        "set 6, (ix+85)\n"
        "set 6, (ix+0)\n"
        "set 6, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xf6,
        0xdd,
        0xcb,
        0x55,
        0xf6,
        0xdd,
        0xcb,
        0x00,
        0xf6,
        0xdd,
        0xcb,
        0xff,
        0xf6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, (iy+170)\n"
        "set 6, (iy+85)\n"
        "set 6, (iy+0)\n"
        "set 6, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xf6,
        0xfd,
        0xcb,
        0x55,
        0xf6,
        0xfd,
        0xcb,
        0x00,
        0xf6,
        0xfd,
        0xcb,
        0xff,
        0xf6,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf7,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf0,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf1,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf2,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf3,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf4,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 6, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 6, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf5,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xfe,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, (ix+170)\n"
        "set 7, (ix+85)\n"
        "set 7, (ix+0)\n"
        "set 7, (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0xfe,
        0xdd,
        0xcb,
        0x55,
        0xfe,
        0xdd,
        0xcb,
        0x00,
        0xfe,
        0xdd,
        0xcb,
        0xff,
        0xfe,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, (iy+170)\n"
        "set 7, (iy+85)\n"
        "set 7, (iy+0)\n"
        "set 7, (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0xfe,
        0xfd,
        0xcb,
        0x55,
        0xfe,
        0xfd,
        0xcb,
        0x00,
        0xfe,
        0xfd,
        0xcb,
        0xff,
        0xfe,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xf9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xfa,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xfb,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xfc,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("set 7, l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "set 7, l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0xfd,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x26,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla (ix+170)\n"
        "sla (ix+85)\n"
        "sla (ix+0)\n"
        "sla (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x26,
        0xdd,
        0xcb,
        0x55,
        0x26,
        0xdd,
        0xcb,
        0x00,
        0x26,
        0xdd,
        0xcb,
        0xff,
        0x26,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla (iy+170)\n"
        "sla (iy+85)\n"
        "sla (iy+0)\n"
        "sla (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x26,
        0xfd,
        0xcb,
        0x55,
        0x26,
        0xfd,
        0xcb,
        0x00,
        0x26,
        0xfd,
        0xcb,
        0xff,
        0x26,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x27,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x20,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x21,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x22,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x23,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x24,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sla l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sla l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x25,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x2e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra (ix+170)\n"
        "sra (ix+85)\n"
        "sra (ix+0)\n"
        "sra (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x2e,
        0xdd,
        0xcb,
        0x55,
        0x2e,
        0xdd,
        0xcb,
        0x00,
        0x2e,
        0xdd,
        0xcb,
        0xff,
        0x2e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra (iy+170)\n"
        "sra (iy+85)\n"
        "sra (iy+0)\n"
        "sra (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x2e,
        0xfd,
        0xcb,
        0x55,
        0x2e,
        0xfd,
        0xcb,
        0x00,
        0x2e,
        0xfd,
        0xcb,
        0xff,
        0x2e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x2f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x28,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x29,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x2a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x2b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x2c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sra l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sra l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x2d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x3e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl (ix+170)\n"
        "srl (ix+85)\n"
        "srl (ix+0)\n"
        "srl (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xcb,
        0xaa,
        0x3e,
        0xdd,
        0xcb,
        0x55,
        0x3e,
        0xdd,
        0xcb,
        0x00,
        0x3e,
        0xdd,
        0xcb,
        0xff,
        0x3e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl (iy+170)\n"
        "srl (iy+85)\n"
        "srl (iy+0)\n"
        "srl (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xcb,
        0xaa,
        0x3e,
        0xfd,
        0xcb,
        0x55,
        0x3e,
        0xfd,
        0xcb,
        0x00,
        0x3e,
        0xfd,
        0xcb,
        0xff,
        0x3e,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl a\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x3f,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl b\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x38,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl c\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x39,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl d\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x3a,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl e\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x3b,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl h\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x3c,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("srl l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "srl l\n"
        ;

    static const unsigned char binary[] = {
        0xcb,
        0x3d,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub (hl)\n"
        ;

    static const unsigned char binary[] = {
        0x96,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub (ix+170)\n"
        "sub (ix+85)\n"
        "sub (ix+0)\n"
        "sub (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0x96,
        0xaa,
        0xdd,
        0x96,
        0x55,
        0xdd,
        0x96,
        0x00,
        0xdd,
        0x96,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub (iy+170)\n"
        "sub (iy+85)\n"
        "sub (iy+0)\n"
        "sub (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0x96,
        0xaa,
        0xfd,
        0x96,
        0x55,
        0xfd,
        0x96,
        0x00,
        0xfd,
        0x96,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub a\n"
        ;

    static const unsigned char binary[] = {
        0x97,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub b\n"
        ;

    static const unsigned char binary[] = {
        0x90,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub c\n"
        ;

    static const unsigned char binary[] = {
        0x91,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub d\n"
        ;

    static const unsigned char binary[] = {
        0x92,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub e\n"
        ;

    static const unsigned char binary[] = {
        0x93,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub h\n"
        ;

    static const unsigned char binary[] = {
        0x94,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub l\n"
        ;

    static const unsigned char binary[] = {
        0x95,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("sub #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "sub 170\n"
        "sub 85\n"
        "sub 0\n"
        "sub 255\n"
        ;

    static const unsigned char binary[] = {
        0xd6,
        0xaa,
        0xd6,
        0x55,
        0xd6,
        0x00,
        0xd6,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor (hl)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor (hl)\n"
        ;

    static const unsigned char binary[] = {
        0xae,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor (ix+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor (ix+170)\n"
        "xor (ix+85)\n"
        "xor (ix+0)\n"
        "xor (ix+255)\n"
        ;

    static const unsigned char binary[] = {
        0xdd,
        0xae,
        0xaa,
        0xdd,
        0xae,
        0x55,
        0xdd,
        0xae,
        0x00,
        0xdd,
        0xae,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor (iy+#)", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor (iy+170)\n"
        "xor (iy+85)\n"
        "xor (iy+0)\n"
        "xor (iy+255)\n"
        ;

    static const unsigned char binary[] = {
        0xfd,
        0xae,
        0xaa,
        0xfd,
        0xae,
        0x55,
        0xfd,
        0xae,
        0x00,
        0xfd,
        0xae,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor a", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor a\n"
        ;

    static const unsigned char binary[] = {
        0xaf,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor b", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor b\n"
        ;

    static const unsigned char binary[] = {
        0xa8,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor c", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor c\n"
        ;

    static const unsigned char binary[] = {
        0xa9,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor d", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor d\n"
        ;

    static const unsigned char binary[] = {
        0xaa,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor e", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor e\n"
        ;

    static const unsigned char binary[] = {
        0xab,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor h", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor h\n"
        ;

    static const unsigned char binary[] = {
        0xac,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor l", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor l\n"
        ;

    static const unsigned char binary[] = {
        0xad,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}

TEST_CASE("xor #", "[opcodes]")
{
    static const char source[] =
        "section main [base 0x100]\n"
        "xor 170\n"
        "xor 85\n"
        "xor 0\n"
        "xor 255\n"
        ;

    static const unsigned char binary[] = {
        0xee,
        0xaa,
        0xee,
        0x55,
        0xee,
        0x00,
        0xee,
        0xff,
        };

    ErrorConsumer errorConsumer;
    DataBlob actual = assemble(errorConsumer, source);
    DataBlob expected(binary, sizeof(binary));
    REQUIRE(errorConsumer.errorCount() == 0);
    REQUIRE(errorConsumer.lastErrorMessage() == "");
    REQUIRE(actual == expected);
}
