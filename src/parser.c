#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 18
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__layout_semicolon = 1,
  sym__layout_open_brace = 2,
  sym__layout_close_brace = 3,
  sym_int = 4,
  sym_literal = 5,
  sym_set_n = 6,
  sym_begin_import_dir = 7,
  anon_sym_SEMI = 8,
  sym__const_forall = 9,
  sym__const_right_arrow = 10,
  anon_sym__ = 11,
  anon_sym_DOT = 12,
  anon_sym_DOT_DOT = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LBRACE_LBRACE = 16,
  anon_sym_RBRACE_RBRACE = 17,
  sym_comment = 18,
  anon_sym_LBRACE_DASH_POUND = 19,
  anon_sym_POUND_DASH_RBRACE = 20,
  anon_sym_BUILTIN = 21,
  anon_sym_CATCHALL = 22,
  anon_sym_COMPILE = 23,
  anon_sym_FOREIGN = 24,
  anon_sym_NO_POSITIVITY_CHECK = 25,
  anon_sym_NO_TERMINATION_CHECK = 26,
  anon_sym_TERMINATING = 27,
  anon_sym_NON_TERMINATING = 28,
  anon_sym_POLARITY = 29,
  anon_sym_STATIC = 30,
  anon_sym_EQ = 31,
  anon_sym_PIPE = 32,
  anon_sym_where = 33,
  anon_sym_QMARK = 34,
  anon_sym_Prop = 35,
  anon_sym_Set = 36,
  anon_sym_quote = 37,
  anon_sym_quoteTerm = 38,
  anon_sym_unquote = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_LPAREN_PIPE = 42,
  anon_sym_PIPE_RPAREN = 43,
  anon_sym_DOT_DOT_DOT = 44,
  sym_catchall_pragma = 45,
  anon_sym_COLON = 46,
  anon_sym_public = 47,
  anon_sym_using = 48,
  anon_sym_hiding = 49,
  anon_sym_renaming = 50,
  anon_sym_module = 51,
  anon_sym_to = 52,
  anon_sym_rewrite = 53,
  anon_sym_with = 54,
  sym_test = 55,
  sym_source_file = 56,
  sym_semi = 57,
  sym_vopen = 58,
  sym_vclose = 59,
  sym__declaration = 60,
  sym__declarations1 = 61,
  aux_sym__declarations1_repeat1 = 62,
};

