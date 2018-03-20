#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 16
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_LBRACE_DASH_POUND = 2,
  anon_sym_POUND_DASH_RBRACE = 3,
  anon_sym_BUILTIN = 4,
  anon_sym_CATCHALL = 5,
  anon_sym_COMPILE = 6,
  anon_sym_FOREIGN = 7,
  anon_sym_NO_POSITIVITY_CHECK = 8,
  anon_sym_NO_TERMINATION_CHECK = 9,
  anon_sym_TERMINATING = 10,
  anon_sym_NON_TERMINATING = 11,
  anon_sym_POLARITY = 12,
  anon_sym_STATIC = 13,
  aux_sym_SLASH_BSLASHS_PLUS_SLASH = 14,
  sym_hello = 15,
  sym_source_file = 16,
  sym__top_level = 17,
  sym_pragma = 18,
  sym_pragma_name = 19,
  sym__pragma_argument = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_pragma_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
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
  [sym_comment] = {
    .visible = true,
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
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == 'B')
        ADVANCE(7);
      if (lookahead == 'C')
        ADVANCE(14);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead == 'N')
        ADVANCE(35);
      if (lookahead == 'P')
        ADVANCE(84);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'T')
        ADVANCE(98);
      if (lookahead == '\\')
        SKIP(109);
      if (lookahead == 'h')
        ADVANCE(110);
      if (lookahead == '{')
        ADVANCE(115);
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
      if (lookahead == '-')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'U')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'I')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'L')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'T')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'I')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'N')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BUILTIN);
      END_STATE();
    case 14:
      if (lookahead == 'A')
        ADVANCE(15);
      if (lookahead == 'O')
        ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'T')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'C')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'H')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'A')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'L')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'L')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_CATCHALL);
      END_STATE();
    case 22:
      if (lookahead == 'M')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'P')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'I')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'L')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'E')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMPILE);
      END_STATE();
    case 28:
      if (lookahead == 'O')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'R')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'E')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'I')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'G')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'N')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_FOREIGN);
      END_STATE();
    case 35:
      if (lookahead == 'O')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'N')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == '_')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'T')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'E')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'R')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'M')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'I')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'N')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'A')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'T')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'I')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'N')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'G')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_NON_TERMINATING);
      END_STATE();
    case 50:
      if (lookahead == 'P')
        ADVANCE(51);
      if (lookahead == 'T')
        ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'O')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'S')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'I')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'T')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'I')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'V')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'I')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'T')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'Y')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '_')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'C')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'H')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'E')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'C')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'K')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_NO_POSITIVITY_CHECK);
      END_STATE();
    case 67:
      if (lookahead == 'E')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'R')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'M')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'I')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'N')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'A')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'T')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'I')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'O')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'N')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == '_')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'C')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'H')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'E')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'C')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'K')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_NO_TERMINATION_CHECK);
      END_STATE();
    case 84:
      if (lookahead == 'O')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'L')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'A')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'R')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'I')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'T')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'Y')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_POLARITY);
      END_STATE();
    case 92:
      if (lookahead == 'T')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'A')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'T')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'I')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'C')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STATIC);
      END_STATE();
    case 98:
      if (lookahead == 'E')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'R')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'M')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'I')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'N')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'A')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'T')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'I')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'N')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'G')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TERMINATING);
      END_STATE();
    case 109:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 110:
      if (lookahead == 'e')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'l')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'l')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'o')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_hello);
      END_STATE();
    case 115:
      if (lookahead == '-')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH_POUND);
      END_STATE();
    case 118:
      if (lookahead == '\n')
        ADVANCE(119);
      if (lookahead == '\r')
        ADVANCE(118);
      if (lookahead == '-')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == '-')
        ADVANCE(120);
      if (lookahead != 0)
        ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == '}')
        ADVANCE(121);
      if (lookahead != 0)
        ADVANCE(119);
      END_STATE();
    case 121:
      if (lookahead == '\n')
        ADVANCE(122);
      if (lookahead == '\r')
        ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 123:
      if (lookahead == '\n')
        ADVANCE(122);
      END_STATE();
    case 124:
      if (lookahead == '\n')
        ADVANCE(119);
      if (lookahead == '\r')
        ADVANCE(118);
      if (lookahead == '-')
        ADVANCE(124);
      if (lookahead == '}')
        ADVANCE(125);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        ADVANCE(126);
      if (lookahead == '\r')
        ADVANCE(127);
      if (lookahead == '-')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(120);
      if (lookahead != 0)
        ADVANCE(119);
      END_STATE();
    case 127:
      if (lookahead == '\n')
        ADVANCE(126);
      if (lookahead == '\r')
        ADVANCE(118);
      if (lookahead == '-')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 128:
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == 'B')
        ADVANCE(132);
      if (lookahead == 'C')
        ADVANCE(139);
      if (lookahead == 'F')
        ADVANCE(153);
      if (lookahead == 'N')
        ADVANCE(160);
      if (lookahead == 'P')
        ADVANCE(209);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == 'T')
        ADVANCE(223);
      if (lookahead == '\\')
        ADVANCE(234);
      if (lookahead == '{')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      if (lookahead != 0)
        ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'U')
        ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BUILTIN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(140);
      if (lookahead == 'O')
        ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'H')
        ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_CATCHALL);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'P')
        ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_COMPILE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
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
        ADVANCE(131);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'G')
        ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_FOREIGN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(162);
      if (lookahead == '_')
        ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '_')
        ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
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
        ADVANCE(131);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'G')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_NON_TERMINATING);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'P')
        ADVANCE(176);
      if (lookahead == 'T')
        ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'S')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
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
        ADVANCE(131);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'V')
        ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
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
        ADVANCE(131);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'Y')
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '_')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'H')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'K')
        ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_NO_POSITIVITY_CHECK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '_')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'H')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
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
        ADVANCE(131);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'K')
        ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_NO_TERMINATION_CHECK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
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
        ADVANCE(131);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'Y')
        ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_POLARITY);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_STATIC);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'G')
        ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_TERMINATING);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == 'B')
        ADVANCE(132);
      if (lookahead == 'C')
        ADVANCE(139);
      if (lookahead == 'F')
        ADVANCE(153);
      if (lookahead == 'N')
        ADVANCE(160);
      if (lookahead == 'P')
        ADVANCE(209);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == 'T')
        ADVANCE(223);
      if (lookahead == '\\')
        ADVANCE(234);
      if (lookahead == '{')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(119);
      if (lookahead == '\r')
        ADVANCE(118);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(119);
      if (lookahead == '\r')
        ADVANCE(118);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '}')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(126);
      if (lookahead == '\r')
        ADVANCE(127);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(238);
      END_STATE();
    case 241:
      if (lookahead == '#')
        ADVANCE(242);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '\\')
        ADVANCE(245);
      if (lookahead == '{')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      if (lookahead != 0)
        ADVANCE(131);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '}')
        ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_POUND_DASH_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '#')
        ADVANCE(242);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '\\')
        ADVANCE(245);
      if (lookahead == '{')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 128},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 241},
  [8] = {.lex_state = 241},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 241},
  [12] = {.lex_state = 241},
  [13] = {.lex_state = 241},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 241},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(6),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(10),
    [sym_hello] = ACTIONS(12),
  },
  [2] = {
    [sym_pragma_name] = STATE(8),
    [sym_comment] = ACTIONS(14),
    [anon_sym_BUILTIN] = ACTIONS(16),
    [anon_sym_CATCHALL] = ACTIONS(16),
    [anon_sym_COMPILE] = ACTIONS(16),
    [anon_sym_FOREIGN] = ACTIONS(16),
    [anon_sym_NO_POSITIVITY_CHECK] = ACTIONS(16),
    [anon_sym_NO_TERMINATION_CHECK] = ACTIONS(16),
    [anon_sym_TERMINATING] = ACTIONS(16),
    [anon_sym_NON_TERMINATING] = ACTIONS(16),
    [anon_sym_POLARITY] = ACTIONS(16),
    [anon_sym_STATIC] = ACTIONS(16),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(16),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(18),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(18),
    [sym_hello] = ACTIONS(18),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(20),
    [sym_comment] = ACTIONS(8),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(22),
    [sym_hello] = ACTIONS(22),
  },
  [6] = {
    [sym__top_level] = STATE(5),
    [sym_pragma] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(10),
    [sym_hello] = ACTIONS(12),
  },
  [7] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(26),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(26),
  },
  [8] = {
    [sym__pragma_argument] = STATE(12),
    [aux_sym_pragma_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(28),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(30),
  },
  [9] = {
    [sym__top_level] = STATE(5),
    [sym_pragma] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(34),
    [sym_hello] = ACTIONS(37),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(40),
    [sym_hello] = ACTIONS(40),
  },
  [11] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(42),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(42),
  },
  [12] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(44),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(44),
  },
  [13] = {
    [sym__pragma_argument] = STATE(12),
    [aux_sym_pragma_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(46),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(30),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(48),
    [sym_hello] = ACTIONS(48),
  },
  [15] = {
    [sym__pragma_argument] = STATE(12),
    [aux_sym_pragma_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(50),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(52),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [6] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 0),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level, 1),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pragma_name, 1),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [34] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pragma, 3),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__pragma_argument, 1),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_pragma_repeat1, 1),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pragma, 4),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_pragma_repeat1, 2),
  [52] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(11),
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
