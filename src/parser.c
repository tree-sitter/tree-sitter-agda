#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 16
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACE_DASH_POUND = 1,
  anon_sym_POUND_DASH_RBRACE = 2,
  anon_sym_BUILTIN = 3,
  anon_sym_CATCHALL = 4,
  anon_sym_COMPILE = 5,
  anon_sym_FOREIGN = 6,
  anon_sym_NO_POSITIVITY_CHECK = 7,
  anon_sym_NO_TERMINATION_CHECK = 8,
  anon_sym_TERMINATING = 9,
  anon_sym_NON_TERMINATING = 10,
  anon_sym_POLARITY = 11,
  anon_sym_STATIC = 12,
  aux_sym_SLASH_BSLASHS_PLUS_SLASH = 13,
  sym_hello = 14,
  sym_source_file = 15,
  sym__top_level = 16,
  sym_pragma = 17,
  sym_pragma_name = 18,
  sym__pragma_argument = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_pragma_repeat1 = 21,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACE_DASH_POUND] = "{-#",
  [anon_sym_POUND_DASH_RBRACE] = "#-}",
  [anon_sym_BUILTIN] = "BUILTIN",
  [anon_sym_CATCHALL] = "CATCHALL",
  [anon_sym_COMPILE] = "COMPILE",
  [anon_sym_FOREIGN] = "FOREIGN",
  [anon_sym_NO_POSITIVITY_CHECK] = "NO_POSITIVITY_CHECK",
  [anon_sym_NO_TERMINATION_CHECK] = "NO_TERMINATION_CHECK",
  [anon_sym_TERMINATING] = "TERMINATING",
  [anon_sym_NON_TERMINATING] = "NON_TERMINATING",
  [anon_sym_POLARITY] = "POLARITY",
  [anon_sym_STATIC] = "STATIC",
  [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = "/\\S+/",
  [sym_hello] = "hello",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_pragma] = "pragma",
  [sym_pragma_name] = "pragma_name",
  [sym__pragma_argument] = "_pragma_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_pragma_repeat1] = "pragma_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_DASH_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BUILTIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CATCHALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMPILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOREIGN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NO_POSITIVITY_CHECK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NO_TERMINATION_CHECK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TERMINATING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NON_TERMINATING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POLARITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STATIC] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_hello] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_name] = {
    .visible = true,
    .named = true,
  },
  [sym__pragma_argument] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pragma_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == 'B')
        ADVANCE(5);
      if (lookahead == 'C')
        ADVANCE(12);
      if (lookahead == 'F')
        ADVANCE(26);
      if (lookahead == 'N')
        ADVANCE(33);
      if (lookahead == 'P')
        ADVANCE(82);
      if (lookahead == 'S')
        ADVANCE(90);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'h')
        ADVANCE(107);
      if (lookahead == '{')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '-')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '}')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND_DASH_RBRACE);
      END_STATE();
    case 5:
      if (lookahead == 'U')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'I')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'L')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'T')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'I')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'N')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BUILTIN);
      END_STATE();
    case 12:
      if (lookahead == 'A')
        ADVANCE(13);
      if (lookahead == 'O')
        ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'T')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'C')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'H')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'A')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'L')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'L')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_CATCHALL);
      END_STATE();
    case 20:
      if (lookahead == 'M')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'P')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'I')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'L')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'E')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMPILE);
      END_STATE();
    case 26:
      if (lookahead == 'O')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'R')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'E')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'I')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'G')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'N')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_FOREIGN);
      END_STATE();
    case 33:
      if (lookahead == 'O')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'N')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == '_')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'T')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'E')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'R')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'M')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'I')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'N')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'A')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'T')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'I')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'N')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'G')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_NON_TERMINATING);
      END_STATE();
    case 48:
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'T')
        ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'O')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'S')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'I')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'T')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'I')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'V')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'I')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'T')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'Y')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == '_')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'C')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'H')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'E')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'C')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'K')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_NO_POSITIVITY_CHECK);
      END_STATE();
    case 65:
      if (lookahead == 'E')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'R')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'M')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'I')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'N')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'A')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'T')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'I')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'O')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'N')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == '_')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'C')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'H')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'E')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'C')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'K')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_NO_TERMINATION_CHECK);
      END_STATE();
    case 82:
      if (lookahead == 'O')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'L')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'A')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'R')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'I')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'T')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'Y')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_POLARITY);
      END_STATE();
    case 90:
      if (lookahead == 'T')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'A')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'T')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'I')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'C')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STATIC);
      END_STATE();
    case 96:
      if (lookahead == 'E')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'R')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'M')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'I')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'N')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'A')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'T')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'I')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'N')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'G')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TERMINATING);
      END_STATE();
    case 107:
      if (lookahead == 'e')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'l')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'l')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'o')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_hello);
      END_STATE();
    case 112:
      if (lookahead == '-')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == '#')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH_POUND);
      END_STATE();
    case 115:
      if (lookahead == 'B')
        ADVANCE(116);
      if (lookahead == 'C')
        ADVANCE(124);
      if (lookahead == 'F')
        ADVANCE(138);
      if (lookahead == 'N')
        ADVANCE(145);
      if (lookahead == 'P')
        ADVANCE(194);
      if (lookahead == 'S')
        ADVANCE(202);
      if (lookahead == 'T')
        ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      if (lookahead != 0)
        ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'U')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BUILTIN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'O')
        ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'H')
        ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_CATCHALL);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'P')
        ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COMPILE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'G')
        ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_FOREIGN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'G')
        ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_NON_TERMINATING);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'P')
        ADVANCE(161);
      if (lookahead == 'T')
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'S')
        ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'V')
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'Y')
        ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '_')
        ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'H')
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'K')
        ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_NO_POSITIVITY_CHECK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '_')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'H')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'K')
        ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_NO_TERMINATION_CHECK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'Y')
        ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_POLARITY);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_STATIC);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'G')
        ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_TERMINATING);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 219:
      if (lookahead == '#')
        ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      if (lookahead != 0)
        ADVANCE(123);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '}')
        ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_POUND_DASH_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 115},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 219},
  [8] = {.lex_state = 219},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 219},
  [12] = {.lex_state = 219},
  [13] = {.lex_state = 219},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 219},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(1),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(1),
    [anon_sym_BUILTIN] = ACTIONS(1),
    [anon_sym_CATCHALL] = ACTIONS(1),
    [anon_sym_COMPILE] = ACTIONS(1),
    [anon_sym_FOREIGN] = ACTIONS(1),
    [anon_sym_NO_POSITIVITY_CHECK] = ACTIONS(1),
    [anon_sym_NO_TERMINATION_CHECK] = ACTIONS(1),
    [anon_sym_TERMINATING] = ACTIONS(1),
    [anon_sym_NON_TERMINATING] = ACTIONS(1),
    [anon_sym_POLARITY] = ACTIONS(1),
    [anon_sym_STATIC] = ACTIONS(1),
    [sym_hello] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [sym__top_level] = STATE(5),
    [sym_pragma] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(5),
    [sym_hello] = ACTIONS(7),
  },
  [2] = {
    [sym_pragma_name] = STATE(8),
    [anon_sym_BUILTIN] = ACTIONS(9),
    [anon_sym_CATCHALL] = ACTIONS(9),
    [anon_sym_COMPILE] = ACTIONS(9),
    [anon_sym_FOREIGN] = ACTIONS(9),
    [anon_sym_NO_POSITIVITY_CHECK] = ACTIONS(9),
    [anon_sym_NO_TERMINATION_CHECK] = ACTIONS(9),
    [anon_sym_TERMINATING] = ACTIONS(9),
    [anon_sym_NON_TERMINATING] = ACTIONS(9),
    [anon_sym_POLARITY] = ACTIONS(9),
    [anon_sym_STATIC] = ACTIONS(9),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(13),
    [sym_hello] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(17),
    [sym_hello] = ACTIONS(17),
  },
  [6] = {
    [sym__top_level] = STATE(5),
    [sym_pragma] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(5),
    [sym_hello] = ACTIONS(7),
  },
  [7] = {
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(21),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(23),
  },
  [8] = {
    [sym__pragma_argument] = STATE(12),
    [aux_sym_pragma_repeat1] = STATE(13),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(25),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(27),
  },
  [9] = {
    [sym__top_level] = STATE(5),
    [sym_pragma] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(31),
    [sym_hello] = ACTIONS(34),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(37),
    [sym_hello] = ACTIONS(37),
  },
  [11] = {
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(39),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(41),
  },
  [12] = {
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(43),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(45),
  },
  [13] = {
    [sym__pragma_argument] = STATE(12),
    [aux_sym_pragma_repeat1] = STATE(15),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(47),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(27),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(49),
    [sym_hello] = ACTIONS(49),
  },
  [15] = {
    [sym__pragma_argument] = STATE(12),
    [aux_sym_pragma_repeat1] = STATE(15),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(51),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(53),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [11] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level, 1),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_pragma_name, 1),
  [23] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pragma_name, 1),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pragma, 3),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pragma_argument, 1),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__pragma_argument, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_pragma_repeat1, 1),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_pragma_repeat1, 1),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pragma, 4),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_pragma_repeat1, 2),
  [53] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(11),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_agda() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