static const char *ts_symbol_names[] = {
  [sym__layout_semicolon] = "_layout_semicolon",
  [sym__layout_open_brace] = "_layout_open_brace",
  [sym__layout_close_brace] = "_layout_close_brace",
  [ts_builtin_sym_end] = "END",
  [sym_int] = "int",
  [sym_literal] = "literal",
  [sym_set_n] = "set_n",
  [sym_begin_import_dir] = "begin_import_dir",
  [anon_sym_SEMI] = ";",
  [sym__const_forall] = "_const_forall",
  [sym__const_right_arrow] = "_const_right_arrow",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
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
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_where] = "where",
  [anon_sym_QMARK] = "?",
  [anon_sym_Prop] = "Prop",
  [anon_sym_Set] = "Set",
  [anon_sym_quote] = "quote",
  [anon_sym_quoteTerm] = "quoteTerm",
  [anon_sym_unquote] = "unquote",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN_PIPE] = "(|",
  [anon_sym_PIPE_RPAREN] = "|)",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_catchall_pragma] = "catchall_pragma",
  [anon_sym_COLON] = ":",
  [anon_sym_public] = "public",
  [anon_sym_using] = "using",
  [anon_sym_hiding] = "hiding",
  [anon_sym_renaming] = "renaming",
  [anon_sym_module] = "module",
  [anon_sym_to] = "to",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_with] = "with",
  [sym_test] = "test",
  [sym_source_file] = "source_file",
  [sym_semi] = "semi",
  [sym_vopen] = "vopen",
  [sym_vclose] = "vclose",
  [sym__declaration] = "_declaration",
  [sym__declarations1] = "_declarations1",
  [aux_sym__declarations1_repeat1] = "_declarations1_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__layout_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_open_brace] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_close_brace] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_set_n] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_import_dir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__const_forall] = {
    .visible = false,
    .named = true,
  },
  [sym__const_right_arrow] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quoteTerm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_catchall_pragma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_renaming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_semi] = {
    .visible = true,
    .named = true,
  },
  [sym_vopen] = {
    .visible = true,
    .named = true,
  },
  [sym_vclose] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__declarations1] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__declarations1_repeat1] = {
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
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '?')
        ADVANCE(17);
      if (lookahead == 'B')
        ADVANCE(18);
      if (lookahead == 'C')
        ADVANCE(25);
      if (lookahead == 'F')
        ADVANCE(63);
      if (lookahead == 'N')
        ADVANCE(70);
      if (lookahead == 'P')
        ADVANCE(119);
      if (lookahead == 'S')
        ADVANCE(130);
      if (lookahead == 'T')
        ADVANCE(138);
      if (lookahead == '\\')
        SKIP(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'h')
        ADVANCE(184);
      if (lookahead == 'l')
        ADVANCE(190);
      if (lookahead == 'm')
        ADVANCE(208);
      if (lookahead == 'p')
        ADVANCE(214);
      if (lookahead == 'q')
        ADVANCE(220);
      if (lookahead == 'r')
        ADVANCE(229);
      if (lookahead == 's')
        ADVANCE(242);
      if (lookahead == 't')
        ADVANCE(258);
      if (lookahead == 'u')
        ADVANCE(263);
      if (lookahead == 'w')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(296);
      if (lookahead == '}')
        ADVANCE(298);
      if (lookahead == 8594)
        ADVANCE(10);
      if (lookahead == 8704)
        ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(300);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '|')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN_PIPE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__const_right_arrow);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 18:
      if (lookahead == 'U')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'I')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'L')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'T')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'I')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'N')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BUILTIN);
      END_STATE();
    case 25:
      if (lookahead == 'A')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'a')
        ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'C')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'H')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'A')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'L')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'L')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_CATCHALL);
      END_STATE();
    case 33:
      if (lookahead == 'M')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'P')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'I')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'L')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'E')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMPILE);
      END_STATE();
    case 39:
      if (lookahead == 't')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'c')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'h')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'a')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'l')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'l')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'P')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'r')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'a')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'g')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'm')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'a')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == ':')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == ' ')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'u')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'd')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'e')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'f')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'i')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'n')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'd')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_catchall_pragma);
      END_STATE();
    case 63:
      if (lookahead == 'O')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'R')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'E')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'I')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'G')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'N')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_FOREIGN);
      END_STATE();
    case 70:
      if (lookahead == 'O')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'N')
        ADVANCE(72);
      if (lookahead == '_')
        ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == '_')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'T')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'E')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'R')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'M')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'I')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'N')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'A')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'T')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'I')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'N')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'G')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_NON_TERMINATING);
      END_STATE();
    case 85:
      if (lookahead == 'P')
        ADVANCE(86);
      if (lookahead == 'T')
        ADVANCE(102);
      END_STATE();
    case 86:
      if (lookahead == 'O')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'S')
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
      if (lookahead == 'I')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'V')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'I')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'T')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'Y')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == '_')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'C')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'H')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'E')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'C')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'K')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_NO_POSITIVITY_CHECK);
      END_STATE();
    case 102:
      if (lookahead == 'E')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'R')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'M')
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
      if (lookahead == 'A')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'T')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'I')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'O')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'N')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == '_')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'C')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'H')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'E')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'C')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'K')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_NO_TERMINATION_CHECK);
      END_STATE();
    case 119:
      if (lookahead == 'O')
        ADVANCE(120);
      if (lookahead == 'r')
        ADVANCE(127);
      END_STATE();
    case 120:
      if (lookahead == 'L')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'A')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'R')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'I')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'T')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'Y')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_POLARITY);
      END_STATE();
    case 127:
      if (lookahead == 'o')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'p')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Prop);
      END_STATE();
    case 130:
      if (lookahead == 'T')
        ADVANCE(131);
      if (lookahead == 'e')
        ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == 'A')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'T')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'I')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'C')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STATIC);
      END_STATE();
    case 136:
      if (lookahead == 't')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 138:
      if (lookahead == 'E')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'R')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'M')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'I')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'N')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'A')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'I')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'N')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'G')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_TERMINATING);
      END_STATE();
    case 149:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'g')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'i')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'n')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == '_')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'i')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'm')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'p')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'o')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'r')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == '_')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'd')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'i')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'r')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == ':')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == ' ')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'n')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'd')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'e')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'f')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'i')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'n')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'e')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'd')
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_begin_import_dir);
      END_STATE();
    case 178:
      if (lookahead == 'o')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'r')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'a')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'l')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'l')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__const_forall);
      END_STATE();
    case 184:
      if (lookahead == 'i')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'd')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'i')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'n')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'g')
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 190:
      if (lookahead == 'i')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 't')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'r')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'a')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'l')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == ':')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == ' ')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'u')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'n')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'd')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'e')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'f')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'i')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'n')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'e')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'd')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 208:
      if (lookahead == 'o')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'd')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'u')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'l')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'e')
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 214:
      if (lookahead == 'u')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'b')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'l')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'i')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'c')
        ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 220:
      if (lookahead == 'u')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 't')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'e')
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == 'T')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'e')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'r')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'm')
        ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      END_STATE();
    case 229:
      if (lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead == 'w')
        ADVANCE(237);
      END_STATE();
    case 231:
      if (lookahead == 'a')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'm')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'i')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'n')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'g')
        ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_renaming);
      END_STATE();
    case 237:
      if (lookahead == 'r')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'i')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 't')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'e')
        ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 242:
      if (lookahead == 'e')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 't')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == '_')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'n')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == ':')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == ' ')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'u')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'n')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'd')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'e')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'f')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'i')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'n')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'e')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'd')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_set_n);
      END_STATE();
    case 258:
      if (lookahead == 'e')
        ADVANCE(259);
      if (lookahead == 'o')
        ADVANCE(262);
      END_STATE();
    case 259:
      if (lookahead == 's')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 't')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_test);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 263:
      if (lookahead == 'n')
        ADVANCE(264);
      if (lookahead == 's')
        ADVANCE(270);
      END_STATE();
    case 264:
      if (lookahead == 'q')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'u')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'o')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 't')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'e')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_unquote);
      END_STATE();
    case 270:
      if (lookahead == 'i')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'n')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'g')
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 274:
      if (lookahead == 'h')
        ADVANCE(275);
      if (lookahead == 'i')
        ADVANCE(279);
      END_STATE();
    case 275:
      if (lookahead == 'e')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'r')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'e')
        ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 279:
      if (lookahead == 't')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'h')
        ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(283);
      if (lookahead == '{')
        ADVANCE(295);
      END_STATE();
    case 283:
      if (lookahead == '#')
        ADVANCE(284);
      if (lookahead != 0)
        ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH_POUND);
      END_STATE();
    case 285:
      if (lookahead == '\n')
        ADVANCE(286);
      if (lookahead == '\r')
        ADVANCE(285);
      if (lookahead == '-')
        ADVANCE(291);
      if (lookahead != 0)
        ADVANCE(285);
      END_STATE();
    case 286:
      if (lookahead == '-')
        ADVANCE(287);
      if (lookahead != 0)
        ADVANCE(286);
      END_STATE();
    case 287:
      if (lookahead == '}')
        ADVANCE(288);
      if (lookahead != 0)
        ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == '\n')
        ADVANCE(289);
      if (lookahead == '\r')
        ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 290:
      if (lookahead == '\n')
        ADVANCE(289);
      END_STATE();
    case 291:
      if (lookahead == '\n')
        ADVANCE(286);
      if (lookahead == '\r')
        ADVANCE(285);
      if (lookahead == '-')
        ADVANCE(291);
      if (lookahead == '}')
        ADVANCE(292);
      if (lookahead != 0)
        ADVANCE(285);
      END_STATE();
    case 292:
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '\r')
        ADVANCE(294);
      if (lookahead == '-')
        ADVANCE(291);
      if (lookahead != 0)
        ADVANCE(285);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(287);
      if (lookahead != 0)
        ADVANCE(286);
      END_STATE();
    case 294:
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '\r')
        ADVANCE(285);
      if (lookahead == '-')
        ADVANCE(291);
      if (lookahead != 0)
        ADVANCE(285);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ')')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PIPE_RPAREN);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(300);
      END_STATE();
    case 301:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(302);
      if (lookahead == '\\')
        SKIP(303);
      if (lookahead == 't')
        ADVANCE(304);
      if (lookahead == '{')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(301);
      END_STATE();
    case 302:
      if (lookahead == '-')
        ADVANCE(9);
      END_STATE();
    case 303:
      if (lookahead == 'n')
        SKIP(301);
      END_STATE();
    case 304:
      if (lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 305:
      if (lookahead == '-')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(285);
      END_STATE();
    case 307:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(302);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(308);
      if (lookahead == '{')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(307);
      END_STATE();
    case 308:
      if (lookahead == 'n')
        SKIP(307);
      END_STATE();
    case 309:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(302);
      if (lookahead == '\\')
        SKIP(310);
      if (lookahead == '{')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(309);
      END_STATE();
    case 310:
      if (lookahead == 'n')
        SKIP(309);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 301, .external_lex_state = 2},
  [2] = {.lex_state = 301, .external_lex_state = 3},
  [3] = {.lex_state = 301},
  [4] = {.lex_state = 307, .external_lex_state = 4},
  [5] = {.lex_state = 301},
  [6] = {.lex_state = 301, .external_lex_state = 3},
  [7] = {.lex_state = 301},
  [8] = {.lex_state = 307, .external_lex_state = 4},
  [9] = {.lex_state = 309, .external_lex_state = 3},
  [10] = {.lex_state = 301},
  [11] = {.lex_state = 309, .external_lex_state = 3},
  [12] = {.lex_state = 301},
  [13] = {.lex_state = 301},
  [14] = {.lex_state = 307, .external_lex_state = 4},
  [15] = {.lex_state = 301},
  [16] = {.lex_state = 307, .external_lex_state = 4},
  [17] = {.lex_state = 307, .external_lex_state = 4},
};

