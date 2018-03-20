#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 25
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym__ = 1,
  anon_sym_DOT = 2,
  sym__name_part = 3,
  sym_comment = 4,
  anon_sym_LBRACE_DASH_POUND = 5,
  anon_sym_POUND_DASH_RBRACE = 6,
  anon_sym_BUILTIN = 7,
  anon_sym_CATCHALL = 8,
  anon_sym_COMPILE = 9,
  anon_sym_FOREIGN = 10,
  anon_sym_NO_POSITIVITY_CHECK = 11,
  anon_sym_NO_TERMINATION_CHECK = 12,
  anon_sym_TERMINATING = 13,
  anon_sym_NON_TERMINATING = 14,
  anon_sym_POLARITY = 15,
  anon_sym_STATIC = 16,
  aux_sym_SLASH_BSLASHS_PLUS_SLASH = 17,
  anon_sym_module = 18,
  anon_sym_where = 19,
  sym_source_file = 20,
  sym__top_level = 21,
  sym_qualified_name = 22,
  sym_anonymous_name = 23,
  sym_pragma = 24,
  sym_pragma_name = 25,
  sym__pragma_argument = 26,
  sym_module_decl = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_qualified_name_repeat1 = 29,
  aux_sym_pragma_repeat1 = 30,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [sym__name_part] = "_name_part",
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
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_qualified_name] = "qualified_name",
  [sym_anonymous_name] = "anonymous_name",
  [sym_pragma] = "pragma",
  [sym_pragma_name] = "pragma_name",
  [sym__pragma_argument] = "_pragma_argument",
  [sym_module_decl] = "module_decl",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
  [aux_sym_pragma_repeat1] = "pragma_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__name_part] = {
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
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_name] = {
    .visible = true,
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
  [sym_module_decl] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_name_repeat1] = {
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
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == 'B')
        ADVANCE(8);
      if (lookahead == 'C')
        ADVANCE(15);
      if (lookahead == 'F')
        ADVANCE(29);
      if (lookahead == 'N')
        ADVANCE(36);
      if (lookahead == 'P')
        ADVANCE(85);
      if (lookahead == 'S')
        ADVANCE(93);
      if (lookahead == 'T')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(110);
      if (lookahead == '_')
        ADVANCE(111);
      if (lookahead == 'm')
        ADVANCE(112);
      if (lookahead == 'w')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(123);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 8:
      if (lookahead == 'U')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'I')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'L')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'T')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'I')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'N')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BUILTIN);
      END_STATE();
    case 15:
      if (lookahead == 'A')
        ADVANCE(16);
      if (lookahead == 'O')
        ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'T')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'C')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'H')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'A')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'L')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'L')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_CATCHALL);
      END_STATE();
    case 23:
      if (lookahead == 'M')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'P')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'I')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'L')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'E')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMPILE);
      END_STATE();
    case 29:
      if (lookahead == 'O')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'R')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'E')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'I')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'G')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'N')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_FOREIGN);
      END_STATE();
    case 36:
      if (lookahead == 'O')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'N')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == '_')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'T')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'E')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'R')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'M')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'I')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'N')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'A')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'T')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'I')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'N')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'G')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_NON_TERMINATING);
      END_STATE();
    case 51:
      if (lookahead == 'P')
        ADVANCE(52);
      if (lookahead == 'T')
        ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'O')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'S')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'I')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'T')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'I')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'V')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'I')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'T')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'Y')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '_')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'C')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'H')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'E')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'C')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'K')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_NO_POSITIVITY_CHECK);
      END_STATE();
    case 68:
      if (lookahead == 'E')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'R')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'M')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'I')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'N')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'A')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'T')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'I')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'O')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'N')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == '_')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'C')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'H')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'E')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'C')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'K')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_NO_TERMINATION_CHECK);
      END_STATE();
    case 85:
      if (lookahead == 'O')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'L')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'A')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'R')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'I')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'T')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'Y')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_POLARITY);
      END_STATE();
    case 93:
      if (lookahead == 'T')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'A')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'T')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'I')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'C')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_STATIC);
      END_STATE();
    case 99:
      if (lookahead == 'E')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'R')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'M')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'I')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'N')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'A')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'T')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'I')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'N')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'G')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TERMINATING);
      END_STATE();
    case 110:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 112:
      if (lookahead == 'o')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'd')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'u')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'l')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'e')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 118:
      if (lookahead == 'h')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'r')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'e')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 123:
      if (lookahead == '-')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == '#')
        ADVANCE(125);
      if (lookahead != 0)
        ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH_POUND);
      END_STATE();
    case 126:
      if (lookahead == '\n')
        ADVANCE(127);
      if (lookahead == '\r')
        ADVANCE(126);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead != 0)
        ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == '-')
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead != 0)
        ADVANCE(127);
      END_STATE();
    case 129:
      if (lookahead == '\n')
        ADVANCE(130);
      if (lookahead == '\r')
        ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 131:
      if (lookahead == '\n')
        ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == '\n')
        ADVANCE(127);
      if (lookahead == '\r')
        ADVANCE(126);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '}')
        ADVANCE(133);
      if (lookahead != 0)
        ADVANCE(126);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '\r')
        ADVANCE(135);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead != 0)
        ADVANCE(126);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(127);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '\r')
        ADVANCE(126);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead != 0)
        ADVANCE(126);
      END_STATE();
    case 136:
      if (lookahead == '-')
        ADVANCE(137);
      if (lookahead == 'B')
        ADVANCE(140);
      if (lookahead == 'C')
        ADVANCE(147);
      if (lookahead == 'F')
        ADVANCE(161);
      if (lookahead == 'N')
        ADVANCE(168);
      if (lookahead == 'P')
        ADVANCE(217);
      if (lookahead == 'S')
        ADVANCE(225);
      if (lookahead == 'T')
        ADVANCE(231);
      if (lookahead == '\\')
        ADVANCE(242);
      if (lookahead == '{')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'U')
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
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
        ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BUILTIN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(148);
      if (lookahead == 'O')
        ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
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
        ADVANCE(139);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'H')
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_CATCHALL);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'P')
        ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COMPILE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
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
        ADVANCE(139);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'G')
        ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_FOREIGN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(170);
      if (lookahead == '_')
        ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
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
        ADVANCE(139);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'G')
        ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_NON_TERMINATING);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'P')
        ADVANCE(184);
      if (lookahead == 'T')
        ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'S')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'V')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'Y')
        ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '_')
        ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'H')
        ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'K')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_NO_POSITIVITY_CHECK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '_')
        ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'H')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'K')
        ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_NO_TERMINATION_CHECK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'L')
        ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'Y')
        ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_POLARITY);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'C')
        ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_STATIC);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'E')
        ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'R')
        ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'M')
        ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'A')
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'I')
        ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'N')
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'G')
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_TERMINATING);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(137);
      if (lookahead == 'B')
        ADVANCE(140);
      if (lookahead == 'C')
        ADVANCE(147);
      if (lookahead == 'F')
        ADVANCE(161);
      if (lookahead == 'N')
        ADVANCE(168);
      if (lookahead == 'P')
        ADVANCE(217);
      if (lookahead == 'S')
        ADVANCE(225);
      if (lookahead == 'T')
        ADVANCE(231);
      if (lookahead == '\\')
        ADVANCE(242);
      if (lookahead == '{')
        ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead != 0)
        ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(127);
      if (lookahead == '\r')
        ADVANCE(126);
      if (lookahead == '-')
        ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead != 0)
        ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(127);
      if (lookahead == '\r')
        ADVANCE(126);
      if (lookahead == '-')
        ADVANCE(247);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead != 0)
        ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead == '\r')
        ADVANCE(135);
      if (lookahead == '-')
        ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(126);
      if (lookahead != 0)
        ADVANCE(246);
      END_STATE();
    case 249:
      if (lookahead == '-')
        ADVANCE(250);
      if (lookahead == '\\')
        ADVANCE(253);
      if (lookahead == '_')
        ADVANCE(111);
      if (lookahead == '{')
        ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__name_part);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__name_part);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__name_part);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__name_part);
      if (lookahead == 'n')
        ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__name_part);
      if (lookahead == '-')
        ADVANCE(250);
      if (lookahead == '\\')
        ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(252);
      END_STATE();
    case 255:
      if (lookahead == '-')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(126);
      END_STATE();
    case 257:
      if (lookahead == '#')
        ADVANCE(258);
      if (lookahead == '-')
        ADVANCE(137);
      if (lookahead == '\\')
        ADVANCE(261);
      if (lookahead == '{')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(257);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '-')
        ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '}')
        ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_POUND_DASH_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_PLUS_SLASH);
      if (lookahead == '#')
        ADVANCE(258);
      if (lookahead == '-')
        ADVANCE(137);
      if (lookahead == '\\')
        ADVANCE(261);
      if (lookahead == '{')
        ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(139);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 136},
  [3] = {.lex_state = 249},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 257},
  [9] = {.lex_state = 257},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 257},
  [16] = {.lex_state = 257},
  [17] = {.lex_state = 257},
  [18] = {.lex_state = 249},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 257},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [sym__top_level] = STATE(5),
    [sym_pragma] = STATE(6),
    [sym_module_decl] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(6),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
  },
  [2] = {
    [sym_pragma_name] = STATE(9),
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
    [sym_qualified_name] = STATE(12),
    [sym_anonymous_name] = STATE(12),
    [anon_sym__] = ACTIONS(18),
    [sym__name_part] = ACTIONS(20),
    [sym_comment] = ACTIONS(14),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym_comment] = ACTIONS(8),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(26),
    [anon_sym_module] = ACTIONS(26),
  },
  [7] = {
    [sym__top_level] = STATE(5),
    [sym_pragma] = STATE(6),
    [sym_module_decl] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
  },
  [8] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(30),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(30),
  },
  [9] = {
    [sym__pragma_argument] = STATE(16),
    [aux_sym_pragma_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(32),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(34),
  },
  [10] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_where] = ACTIONS(36),
  },
  [11] = {
    [aux_sym_qualified_name_repeat1] = STATE(19),
    [anon_sym_DOT] = ACTIONS(38),
    [sym_comment] = ACTIONS(8),
    [anon_sym_where] = ACTIONS(40),
  },
  [12] = {
    [sym_comment] = ACTIONS(8),
    [anon_sym_where] = ACTIONS(42),
  },
  [13] = {
    [sym__top_level] = STATE(5),
    [sym_pragma] = STATE(6),
    [sym_module_decl] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(46),
    [anon_sym_module] = ACTIONS(49),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(52),
    [anon_sym_module] = ACTIONS(52),
  },
  [15] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(54),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(54),
  },
  [16] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(56),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(56),
  },
  [17] = {
    [sym__pragma_argument] = STATE(16),
    [aux_sym_pragma_repeat1] = STATE(22),
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(58),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(34),
  },
  [18] = {
    [sym__name_part] = ACTIONS(60),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [aux_sym_qualified_name_repeat1] = STATE(24),
    [anon_sym_DOT] = ACTIONS(38),
    [sym_comment] = ACTIONS(8),
    [anon_sym_where] = ACTIONS(62),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(64),
    [anon_sym_module] = ACTIONS(64),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_comment] = ACTIONS(8),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(66),
    [anon_sym_module] = ACTIONS(66),
  },
  [22] = {
    [sym__pragma_argument] = STATE(16),
    [aux_sym_pragma_repeat1] = STATE(22),
    [sym_comment] = ACTIONS(14),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(68),
    [aux_sym_SLASH_BSLASHS_PLUS_SLASH] = ACTIONS(70),
  },
  [23] = {
    [anon_sym_DOT] = ACTIONS(73),
    [sym_comment] = ACTIONS(8),
    [anon_sym_where] = ACTIONS(73),
  },
  [24] = {
    [aux_sym_qualified_name_repeat1] = STATE(24),
    [anon_sym_DOT] = ACTIONS(75),
    [sym_comment] = ACTIONS(8),
    [anon_sym_where] = ACTIONS(73),
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
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [18] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [20] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pragma_name, 1),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_anonymous_name, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [46] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pragma, 3),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__pragma_argument, 1),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_pragma_repeat1, 1),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 2),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_decl, 3),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pragma, 4),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_pragma_repeat1, 2),
  [70] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(15),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [75] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(18),
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
