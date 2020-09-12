// cpp/options.yy.cpp generated by reflex 2.0.1 from cpp/options.l

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  OPTIONS USED                                                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#define REFLEX_OPTION_dotall              true
#define REFLEX_OPTION_fast                true
#define REFLEX_OPTION_freespace           true
#define REFLEX_OPTION_header_file         "cpp/options.yy.h"
#define REFLEX_OPTION_lex                 lex
#define REFLEX_OPTION_lexer               OptionsLexer
#define REFLEX_OPTION_noline              true
#define REFLEX_OPTION_outfile             "cpp/options.yy.cpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  SECTION 1: %top user code                                                 //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


// silence warnings from RE-flex
#ifdef _MSC_VER
#pragma warning(disable:4102)
#pragma warning(disable:4800)
#else
#ifdef __GNUC__
//#pragma GCC   diagnostic ignored "-Wignored-qualifiers"
#else
#ifdef __clang__
//#pragma clang diagnostic ignored "-Wignored-qualifiers"
#endif
#endif
#endif


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  REGEX MATCHER                                                             //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include <reflex/matcher.h>

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  ABSTRACT LEXER CLASS                                                      //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include <reflex/abslexer.h>

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  LEXER CLASS                                                               //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

class OptionsLexer : public reflex::AbstractLexer<reflex::Matcher> {
public:
    typedef reflex::AbstractLexer<reflex::Matcher> AbstractBaseLexer;
    OptionsLexer(
        const reflex::Input& input = reflex::Input(),
        std::ostream&        os    = std::cout)
        :
        AbstractBaseLexer(input, os) {
    }
    static const int INITIAL = 0;
    virtual int lex();
    int lex(
        const reflex::Input& input,
        std::ostream*        os = NULL) {
        in(input);
        if (os)
            out(*os);
        return lex();
    }
};

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  SECTION 1: %{ user code %}                                                //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------------
// z80asm restart
// Copyright (C) Paulo Custodio, 2011-2020
// License: The Artistic License 2.0, http://www.perlfoundation.org/artistic_license_2_0
//-----------------------------------------------------------------------------


#include "legacy.h"
#include "App.h"

#include <string>
#include <utility>
#include <vector>

#include <cassert>
#include <climits>
#include <cstring>
#include <cstdlib>

static const char* SkipEqual(const char* text);
static int ParseNum(const std::string& text);
static void OptionDefine(const std::string& text);
static void OptionFiller(const std::string& text);


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  SECTION 2: rules                                                          //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

extern void reflex_code_INITIAL(reflex::Matcher&);