enum {
  ts_external_token__layout_semicolon,
  ts_external_token__layout_open_brace,
  ts_external_token__layout_close_brace,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__layout_semicolon] = sym__layout_semicolon,
  [ts_external_token__layout_open_brace] = sym__layout_open_brace,
  [ts_external_token__layout_close_brace] = sym__layout_close_brace,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_open_brace] = true,
    [ts_external_token__layout_close_brace] = true,
  },
  [2] = {
    [ts_external_token__layout_open_brace] = true,
    [ts_external_token__layout_close_brace] = true,
  },
  [3] = {
    [ts_external_token__layout_close_brace] = true,
  },
  [4] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_close_brace] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__layout_semicolon] = ACTIONS(1),
    [sym__layout_open_brace] = ACTIONS(1),
    [sym__layout_close_brace] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_int] = ACTIONS(3),
    [sym_literal] = ACTIONS(1),
    [sym_set_n] = ACTIONS(1),
    [sym_begin_import_dir] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__const_forall] = ACTIONS(1),
    [sym__const_right_arrow] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_Prop] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(3),
    [anon_sym_quoteTerm] = ACTIONS(1),
    [anon_sym_unquote] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_catchall_pragma] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_hiding] = ACTIONS(1),
    [anon_sym_renaming] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [sym_test] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym_vopen] = STATE(6),
    [sym_vclose] = STATE(7),
    [sym__declaration] = STATE(8),
    [sym__declarations1] = STATE(9),
    [sym__layout_open_brace] = ACTIONS(8),
    [sym__layout_close_brace] = ACTIONS(10),
    [ts_builtin_sym_end] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
    [sym_test] = ACTIONS(16),
  },
  [2] = {
    [sym__layout_close_brace] = ACTIONS(18),
    [ts_builtin_sym_end] = ACTIONS(18),
    [sym_comment] = ACTIONS(14),
    [sym_test] = ACTIONS(18),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(20),
    [sym_comment] = ACTIONS(14),
  },
  [4] = {
    [sym__layout_semicolon] = ACTIONS(22),
    [sym__layout_close_brace] = ACTIONS(22),
    [ts_builtin_sym_end] = ACTIONS(22),
    [anon_sym_SEMI] = ACTIONS(22),
    [sym_comment] = ACTIONS(14),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_comment] = ACTIONS(14),
  },
  [6] = {
    [sym_vclose] = STATE(10),
    [sym__declaration] = STATE(8),
    [sym__declarations1] = STATE(11),
    [sym__layout_close_brace] = ACTIONS(10),
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(14),
    [sym_test] = ACTIONS(16),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(14),
  },
  [8] = {
    [sym_semi] = STATE(13),
    [aux_sym__declarations1_repeat1] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(28),
    [sym__layout_close_brace] = ACTIONS(30),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(28),
    [sym_comment] = ACTIONS(14),
  },
  [9] = {
    [sym_vclose] = STATE(10),
    [sym__layout_close_brace] = ACTIONS(10),
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(14),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym_vclose] = STATE(15),
    [sym__layout_close_brace] = ACTIONS(10),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [sym_comment] = ACTIONS(14),
    [sym_test] = ACTIONS(34),
  },
  [13] = {
    [sym__declaration] = STATE(16),
    [sym_comment] = ACTIONS(14),
    [sym_test] = ACTIONS(16),
  },
  [14] = {
    [sym_semi] = STATE(13),
    [aux_sym__declarations1_repeat1] = STATE(17),
    [sym__layout_semicolon] = ACTIONS(28),
    [sym__layout_close_brace] = ACTIONS(36),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_SEMI] = ACTIONS(28),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [sym__layout_semicolon] = ACTIONS(40),
    [sym__layout_close_brace] = ACTIONS(40),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [sym_semi] = STATE(13),
    [aux_sym__declarations1_repeat1] = STATE(17),
    [sym__layout_semicolon] = ACTIONS(42),
    [sym__layout_close_brace] = ACTIONS(40),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(42),
    [sym_comment] = ACTIONS(14),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 0),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_vopen, 1),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_vclose, 1),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations1, 1),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 2),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_semi, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations1, 2),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 3),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [42] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(12),
};

void *tree_sitter_agda_external_scanner_create();
void tree_sitter_agda_external_scanner_destroy(void *);
bool tree_sitter_agda_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_agda_external_scanner_serialize(void *, char *);
void tree_sitter_agda_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_agda_external_scanner_create,
      tree_sitter_agda_external_scanner_destroy,
      tree_sitter_agda_external_scanner_scan,
      tree_sitter_agda_external_scanner_serialize,
      tree_sitter_agda_external_scanner_deserialize,
    },
  };
  return &language;
}