int OptionsLexer::lex() {
    static const reflex::Pattern PATTERN_INITIAL(reflex_code_INITIAL);
    if (!has_matcher())
        matcher(new Matcher(PATTERN_INITIAL, stdinit(), this));
    while (true) {
        switch (matcher().scan()) {
        case 0:
            if (matcher().at_end())
                return int();
            else
                out().put(matcher().input());
            break;
        case 1: // rule at line 53: -\?\z|-h\z :
        { App::ExitManual(); }
        break;
        case 2: // rule at line 54: -v\z :
        { app.options.verbose = true; return true; }
        break;
        case 3: // rule at line 55: -m\z :
        { app.options.mapfile = true; return true; }
        break;
        case 4: // rule at line 56: -s\z :
        { app.options.symtable = true; return true; }
        break;
        case 5: // rule at line 57: -l\z :
        { app.options.listfile = true; return true; }
        break;
        case 6: // rule at line 58: -g\z :
        { app.options.globaldef = true; return true; }
        break;
        case 7: // rule at line 59: -b\z :
        { app.options.makeBinary = true; return true; }
        break;
        case 8: // rule at line 60: -d\z :
        { app.options.update = true; return true; }
        break;
        case 9: // rule at line 61: -R\z :
        { app.options.relocatable = true; return true; }
        break;
        case 10: // rule at line 62: -reloc-info\z :
        { app.options.relocInfo = true; return true; }
        break;
        case 11: // rule at line 63: -split-bin\z :
        { app.options.splitBinary = true; return true; }

        break;
        case 12: // rule at line 65: -m=?z80\z :
        { app.options.cpu.Init(Cpu::Type::Z80); return true; }
        break;
        case 13: // rule at line 66: -m=?z80n\z :
        { app.options.cpu.Init(Cpu::Type::Z80N); return true; }
        break;
        case 14: // rule at line 67: -m=?z180\z :
        { app.options.cpu.Init(Cpu::Type::Z180); return true; }
        break;
        case 15: // rule at line 68: -m=?r2k\z :
        { app.options.cpu.Init(Cpu::Type::R2K); return true; }
        break;
        case 16: // rule at line 69: -m=?r3k\z :
        { app.options.cpu.Init(Cpu::Type::R3K); return true; }
        break;
        case 17: // rule at line 70: -m=?8080\z :
        { app.options.cpu.Init(Cpu::Type::I8080); return true; }
        break;
        case 18: // rule at line 71: -m=?8085\z :
        { app.options.cpu.Init(Cpu::Type::I8085); return true; }
        break;
        case 19: // rule at line 72: -m=?gbz80\z :
        { app.options.cpu.Init(Cpu::Type::GBZ80); return true; }
        break;
        case 20: { // rule at line 73: -m=?ti83\z :
            app.options.cpu.Init(Cpu::Type::Z80);
            app.options.arch.Init(Arch::Type::TI83);
            return true;
        }
        break;
        case 21: { // rule at line 76: -m=?ti83plus\z :
            app.options.cpu.Init(Cpu::Type::Z80);
            app.options.arch.Init(Arch::Type::TI83PLUS);
            return true;
        }
        break;
        case 22: // rule at line 80: -IXIY\z :
        { app.options.swapIxIy = true; return true; }
        break;
        case 23: // rule at line 81: -opt-speed\z :
        { app.options.optimizeSpeed = true; return true; }
        break;
        case 24: // rule at line 82: -debug\z :
        { app.options.SetDebug(); return true; }
        break;
        case 25: // rule at line 83: -I=?[\x00-\xff]+\z :
        { app.options.includePath.push_back(SkipEqual(text() + 2));  return true; }

        break;
        case 26: // rule at line 85: -L=?[\x00-\xff]+\z :
        { app.options.libraryPath.push_back(SkipEqual(text() + 2));  return true; }
        break;
        case 27: // rule at line 86: -x=?[\x00-\xff]+\z :
        { app.options.outputLibrary = SkipEqual(text() + 2); return true; }
        break;
        case 28: // rule at line 87: -l=?[\x00-\xff]+\z :
        { app.options.libraries.push_back(SkipEqual(text() + 2)); return true; }

        break;
        case 29: // rule at line 89: -O=?[\x00-\xff]+\z :
        { app.options.outputDirectory = SkipEqual(text() + 2); return true; }
        break;
        case 30: // rule at line 90: -o=?[\x00-\xff]+\z :
        { app.options.outputFile = SkipEqual(text() + 2); return true; }

        break;
        case 31: { // rule at line 92: -D=?(?:[A-Z_a-z][0-9A-Z_a-z]*)(?:=(?:(?:0[Xx][0-9A-Fa-f]+|\$[0-9A-Fa-f]+|[0-9][0-9A-Fa-f]*[Hh])|(?:[0-9]+)))?\z :
            OptionDefine(SkipEqual(text() + 2)); return true;
        }

        break;
        case 32: // rule at line 95: \+zx\z :
        { app.options.SetAppmake(Appmake::ZX); return true; }
        break;
        case 33: // rule at line 96: \+zx81\z :
        { app.options.SetAppmake(Appmake::ZX81); return true; }

        break;
        case 34: // rule at line 98: -r=?(?:(?:0[Xx][0-9A-Fa-f]+|\$[0-9A-Fa-f]+|[0-9][0-9A-Fa-f]*[Hh])|(?:[0-9]+))\z :
        { set_origin_option(ParseNum(SkipEqual(text() + 2))); return true; }
        break;
        case 35: // rule at line 99: -f=?(?:(?:0[Xx][0-9A-Fa-f]+|\$[0-9A-Fa-f]+|[0-9][0-9A-Fa-f]*[Hh])|(?:[0-9]+))\z :
        { OptionFiller(SkipEqual(text() + 2)); return true; }

        break;
        case 36: // rule at line 101: --\z :
        { return true; }
        break;
        case 37: // rule at line 102: \z :
        { return true; }

        break;
        case 38: // rule at line 104: [\x00-\xff] :
        { return false; }

        break;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  SECTION 3: user code                                                      //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


static const char* SkipEqual(const char* text) {
    if (*text == '=')
        text++;
    return text;
}

// parse NUM
static int ParseNum(const std::string& text) {
    char* end = nullptr;
    const char* p = text.c_str();
    long lval;
    int radix;
    char suffix = '\0';

    if (p[0] == '\0') 		// empty
        return -1;
    else if (p[0] == '$') {
        p++;
        radix = 16;
    }
    else if (p[0] == '0' && tolower(p[1]) == 'x') {
        p += 2;
        radix = 16;
    }
    else if (isdigit(p[0]) && tolower(p[strlen(p) - 1]) == 'h') {
        suffix = p[strlen(p) - 1];
        radix = 16;
    }
    else
        radix = 10;

    lval = strtol(p, &end, radix);
    if (end == nullptr || *end != suffix || errno == ERANGE || lval < 0 || lval > INT_MAX)
        return -1;
    else
        return static_cast<int>(lval);
}

static void OptionDefine(const std::string& text) {
    using namespace std;

    auto p = text.find('=');
    if (p == string::npos) {		// -Dvar
        app.options.defines.push_back({ text, 1});
    }
    else {							// -Dvar=value
        string name = text.substr(0, p);
        int num = ParseNum(text.c_str() + p + 1);
        assert(num >= 0);

        app.options.defines.push_back({ name, num});
    }
}

static void OptionFiller(const std::string& text) {
    int value = ParseNum(text);
    if (value < 0 || value > 0xFF)
        error_invalid_filler_option(text.c_str());
    else
        app.options.filler = value;
}

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  TABLES                                                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include <reflex/matcher.h>

#if defined(OS_WIN)
#pragma warning(disable:4101 4102)
#elif defined(__GNUC__)
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-label"
#elif defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-label"
#endif

void reflex_code_INITIAL(reflex::Matcher& m) {
    int c0 = 0, c1 = 0;
    m.FSM_INIT(c1);

S0:
    m.FSM_FIND();
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(37, c1);
    if (c1 == '-') goto S4;
    if (c1 == '+') goto S25;
    if (0 <= c1) goto S30;
    return m.FSM_HALT(c1);

S4:
    m.FSM_TAKE(38);
    c1 = m.FSM_CHAR();
    if (c1 == 'x') goto S71;
    if (c1 == 'v') goto S36;
    if (c1 == 's') goto S46;
    if (c1 == 'r') goto S60;
    if (c1 == 'o') goto S68;
    if (c1 == 'm') goto S38;
    if (c1 == 'l') goto S49;
    if (c1 == 'h') goto S34;
    if (c1 == 'g') goto S51;
    if (c1 == 'f') goto S78;
    if (c1 == 'd') goto S55;
    if (c1 == 'b') goto S53;
    if (c1 == 'R') goto S58;
    if (c1 == 'O') goto S72;
    if (c1 == 'L') goto S70;
    if (c1 == 'I') goto S66;
    if (c1 == 'D') goto S73;
    if (c1 == '?') goto S32;
    if (c1 == '-') goto S83;
    return m.FSM_HALT(c1);

S25:
    m.FSM_TAKE(38);
    c1 = m.FSM_CHAR();
    if (c1 == 'z') goto S85;
    return m.FSM_HALT(c1);

S28:
    m.FSM_TAKE(37);
    return m.FSM_HALT();

S30:
    m.FSM_TAKE(38);
    return m.FSM_HALT();

S32:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(1, c1);
    return m.FSM_HALT(c1);

S34:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(1, c1);
    return m.FSM_HALT(c1);

S36:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(2, c1);
    return m.FSM_HALT(c1);

S38:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(3, c1);
    if (c1 == 'z') goto S93;
    if (c1 == 't') goto S103;
    if (c1 == 'r') goto S96;
    if (c1 == 'g') goto S101;
    if (c1 == '=') goto S105;
    if (c1 == '8') goto S99;
    return m.FSM_HALT(c1);

S46:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(4, c1);
    if (c1 == 'p') goto S113;
    return m.FSM_HALT(c1);

S49:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(5, c1);
    if (0 <= c1) goto S117;
    return m.FSM_HALT(c1);

S51:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(6, c1);
    return m.FSM_HALT(c1);

S53:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(7, c1);
    return m.FSM_HALT(c1);

S55:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(8, c1);
    if (c1 == 'e') goto S125;
    return m.FSM_HALT(c1);

S58:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(9, c1);
    return m.FSM_HALT(c1);

S60:
    c1 = m.FSM_CHAR();
    if (c1 == 'e') goto S129;
    if (c1 == '=') goto S151;
    if ('1' <= c1 && c1 <= '9') goto S144;
    if (c1 == '0') goto S131;
    if (c1 == '$') goto S140;
    return m.FSM_HALT(c1);

S66:
    c1 = m.FSM_CHAR();
    if (c1 == 'X') goto S155;
    if (0 <= c1) goto S158;
    return m.FSM_HALT(c1);

S68:
    c1 = m.FSM_CHAR();
    if (c1 == 'p') goto S160;
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S70:
    c1 = m.FSM_CHAR();
    if (0 <= c1) goto S165;
    return m.FSM_HALT(c1);

S71:
    c1 = m.FSM_CHAR();
    if (0 <= c1) goto S167;
    return m.FSM_HALT(c1);

S72:
    c1 = m.FSM_CHAR();
    if (0 <= c1) goto S169;
    return m.FSM_HALT(c1);

S73:
    c1 = m.FSM_CHAR();
    if ('a' <= c1 && c1 <= 'z') goto S171;
    if (c1 == '_') goto S171;
    if ('A' <= c1 && c1 <= 'Z') goto S171;
    if (c1 == '=') goto S178;
    return m.FSM_HALT(c1);

S78:
    c1 = m.FSM_CHAR();
    if (c1 == '=') goto S202;
    if ('1' <= c1 && c1 <= '9') goto S195;
    if (c1 == '0') goto S182;
    if (c1 == '$') goto S191;
    return m.FSM_HALT(c1);

S83:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(36, c1);
    return m.FSM_HALT(c1);

S85:
    c1 = m.FSM_CHAR();
    if (c1 == 'x') goto S208;
    return m.FSM_HALT(c1);

S87:
    m.FSM_TAKE(1);
    return m.FSM_HALT();

S89:
    m.FSM_TAKE(2);
    return m.FSM_HALT();

S91:
    m.FSM_TAKE(3);
    return m.FSM_HALT();

S93:
    c1 = m.FSM_CHAR();
    if (c1 == '8') goto S211;
    if (c1 == '1') goto S213;
    return m.FSM_HALT(c1);

S96:
    c1 = m.FSM_CHAR();
    if (c1 == '3') goto S217;
    if (c1 == '2') goto S215;
    return m.FSM_HALT(c1);

S99:
    c1 = m.FSM_CHAR();
    if (c1 == '0') goto S219;
    return m.FSM_HALT(c1);

S101:
    c1 = m.FSM_CHAR();
    if (c1 == 'b') goto S221;
    return m.FSM_HALT(c1);

S103:
    c1 = m.FSM_CHAR();
    if (c1 == 'i') goto S223;
    return m.FSM_HALT(c1);

S105:
    c1 = m.FSM_CHAR();
    if (c1 == 'z') goto S93;
    if (c1 == 't') goto S103;
    if (c1 == 'r') goto S96;
    if (c1 == 'g') goto S101;
    if (c1 == '8') goto S99;
    return m.FSM_HALT(c1);

S111:
    m.FSM_TAKE(4);
    return m.FSM_HALT();

S113:
    c1 = m.FSM_CHAR();
    if (c1 == 'l') goto S225;
    return m.FSM_HALT(c1);

S115:
    m.FSM_TAKE(5);
    return m.FSM_HALT();

S117:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(28, c1);
    if (0 <= c1) goto S117;
    return m.FSM_HALT(c1);

S119:
    m.FSM_TAKE(6);
    return m.FSM_HALT();

S121:
    m.FSM_TAKE(7);
    return m.FSM_HALT();

S123:
    m.FSM_TAKE(8);
    return m.FSM_HALT();

S125:
    c1 = m.FSM_CHAR();
    if (c1 == 'b') goto S229;
    return m.FSM_HALT(c1);

S127:
    m.FSM_TAKE(9);
    return m.FSM_HALT();

S129:
    c1 = m.FSM_CHAR();
    if (c1 == 'l') goto S231;
    return m.FSM_HALT(c1);

S131:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(34, c1);
    if (c1 == 'x') goto S233;
    if (c1 == 'h') goto S245;
    if ('a' <= c1 && c1 <= 'f') goto S239;
    if (c1 == 'X') goto S233;
    if (c1 == 'H') goto S245;
    if ('A' <= c1 && c1 <= 'F') goto S239;
    if ('0' <= c1 && c1 <= '9') goto S144;
    return m.FSM_HALT(c1);

S140:
    c1 = m.FSM_CHAR();
    if ('a' <= c1 && c1 <= 'f') goto S248;
    if ('A' <= c1 && c1 <= 'F') goto S248;
    if ('0' <= c1 && c1 <= '9') goto S248;
    return m.FSM_HALT(c1);

S144:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(34, c1);
    if (c1 == 'h') goto S245;
    if ('a' <= c1 && c1 <= 'f') goto S239;
    if (c1 == 'H') goto S245;
    if ('A' <= c1 && c1 <= 'F') goto S239;
    if ('0' <= c1 && c1 <= '9') goto S144;
    return m.FSM_HALT(c1);

S151:
    c1 = m.FSM_CHAR();
    if ('1' <= c1 && c1 <= '9') goto S144;
    if (c1 == '0') goto S131;
    if (c1 == '$') goto S140;
    return m.FSM_HALT(c1);

S155:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(25, c1);
    if (c1 == 'I') goto S253;
    if (0 <= c1) goto S158;
    return m.FSM_HALT(c1);

S158:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(25, c1);
    if (0 <= c1) goto S158;
    return m.FSM_HALT(c1);

S160:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(30, c1);
    if (c1 == 't') goto S258;
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S163:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(30, c1);
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S165:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(26, c1);
    if (0 <= c1) goto S165;
    return m.FSM_HALT(c1);

S167:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(27, c1);
    if (0 <= c1) goto S167;
    return m.FSM_HALT(c1);

S169:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(29, c1);
    if (0 <= c1) goto S169;
    return m.FSM_HALT(c1);

S171:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(31, c1);
    if ('a' <= c1 && c1 <= 'z') goto S171;
    if (c1 == '_') goto S171;
    if ('A' <= c1 && c1 <= 'Z') goto S171;
    if (c1 == '=') goto S271;
    if ('0' <= c1 && c1 <= '9') goto S171;
    return m.FSM_HALT(c1);

S178:
    c1 = m.FSM_CHAR();
    if ('a' <= c1 && c1 <= 'z') goto S171;
    if (c1 == '_') goto S171;
    if ('A' <= c1 && c1 <= 'Z') goto S171;
    return m.FSM_HALT(c1);

S182:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(35, c1);
    if (c1 == 'x') goto S275;
    if (c1 == 'h') goto S287;
    if ('a' <= c1 && c1 <= 'f') goto S281;
    if (c1 == 'X') goto S275;
    if (c1 == 'H') goto S287;
    if ('A' <= c1 && c1 <= 'F') goto S281;
    if ('0' <= c1 && c1 <= '9') goto S195;
    return m.FSM_HALT(c1);

S191:
    c1 = m.FSM_CHAR();
    if ('a' <= c1 && c1 <= 'f') goto S290;
    if ('A' <= c1 && c1 <= 'F') goto S290;
    if ('0' <= c1 && c1 <= '9') goto S290;
    return m.FSM_HALT(c1);

S195:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(35, c1);
    if (c1 == 'h') goto S287;
    if ('a' <= c1 && c1 <= 'f') goto S281;
    if (c1 == 'H') goto S287;
    if ('A' <= c1 && c1 <= 'F') goto S281;
    if ('0' <= c1 && c1 <= '9') goto S195;
    return m.FSM_HALT(c1);

S202:
    c1 = m.FSM_CHAR();
    if ('1' <= c1 && c1 <= '9') goto S195;
    if (c1 == '0') goto S182;
    if (c1 == '$') goto S191;
    return m.FSM_HALT(c1);

S206:
    m.FSM_TAKE(36);
    return m.FSM_HALT();

S208:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(32, c1);
    if (c1 == '8') goto S297;
    return m.FSM_HALT(c1);

S211:
    c1 = m.FSM_CHAR();
    if (c1 == '0') goto S299;
    return m.FSM_HALT(c1);

S213:
    c1 = m.FSM_CHAR();
    if (c1 == '8') goto S302;
    return m.FSM_HALT(c1);

S215:
    c1 = m.FSM_CHAR();
    if (c1 == 'k') goto S304;
    return m.FSM_HALT(c1);

S217:
    c1 = m.FSM_CHAR();
    if (c1 == 'k') goto S306;
    return m.FSM_HALT(c1);

S219:
    c1 = m.FSM_CHAR();
    if (c1 == '8') goto S308;
    return m.FSM_HALT(c1);

S221:
    c1 = m.FSM_CHAR();
    if (c1 == 'z') goto S311;
    return m.FSM_HALT(c1);

S223:
    c1 = m.FSM_CHAR();
    if (c1 == '8') goto S313;
    return m.FSM_HALT(c1);

S225:
    c1 = m.FSM_CHAR();
    if (c1 == 'i') goto S315;
    return m.FSM_HALT(c1);

S227:
    m.FSM_TAKE(28);
    return m.FSM_HALT();

S229:
    c1 = m.FSM_CHAR();
    if (c1 == 'u') goto S317;
    return m.FSM_HALT(c1);

S231:
    c1 = m.FSM_CHAR();
    if (c1 == 'o') goto S319;
    return m.FSM_HALT(c1);

S233:
    c1 = m.FSM_CHAR();
    if ('a' <= c1 && c1 <= 'f') goto S321;
    if ('A' <= c1 && c1 <= 'F') goto S321;
    if ('0' <= c1 && c1 <= '9') goto S321;
    return m.FSM_HALT(c1);

S237:
    m.FSM_TAKE(34);
    return m.FSM_HALT();

S239:
    c1 = m.FSM_CHAR();
    if (c1 == 'h') goto S326;
    if ('a' <= c1 && c1 <= 'f') goto S239;
    if (c1 == 'H') goto S326;
    if ('A' <= c1 && c1 <= 'F') goto S239;
    if ('0' <= c1 && c1 <= '9') goto S239;
    return m.FSM_HALT(c1);

S245:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(34, c1);
    if ('0' <= c1 && c1 <= '9') goto S245;
    return m.FSM_HALT(c1);

S248:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(34, c1);
    if ('a' <= c1 && c1 <= 'f') goto S248;
    if ('A' <= c1 && c1 <= 'F') goto S248;
    if ('0' <= c1 && c1 <= '9') goto S248;
    return m.FSM_HALT(c1);

S253:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(25, c1);
    if (c1 == 'Y') goto S328;
    if (0 <= c1) goto S158;
    return m.FSM_HALT(c1);

S256:
    m.FSM_TAKE(25);
    return m.FSM_HALT();

S258:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(30, c1);
    if (c1 == '-') goto S330;
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S261:
    m.FSM_TAKE(30);
    return m.FSM_HALT();

S263:
    m.FSM_TAKE(26);
    return m.FSM_HALT();

S265:
    m.FSM_TAKE(27);
    return m.FSM_HALT();

S267:
    m.FSM_TAKE(29);
    return m.FSM_HALT();

S269:
    m.FSM_TAKE(31);
    return m.FSM_HALT();

S271:
    c1 = m.FSM_CHAR();
    if ('1' <= c1 && c1 <= '9') goto S346;
    if (c1 == '0') goto S333;
    if (c1 == '$') goto S342;
    return m.FSM_HALT(c1);

S275:
    c1 = m.FSM_CHAR();
    if ('a' <= c1 && c1 <= 'f') goto S353;
    if ('A' <= c1 && c1 <= 'F') goto S353;
    if ('0' <= c1 && c1 <= '9') goto S353;
    return m.FSM_HALT(c1);

S279:
    m.FSM_TAKE(35);
    return m.FSM_HALT();

S281:
    c1 = m.FSM_CHAR();
    if (c1 == 'h') goto S358;
    if ('a' <= c1 && c1 <= 'f') goto S281;
    if (c1 == 'H') goto S358;
    if ('A' <= c1 && c1 <= 'F') goto S281;
    if ('0' <= c1 && c1 <= '9') goto S281;
    return m.FSM_HALT(c1);

S287:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(35, c1);
    if ('0' <= c1 && c1 <= '9') goto S287;
    return m.FSM_HALT(c1);

S290:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(35, c1);
    if ('a' <= c1 && c1 <= 'f') goto S290;
    if ('A' <= c1 && c1 <= 'F') goto S290;
    if ('0' <= c1 && c1 <= '9') goto S290;
    return m.FSM_HALT(c1);

S295:
    m.FSM_TAKE(32);
    return m.FSM_HALT();

S297:
    c1 = m.FSM_CHAR();
    if (c1 == '1') goto S360;
    return m.FSM_HALT(c1);

S299:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(12, c1);
    if (c1 == 'n') goto S364;
    return m.FSM_HALT(c1);

S302:
    c1 = m.FSM_CHAR();
    if (c1 == '0') goto S366;
    return m.FSM_HALT(c1);

S304:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(15, c1);
    return m.FSM_HALT(c1);

S306:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(16, c1);
    return m.FSM_HALT(c1);

S308:
    c1 = m.FSM_CHAR();
    if (c1 == '5') goto S374;
    if (c1 == '0') goto S372;
    return m.FSM_HALT(c1);

S311:
    c1 = m.FSM_CHAR();
    if (c1 == '8') goto S376;
    return m.FSM_HALT(c1);

S313:
    c1 = m.FSM_CHAR();
    if (c1 == '3') goto S378;
    return m.FSM_HALT(c1);

S315:
    c1 = m.FSM_CHAR();
    if (c1 == 't') goto S381;
    return m.FSM_HALT(c1);

S317:
    c1 = m.FSM_CHAR();
    if (c1 == 'g') goto S383;
    return m.FSM_HALT(c1);

S319:
    c1 = m.FSM_CHAR();
    if (c1 == 'c') goto S385;
    return m.FSM_HALT(c1);

S321:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(34, c1);
    if ('a' <= c1 && c1 <= 'f') goto S321;
    if ('A' <= c1 && c1 <= 'F') goto S321;
    if ('0' <= c1 && c1 <= '9') goto S321;
    return m.FSM_HALT(c1);

S326:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(34, c1);
    return m.FSM_HALT(c1);

S328:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(22, c1);
    if (0 <= c1) goto S158;
    return m.FSM_HALT(c1);

S330:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(30, c1);
    if (c1 == 's') goto S389;
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S333:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(31, c1);
    if (c1 == 'x') goto S392;
    if (c1 == 'h') goto S402;
    if ('a' <= c1 && c1 <= 'f') goto S396;
    if (c1 == 'X') goto S392;
    if (c1 == 'H') goto S402;
    if ('A' <= c1 && c1 <= 'F') goto S396;
    if ('0' <= c1 && c1 <= '9') goto S346;
    return m.FSM_HALT(c1);

S342:
    c1 = m.FSM_CHAR();
    if ('a' <= c1 && c1 <= 'f') goto S405;
    if ('A' <= c1 && c1 <= 'F') goto S405;
    if ('0' <= c1 && c1 <= '9') goto S405;
    return m.FSM_HALT(c1);

S346:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(31, c1);
    if (c1 == 'h') goto S402;
    if ('a' <= c1 && c1 <= 'f') goto S396;
    if (c1 == 'H') goto S402;
    if ('A' <= c1 && c1 <= 'F') goto S396;
    if ('0' <= c1 && c1 <= '9') goto S346;
    return m.FSM_HALT(c1);

S353:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(35, c1);
    if ('a' <= c1 && c1 <= 'f') goto S353;
    if ('A' <= c1 && c1 <= 'F') goto S353;
    if ('0' <= c1 && c1 <= '9') goto S353;
    return m.FSM_HALT(c1);

S358:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(35, c1);
    return m.FSM_HALT(c1);

S360:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(33, c1);
    return m.FSM_HALT(c1);

S362:
    m.FSM_TAKE(12);
    return m.FSM_HALT();

S364:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(13, c1);
    return m.FSM_HALT(c1);

S366:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(14, c1);
    return m.FSM_HALT(c1);

S368:
    m.FSM_TAKE(15);
    return m.FSM_HALT();

S370:
    m.FSM_TAKE(16);
    return m.FSM_HALT();

S372:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(17, c1);
    return m.FSM_HALT(c1);

S374:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(18, c1);
    return m.FSM_HALT(c1);

S376:
    c1 = m.FSM_CHAR();
    if (c1 == '0') goto S420;
    return m.FSM_HALT(c1);

S378:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(20, c1);
    if (c1 == 'p') goto S424;
    return m.FSM_HALT(c1);

S381:
    c1 = m.FSM_CHAR();
    if (c1 == '-') goto S426;
    return m.FSM_HALT(c1);

S383:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(24, c1);
    return m.FSM_HALT(c1);

S385:
    c1 = m.FSM_CHAR();
    if (c1 == '-') goto S430;
    return m.FSM_HALT(c1);

S387:
    m.FSM_TAKE(22);
    return m.FSM_HALT();

S389:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(30, c1);
    if (c1 == 'p') goto S432;
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S392:
    c1 = m.FSM_CHAR();
    if ('a' <= c1 && c1 <= 'f') goto S435;
    if ('A' <= c1 && c1 <= 'F') goto S435;
    if ('0' <= c1 && c1 <= '9') goto S435;
    return m.FSM_HALT(c1);

S396:
    c1 = m.FSM_CHAR();
    if (c1 == 'h') goto S440;
    if ('a' <= c1 && c1 <= 'f') goto S396;
    if (c1 == 'H') goto S440;
    if ('A' <= c1 && c1 <= 'F') goto S396;
    if ('0' <= c1 && c1 <= '9') goto S396;
    return m.FSM_HALT(c1);

S402:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(31, c1);
    if ('0' <= c1 && c1 <= '9') goto S402;
    return m.FSM_HALT(c1);

S405:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(31, c1);
    if ('a' <= c1 && c1 <= 'f') goto S405;
    if ('A' <= c1 && c1 <= 'F') goto S405;
    if ('0' <= c1 && c1 <= '9') goto S405;
    return m.FSM_HALT(c1);

S410:
    m.FSM_TAKE(33);
    return m.FSM_HALT();

S412:
    m.FSM_TAKE(13);
    return m.FSM_HALT();

S414:
    m.FSM_TAKE(14);
    return m.FSM_HALT();

S416:
    m.FSM_TAKE(17);
    return m.FSM_HALT();

S418:
    m.FSM_TAKE(18);
    return m.FSM_HALT();

S420:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(19, c1);
    return m.FSM_HALT(c1);

S422:
    m.FSM_TAKE(20);
    return m.FSM_HALT();

S424:
    c1 = m.FSM_CHAR();
    if (c1 == 'l') goto S444;
    return m.FSM_HALT(c1);

S426:
    c1 = m.FSM_CHAR();
    if (c1 == 'b') goto S446;
    return m.FSM_HALT(c1);

S428:
    m.FSM_TAKE(24);
    return m.FSM_HALT();

S430:
    c1 = m.FSM_CHAR();
    if (c1 == 'i') goto S448;
    return m.FSM_HALT(c1);

S432:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(30, c1);
    if (c1 == 'e') goto S450;
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S435:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(31, c1);
    if ('a' <= c1 && c1 <= 'f') goto S435;
    if ('A' <= c1 && c1 <= 'F') goto S435;
    if ('0' <= c1 && c1 <= '9') goto S435;
    return m.FSM_HALT(c1);

S440:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(31, c1);
    return m.FSM_HALT(c1);

S442:
    m.FSM_TAKE(19);
    return m.FSM_HALT();

S444:
    c1 = m.FSM_CHAR();
    if (c1 == 'u') goto S453;
    return m.FSM_HALT(c1);

S446:
    c1 = m.FSM_CHAR();
    if (c1 == 'i') goto S455;
    return m.FSM_HALT(c1);

S448:
    c1 = m.FSM_CHAR();
    if (c1 == 'n') goto S457;
    return m.FSM_HALT(c1);

S450:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(30, c1);
    if (c1 == 'e') goto S459;
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S453:
    c1 = m.FSM_CHAR();
    if (c1 == 's') goto S462;
    return m.FSM_HALT(c1);

S455:
    c1 = m.FSM_CHAR();
    if (c1 == 'n') goto S464;
    return m.FSM_HALT(c1);

S457:
    c1 = m.FSM_CHAR();
    if (c1 == 'f') goto S466;
    return m.FSM_HALT(c1);

S459:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(30, c1);
    if (c1 == 'd') goto S468;
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S462:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(21, c1);
    return m.FSM_HALT(c1);

S464:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(11, c1);
    return m.FSM_HALT(c1);

S466:
    c1 = m.FSM_CHAR();
    if (c1 == 'o') goto S474;
    return m.FSM_HALT(c1);

S468:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(23, c1);
    if (0 <= c1) goto S163;
    return m.FSM_HALT(c1);

S470:
    m.FSM_TAKE(21);
    return m.FSM_HALT();

S472:
    m.FSM_TAKE(11);
    return m.FSM_HALT();

S474:
    c1 = m.FSM_CHAR();
    if (m.FSM_META_EOB(c1))
        m.FSM_TAKE(10, c1);
    return m.FSM_HALT(c1);

S476:
    m.FSM_TAKE(23);
    return m.FSM_HALT();

S478:
    m.FSM_TAKE(10);
    return m.FSM_HALT();
}

