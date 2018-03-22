#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 625
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
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
  sym_name = 9,
  sym_name_at = 10,
  sym_qualified_name = 11,
  anon_sym__ = 12,
  anon_sym_DOT = 13,
  anon_sym_DOT_DOT = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LBRACE_LBRACE = 17,
  anon_sym_RBRACE_RBRACE = 18,
  sym_comment = 19,
  anon_sym_LBRACE_DASH_POUND = 20,
  anon_sym_POUND_DASH_RBRACE = 21,
  anon_sym_BUILTIN = 22,
  anon_sym_CATCHALL = 23,
  anon_sym_COMPILE = 24,
  anon_sym_FOREIGN = 25,
  anon_sym_NO_POSITIVITY_CHECK = 26,
  anon_sym_NO_TERMINATION_CHECK = 27,
  anon_sym_TERMINATING = 28,
  anon_sym_NON_TERMINATING = 29,
  anon_sym_POLARITY = 30,
  anon_sym_STATIC = 31,
  anon_sym_DASH_GT = 32,
  anon_sym_EQ = 33,
  anon_sym_PIPE = 34,
  anon_sym_QMARK = 35,
  anon_sym_Prop = 36,
  anon_sym_Set = 37,
  anon_sym_quote = 38,
  anon_sym_quoteTerm = 39,
  anon_sym_unquote = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  anon_sym_LPAREN_PIPE = 43,
  anon_sym_PIPE_RPAREN = 44,
  anon_sym_DOT_DOT_DOT = 45,
  sym_catchall_pragma = 46,
  anon_sym_COLON = 47,
  anon_sym_public = 48,
  anon_sym_using = 49,
  anon_sym_hiding = 50,
  anon_sym_renaming = 51,
  anon_sym_module = 52,
  anon_sym_to = 53,
  anon_sym_rewrite = 54,
  anon_sym_with = 55,
  anon_sym_where = 56,
  sym_source_file = 57,
  sym_semi = 58,
  sym__vopen = 59,
  sym__vclose = 60,
  sym_anonymous_name = 61,
  sym_expr = 62,
  sym__expr1 = 63,
  sym__application = 64,
  sym__expr2 = 65,
  sym__atomic_exprs1 = 66,
  sym_atomic_expr = 67,
  sym__atomic_expr_curly = 68,
  sym__atomic_expr_no_curly = 69,
  sym_tele_arrow = 70,
  sym_typed_bindings = 71,
  sym_lhs = 72,
  sym_rewrite_equations = 73,
  sym_with_expressions = 74,
  sym_where_clause = 75,
  sym__declaration = 76,
  sym_function_clause = 77,
  sym_rhs = 78,
  sym_declarations = 79,
  sym__declarations0 = 80,
  sym__declarations1 = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym__expr1_repeat1 = 83,
  aux_sym__application_repeat1 = 84,
  aux_sym_tele_arrow_repeat1 = 85,
  aux_sym__declarations1_repeat1 = 86,
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
  [sym_name] = "name",
  [sym_name_at] = "name_at",
  [sym_qualified_name] = "qualified_name",
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
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
  [anon_sym_where] = "where",
  [sym_source_file] = "source_file",
  [sym_semi] = "semi",
  [sym__vopen] = "_vopen",
  [sym__vclose] = "_vclose",
  [sym_anonymous_name] = "anonymous_name",
  [sym_expr] = "expr",
  [sym__expr1] = "_expr1",
  [sym__application] = "_application",
  [sym__expr2] = "_expr2",
  [sym__atomic_exprs1] = "_atomic_exprs1",
  [sym_atomic_expr] = "atomic_expr",
  [sym__atomic_expr_curly] = "_atomic_expr_curly",
  [sym__atomic_expr_no_curly] = "_atomic_expr_no_curly",
  [sym_tele_arrow] = "tele_arrow",
  [sym_typed_bindings] = "typed_bindings",
  [sym_lhs] = "lhs",
  [sym_rewrite_equations] = "rewrite_equations",
  [sym_with_expressions] = "with_expressions",
  [sym_where_clause] = "where_clause",
  [sym__declaration] = "_declaration",
  [sym_function_clause] = "function_clause",
  [sym_rhs] = "rhs",
  [sym_declarations] = "declarations",
  [sym__declarations0] = "_declarations0",
  [sym__declarations1] = "_declarations1",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__expr1_repeat1] = "_expr1_repeat1",
  [aux_sym__application_repeat1] = "_application_repeat1",
  [aux_sym_tele_arrow_repeat1] = "tele_arrow_repeat1",
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_name_at] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
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
  [anon_sym_DASH_GT] = {
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
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_semi] = {
    .visible = true,
    .named = true,
  },
  [sym__vopen] = {
    .visible = false,
    .named = true,
  },
  [sym__vclose] = {
    .visible = false,
    .named = true,
  },
  [sym_anonymous_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr1] = {
    .visible = false,
    .named = true,
  },
  [sym__application] = {
    .visible = false,
    .named = true,
  },
  [sym__expr2] = {
    .visible = false,
    .named = true,
  },
  [sym__atomic_exprs1] = {
    .visible = false,
    .named = true,
  },
  [sym_atomic_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__atomic_expr_curly] = {
    .visible = false,
    .named = true,
  },
  [sym__atomic_expr_no_curly] = {
    .visible = false,
    .named = true,
  },
  [sym_tele_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_bindings] = {
    .visible = true,
    .named = true,
  },
  [sym_lhs] = {
    .visible = true,
    .named = true,
  },
  [sym_rewrite_equations] = {
    .visible = true,
    .named = true,
  },
  [sym_with_expressions] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_function_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_rhs] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym__declarations0] = {
    .visible = false,
    .named = true,
  },
  [sym__declarations1] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__application_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tele_arrow_repeat1] = {
    .visible = false,
    .named = false,
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
      if (lookahead == 'h')
        ADVANCE(178);
      if (lookahead == 'l')
        ADVANCE(184);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'p')
        ADVANCE(208);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(223);
      if (lookahead == 's')
        ADVANCE(236);
      if (lookahead == 't')
        ADVANCE(252);
      if (lookahead == 'u')
        ADVANCE(254);
      if (lookahead == 'w')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(273);
      if (lookahead == '|')
        ADVANCE(287);
      if (lookahead == '}')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(291);
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
      ACCEPT_TOKEN(anon_sym_DASH_GT);
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
      if (lookahead == 'i')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'd')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'i')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'n')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'g')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 184:
      if (lookahead == 'i')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 't')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'r')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'a')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'l')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == ':')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == ' ')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'u')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'd')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'e')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'f')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'i')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'n')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'd')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 202:
      if (lookahead == 'o')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'd')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'u')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'l')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'e')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 208:
      if (lookahead == 'u')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'b')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'l')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'i')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'c')
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 214:
      if (lookahead == 'u')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'o')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 't')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == 'T')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'r')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'm')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      END_STATE();
    case 223:
      if (lookahead == 'e')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'w')
        ADVANCE(231);
      END_STATE();
    case 225:
      if (lookahead == 'a')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'm')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'i')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'n')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'g')
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_renaming);
      END_STATE();
    case 231:
      if (lookahead == 'r')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'i')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 't')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'e')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 236:
      if (lookahead == 'e')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 't')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == '_')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'n')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == ':')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == ' ')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'u')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'n')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'd')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'e')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'f')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'i')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'n')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'e')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'd')
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_set_n);
      END_STATE();
    case 252:
      if (lookahead == 'o')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 254:
      if (lookahead == 'n')
        ADVANCE(255);
      if (lookahead == 's')
        ADVANCE(261);
      END_STATE();
    case 255:
      if (lookahead == 'q')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'u')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'o')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 't')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'e')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_unquote);
      END_STATE();
    case 261:
      if (lookahead == 'i')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'n')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'g')
        ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 265:
      if (lookahead == 'h')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(270);
      END_STATE();
    case 266:
      if (lookahead == 'e')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'r')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'e')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 270:
      if (lookahead == 't')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'h')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(286);
      END_STATE();
    case 274:
      if (lookahead == '#')
        ADVANCE(275);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH_POUND);
      END_STATE();
    case 276:
      if (lookahead == '\n')
        ADVANCE(277);
      if (lookahead == '\r')
        ADVANCE(276);
      if (lookahead == '-')
        ADVANCE(282);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 277:
      if (lookahead == '-')
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(277);
      END_STATE();
    case 278:
      if (lookahead == '}')
        ADVANCE(279);
      if (lookahead != 0)
        ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == '\n')
        ADVANCE(280);
      if (lookahead == '\r')
        ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 281:
      if (lookahead == '\n')
        ADVANCE(280);
      END_STATE();
    case 282:
      if (lookahead == '\n')
        ADVANCE(277);
      if (lookahead == '\r')
        ADVANCE(276);
      if (lookahead == '-')
        ADVANCE(282);
      if (lookahead == '}')
        ADVANCE(283);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 283:
      if (lookahead == '\n')
        ADVANCE(284);
      if (lookahead == '\r')
        ADVANCE(285);
      if (lookahead == '-')
        ADVANCE(282);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(277);
      END_STATE();
    case 285:
      if (lookahead == '\n')
        ADVANCE(284);
      if (lookahead == '\r')
        ADVANCE(276);
      if (lookahead == '-')
        ADVANCE(282);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ')')
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_PIPE_RPAREN);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '\\')
        SKIP(294);
      if (lookahead == '{')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(292);
      END_STATE();
    case 293:
      if (lookahead == '-')
        ADVANCE(9);
      END_STATE();
    case 294:
      if (lookahead == 'n')
        SKIP(292);
      END_STATE();
    case 295:
      if (lookahead == '-')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(276);
      END_STATE();
    case 297:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(321);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(297);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_comment);
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
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name_at);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_comment);
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
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(304);
      END_STATE();
    case 305:
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
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name_at);
      END_STATE();
    case 308:
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
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == '.')
        ADVANCE(13);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'r')
        ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'o')
        ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'p')
        ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(321);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(306);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym__);
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
        ADVANCE(309);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'i')
        ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'r')
        ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'a')
        ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'l')
        ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == ':')
        ADVANCE(332);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == ' ')
        ADVANCE(192);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'u')
        ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'o')
        ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'T')
        ADVANCE(338);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'r')
        ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'm')
        ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 345:
      if (lookahead == 'n')
        ADVANCE(346);
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
        ADVANCE(309);
      END_STATE();
    case 346:
      if (lookahead == ':')
        ADVANCE(347);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(309);
      END_STATE();
    case 347:
      if (lookahead == ' ')
        ADVANCE(242);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(309);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'q')
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'u')
        ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'o')
        ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(296);
      if (lookahead == '{')
        ADVANCE(286);
      END_STATE();
    case 356:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(359);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 'r')
        ADVANCE(367);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(374);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(356);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(359);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 'r')
        ADVANCE(367);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(374);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'o')
        ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'd')
        ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'u')
        ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'l')
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'w')
        ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'r')
        ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'i')
        ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'h')
        ADVANCE(375);
      if (lookahead == 'i')
        ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'r')
        ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'h')
        ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 383:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(384);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(383);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(386);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(384);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(306);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 388:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(389);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '}')
        ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(388);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(386);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(389);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 391:
      if (lookahead == '}')
        ADVANCE(290);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(393);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'r')
        ADVANCE(394);
      if (lookahead == 'w')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(392);
      END_STATE();
    case 393:
      if (lookahead == 'n')
        SKIP(392);
      END_STATE();
    case 394:
      if (lookahead == 'e')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 'w')
        ADVANCE(231);
      END_STATE();
    case 396:
      if (lookahead == '(')
        ADVANCE(397);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(398);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(400);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(287);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 400:
      if (lookahead == 'n')
        SKIP(396);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(402);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(403);
      if (lookahead == '{')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(401);
      END_STATE();
    case 402:
      if (lookahead == 'n')
        SKIP(401);
      END_STATE();
    case 403:
      if (lookahead == 'h')
        ADVANCE(266);
      END_STATE();
    case 404:
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(405);
      if (lookahead == '{')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(404);
      END_STATE();
    case 405:
      if (lookahead == 'n')
        SKIP(404);
      END_STATE();
    case 406:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(407);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(406);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(407);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 409:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(412);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(409);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '>')
        ADVANCE(411);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(412);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 414:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(415);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(414);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(415);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 417:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(418);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '}')
        ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(417);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(418);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 420:
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(421);
      if (lookahead == '{')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(420);
      END_STATE();
    case 421:
      if (lookahead == 'n')
        SKIP(420);
      END_STATE();
    case 422:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(423);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(422);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(423);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ')')
        ADVANCE(288);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 426:
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(427);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(426);
      END_STATE();
    case 427:
      if (lookahead == 'n')
        SKIP(426);
      END_STATE();
    case 428:
      if (lookahead == '-')
        ADVANCE(429);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '{')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(428);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(433);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(430);
      if (lookahead == '_')
        ADVANCE(432);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(433);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_comment);
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
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(430);
      END_STATE();
    case 432:
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
        ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(432);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(432);
      if (lookahead == 'n')
        ADVANCE(435);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(429);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == '_')
        ADVANCE(436);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(433);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym__);
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
        ADVANCE(433);
      END_STATE();
    case 437:
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(438);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(403);
      if (lookahead == '{')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      END_STATE();
    case 438:
      if (lookahead == 'n')
        SKIP(437);
      END_STATE();
    case 439:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(440);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(439);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(440);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 442:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(443);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '}')
        ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(442);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(443);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 445:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(446);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(445);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(446);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 448:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(449);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '}')
        ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(448);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(449);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 451:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(452);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(451);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(452);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 454:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(455);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(374);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(454);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(455);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(374);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 457:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(458);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(460);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(457);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(458);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(460);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'h')
        ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 461:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(462);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(460);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(461);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(462);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(460);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 464:
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(465);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(403);
      if (lookahead == '{')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(464);
      END_STATE();
    case 465:
      if (lookahead == 'n')
        SKIP(464);
      END_STATE();
    case 466:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(467);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(466);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == ':')
        ADVANCE(357);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(467);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 469:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(311);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(470);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(460);
      if (lookahead == '{')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(469);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(305);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == '_')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(298);
      if (lookahead == '.')
        ADVANCE(323);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '?')
        ADVANCE(313);
      if (lookahead == '@')
        ADVANCE(307);
      if (lookahead == 'P')
        ADVANCE(314);
      if (lookahead == 'S')
        ADVANCE(318);
      if (lookahead == '\\')
        ADVANCE(470);
      if (lookahead == '_')
        ADVANCE(324);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(333);
      if (lookahead == 's')
        ADVANCE(342);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(460);
      if (lookahead == '|')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(310);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 292, .external_lex_state = 2},
  [2] = {.lex_state = 297, .external_lex_state = 3},
  [3] = {.lex_state = 292},
  [4] = {.lex_state = 297, .external_lex_state = 3},
  [5] = {.lex_state = 292},
  [6] = {.lex_state = 356, .external_lex_state = 4},
  [7] = {.lex_state = 297},
  [8] = {.lex_state = 383},
  [9] = {.lex_state = 388},
  [10] = {.lex_state = 383},
  [11] = {.lex_state = 383},
  [12] = {.lex_state = 292},
  [13] = {.lex_state = 392, .external_lex_state = 4},
  [14] = {.lex_state = 392, .external_lex_state = 4},
  [15] = {.lex_state = 392, .external_lex_state = 4},
  [16] = {.lex_state = 396},
  [17] = {.lex_state = 356, .external_lex_state = 4},
  [18] = {.lex_state = 356, .external_lex_state = 4},
  [19] = {.lex_state = 401, .external_lex_state = 4},
  [20] = {.lex_state = 404, .external_lex_state = 4},
  [21] = {.lex_state = 404, .external_lex_state = 4},
  [22] = {.lex_state = 297, .external_lex_state = 3},
  [23] = {.lex_state = 297},
  [24] = {.lex_state = 406},
  [25] = {.lex_state = 356, .external_lex_state = 4},
  [26] = {.lex_state = 409},
  [27] = {.lex_state = 297},
  [28] = {.lex_state = 297},
  [29] = {.lex_state = 396},
  [30] = {.lex_state = 383},
  [31] = {.lex_state = 356, .external_lex_state = 4},
  [32] = {.lex_state = 388},
  [33] = {.lex_state = 383},
  [34] = {.lex_state = 383},
  [35] = {.lex_state = 396},
  [36] = {.lex_state = 396},
  [37] = {.lex_state = 396},
  [38] = {.lex_state = 396},
  [39] = {.lex_state = 396},
  [40] = {.lex_state = 409},
  [41] = {.lex_state = 409},
  [42] = {.lex_state = 396},
  [43] = {.lex_state = 396},
  [44] = {.lex_state = 297},
  [45] = {.lex_state = 414},
  [46] = {.lex_state = 396},
  [47] = {.lex_state = 417},
  [48] = {.lex_state = 297},
  [49] = {.lex_state = 297},
  [50] = {.lex_state = 383},
  [51] = {.lex_state = 388},
  [52] = {.lex_state = 383},
  [53] = {.lex_state = 383},
  [54] = {.lex_state = 420},
  [55] = {.lex_state = 420},
  [56] = {.lex_state = 420},
  [57] = {.lex_state = 420},
  [58] = {.lex_state = 396},
  [59] = {.lex_state = 417},
  [60] = {.lex_state = 417},
  [61] = {.lex_state = 396},
  [62] = {.lex_state = 297},
  [63] = {.lex_state = 414},
  [64] = {.lex_state = 297},
  [65] = {.lex_state = 297},
  [66] = {.lex_state = 396},
  [67] = {.lex_state = 396},
  [68] = {.lex_state = 396},
  [69] = {.lex_state = 396},
  [70] = {.lex_state = 297},
  [71] = {.lex_state = 414},
  [72] = {.lex_state = 422},
  [73] = {.lex_state = 297},
  [74] = {.lex_state = 297},
  [75] = {.lex_state = 383},
  [76] = {.lex_state = 388},
  [77] = {.lex_state = 383},
  [78] = {.lex_state = 383},
  [79] = {.lex_state = 396},
  [80] = {.lex_state = 396},
  [81] = {.lex_state = 396},
  [82] = {.lex_state = 422},
  [83] = {.lex_state = 422},
  [84] = {.lex_state = 396},
  [85] = {.lex_state = 297},
  [86] = {.lex_state = 414},
  [87] = {.lex_state = 297},
  [88] = {.lex_state = 297},
  [89] = {.lex_state = 426, .external_lex_state = 4},
  [90] = {.lex_state = 401, .external_lex_state = 4},
  [91] = {.lex_state = 297},
  [92] = {.lex_state = 383},
  [93] = {.lex_state = 428},
  [94] = {.lex_state = 292, .external_lex_state = 2},
  [95] = {.lex_state = 404, .external_lex_state = 4},
  [96] = {.lex_state = 437, .external_lex_state = 4},
  [97] = {.lex_state = 297, .external_lex_state = 3},
  [98] = {.lex_state = 297, .external_lex_state = 3},
  [99] = {.lex_state = 292},
  [100] = {.lex_state = 297, .external_lex_state = 3},
  [101] = {.lex_state = 392, .external_lex_state = 4},
  [102] = {.lex_state = 297},
  [103] = {.lex_state = 392, .external_lex_state = 4},
  [104] = {.lex_state = 406},
  [105] = {.lex_state = 383},
  [106] = {.lex_state = 388},
  [107] = {.lex_state = 383},
  [108] = {.lex_state = 409},
  [109] = {.lex_state = 383},
  [110] = {.lex_state = 388},
  [111] = {.lex_state = 383},
  [112] = {.lex_state = 297},
  [113] = {.lex_state = 297},
  [114] = {.lex_state = 297},
  [115] = {.lex_state = 439},
  [116] = {.lex_state = 297},
  [117] = {.lex_state = 297},
  [118] = {.lex_state = 383},
  [119] = {.lex_state = 409},
  [120] = {.lex_state = 388},
  [121] = {.lex_state = 383},
  [122] = {.lex_state = 383},
  [123] = {.lex_state = 396},
  [124] = {.lex_state = 396},
  [125] = {.lex_state = 439},
  [126] = {.lex_state = 439},
  [127] = {.lex_state = 414},
  [128] = {.lex_state = 442},
  [129] = {.lex_state = 297},
  [130] = {.lex_state = 297},
  [131] = {.lex_state = 383},
  [132] = {.lex_state = 388},
  [133] = {.lex_state = 383},
  [134] = {.lex_state = 383},
  [135] = {.lex_state = 420},
  [136] = {.lex_state = 420},
  [137] = {.lex_state = 442},
  [138] = {.lex_state = 442},
  [139] = {.lex_state = 414},
  [140] = {.lex_state = 297},
  [141] = {.lex_state = 297},
  [142] = {.lex_state = 396},
  [143] = {.lex_state = 396},
  [144] = {.lex_state = 414},
  [145] = {.lex_state = 396},
  [146] = {.lex_state = 356, .external_lex_state = 4},
  [147] = {.lex_state = 383},
  [148] = {.lex_state = 445},
  [149] = {.lex_state = 297},
  [150] = {.lex_state = 383},
  [151] = {.lex_state = 388},
  [152] = {.lex_state = 383},
  [153] = {.lex_state = 383},
  [154] = {.lex_state = 396},
  [155] = {.lex_state = 445},
  [156] = {.lex_state = 445},
  [157] = {.lex_state = 406},
  [158] = {.lex_state = 396},
  [159] = {.lex_state = 414},
  [160] = {.lex_state = 297},
  [161] = {.lex_state = 297},
  [162] = {.lex_state = 297},
  [163] = {.lex_state = 396},
  [164] = {.lex_state = 383},
  [165] = {.lex_state = 388},
  [166] = {.lex_state = 383},
  [167] = {.lex_state = 417},
  [168] = {.lex_state = 383},
  [169] = {.lex_state = 388},
  [170] = {.lex_state = 383},
  [171] = {.lex_state = 417},
  [172] = {.lex_state = 396},
  [173] = {.lex_state = 420},
  [174] = {.lex_state = 396},
  [175] = {.lex_state = 396},
  [176] = {.lex_state = 356, .external_lex_state = 4},
  [177] = {.lex_state = 383},
  [178] = {.lex_state = 448},
  [179] = {.lex_state = 297},
  [180] = {.lex_state = 383},
  [181] = {.lex_state = 388},
  [182] = {.lex_state = 383},
  [183] = {.lex_state = 383},
  [184] = {.lex_state = 420},
  [185] = {.lex_state = 448},
  [186] = {.lex_state = 448},
  [187] = {.lex_state = 406},
  [188] = {.lex_state = 420},
  [189] = {.lex_state = 383},
  [190] = {.lex_state = 297},
  [191] = {.lex_state = 406},
  [192] = {.lex_state = 383},
  [193] = {.lex_state = 388},
  [194] = {.lex_state = 383},
  [195] = {.lex_state = 422},
  [196] = {.lex_state = 383},
  [197] = {.lex_state = 388},
  [198] = {.lex_state = 383},
  [199] = {.lex_state = 422},
  [200] = {.lex_state = 396},
  [201] = {.lex_state = 420},
  [202] = {.lex_state = 396},
  [203] = {.lex_state = 396},
  [204] = {.lex_state = 383},
  [205] = {.lex_state = 451},
  [206] = {.lex_state = 297},
  [207] = {.lex_state = 383},
  [208] = {.lex_state = 388},
  [209] = {.lex_state = 383},
  [210] = {.lex_state = 383},
  [211] = {.lex_state = 451},
  [212] = {.lex_state = 451},
  [213] = {.lex_state = 406},
  [214] = {.lex_state = 454, .external_lex_state = 4},
  [215] = {.lex_state = 297},
  [216] = {.lex_state = 383},
  [217] = {.lex_state = 388},
  [218] = {.lex_state = 383},
  [219] = {.lex_state = 383},
  [220] = {.lex_state = 426, .external_lex_state = 4},
  [221] = {.lex_state = 426, .external_lex_state = 4},
  [222] = {.lex_state = 426, .external_lex_state = 4},
  [223] = {.lex_state = 454, .external_lex_state = 4},
  [224] = {.lex_state = 454, .external_lex_state = 4},
  [225] = {.lex_state = 297},
  [226] = {.lex_state = 406},
  [227] = {.lex_state = 457, .external_lex_state = 4},
  [228] = {.lex_state = 297},
  [229] = {.lex_state = 383},
  [230] = {.lex_state = 388},
  [231] = {.lex_state = 383},
  [232] = {.lex_state = 383},
  [233] = {.lex_state = 401, .external_lex_state = 4},
  [234] = {.lex_state = 401, .external_lex_state = 4},
  [235] = {.lex_state = 401, .external_lex_state = 4},
  [236] = {.lex_state = 457, .external_lex_state = 4},
  [237] = {.lex_state = 457, .external_lex_state = 4},
  [238] = {.lex_state = 297},
  [239] = {.lex_state = 406},
  [240] = {.lex_state = 401, .external_lex_state = 4},
  [241] = {.lex_state = 461, .external_lex_state = 4},
  [242] = {.lex_state = 297},
  [243] = {.lex_state = 297},
  [244] = {.lex_state = 383},
  [245] = {.lex_state = 388},
  [246] = {.lex_state = 383},
  [247] = {.lex_state = 383},
  [248] = {.lex_state = 437, .external_lex_state = 4},
  [249] = {.lex_state = 464, .external_lex_state = 4},
  [250] = {.lex_state = 464, .external_lex_state = 4},
  [251] = {.lex_state = 464, .external_lex_state = 4},
  [252] = {.lex_state = 396},
  [253] = {.lex_state = 461, .external_lex_state = 4},
  [254] = {.lex_state = 461, .external_lex_state = 4},
  [255] = {.lex_state = 396},
  [256] = {.lex_state = 297},
  [257] = {.lex_state = 414},
  [258] = {.lex_state = 392},
  [259] = {.lex_state = 392},
  [260] = {.lex_state = 297, .external_lex_state = 3},
  [261] = {.lex_state = 404, .external_lex_state = 4},
  [262] = {.lex_state = 404, .external_lex_state = 4},
  [263] = {.lex_state = 404, .external_lex_state = 4},
  [264] = {.lex_state = 406},
  [265] = {.lex_state = 297},
  [266] = {.lex_state = 383},
  [267] = {.lex_state = 388},
  [268] = {.lex_state = 383},
  [269] = {.lex_state = 383},
  [270] = {.lex_state = 406},
  [271] = {.lex_state = 406},
  [272] = {.lex_state = 406},
  [273] = {.lex_state = 396},
  [274] = {.lex_state = 420},
  [275] = {.lex_state = 396},
  [276] = {.lex_state = 466},
  [277] = {.lex_state = 297},
  [278] = {.lex_state = 383},
  [279] = {.lex_state = 388},
  [280] = {.lex_state = 383},
  [281] = {.lex_state = 383},
  [282] = {.lex_state = 392},
  [283] = {.lex_state = 466},
  [284] = {.lex_state = 466},
  [285] = {.lex_state = 297},
  [286] = {.lex_state = 392},
  [287] = {.lex_state = 392},
  [288] = {.lex_state = 383},
  [289] = {.lex_state = 388},
  [290] = {.lex_state = 383},
  [291] = {.lex_state = 439},
  [292] = {.lex_state = 383},
  [293] = {.lex_state = 388},
  [294] = {.lex_state = 383},
  [295] = {.lex_state = 439},
  [296] = {.lex_state = 396},
  [297] = {.lex_state = 420},
  [298] = {.lex_state = 396},
  [299] = {.lex_state = 396},
  [300] = {.lex_state = 409},
  [301] = {.lex_state = 383},
  [302] = {.lex_state = 383},
  [303] = {.lex_state = 388},
  [304] = {.lex_state = 383},
  [305] = {.lex_state = 442},
  [306] = {.lex_state = 383},
  [307] = {.lex_state = 388},
  [308] = {.lex_state = 383},
  [309] = {.lex_state = 442},
  [310] = {.lex_state = 396},
  [311] = {.lex_state = 420},
  [312] = {.lex_state = 396},
  [313] = {.lex_state = 396},
  [314] = {.lex_state = 409},
  [315] = {.lex_state = 383},
  [316] = {.lex_state = 383},
  [317] = {.lex_state = 396},
  [318] = {.lex_state = 445},
  [319] = {.lex_state = 445},
  [320] = {.lex_state = 396},
  [321] = {.lex_state = 420},
  [322] = {.lex_state = 396},
  [323] = {.lex_state = 396},
  [324] = {.lex_state = 414},
  [325] = {.lex_state = 297},
  [326] = {.lex_state = 383},
  [327] = {.lex_state = 388},
  [328] = {.lex_state = 383},
  [329] = {.lex_state = 383},
  [330] = {.lex_state = 414},
  [331] = {.lex_state = 414},
  [332] = {.lex_state = 392},
  [333] = {.lex_state = 392},
  [334] = {.lex_state = 392},
  [335] = {.lex_state = 417},
  [336] = {.lex_state = 417},
  [337] = {.lex_state = 420},
  [338] = {.lex_state = 448},
  [339] = {.lex_state = 448},
  [340] = {.lex_state = 396},
  [341] = {.lex_state = 420},
  [342] = {.lex_state = 396},
  [343] = {.lex_state = 396},
  [344] = {.lex_state = 422},
  [345] = {.lex_state = 422},
  [346] = {.lex_state = 451},
  [347] = {.lex_state = 451},
  [348] = {.lex_state = 396},
  [349] = {.lex_state = 420},
  [350] = {.lex_state = 396},
  [351] = {.lex_state = 396},
  [352] = {.lex_state = 454, .external_lex_state = 4},
  [353] = {.lex_state = 454, .external_lex_state = 4},
  [354] = {.lex_state = 396},
  [355] = {.lex_state = 420},
  [356] = {.lex_state = 396},
  [357] = {.lex_state = 396},
  [358] = {.lex_state = 426, .external_lex_state = 4},
  [359] = {.lex_state = 426, .external_lex_state = 4},
  [360] = {.lex_state = 457, .external_lex_state = 4},
  [361] = {.lex_state = 457, .external_lex_state = 4},
  [362] = {.lex_state = 396},
  [363] = {.lex_state = 420},
  [364] = {.lex_state = 396},
  [365] = {.lex_state = 396},
  [366] = {.lex_state = 401, .external_lex_state = 4},
  [367] = {.lex_state = 401, .external_lex_state = 4},
  [368] = {.lex_state = 383},
  [369] = {.lex_state = 388},
  [370] = {.lex_state = 383},
  [371] = {.lex_state = 461, .external_lex_state = 4},
  [372] = {.lex_state = 383},
  [373] = {.lex_state = 388},
  [374] = {.lex_state = 383},
  [375] = {.lex_state = 461, .external_lex_state = 4},
  [376] = {.lex_state = 396},
  [377] = {.lex_state = 420},
  [378] = {.lex_state = 396},
  [379] = {.lex_state = 396},
  [380] = {.lex_state = 383},
  [381] = {.lex_state = 469, .external_lex_state = 4},
  [382] = {.lex_state = 297},
  [383] = {.lex_state = 383},
  [384] = {.lex_state = 388},
  [385] = {.lex_state = 383},
  [386] = {.lex_state = 383},
  [387] = {.lex_state = 464, .external_lex_state = 4},
  [388] = {.lex_state = 469, .external_lex_state = 4},
  [389] = {.lex_state = 469, .external_lex_state = 4},
  [390] = {.lex_state = 406},
  [391] = {.lex_state = 464, .external_lex_state = 4},
  [392] = {.lex_state = 292, .external_lex_state = 2},
  [393] = {.lex_state = 404, .external_lex_state = 4},
  [394] = {.lex_state = 356, .external_lex_state = 5},
  [395] = {.lex_state = 297},
  [396] = {.lex_state = 383},
  [397] = {.lex_state = 388},
  [398] = {.lex_state = 383},
  [399] = {.lex_state = 383},
  [400] = {.lex_state = 404, .external_lex_state = 4},
  [401] = {.lex_state = 392, .external_lex_state = 5},
  [402] = {.lex_state = 392, .external_lex_state = 5},
  [403] = {.lex_state = 392, .external_lex_state = 5},
  [404] = {.lex_state = 356, .external_lex_state = 5},
  [405] = {.lex_state = 356, .external_lex_state = 5},
  [406] = {.lex_state = 401, .external_lex_state = 5},
  [407] = {.lex_state = 404, .external_lex_state = 5},
  [408] = {.lex_state = 404, .external_lex_state = 5},
  [409] = {.lex_state = 292, .external_lex_state = 3},
  [410] = {.lex_state = 297},
  [411] = {.lex_state = 406},
  [412] = {.lex_state = 406},
  [413] = {.lex_state = 406},
  [414] = {.lex_state = 396},
  [415] = {.lex_state = 420},
  [416] = {.lex_state = 396},
  [417] = {.lex_state = 396},
  [418] = {.lex_state = 383},
  [419] = {.lex_state = 383},
  [420] = {.lex_state = 383},
  [421] = {.lex_state = 466},
  [422] = {.lex_state = 466},
  [423] = {.lex_state = 396},
  [424] = {.lex_state = 420},
  [425] = {.lex_state = 396},
  [426] = {.lex_state = 396},
  [427] = {.lex_state = 297},
  [428] = {.lex_state = 439},
  [429] = {.lex_state = 439},
  [430] = {.lex_state = 396},
  [431] = {.lex_state = 442},
  [432] = {.lex_state = 442},
  [433] = {.lex_state = 420},
  [434] = {.lex_state = 396},
  [435] = {.lex_state = 445},
  [436] = {.lex_state = 445},
  [437] = {.lex_state = 414},
  [438] = {.lex_state = 414},
  [439] = {.lex_state = 396},
  [440] = {.lex_state = 420},
  [441] = {.lex_state = 396},
  [442] = {.lex_state = 396},
  [443] = {.lex_state = 448},
  [444] = {.lex_state = 448},
  [445] = {.lex_state = 451},
  [446] = {.lex_state = 451},
  [447] = {.lex_state = 454, .external_lex_state = 4},
  [448] = {.lex_state = 454, .external_lex_state = 4},
  [449] = {.lex_state = 457, .external_lex_state = 4},
  [450] = {.lex_state = 457, .external_lex_state = 4},
  [451] = {.lex_state = 461, .external_lex_state = 4},
  [452] = {.lex_state = 461, .external_lex_state = 4},
  [453] = {.lex_state = 437, .external_lex_state = 4},
  [454] = {.lex_state = 469, .external_lex_state = 4},
  [455] = {.lex_state = 469, .external_lex_state = 4},
  [456] = {.lex_state = 396},
  [457] = {.lex_state = 420},
  [458] = {.lex_state = 396},
  [459] = {.lex_state = 396},
  [460] = {.lex_state = 404, .external_lex_state = 4},
  [461] = {.lex_state = 356, .external_lex_state = 5},
  [462] = {.lex_state = 356, .external_lex_state = 5},
  [463] = {.lex_state = 396},
  [464] = {.lex_state = 420},
  [465] = {.lex_state = 396},
  [466] = {.lex_state = 396},
  [467] = {.lex_state = 297},
  [468] = {.lex_state = 297},
  [469] = {.lex_state = 426, .external_lex_state = 5},
  [470] = {.lex_state = 401, .external_lex_state = 5},
  [471] = {.lex_state = 383},
  [472] = {.lex_state = 428},
  [473] = {.lex_state = 292, .external_lex_state = 2},
  [474] = {.lex_state = 404, .external_lex_state = 5},
  [475] = {.lex_state = 437, .external_lex_state = 5},
  [476] = {.lex_state = 297},
  [477] = {.lex_state = 297},
  [478] = {.lex_state = 404, .external_lex_state = 5},
  [479] = {.lex_state = 404, .external_lex_state = 4},
  [480] = {.lex_state = 392, .external_lex_state = 5},
  [481] = {.lex_state = 392, .external_lex_state = 5},
  [482] = {.lex_state = 406},
  [483] = {.lex_state = 406},
  [484] = {.lex_state = 396},
  [485] = {.lex_state = 420},
  [486] = {.lex_state = 396},
  [487] = {.lex_state = 466},
  [488] = {.lex_state = 466},
  [489] = {.lex_state = 297},
  [490] = {.lex_state = 297},
  [491] = {.lex_state = 383},
  [492] = {.lex_state = 388},
  [493] = {.lex_state = 383},
  [494] = {.lex_state = 383},
  [495] = {.lex_state = 297},
  [496] = {.lex_state = 297},
  [497] = {.lex_state = 396},
  [498] = {.lex_state = 414},
  [499] = {.lex_state = 414},
  [500] = {.lex_state = 469, .external_lex_state = 4},
  [501] = {.lex_state = 469, .external_lex_state = 4},
  [502] = {.lex_state = 356, .external_lex_state = 5},
  [503] = {.lex_state = 356, .external_lex_state = 5},
  [504] = {.lex_state = 454, .external_lex_state = 5},
  [505] = {.lex_state = 297},
  [506] = {.lex_state = 383},
  [507] = {.lex_state = 388},
  [508] = {.lex_state = 383},
  [509] = {.lex_state = 383},
  [510] = {.lex_state = 426, .external_lex_state = 5},
  [511] = {.lex_state = 426, .external_lex_state = 5},
  [512] = {.lex_state = 426, .external_lex_state = 5},
  [513] = {.lex_state = 454, .external_lex_state = 5},
  [514] = {.lex_state = 454, .external_lex_state = 5},
  [515] = {.lex_state = 297},
  [516] = {.lex_state = 406},
  [517] = {.lex_state = 457, .external_lex_state = 5},
  [518] = {.lex_state = 297},
  [519] = {.lex_state = 383},
  [520] = {.lex_state = 388},
  [521] = {.lex_state = 383},
  [522] = {.lex_state = 383},
  [523] = {.lex_state = 401, .external_lex_state = 5},
  [524] = {.lex_state = 401, .external_lex_state = 5},
  [525] = {.lex_state = 401, .external_lex_state = 5},
  [526] = {.lex_state = 457, .external_lex_state = 5},
  [527] = {.lex_state = 457, .external_lex_state = 5},
  [528] = {.lex_state = 297},
  [529] = {.lex_state = 406},
  [530] = {.lex_state = 401, .external_lex_state = 5},
  [531] = {.lex_state = 461, .external_lex_state = 5},
  [532] = {.lex_state = 297},
  [533] = {.lex_state = 297},
  [534] = {.lex_state = 383},
  [535] = {.lex_state = 388},
  [536] = {.lex_state = 383},
  [537] = {.lex_state = 383},
  [538] = {.lex_state = 437, .external_lex_state = 5},
  [539] = {.lex_state = 464, .external_lex_state = 5},
  [540] = {.lex_state = 464, .external_lex_state = 5},
  [541] = {.lex_state = 464, .external_lex_state = 5},
  [542] = {.lex_state = 396},
  [543] = {.lex_state = 461, .external_lex_state = 5},
  [544] = {.lex_state = 461, .external_lex_state = 5},
  [545] = {.lex_state = 396},
  [546] = {.lex_state = 297},
  [547] = {.lex_state = 414},
  [548] = {.lex_state = 392},
  [549] = {.lex_state = 297, .external_lex_state = 3},
  [550] = {.lex_state = 404, .external_lex_state = 5},
  [551] = {.lex_state = 404, .external_lex_state = 5},
  [552] = {.lex_state = 404, .external_lex_state = 5},
  [553] = {.lex_state = 404, .external_lex_state = 5},
  [554] = {.lex_state = 404, .external_lex_state = 5},
  [555] = {.lex_state = 396},
  [556] = {.lex_state = 297},
  [557] = {.lex_state = 297},
  [558] = {.lex_state = 396},
  [559] = {.lex_state = 420},
  [560] = {.lex_state = 396},
  [561] = {.lex_state = 396},
  [562] = {.lex_state = 454, .external_lex_state = 5},
  [563] = {.lex_state = 454, .external_lex_state = 5},
  [564] = {.lex_state = 396},
  [565] = {.lex_state = 420},
  [566] = {.lex_state = 396},
  [567] = {.lex_state = 396},
  [568] = {.lex_state = 426, .external_lex_state = 5},
  [569] = {.lex_state = 426, .external_lex_state = 5},
  [570] = {.lex_state = 457, .external_lex_state = 5},
  [571] = {.lex_state = 457, .external_lex_state = 5},
  [572] = {.lex_state = 396},
  [573] = {.lex_state = 420},
  [574] = {.lex_state = 396},
  [575] = {.lex_state = 396},
  [576] = {.lex_state = 401, .external_lex_state = 5},
  [577] = {.lex_state = 401, .external_lex_state = 5},
  [578] = {.lex_state = 383},
  [579] = {.lex_state = 388},
  [580] = {.lex_state = 383},
  [581] = {.lex_state = 461, .external_lex_state = 5},
  [582] = {.lex_state = 383},
  [583] = {.lex_state = 388},
  [584] = {.lex_state = 383},
  [585] = {.lex_state = 461, .external_lex_state = 5},
  [586] = {.lex_state = 396},
  [587] = {.lex_state = 420},
  [588] = {.lex_state = 396},
  [589] = {.lex_state = 396},
  [590] = {.lex_state = 383},
  [591] = {.lex_state = 469, .external_lex_state = 5},
  [592] = {.lex_state = 297},
  [593] = {.lex_state = 383},
  [594] = {.lex_state = 388},
  [595] = {.lex_state = 383},
  [596] = {.lex_state = 383},
  [597] = {.lex_state = 464, .external_lex_state = 5},
  [598] = {.lex_state = 469, .external_lex_state = 5},
  [599] = {.lex_state = 469, .external_lex_state = 5},
  [600] = {.lex_state = 406},
  [601] = {.lex_state = 464, .external_lex_state = 5},
  [602] = {.lex_state = 292, .external_lex_state = 2},
  [603] = {.lex_state = 404, .external_lex_state = 5},
  [604] = {.lex_state = 404, .external_lex_state = 5},
  [605] = {.lex_state = 292, .external_lex_state = 3},
  [606] = {.lex_state = 297},
  [607] = {.lex_state = 297},
  [608] = {.lex_state = 454, .external_lex_state = 5},
  [609] = {.lex_state = 454, .external_lex_state = 5},
  [610] = {.lex_state = 457, .external_lex_state = 5},
  [611] = {.lex_state = 457, .external_lex_state = 5},
  [612] = {.lex_state = 461, .external_lex_state = 5},
  [613] = {.lex_state = 461, .external_lex_state = 5},
  [614] = {.lex_state = 437, .external_lex_state = 5},
  [615] = {.lex_state = 469, .external_lex_state = 5},
  [616] = {.lex_state = 469, .external_lex_state = 5},
  [617] = {.lex_state = 396},
  [618] = {.lex_state = 420},
  [619] = {.lex_state = 396},
  [620] = {.lex_state = 396},
  [621] = {.lex_state = 404, .external_lex_state = 5},
  [622] = {.lex_state = 404, .external_lex_state = 5},
  [623] = {.lex_state = 469, .external_lex_state = 5},
  [624] = {.lex_state = 469, .external_lex_state = 5},
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

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_open_brace] = true,
    [ts_external_token__layout_close_brace] = true,
  },
  [2] = {
    [ts_external_token__layout_open_brace] = true,
  },
  [3] = {
    [ts_external_token__layout_close_brace] = true,
  },
  [4] = {
    [ts_external_token__layout_semicolon] = true,
  },
  [5] = {
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
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
    [anon_sym_where] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym__vopen] = STATE(4),
    [sym__layout_open_brace] = ACTIONS(8),
    [sym_comment] = ACTIONS(10),
  },
  [2] = {
    [sym__layout_close_brace] = ACTIONS(12),
    [ts_builtin_sym_end] = ACTIONS(14),
    [sym_literal] = ACTIONS(14),
    [sym_set_n] = ACTIONS(14),
    [sym_name_at] = ACTIONS(14),
    [sym_qualified_name] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [anon_sym_DOT] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(14),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(14),
    [anon_sym_Prop] = ACTIONS(14),
    [anon_sym_Set] = ACTIONS(14),
    [anon_sym_quote] = ACTIONS(14),
    [anon_sym_quoteTerm] = ACTIONS(14),
    [anon_sym_unquote] = ACTIONS(14),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_LPAREN_PIPE] = ACTIONS(14),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(14),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(18),
    [sym_comment] = ACTIONS(10),
  },
  [4] = {
    [sym__vclose] = STATE(12),
    [sym__expr1] = STATE(13),
    [sym__application] = STATE(14),
    [sym__expr2] = STATE(15),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(17),
    [sym__atomic_expr_curly] = STATE(18),
    [sym__atomic_expr_no_curly] = STATE(18),
    [sym_lhs] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym_function_clause] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(22),
    [aux_sym__expr1_repeat1] = STATE(23),
    [aux_sym__application_repeat1] = STATE(24),
    [sym__layout_close_brace] = ACTIONS(20),
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(26),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(30),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_LPAREN_PIPE] = ACTIONS(34),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_comment] = ACTIONS(10),
  },
  [6] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_rewrite] = ACTIONS(40),
    [anon_sym_with] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [7] = {
    [sym_atomic_expr] = STATE(25),
    [sym__atomic_expr_curly] = STATE(18),
    [sym__atomic_expr_no_curly] = STATE(18),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(26),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(30),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_LPAREN_PIPE] = ACTIONS(34),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [8] = {
    [sym_expr] = STATE(35),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [9] = {
    [sym_expr] = STATE(54),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [10] = {
    [sym_expr] = STATE(66),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [11] = {
    [sym_expr] = STATE(79),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_comment] = ACTIONS(10),
  },
  [13] = {
    [sym_rewrite_equations] = STATE(89),
    [sym_with_expressions] = STATE(90),
    [sym__layout_semicolon] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(96),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_rewrite] = ACTIONS(98),
    [anon_sym_with] = ACTIONS(100),
    [anon_sym_where] = ACTIONS(96),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_rewrite] = ACTIONS(102),
    [anon_sym_with] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
  },
  [15] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_rewrite] = ACTIONS(104),
    [anon_sym_with] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
  },
  [16] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE] = ACTIONS(106),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_rewrite] = ACTIONS(112),
    [anon_sym_with] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [18] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_rewrite] = ACTIONS(116),
    [anon_sym_with] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [19] = {
    [sym_where_clause] = STATE(95),
    [sym_rhs] = STATE(96),
    [sym__layout_semicolon] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(118),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(122),
    [anon_sym_where] = ACTIONS(124),
  },
  [20] = {
    [sym_semi] = STATE(98),
    [sym__layout_semicolon] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [sym_comment] = ACTIONS(10),
  },
  [21] = {
    [sym__layout_semicolon] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(128),
    [sym_comment] = ACTIONS(10),
  },
  [22] = {
    [sym__vclose] = STATE(99),
    [sym__expr1] = STATE(13),
    [sym__application] = STATE(14),
    [sym__expr2] = STATE(15),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(17),
    [sym__atomic_expr_curly] = STATE(18),
    [sym__atomic_expr_no_curly] = STATE(18),
    [sym_lhs] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym_function_clause] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(100),
    [aux_sym__expr1_repeat1] = STATE(23),
    [aux_sym__application_repeat1] = STATE(24),
    [sym__layout_close_brace] = ACTIONS(20),
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(26),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(30),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_LPAREN_PIPE] = ACTIONS(34),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [23] = {
    [sym__application] = STATE(101),
    [sym__expr2] = STATE(15),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(17),
    [sym__atomic_expr_curly] = STATE(18),
    [sym__atomic_expr_no_curly] = STATE(18),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(24),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(26),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(30),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_LPAREN_PIPE] = ACTIONS(34),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [24] = {
    [sym__expr2] = STATE(103),
    [sym_atomic_expr] = STATE(17),
    [sym__atomic_expr_curly] = STATE(18),
    [sym__atomic_expr_no_curly] = STATE(18),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(26),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(30),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_LPAREN_PIPE] = ACTIONS(34),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_rewrite] = ACTIONS(136),
    [anon_sym_with] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [26] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
  },
  [27] = {
    [sym_atomic_expr] = STATE(108),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(140),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [28] = {
    [sym_atomic_expr] = STATE(108),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [29] = {
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(10),
    [anon_sym_LPAREN] = ACTIONS(154),
  },
  [30] = {
    [sym_expr] = STATE(123),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(124),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [31] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_rewrite] = ACTIONS(174),
    [anon_sym_with] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [32] = {
    [sym_expr] = STATE(135),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(186),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [33] = {
    [sym_expr] = STATE(142),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(143),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [34] = {
    [sym_expr] = STATE(145),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [35] = {
    [anon_sym_RBRACE] = ACTIONS(196),
    [sym_comment] = ACTIONS(10),
  },
  [36] = {
    [anon_sym_RBRACE] = ACTIONS(198),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(200),
  },
  [37] = {
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_PIPE_RPAREN] = ACTIONS(102),
  },
  [38] = {
    [anon_sym_RBRACE] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_PIPE_RPAREN] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
  },
  [39] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(106),
  },
  [40] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [41] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [42] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(200),
  },
  [43] = {
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_DOT_DOT] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(204),
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(204),
  },
  [44] = {
    [sym__application] = STATE(154),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(155),
    [sym__atomic_expr_curly] = STATE(156),
    [sym__atomic_expr_no_curly] = STATE(156),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(157),
    [sym_literal] = ACTIONS(206),
    [sym_set_n] = ACTIONS(206),
    [sym_name_at] = ACTIONS(208),
    [sym_qualified_name] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(212),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_Prop] = ACTIONS(206),
    [anon_sym_Set] = ACTIONS(206),
    [anon_sym_quote] = ACTIONS(206),
    [anon_sym_quoteTerm] = ACTIONS(206),
    [anon_sym_unquote] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_LPAREN_PIPE] = ACTIONS(216),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(206),
  },
  [45] = {
    [sym__expr2] = STATE(158),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(140),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [46] = {
    [sym_typed_bindings] = STATE(43),
    [aux_sym_tele_arrow_repeat1] = STATE(163),
    [anon_sym_DOT] = ACTIONS(218),
    [anon_sym_DOT_DOT] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(224),
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(228),
  },
  [47] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
  },
  [48] = {
    [sym_atomic_expr] = STATE(167),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(232),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [49] = {
    [sym_atomic_expr] = STATE(167),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(238),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [50] = {
    [sym_expr] = STATE(172),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(124),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [51] = {
    [sym_expr] = STATE(173),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(244),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [52] = {
    [sym_expr] = STATE(174),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(143),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [53] = {
    [sym_expr] = STATE(175),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [54] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(246),
    [sym_comment] = ACTIONS(10),
  },
  [55] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(198),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(248),
  },
  [56] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
  },
  [57] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
  },
  [58] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(106),
  },
  [59] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(112),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [60] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [61] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(248),
  },
  [62] = {
    [sym__application] = STATE(184),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(185),
    [sym__atomic_expr_curly] = STATE(186),
    [sym__atomic_expr_no_curly] = STATE(186),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(187),
    [sym_literal] = ACTIONS(250),
    [sym_set_n] = ACTIONS(250),
    [sym_name_at] = ACTIONS(252),
    [sym_qualified_name] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [anon_sym_DOT] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(256),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(250),
    [anon_sym_Prop] = ACTIONS(250),
    [anon_sym_Set] = ACTIONS(250),
    [anon_sym_quote] = ACTIONS(250),
    [anon_sym_quoteTerm] = ACTIONS(250),
    [anon_sym_unquote] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LPAREN_PIPE] = ACTIONS(260),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(250),
  },
  [63] = {
    [sym__expr2] = STATE(188),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(232),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [64] = {
    [sym_atomic_expr] = STATE(108),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(140),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [65] = {
    [sym_atomic_expr] = STATE(108),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [66] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(246),
  },
  [67] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(198),
  },
  [68] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(106),
  },
  [69] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(262),
  },
  [70] = {
    [sym__application] = STATE(154),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(155),
    [sym__atomic_expr_curly] = STATE(156),
    [sym__atomic_expr_no_curly] = STATE(156),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(191),
    [sym_literal] = ACTIONS(206),
    [sym_set_n] = ACTIONS(206),
    [sym_name_at] = ACTIONS(264),
    [sym_qualified_name] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(212),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_Prop] = ACTIONS(206),
    [anon_sym_Set] = ACTIONS(206),
    [anon_sym_quote] = ACTIONS(206),
    [anon_sym_quoteTerm] = ACTIONS(206),
    [anon_sym_unquote] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_LPAREN_PIPE] = ACTIONS(216),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(206),
  },
  [71] = {
    [sym__expr2] = STATE(158),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(140),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [72] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_PIPE_RPAREN] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
  },
  [73] = {
    [sym_atomic_expr] = STATE(195),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(268),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [74] = {
    [sym_atomic_expr] = STATE(195),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(274),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [75] = {
    [sym_expr] = STATE(200),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(124),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [76] = {
    [sym_expr] = STATE(201),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(280),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [77] = {
    [sym_expr] = STATE(202),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(143),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [78] = {
    [sym_expr] = STATE(203),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [79] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(246),
  },
  [80] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(282),
    [anon_sym_PIPE_RPAREN] = ACTIONS(198),
  },
  [81] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(282),
    [anon_sym_PIPE] = ACTIONS(106),
  },
  [82] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_PIPE_RPAREN] = ACTIONS(112),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [83] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_PIPE_RPAREN] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [84] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(282),
  },
  [85] = {
    [sym__application] = STATE(154),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(211),
    [sym__atomic_expr_curly] = STATE(212),
    [sym__atomic_expr_no_curly] = STATE(212),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(213),
    [sym_literal] = ACTIONS(284),
    [sym_set_n] = ACTIONS(284),
    [sym_name_at] = ACTIONS(286),
    [sym_qualified_name] = ACTIONS(284),
    [anon_sym__] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(290),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(284),
    [anon_sym_Prop] = ACTIONS(284),
    [anon_sym_Set] = ACTIONS(284),
    [anon_sym_quote] = ACTIONS(284),
    [anon_sym_quoteTerm] = ACTIONS(284),
    [anon_sym_unquote] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_LPAREN_PIPE] = ACTIONS(294),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(284),
  },
  [86] = {
    [sym__expr2] = STATE(158),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(268),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [87] = {
    [sym__expr1] = STATE(220),
    [sym__application] = STATE(221),
    [sym__expr2] = STATE(222),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(223),
    [sym__atomic_expr_curly] = STATE(224),
    [sym__atomic_expr_no_curly] = STATE(224),
    [aux_sym__expr1_repeat1] = STATE(225),
    [aux_sym__application_repeat1] = STATE(226),
    [sym_literal] = ACTIONS(296),
    [sym_set_n] = ACTIONS(296),
    [sym_name_at] = ACTIONS(298),
    [sym_qualified_name] = ACTIONS(296),
    [anon_sym__] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(302),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_Prop] = ACTIONS(296),
    [anon_sym_Set] = ACTIONS(296),
    [anon_sym_quote] = ACTIONS(296),
    [anon_sym_quoteTerm] = ACTIONS(296),
    [anon_sym_unquote] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_LPAREN_PIPE] = ACTIONS(306),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(296),
  },
  [88] = {
    [sym__expr1] = STATE(233),
    [sym__application] = STATE(234),
    [sym__expr2] = STATE(235),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(236),
    [sym__atomic_expr_curly] = STATE(237),
    [sym__atomic_expr_no_curly] = STATE(237),
    [aux_sym__expr1_repeat1] = STATE(238),
    [aux_sym__application_repeat1] = STATE(239),
    [sym_literal] = ACTIONS(308),
    [sym_set_n] = ACTIONS(308),
    [sym_name_at] = ACTIONS(310),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(314),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(308),
  },
  [89] = {
    [sym_with_expressions] = STATE(240),
    [sym__layout_semicolon] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(320),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(320),
    [anon_sym_module] = ACTIONS(320),
    [anon_sym_with] = ACTIONS(100),
    [anon_sym_where] = ACTIONS(320),
  },
  [90] = {
    [sym__layout_semicolon] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(320),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(320),
    [anon_sym_module] = ACTIONS(320),
    [anon_sym_where] = ACTIONS(320),
  },
  [91] = {
    [sym_literal] = ACTIONS(322),
    [sym_set_n] = ACTIONS(322),
    [sym_name_at] = ACTIONS(322),
    [sym_qualified_name] = ACTIONS(322),
    [anon_sym__] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(322),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(322),
    [anon_sym_Prop] = ACTIONS(322),
    [anon_sym_Set] = ACTIONS(322),
    [anon_sym_quote] = ACTIONS(322),
    [anon_sym_quoteTerm] = ACTIONS(322),
    [anon_sym_unquote] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_LPAREN_PIPE] = ACTIONS(322),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(322),
  },
  [92] = {
    [sym_expr] = STATE(248),
    [sym__expr1] = STATE(249),
    [sym__application] = STATE(250),
    [sym__expr2] = STATE(251),
    [sym__atomic_exprs1] = STATE(252),
    [sym_atomic_expr] = STATE(253),
    [sym__atomic_expr_curly] = STATE(254),
    [sym__atomic_expr_no_curly] = STATE(254),
    [sym_tele_arrow] = STATE(255),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(256),
    [aux_sym__application_repeat1] = STATE(257),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(324),
    [sym_set_n] = ACTIONS(324),
    [sym_name_at] = ACTIONS(326),
    [sym_qualified_name] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(332),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(324),
    [anon_sym_Prop] = ACTIONS(324),
    [anon_sym_Set] = ACTIONS(324),
    [anon_sym_quote] = ACTIONS(324),
    [anon_sym_quoteTerm] = ACTIONS(324),
    [anon_sym_unquote] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_LPAREN_PIPE] = ACTIONS(336),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(324),
  },
  [93] = {
    [sym_anonymous_name] = STATE(258),
    [sym_name] = ACTIONS(338),
    [anon_sym__] = ACTIONS(340),
    [sym_comment] = ACTIONS(16),
  },
  [94] = {
    [sym__vopen] = STATE(260),
    [sym_declarations] = STATE(261),
    [sym__declarations0] = STATE(262),
    [sym__layout_open_brace] = ACTIONS(8),
    [sym_comment] = ACTIONS(10),
  },
  [95] = {
    [sym__layout_semicolon] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [sym_comment] = ACTIONS(10),
  },
  [96] = {
    [sym_where_clause] = STATE(263),
    [sym__layout_semicolon] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [sym_comment] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(122),
    [anon_sym_where] = ACTIONS(124),
  },
  [97] = {
    [sym__layout_close_brace] = ACTIONS(344),
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym_literal] = ACTIONS(346),
    [sym_set_n] = ACTIONS(346),
    [sym_name_at] = ACTIONS(346),
    [sym_qualified_name] = ACTIONS(346),
    [anon_sym__] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(346),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(346),
    [anon_sym_Prop] = ACTIONS(346),
    [anon_sym_Set] = ACTIONS(346),
    [anon_sym_quote] = ACTIONS(346),
    [anon_sym_quoteTerm] = ACTIONS(346),
    [anon_sym_unquote] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_LPAREN_PIPE] = ACTIONS(346),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(346),
  },
  [98] = {
    [sym__layout_close_brace] = ACTIONS(348),
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_literal] = ACTIONS(350),
    [sym_set_n] = ACTIONS(350),
    [sym_name_at] = ACTIONS(350),
    [sym_qualified_name] = ACTIONS(350),
    [anon_sym__] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(350),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_Prop] = ACTIONS(350),
    [anon_sym_Set] = ACTIONS(350),
    [anon_sym_quote] = ACTIONS(350),
    [anon_sym_quoteTerm] = ACTIONS(350),
    [anon_sym_unquote] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_LPAREN_PIPE] = ACTIONS(350),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(350),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(10),
  },
  [100] = {
    [sym__expr1] = STATE(13),
    [sym__application] = STATE(14),
    [sym__expr2] = STATE(15),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(17),
    [sym__atomic_expr_curly] = STATE(18),
    [sym__atomic_expr_no_curly] = STATE(18),
    [sym_lhs] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym_function_clause] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(100),
    [aux_sym__expr1_repeat1] = STATE(23),
    [aux_sym__application_repeat1] = STATE(24),
    [sym__layout_close_brace] = ACTIONS(348),
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_literal] = ACTIONS(354),
    [sym_set_n] = ACTIONS(354),
    [sym_name_at] = ACTIONS(357),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(360),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(363),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_LPAREN_PIPE] = ACTIONS(369),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(354),
  },
  [101] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_rewrite] = ACTIONS(372),
    [anon_sym_with] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
  },
  [102] = {
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(270),
    [sym__atomic_expr_curly] = STATE(271),
    [sym__atomic_expr_no_curly] = STATE(271),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(272),
    [sym_literal] = ACTIONS(374),
    [sym_set_n] = ACTIONS(374),
    [sym_name_at] = ACTIONS(377),
    [sym_qualified_name] = ACTIONS(374),
    [anon_sym__] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(374),
    [anon_sym_Prop] = ACTIONS(374),
    [anon_sym_Set] = ACTIONS(374),
    [anon_sym_quote] = ACTIONS(374),
    [anon_sym_quoteTerm] = ACTIONS(374),
    [anon_sym_unquote] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_LPAREN_PIPE] = ACTIONS(389),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(374),
  },
  [103] = {
    [sym__layout_semicolon] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
    [anon_sym_module] = ACTIONS(392),
    [anon_sym_rewrite] = ACTIONS(392),
    [anon_sym_with] = ACTIONS(392),
    [anon_sym_where] = ACTIONS(392),
  },
  [104] = {
    [sym_atomic_expr] = STATE(270),
    [sym__atomic_expr_curly] = STATE(271),
    [sym__atomic_expr_no_curly] = STATE(271),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(394),
    [sym_set_n] = ACTIONS(394),
    [sym_name_at] = ACTIONS(397),
    [sym_qualified_name] = ACTIONS(394),
    [anon_sym__] = ACTIONS(394),
    [anon_sym_DOT] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(400),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(403),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(406),
    [anon_sym_QMARK] = ACTIONS(394),
    [anon_sym_Prop] = ACTIONS(394),
    [anon_sym_Set] = ACTIONS(394),
    [anon_sym_quote] = ACTIONS(394),
    [anon_sym_quoteTerm] = ACTIONS(394),
    [anon_sym_unquote] = ACTIONS(394),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_LPAREN_PIPE] = ACTIONS(411),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(394),
  },
  [105] = {
    [sym_expr] = STATE(123),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [106] = {
    [sym_expr] = STATE(135),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(186),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [107] = {
    [sym_expr] = STATE(142),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [108] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [109] = {
    [sym_expr] = STATE(123),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(273),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [110] = {
    [sym_expr] = STATE(135),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(274),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(186),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [111] = {
    [sym_expr] = STATE(142),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(275),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [112] = {
    [sym__application] = STATE(282),
    [sym__expr2] = STATE(38),
    [sym_atomic_expr] = STATE(283),
    [sym__atomic_expr_curly] = STATE(284),
    [sym__atomic_expr_no_curly] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [sym_literal] = ACTIONS(414),
    [sym_set_n] = ACTIONS(414),
    [sym_name_at] = ACTIONS(416),
    [sym_qualified_name] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_Prop] = ACTIONS(414),
    [anon_sym_Set] = ACTIONS(414),
    [anon_sym_quote] = ACTIONS(414),
    [anon_sym_quoteTerm] = ACTIONS(414),
    [anon_sym_unquote] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_LPAREN_PIPE] = ACTIONS(424),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(414),
  },
  [113] = {
    [sym__application] = STATE(286),
    [sym__expr2] = STATE(38),
    [sym_atomic_expr] = STATE(283),
    [sym__atomic_expr_curly] = STATE(284),
    [sym__atomic_expr_no_curly] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [sym_literal] = ACTIONS(414),
    [sym_set_n] = ACTIONS(414),
    [sym_name_at] = ACTIONS(416),
    [sym_qualified_name] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_Prop] = ACTIONS(414),
    [anon_sym_Set] = ACTIONS(414),
    [anon_sym_quote] = ACTIONS(414),
    [anon_sym_quoteTerm] = ACTIONS(414),
    [anon_sym_unquote] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_LPAREN_PIPE] = ACTIONS(424),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(414),
  },
  [114] = {
    [sym__application] = STATE(287),
    [sym__expr2] = STATE(38),
    [sym_atomic_expr] = STATE(283),
    [sym__atomic_expr_curly] = STATE(284),
    [sym__atomic_expr_no_curly] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [sym_literal] = ACTIONS(414),
    [sym_set_n] = ACTIONS(414),
    [sym_name_at] = ACTIONS(416),
    [sym_qualified_name] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_Prop] = ACTIONS(414),
    [anon_sym_Set] = ACTIONS(414),
    [anon_sym_quote] = ACTIONS(414),
    [anon_sym_quoteTerm] = ACTIONS(414),
    [anon_sym_unquote] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_LPAREN_PIPE] = ACTIONS(424),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(414),
  },
  [115] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
  },
  [116] = {
    [sym_atomic_expr] = STATE(291),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(426),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [117] = {
    [sym_atomic_expr] = STATE(291),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(432),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(434),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(436),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [118] = {
    [sym_expr] = STATE(296),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(124),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [119] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
  },
  [120] = {
    [sym_expr] = STATE(297),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [121] = {
    [sym_expr] = STATE(298),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(143),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [122] = {
    [sym_expr] = STATE(299),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [123] = {
    [anon_sym_RBRACE] = ACTIONS(442),
    [sym_comment] = ACTIONS(10),
  },
  [124] = {
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(444),
  },
  [125] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
  },
  [126] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
  },
  [127] = {
    [sym__expr2] = STATE(158),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(426),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [128] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
  },
  [129] = {
    [sym_atomic_expr] = STATE(305),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(446),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(448),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(450),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [130] = {
    [sym_atomic_expr] = STATE(305),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(456),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [131] = {
    [sym_expr] = STATE(310),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(124),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [132] = {
    [sym_expr] = STATE(311),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(460),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [133] = {
    [sym_expr] = STATE(312),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(143),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [134] = {
    [sym_expr] = STATE(313),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [135] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(462),
    [sym_comment] = ACTIONS(10),
  },
  [136] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(464),
  },
  [137] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(112),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
  },
  [138] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
  },
  [139] = {
    [sym__expr2] = STATE(188),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(446),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(448),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(450),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [140] = {
    [sym_atomic_expr] = STATE(291),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(426),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [141] = {
    [sym_atomic_expr] = STATE(291),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(432),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(434),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(436),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [142] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(462),
  },
  [143] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(466),
  },
  [144] = {
    [sym__expr2] = STATE(158),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(426),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [145] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(462),
  },
  [146] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_rewrite] = ACTIONS(470),
    [anon_sym_with] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [147] = {
    [sym_expr] = STATE(317),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [148] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
  },
  [149] = {
    [sym_atomic_expr] = STATE(318),
    [sym__atomic_expr_curly] = STATE(156),
    [sym__atomic_expr_no_curly] = STATE(156),
    [sym_literal] = ACTIONS(206),
    [sym_set_n] = ACTIONS(206),
    [sym_name_at] = ACTIONS(208),
    [sym_qualified_name] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(212),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_Prop] = ACTIONS(206),
    [anon_sym_Set] = ACTIONS(206),
    [anon_sym_quote] = ACTIONS(206),
    [anon_sym_quoteTerm] = ACTIONS(206),
    [anon_sym_unquote] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_LPAREN_PIPE] = ACTIONS(216),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(206),
  },
  [150] = {
    [sym_expr] = STATE(320),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [151] = {
    [sym_expr] = STATE(321),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(474),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [152] = {
    [sym_expr] = STATE(322),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [153] = {
    [sym_expr] = STATE(323),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [154] = {
    [anon_sym_RBRACE] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_PIPE_RPAREN] = ACTIONS(372),
  },
  [155] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [156] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [157] = {
    [sym__expr2] = STATE(158),
    [sym_atomic_expr] = STATE(155),
    [sym__atomic_expr_curly] = STATE(156),
    [sym__atomic_expr_no_curly] = STATE(156),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(206),
    [sym_set_n] = ACTIONS(206),
    [sym_name_at] = ACTIONS(208),
    [sym_qualified_name] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(212),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_Prop] = ACTIONS(206),
    [anon_sym_Set] = ACTIONS(206),
    [anon_sym_quote] = ACTIONS(206),
    [anon_sym_quoteTerm] = ACTIONS(206),
    [anon_sym_unquote] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_LPAREN_PIPE] = ACTIONS(216),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(206),
  },
  [158] = {
    [anon_sym_RBRACE] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_PIPE_RPAREN] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
  },
  [159] = {
    [sym_atomic_expr] = STATE(330),
    [sym__atomic_expr_curly] = STATE(331),
    [sym__atomic_expr_no_curly] = STATE(331),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(476),
    [sym_set_n] = ACTIONS(476),
    [sym_name_at] = ACTIONS(479),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(485),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(406),
    [anon_sym_PIPE] = ACTIONS(406),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(488),
    [anon_sym_LPAREN_PIPE] = ACTIONS(491),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(476),
  },
  [160] = {
    [sym__application] = STATE(332),
    [sym__expr2] = STATE(38),
    [sym_atomic_expr] = STATE(283),
    [sym__atomic_expr_curly] = STATE(284),
    [sym__atomic_expr_no_curly] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [sym_literal] = ACTIONS(414),
    [sym_set_n] = ACTIONS(414),
    [sym_name_at] = ACTIONS(416),
    [sym_qualified_name] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_Prop] = ACTIONS(414),
    [anon_sym_Set] = ACTIONS(414),
    [anon_sym_quote] = ACTIONS(414),
    [anon_sym_quoteTerm] = ACTIONS(414),
    [anon_sym_unquote] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_LPAREN_PIPE] = ACTIONS(424),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(414),
  },
  [161] = {
    [sym__application] = STATE(333),
    [sym__expr2] = STATE(38),
    [sym_atomic_expr] = STATE(283),
    [sym__atomic_expr_curly] = STATE(284),
    [sym__atomic_expr_no_curly] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [sym_literal] = ACTIONS(414),
    [sym_set_n] = ACTIONS(414),
    [sym_name_at] = ACTIONS(416),
    [sym_qualified_name] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_Prop] = ACTIONS(414),
    [anon_sym_Set] = ACTIONS(414),
    [anon_sym_quote] = ACTIONS(414),
    [anon_sym_quoteTerm] = ACTIONS(414),
    [anon_sym_unquote] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_LPAREN_PIPE] = ACTIONS(424),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(414),
  },
  [162] = {
    [sym__application] = STATE(334),
    [sym__expr2] = STATE(38),
    [sym_atomic_expr] = STATE(283),
    [sym__atomic_expr_curly] = STATE(284),
    [sym__atomic_expr_no_curly] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [sym_literal] = ACTIONS(414),
    [sym_set_n] = ACTIONS(414),
    [sym_name_at] = ACTIONS(416),
    [sym_qualified_name] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_Prop] = ACTIONS(414),
    [anon_sym_Set] = ACTIONS(414),
    [anon_sym_quote] = ACTIONS(414),
    [anon_sym_quoteTerm] = ACTIONS(414),
    [anon_sym_unquote] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_LPAREN_PIPE] = ACTIONS(424),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(414),
  },
  [163] = {
    [sym_typed_bindings] = STATE(43),
    [aux_sym_tele_arrow_repeat1] = STATE(163),
    [anon_sym_DOT] = ACTIONS(494),
    [anon_sym_DOT_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(500),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(503),
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(506),
    [anon_sym_LPAREN] = ACTIONS(508),
  },
  [164] = {
    [sym_expr] = STATE(172),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [165] = {
    [sym_expr] = STATE(173),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(244),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [166] = {
    [sym_expr] = STATE(174),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [167] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [168] = {
    [sym_expr] = STATE(172),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(273),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [169] = {
    [sym_expr] = STATE(173),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(274),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(244),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [170] = {
    [sym_expr] = STATE(174),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(275),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [171] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
  },
  [172] = {
    [anon_sym_RBRACE] = ACTIONS(511),
    [sym_comment] = ACTIONS(10),
  },
  [173] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(513),
    [sym_comment] = ACTIONS(10),
  },
  [174] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(513),
  },
  [175] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(513),
  },
  [176] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_rewrite] = ACTIONS(517),
    [anon_sym_with] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [177] = {
    [sym_expr] = STATE(337),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [178] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
  },
  [179] = {
    [sym_atomic_expr] = STATE(338),
    [sym__atomic_expr_curly] = STATE(186),
    [sym__atomic_expr_no_curly] = STATE(186),
    [sym_literal] = ACTIONS(250),
    [sym_set_n] = ACTIONS(250),
    [sym_name_at] = ACTIONS(252),
    [sym_qualified_name] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [anon_sym_DOT] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(256),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(250),
    [anon_sym_Prop] = ACTIONS(250),
    [anon_sym_Set] = ACTIONS(250),
    [anon_sym_quote] = ACTIONS(250),
    [anon_sym_quoteTerm] = ACTIONS(250),
    [anon_sym_unquote] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LPAREN_PIPE] = ACTIONS(260),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(250),
  },
  [180] = {
    [sym_expr] = STATE(340),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [181] = {
    [sym_expr] = STATE(341),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(521),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [182] = {
    [sym_expr] = STATE(342),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [183] = {
    [sym_expr] = STATE(343),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [184] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
  },
  [185] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(112),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [186] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [187] = {
    [sym__expr2] = STATE(188),
    [sym_atomic_expr] = STATE(185),
    [sym__atomic_expr_curly] = STATE(186),
    [sym__atomic_expr_no_curly] = STATE(186),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(250),
    [sym_set_n] = ACTIONS(250),
    [sym_name_at] = ACTIONS(252),
    [sym_qualified_name] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [anon_sym_DOT] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(256),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(250),
    [anon_sym_Prop] = ACTIONS(250),
    [anon_sym_Set] = ACTIONS(250),
    [anon_sym_quote] = ACTIONS(250),
    [anon_sym_quoteTerm] = ACTIONS(250),
    [anon_sym_unquote] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LPAREN_PIPE] = ACTIONS(260),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(250),
  },
  [188] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
  },
  [189] = {
    [sym_expr] = STATE(317),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [190] = {
    [sym_atomic_expr] = STATE(318),
    [sym__atomic_expr_curly] = STATE(156),
    [sym__atomic_expr_no_curly] = STATE(156),
    [sym_literal] = ACTIONS(206),
    [sym_set_n] = ACTIONS(206),
    [sym_name_at] = ACTIONS(264),
    [sym_qualified_name] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(212),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_Prop] = ACTIONS(206),
    [anon_sym_Set] = ACTIONS(206),
    [anon_sym_quote] = ACTIONS(206),
    [anon_sym_quoteTerm] = ACTIONS(206),
    [anon_sym_unquote] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_LPAREN_PIPE] = ACTIONS(216),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(206),
  },
  [191] = {
    [sym__expr2] = STATE(158),
    [sym_atomic_expr] = STATE(155),
    [sym__atomic_expr_curly] = STATE(156),
    [sym__atomic_expr_no_curly] = STATE(156),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(206),
    [sym_set_n] = ACTIONS(206),
    [sym_name_at] = ACTIONS(264),
    [sym_qualified_name] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(212),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_Prop] = ACTIONS(206),
    [anon_sym_Set] = ACTIONS(206),
    [anon_sym_quote] = ACTIONS(206),
    [anon_sym_quoteTerm] = ACTIONS(206),
    [anon_sym_unquote] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_LPAREN_PIPE] = ACTIONS(216),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(206),
  },
  [192] = {
    [sym_expr] = STATE(200),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [193] = {
    [sym_expr] = STATE(201),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(280),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [194] = {
    [sym_expr] = STATE(202),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [195] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_PIPE_RPAREN] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [196] = {
    [sym_expr] = STATE(200),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(273),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [197] = {
    [sym_expr] = STATE(201),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(274),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(280),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [198] = {
    [sym_expr] = STATE(202),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(275),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [199] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_PIPE_RPAREN] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
  },
  [200] = {
    [anon_sym_RBRACE] = ACTIONS(523),
    [sym_comment] = ACTIONS(10),
  },
  [201] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(525),
    [sym_comment] = ACTIONS(10),
  },
  [202] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(525),
  },
  [203] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(525),
  },
  [204] = {
    [sym_expr] = STATE(317),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [205] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_PIPE_RPAREN] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
  },
  [206] = {
    [sym_atomic_expr] = STATE(346),
    [sym__atomic_expr_curly] = STATE(212),
    [sym__atomic_expr_no_curly] = STATE(212),
    [sym_literal] = ACTIONS(284),
    [sym_set_n] = ACTIONS(284),
    [sym_name_at] = ACTIONS(286),
    [sym_qualified_name] = ACTIONS(284),
    [anon_sym__] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(290),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(284),
    [anon_sym_Prop] = ACTIONS(284),
    [anon_sym_Set] = ACTIONS(284),
    [anon_sym_quote] = ACTIONS(284),
    [anon_sym_quoteTerm] = ACTIONS(284),
    [anon_sym_unquote] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_LPAREN_PIPE] = ACTIONS(294),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(284),
  },
  [207] = {
    [sym_expr] = STATE(348),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [208] = {
    [sym_expr] = STATE(349),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [209] = {
    [sym_expr] = STATE(350),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [210] = {
    [sym_expr] = STATE(351),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [211] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_PIPE_RPAREN] = ACTIONS(112),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [212] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_PIPE_RPAREN] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [213] = {
    [sym__expr2] = STATE(158),
    [sym_atomic_expr] = STATE(211),
    [sym__atomic_expr_curly] = STATE(212),
    [sym__atomic_expr_no_curly] = STATE(212),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(284),
    [sym_set_n] = ACTIONS(284),
    [sym_name_at] = ACTIONS(286),
    [sym_qualified_name] = ACTIONS(284),
    [anon_sym__] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(290),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(284),
    [anon_sym_Prop] = ACTIONS(284),
    [anon_sym_Set] = ACTIONS(284),
    [anon_sym_quote] = ACTIONS(284),
    [anon_sym_quoteTerm] = ACTIONS(284),
    [anon_sym_unquote] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_LPAREN_PIPE] = ACTIONS(294),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(284),
  },
  [214] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_with] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [215] = {
    [sym_atomic_expr] = STATE(352),
    [sym__atomic_expr_curly] = STATE(224),
    [sym__atomic_expr_no_curly] = STATE(224),
    [sym_literal] = ACTIONS(296),
    [sym_set_n] = ACTIONS(296),
    [sym_name_at] = ACTIONS(298),
    [sym_qualified_name] = ACTIONS(296),
    [anon_sym__] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(302),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_Prop] = ACTIONS(296),
    [anon_sym_Set] = ACTIONS(296),
    [anon_sym_quote] = ACTIONS(296),
    [anon_sym_quoteTerm] = ACTIONS(296),
    [anon_sym_unquote] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_LPAREN_PIPE] = ACTIONS(306),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(296),
  },
  [216] = {
    [sym_expr] = STATE(354),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [217] = {
    [sym_expr] = STATE(355),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(533),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [218] = {
    [sym_expr] = STATE(356),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [219] = {
    [sym_expr] = STATE(357),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [220] = {
    [sym__layout_semicolon] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(535),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(535),
    [anon_sym_module] = ACTIONS(535),
    [anon_sym_with] = ACTIONS(535),
    [anon_sym_where] = ACTIONS(535),
  },
  [221] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_with] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
  },
  [222] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_with] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
  },
  [223] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_with] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [224] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_with] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [225] = {
    [sym__application] = STATE(358),
    [sym__expr2] = STATE(222),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(223),
    [sym__atomic_expr_curly] = STATE(224),
    [sym__atomic_expr_no_curly] = STATE(224),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(226),
    [sym_literal] = ACTIONS(296),
    [sym_set_n] = ACTIONS(296),
    [sym_name_at] = ACTIONS(298),
    [sym_qualified_name] = ACTIONS(296),
    [anon_sym__] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(302),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_Prop] = ACTIONS(296),
    [anon_sym_Set] = ACTIONS(296),
    [anon_sym_quote] = ACTIONS(296),
    [anon_sym_quoteTerm] = ACTIONS(296),
    [anon_sym_unquote] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_LPAREN_PIPE] = ACTIONS(306),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(296),
  },
  [226] = {
    [sym__expr2] = STATE(359),
    [sym_atomic_expr] = STATE(223),
    [sym__atomic_expr_curly] = STATE(224),
    [sym__atomic_expr_no_curly] = STATE(224),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(296),
    [sym_set_n] = ACTIONS(296),
    [sym_name_at] = ACTIONS(298),
    [sym_qualified_name] = ACTIONS(296),
    [anon_sym__] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(302),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_Prop] = ACTIONS(296),
    [anon_sym_Set] = ACTIONS(296),
    [anon_sym_quote] = ACTIONS(296),
    [anon_sym_quoteTerm] = ACTIONS(296),
    [anon_sym_unquote] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_LPAREN_PIPE] = ACTIONS(306),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(296),
  },
  [227] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [228] = {
    [sym_atomic_expr] = STATE(360),
    [sym__atomic_expr_curly] = STATE(237),
    [sym__atomic_expr_no_curly] = STATE(237),
    [sym_literal] = ACTIONS(308),
    [sym_set_n] = ACTIONS(308),
    [sym_name_at] = ACTIONS(310),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(314),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(308),
  },
  [229] = {
    [sym_expr] = STATE(362),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [230] = {
    [sym_expr] = STATE(363),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(539),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [231] = {
    [sym_expr] = STATE(364),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [232] = {
    [sym_expr] = STATE(365),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [233] = {
    [sym__layout_semicolon] = ACTIONS(541),
    [anon_sym_SEMI] = ACTIONS(541),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_COLON] = ACTIONS(541),
    [anon_sym_module] = ACTIONS(541),
    [anon_sym_where] = ACTIONS(541),
  },
  [234] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
  },
  [235] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
  },
  [236] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [237] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [238] = {
    [sym__application] = STATE(366),
    [sym__expr2] = STATE(235),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(236),
    [sym__atomic_expr_curly] = STATE(237),
    [sym__atomic_expr_no_curly] = STATE(237),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(239),
    [sym_literal] = ACTIONS(308),
    [sym_set_n] = ACTIONS(308),
    [sym_name_at] = ACTIONS(310),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(314),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(308),
  },
  [239] = {
    [sym__expr2] = STATE(367),
    [sym_atomic_expr] = STATE(236),
    [sym__atomic_expr_curly] = STATE(237),
    [sym__atomic_expr_no_curly] = STATE(237),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(308),
    [sym_set_n] = ACTIONS(308),
    [sym_name_at] = ACTIONS(310),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(314),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(308),
  },
  [240] = {
    [sym__layout_semicolon] = ACTIONS(543),
    [anon_sym_SEMI] = ACTIONS(543),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_where] = ACTIONS(543),
  },
  [241] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [242] = {
    [sym_atomic_expr] = STATE(371),
    [sym__atomic_expr_curly] = STATE(254),
    [sym__atomic_expr_no_curly] = STATE(254),
    [sym_literal] = ACTIONS(324),
    [sym_set_n] = ACTIONS(324),
    [sym_name_at] = ACTIONS(326),
    [sym_qualified_name] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(547),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(324),
    [anon_sym_Prop] = ACTIONS(324),
    [anon_sym_Set] = ACTIONS(324),
    [anon_sym_quote] = ACTIONS(324),
    [anon_sym_quoteTerm] = ACTIONS(324),
    [anon_sym_unquote] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_LPAREN_PIPE] = ACTIONS(336),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(324),
  },
  [243] = {
    [sym_atomic_expr] = STATE(371),
    [sym__atomic_expr_curly] = STATE(254),
    [sym__atomic_expr_no_curly] = STATE(254),
    [sym_literal] = ACTIONS(324),
    [sym_set_n] = ACTIONS(324),
    [sym_name_at] = ACTIONS(326),
    [sym_qualified_name] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(553),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(324),
    [anon_sym_Prop] = ACTIONS(324),
    [anon_sym_Set] = ACTIONS(324),
    [anon_sym_quote] = ACTIONS(324),
    [anon_sym_quoteTerm] = ACTIONS(324),
    [anon_sym_unquote] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_LPAREN_PIPE] = ACTIONS(336),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(324),
  },
  [244] = {
    [sym_expr] = STATE(376),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(124),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [245] = {
    [sym_expr] = STATE(377),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(559),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [246] = {
    [sym_expr] = STATE(378),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(143),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [247] = {
    [sym_expr] = STATE(379),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(561),
    [sym_comment] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(561),
    [anon_sym_where] = ACTIONS(561),
  },
  [249] = {
    [sym__layout_semicolon] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(563),
    [anon_sym_module] = ACTIONS(198),
    [anon_sym_where] = ACTIONS(198),
  },
  [250] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
  },
  [251] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
  },
  [252] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(106),
  },
  [253] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [255] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(563),
  },
  [256] = {
    [sym__application] = STATE(387),
    [sym__expr2] = STATE(251),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(388),
    [sym__atomic_expr_curly] = STATE(389),
    [sym__atomic_expr_no_curly] = STATE(389),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(390),
    [sym_literal] = ACTIONS(565),
    [sym_set_n] = ACTIONS(565),
    [sym_name_at] = ACTIONS(567),
    [sym_qualified_name] = ACTIONS(565),
    [anon_sym__] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(571),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_Prop] = ACTIONS(565),
    [anon_sym_Set] = ACTIONS(565),
    [anon_sym_quote] = ACTIONS(565),
    [anon_sym_quoteTerm] = ACTIONS(565),
    [anon_sym_unquote] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_LPAREN_PIPE] = ACTIONS(575),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(565),
  },
  [257] = {
    [sym__expr2] = STATE(391),
    [sym_atomic_expr] = STATE(253),
    [sym__atomic_expr_curly] = STATE(254),
    [sym__atomic_expr_no_curly] = STATE(254),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(324),
    [sym_set_n] = ACTIONS(324),
    [sym_name_at] = ACTIONS(326),
    [sym_qualified_name] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(547),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(324),
    [anon_sym_Prop] = ACTIONS(324),
    [anon_sym_Set] = ACTIONS(324),
    [anon_sym_quote] = ACTIONS(324),
    [anon_sym_quoteTerm] = ACTIONS(324),
    [anon_sym_unquote] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_LPAREN_PIPE] = ACTIONS(336),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(324),
  },
  [258] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_where] = ACTIONS(577),
  },
  [259] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_where] = ACTIONS(579),
  },
  [260] = {
    [sym__vclose] = STATE(400),
    [sym__expr1] = STATE(401),
    [sym__application] = STATE(402),
    [sym__expr2] = STATE(403),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(404),
    [sym__atomic_expr_curly] = STATE(405),
    [sym__atomic_expr_no_curly] = STATE(405),
    [sym_lhs] = STATE(406),
    [sym__declaration] = STATE(407),
    [sym_function_clause] = STATE(408),
    [sym__declarations1] = STATE(409),
    [aux_sym__expr1_repeat1] = STATE(410),
    [aux_sym__application_repeat1] = STATE(411),
    [sym__layout_close_brace] = ACTIONS(581),
    [sym_literal] = ACTIONS(583),
    [sym_set_n] = ACTIONS(583),
    [sym_name_at] = ACTIONS(585),
    [sym_qualified_name] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_Prop] = ACTIONS(583),
    [anon_sym_Set] = ACTIONS(583),
    [anon_sym_quote] = ACTIONS(583),
    [anon_sym_quoteTerm] = ACTIONS(583),
    [anon_sym_unquote] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LPAREN_PIPE] = ACTIONS(593),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(583),
  },
  [261] = {
    [sym__layout_semicolon] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(595),
    [sym_comment] = ACTIONS(10),
  },
  [262] = {
    [sym__layout_semicolon] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(597),
    [sym_comment] = ACTIONS(10),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [sym_comment] = ACTIONS(10),
  },
  [264] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
  },
  [265] = {
    [sym_atomic_expr] = STATE(412),
    [sym__atomic_expr_curly] = STATE(271),
    [sym__atomic_expr_no_curly] = STATE(271),
    [sym_literal] = ACTIONS(601),
    [sym_set_n] = ACTIONS(601),
    [sym_name_at] = ACTIONS(603),
    [sym_qualified_name] = ACTIONS(601),
    [anon_sym__] = ACTIONS(601),
    [anon_sym_DOT] = ACTIONS(603),
    [anon_sym_LBRACE] = ACTIONS(605),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(607),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(601),
    [anon_sym_Prop] = ACTIONS(601),
    [anon_sym_Set] = ACTIONS(601),
    [anon_sym_quote] = ACTIONS(601),
    [anon_sym_quoteTerm] = ACTIONS(601),
    [anon_sym_unquote] = ACTIONS(601),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_LPAREN_PIPE] = ACTIONS(611),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(601),
  },
  [266] = {
    [sym_expr] = STATE(414),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(613),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [267] = {
    [sym_expr] = STATE(415),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(615),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [268] = {
    [sym_expr] = STATE(416),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [269] = {
    [sym_expr] = STATE(417),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [270] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [271] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [272] = {
    [sym_atomic_expr] = STATE(270),
    [sym__atomic_expr_curly] = STATE(271),
    [sym__atomic_expr_no_curly] = STATE(271),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(601),
    [sym_set_n] = ACTIONS(601),
    [sym_name_at] = ACTIONS(603),
    [sym_qualified_name] = ACTIONS(601),
    [anon_sym__] = ACTIONS(601),
    [anon_sym_DOT] = ACTIONS(603),
    [anon_sym_LBRACE] = ACTIONS(605),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(607),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(601),
    [anon_sym_Prop] = ACTIONS(601),
    [anon_sym_Set] = ACTIONS(601),
    [anon_sym_quote] = ACTIONS(601),
    [anon_sym_quoteTerm] = ACTIONS(601),
    [anon_sym_unquote] = ACTIONS(601),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_LPAREN_PIPE] = ACTIONS(611),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(601),
  },
  [273] = {
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(617),
  },
  [274] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(619),
  },
  [275] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(621),
  },
  [276] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
  },
  [277] = {
    [sym_atomic_expr] = STATE(421),
    [sym__atomic_expr_curly] = STATE(284),
    [sym__atomic_expr_no_curly] = STATE(284),
    [sym_literal] = ACTIONS(414),
    [sym_set_n] = ACTIONS(414),
    [sym_name_at] = ACTIONS(416),
    [sym_qualified_name] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_Prop] = ACTIONS(414),
    [anon_sym_Set] = ACTIONS(414),
    [anon_sym_quote] = ACTIONS(414),
    [anon_sym_quoteTerm] = ACTIONS(414),
    [anon_sym_unquote] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_LPAREN_PIPE] = ACTIONS(424),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(414),
  },
  [278] = {
    [sym_expr] = STATE(423),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [279] = {
    [sym_expr] = STATE(424),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(625),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [280] = {
    [sym_expr] = STATE(425),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [281] = {
    [sym_expr] = STATE(426),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [282] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_COLON] = ACTIONS(617),
  },
  [283] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
  },
  [284] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
  },
  [285] = {
    [sym__expr2] = STATE(158),
    [sym_atomic_expr] = STATE(283),
    [sym__atomic_expr_curly] = STATE(284),
    [sym__atomic_expr_no_curly] = STATE(284),
    [aux_sym__application_repeat1] = STATE(427),
    [sym_literal] = ACTIONS(414),
    [sym_set_n] = ACTIONS(414),
    [sym_name_at] = ACTIONS(416),
    [sym_qualified_name] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_Prop] = ACTIONS(414),
    [anon_sym_Set] = ACTIONS(414),
    [anon_sym_quote] = ACTIONS(414),
    [anon_sym_quoteTerm] = ACTIONS(414),
    [anon_sym_unquote] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_LPAREN_PIPE] = ACTIONS(424),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(414),
  },
  [286] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_COLON] = ACTIONS(619),
  },
  [287] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_COLON] = ACTIONS(621),
  },
  [288] = {
    [sym_expr] = STATE(296),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [289] = {
    [sym_expr] = STATE(297),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [290] = {
    [sym_expr] = STATE(298),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [291] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
  },
  [292] = {
    [sym_expr] = STATE(296),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(273),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [293] = {
    [sym_expr] = STATE(297),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(274),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [294] = {
    [sym_expr] = STATE(298),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(275),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [295] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
  },
  [296] = {
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(10),
  },
  [297] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(629),
    [sym_comment] = ACTIONS(10),
  },
  [298] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(629),
  },
  [299] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(629),
  },
  [300] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
  },
  [301] = {
    [sym_expr] = STATE(430),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [302] = {
    [sym_expr] = STATE(310),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [303] = {
    [sym_expr] = STATE(311),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(460),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [304] = {
    [sym_expr] = STATE(312),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [305] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
  },
  [306] = {
    [sym_expr] = STATE(310),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(273),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [307] = {
    [sym_expr] = STATE(311),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(274),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(460),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [308] = {
    [sym_expr] = STATE(312),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(275),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [309] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
  },
  [310] = {
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(10),
  },
  [311] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(633),
    [sym_comment] = ACTIONS(10),
  },
  [312] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(633),
  },
  [313] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(633),
  },
  [314] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
  },
  [315] = {
    [sym_expr] = STATE(433),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [316] = {
    [sym_expr] = STATE(434),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(635),
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_PIPE_RPAREN] = ACTIONS(635),
  },
  [318] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [319] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
  },
  [320] = {
    [anon_sym_RBRACE] = ACTIONS(637),
    [sym_comment] = ACTIONS(10),
  },
  [321] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(639),
    [sym_comment] = ACTIONS(10),
  },
  [322] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(639),
  },
  [323] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(639),
  },
  [324] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
  },
  [325] = {
    [sym_atomic_expr] = STATE(437),
    [sym__atomic_expr_curly] = STATE(331),
    [sym__atomic_expr_no_curly] = STATE(331),
    [sym_literal] = ACTIONS(641),
    [sym_set_n] = ACTIONS(641),
    [sym_name_at] = ACTIONS(643),
    [sym_qualified_name] = ACTIONS(641),
    [anon_sym__] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(643),
    [anon_sym_LBRACE] = ACTIONS(645),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(647),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(641),
    [anon_sym_Prop] = ACTIONS(641),
    [anon_sym_Set] = ACTIONS(641),
    [anon_sym_quote] = ACTIONS(641),
    [anon_sym_quoteTerm] = ACTIONS(641),
    [anon_sym_unquote] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(649),
    [anon_sym_LPAREN_PIPE] = ACTIONS(651),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(641),
  },
  [326] = {
    [sym_expr] = STATE(439),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(653),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [327] = {
    [sym_expr] = STATE(440),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(655),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [328] = {
    [sym_expr] = STATE(441),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [329] = {
    [sym_expr] = STATE(442),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [330] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [331] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [332] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_COLON] = ACTIONS(444),
  },
  [333] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_COLON] = ACTIONS(464),
  },
  [334] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_COLON] = ACTIONS(466),
  },
  [335] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
  },
  [336] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
  },
  [337] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(635),
    [sym_comment] = ACTIONS(10),
  },
  [338] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [339] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
  },
  [340] = {
    [anon_sym_RBRACE] = ACTIONS(657),
    [sym_comment] = ACTIONS(10),
  },
  [341] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(659),
    [sym_comment] = ACTIONS(10),
  },
  [342] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(659),
  },
  [343] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(659),
  },
  [344] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_PIPE_RPAREN] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
  },
  [345] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_PIPE_RPAREN] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
  },
  [346] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_PIPE_RPAREN] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [347] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_PIPE_RPAREN] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
  },
  [348] = {
    [anon_sym_RBRACE] = ACTIONS(661),
    [sym_comment] = ACTIONS(10),
  },
  [349] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(663),
    [sym_comment] = ACTIONS(10),
  },
  [350] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(663),
  },
  [351] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(663),
  },
  [352] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_with] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [353] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_with] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [354] = {
    [anon_sym_RBRACE] = ACTIONS(665),
    [sym_comment] = ACTIONS(10),
  },
  [355] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(667),
    [sym_comment] = ACTIONS(10),
  },
  [356] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(667),
  },
  [357] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(667),
  },
  [358] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_with] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
  },
  [359] = {
    [sym__layout_semicolon] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
    [anon_sym_module] = ACTIONS(392),
    [anon_sym_with] = ACTIONS(392),
    [anon_sym_where] = ACTIONS(392),
  },
  [360] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [362] = {
    [anon_sym_RBRACE] = ACTIONS(669),
    [sym_comment] = ACTIONS(10),
  },
  [363] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(671),
    [sym_comment] = ACTIONS(10),
  },
  [364] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(671),
  },
  [365] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(671),
  },
  [366] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
  },
  [367] = {
    [sym__layout_semicolon] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
    [anon_sym_module] = ACTIONS(392),
    [anon_sym_where] = ACTIONS(392),
  },
  [368] = {
    [sym_expr] = STATE(376),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [369] = {
    [sym_expr] = STATE(377),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(559),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [370] = {
    [sym_expr] = STATE(378),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [371] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [372] = {
    [sym_expr] = STATE(376),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(273),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [373] = {
    [sym_expr] = STATE(377),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(274),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(559),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [374] = {
    [sym_expr] = STATE(378),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(275),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [375] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [376] = {
    [anon_sym_RBRACE] = ACTIONS(673),
    [sym_comment] = ACTIONS(10),
  },
  [377] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(675),
    [sym_comment] = ACTIONS(10),
  },
  [378] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(675),
  },
  [379] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(675),
  },
  [380] = {
    [sym_expr] = STATE(453),
    [sym__expr1] = STATE(249),
    [sym__application] = STATE(250),
    [sym__expr2] = STATE(251),
    [sym__atomic_exprs1] = STATE(252),
    [sym_atomic_expr] = STATE(253),
    [sym__atomic_expr_curly] = STATE(254),
    [sym__atomic_expr_no_curly] = STATE(254),
    [sym_tele_arrow] = STATE(255),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(256),
    [aux_sym__application_repeat1] = STATE(257),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(324),
    [sym_set_n] = ACTIONS(324),
    [sym_name_at] = ACTIONS(326),
    [sym_qualified_name] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(332),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(324),
    [anon_sym_Prop] = ACTIONS(324),
    [anon_sym_Set] = ACTIONS(324),
    [anon_sym_quote] = ACTIONS(324),
    [anon_sym_quoteTerm] = ACTIONS(324),
    [anon_sym_unquote] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_LPAREN_PIPE] = ACTIONS(336),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(324),
  },
  [381] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [382] = {
    [sym_atomic_expr] = STATE(454),
    [sym__atomic_expr_curly] = STATE(389),
    [sym__atomic_expr_no_curly] = STATE(389),
    [sym_literal] = ACTIONS(565),
    [sym_set_n] = ACTIONS(565),
    [sym_name_at] = ACTIONS(567),
    [sym_qualified_name] = ACTIONS(565),
    [anon_sym__] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(571),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_Prop] = ACTIONS(565),
    [anon_sym_Set] = ACTIONS(565),
    [anon_sym_quote] = ACTIONS(565),
    [anon_sym_quoteTerm] = ACTIONS(565),
    [anon_sym_unquote] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_LPAREN_PIPE] = ACTIONS(575),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(565),
  },
  [383] = {
    [sym_expr] = STATE(456),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(677),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [384] = {
    [sym_expr] = STATE(457),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(679),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [385] = {
    [sym_expr] = STATE(458),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [386] = {
    [sym_expr] = STATE(459),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [387] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
  },
  [388] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [389] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [390] = {
    [sym__expr2] = STATE(391),
    [sym_atomic_expr] = STATE(388),
    [sym__atomic_expr_curly] = STATE(389),
    [sym__atomic_expr_no_curly] = STATE(389),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(565),
    [sym_set_n] = ACTIONS(565),
    [sym_name_at] = ACTIONS(567),
    [sym_qualified_name] = ACTIONS(565),
    [anon_sym__] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(571),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_Prop] = ACTIONS(565),
    [anon_sym_Set] = ACTIONS(565),
    [anon_sym_quote] = ACTIONS(565),
    [anon_sym_quoteTerm] = ACTIONS(565),
    [anon_sym_unquote] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_LPAREN_PIPE] = ACTIONS(575),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(565),
  },
  [391] = {
    [sym__layout_semicolon] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_module] = ACTIONS(392),
    [anon_sym_where] = ACTIONS(392),
  },
  [392] = {
    [sym__vopen] = STATE(260),
    [sym_declarations] = STATE(261),
    [sym__declarations0] = STATE(460),
    [sym__layout_open_brace] = ACTIONS(8),
    [sym_comment] = ACTIONS(10),
  },
  [393] = {
    [sym__layout_semicolon] = ACTIONS(36),
    [anon_sym_SEMI] = ACTIONS(36),
    [sym_comment] = ACTIONS(10),
  },
  [394] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym__layout_close_brace] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_rewrite] = ACTIONS(40),
    [anon_sym_with] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [395] = {
    [sym_atomic_expr] = STATE(461),
    [sym__atomic_expr_curly] = STATE(405),
    [sym__atomic_expr_no_curly] = STATE(405),
    [sym_literal] = ACTIONS(583),
    [sym_set_n] = ACTIONS(583),
    [sym_name_at] = ACTIONS(585),
    [sym_qualified_name] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_Prop] = ACTIONS(583),
    [anon_sym_Set] = ACTIONS(583),
    [anon_sym_quote] = ACTIONS(583),
    [anon_sym_quoteTerm] = ACTIONS(583),
    [anon_sym_unquote] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LPAREN_PIPE] = ACTIONS(593),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(583),
  },
  [396] = {
    [sym_expr] = STATE(463),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(681),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [397] = {
    [sym_expr] = STATE(464),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(683),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [398] = {
    [sym_expr] = STATE(465),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(683),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [399] = {
    [sym_expr] = STATE(466),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [400] = {
    [sym__layout_semicolon] = ACTIONS(685),
    [anon_sym_SEMI] = ACTIONS(685),
    [sym_comment] = ACTIONS(10),
  },
  [401] = {
    [sym_rewrite_equations] = STATE(469),
    [sym_with_expressions] = STATE(470),
    [sym__layout_semicolon] = ACTIONS(96),
    [sym__layout_close_brace] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(96),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_rewrite] = ACTIONS(687),
    [anon_sym_with] = ACTIONS(689),
    [anon_sym_where] = ACTIONS(96),
  },
  [402] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [sym__layout_close_brace] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_rewrite] = ACTIONS(102),
    [anon_sym_with] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
  },
  [403] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [sym__layout_close_brace] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_rewrite] = ACTIONS(104),
    [anon_sym_with] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
  },
  [404] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym__layout_close_brace] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_rewrite] = ACTIONS(112),
    [anon_sym_with] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [405] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym__layout_close_brace] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_rewrite] = ACTIONS(116),
    [anon_sym_with] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [406] = {
    [sym_where_clause] = STATE(474),
    [sym_rhs] = STATE(475),
    [sym__layout_semicolon] = ACTIONS(118),
    [sym__layout_close_brace] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(118),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(691),
    [anon_sym_COLON] = ACTIONS(691),
    [anon_sym_module] = ACTIONS(693),
    [anon_sym_where] = ACTIONS(695),
  },
  [407] = {
    [sym_semi] = STATE(477),
    [aux_sym__declarations1_repeat1] = STATE(478),
    [sym__layout_semicolon] = ACTIONS(697),
    [sym__layout_close_brace] = ACTIONS(699),
    [anon_sym_SEMI] = ACTIONS(697),
    [sym_comment] = ACTIONS(10),
  },
  [408] = {
    [sym__layout_semicolon] = ACTIONS(128),
    [sym__layout_close_brace] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(128),
    [sym_comment] = ACTIONS(10),
  },
  [409] = {
    [sym__vclose] = STATE(479),
    [sym__layout_close_brace] = ACTIONS(581),
    [sym_comment] = ACTIONS(10),
  },
  [410] = {
    [sym__application] = STATE(480),
    [sym__expr2] = STATE(403),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(404),
    [sym__atomic_expr_curly] = STATE(405),
    [sym__atomic_expr_no_curly] = STATE(405),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(411),
    [sym_literal] = ACTIONS(583),
    [sym_set_n] = ACTIONS(583),
    [sym_name_at] = ACTIONS(585),
    [sym_qualified_name] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_Prop] = ACTIONS(583),
    [anon_sym_Set] = ACTIONS(583),
    [anon_sym_quote] = ACTIONS(583),
    [anon_sym_quoteTerm] = ACTIONS(583),
    [anon_sym_unquote] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LPAREN_PIPE] = ACTIONS(593),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(583),
  },
  [411] = {
    [sym__expr2] = STATE(481),
    [sym_atomic_expr] = STATE(404),
    [sym__atomic_expr_curly] = STATE(405),
    [sym__atomic_expr_no_curly] = STATE(405),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(583),
    [sym_set_n] = ACTIONS(583),
    [sym_name_at] = ACTIONS(585),
    [sym_qualified_name] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_Prop] = ACTIONS(583),
    [anon_sym_Set] = ACTIONS(583),
    [anon_sym_quote] = ACTIONS(583),
    [anon_sym_quoteTerm] = ACTIONS(583),
    [anon_sym_unquote] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LPAREN_PIPE] = ACTIONS(593),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(583),
  },
  [412] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [413] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
  },
  [414] = {
    [anon_sym_RBRACE] = ACTIONS(701),
    [sym_comment] = ACTIONS(10),
  },
  [415] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(703),
    [sym_comment] = ACTIONS(10),
  },
  [416] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(703),
  },
  [417] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(703),
  },
  [418] = {
    [sym_expr] = STATE(484),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [419] = {
    [sym_expr] = STATE(485),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [420] = {
    [sym_expr] = STATE(486),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [421] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
  },
  [422] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
  },
  [423] = {
    [anon_sym_RBRACE] = ACTIONS(705),
    [sym_comment] = ACTIONS(10),
  },
  [424] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(707),
    [sym_comment] = ACTIONS(10),
  },
  [425] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(707),
  },
  [426] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(707),
  },
  [427] = {
    [sym_atomic_expr] = STATE(495),
    [sym__atomic_expr_curly] = STATE(496),
    [sym__atomic_expr_no_curly] = STATE(496),
    [aux_sym__application_repeat1] = STATE(427),
    [sym_literal] = ACTIONS(709),
    [sym_set_n] = ACTIONS(709),
    [sym_name_at] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(709),
    [anon_sym__] = ACTIONS(709),
    [anon_sym_DOT] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(715),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(718),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(709),
    [anon_sym_Prop] = ACTIONS(709),
    [anon_sym_Set] = ACTIONS(709),
    [anon_sym_quote] = ACTIONS(709),
    [anon_sym_quoteTerm] = ACTIONS(709),
    [anon_sym_unquote] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(721),
    [anon_sym_LPAREN_PIPE] = ACTIONS(724),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(709),
  },
  [428] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
  },
  [429] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
  },
  [430] = {
    [anon_sym_RBRACE] = ACTIONS(727),
    [sym_comment] = ACTIONS(10),
  },
  [431] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
  },
  [432] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
  },
  [433] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(727),
    [sym_comment] = ACTIONS(10),
  },
  [434] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(727),
  },
  [435] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
  },
  [436] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
  },
  [437] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [438] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
  },
  [439] = {
    [anon_sym_RBRACE] = ACTIONS(729),
    [sym_comment] = ACTIONS(10),
  },
  [440] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(731),
    [sym_comment] = ACTIONS(10),
  },
  [441] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(731),
  },
  [442] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(731),
  },
  [443] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
  },
  [444] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
  },
  [445] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_PIPE_RPAREN] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
  },
  [446] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_PIPE_RPAREN] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
  },
  [447] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_with] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [448] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_with] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [449] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [450] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [451] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [452] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [453] = {
    [sym__layout_semicolon] = ACTIONS(635),
    [anon_sym_SEMI] = ACTIONS(635),
    [sym_comment] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(635),
    [anon_sym_where] = ACTIONS(635),
  },
  [454] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [455] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [456] = {
    [anon_sym_RBRACE] = ACTIONS(733),
    [sym_comment] = ACTIONS(10),
  },
  [457] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(735),
    [sym_comment] = ACTIONS(10),
  },
  [458] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(735),
  },
  [459] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(735),
  },
  [460] = {
    [sym__layout_semicolon] = ACTIONS(737),
    [anon_sym_SEMI] = ACTIONS(737),
    [sym_comment] = ACTIONS(10),
  },
  [461] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym__layout_close_brace] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_rewrite] = ACTIONS(136),
    [anon_sym_with] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [462] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym__layout_close_brace] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_rewrite] = ACTIONS(174),
    [anon_sym_with] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [463] = {
    [anon_sym_RBRACE] = ACTIONS(739),
    [sym_comment] = ACTIONS(10),
  },
  [464] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(741),
    [sym_comment] = ACTIONS(10),
  },
  [465] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(741),
  },
  [466] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(741),
  },
  [467] = {
    [sym__expr1] = STATE(510),
    [sym__application] = STATE(511),
    [sym__expr2] = STATE(512),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(513),
    [sym__atomic_expr_curly] = STATE(514),
    [sym__atomic_expr_no_curly] = STATE(514),
    [aux_sym__expr1_repeat1] = STATE(515),
    [aux_sym__application_repeat1] = STATE(516),
    [sym_literal] = ACTIONS(743),
    [sym_set_n] = ACTIONS(743),
    [sym_name_at] = ACTIONS(745),
    [sym_qualified_name] = ACTIONS(743),
    [anon_sym__] = ACTIONS(743),
    [anon_sym_DOT] = ACTIONS(745),
    [anon_sym_LBRACE] = ACTIONS(747),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(749),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(743),
    [anon_sym_Prop] = ACTIONS(743),
    [anon_sym_Set] = ACTIONS(743),
    [anon_sym_quote] = ACTIONS(743),
    [anon_sym_quoteTerm] = ACTIONS(743),
    [anon_sym_unquote] = ACTIONS(743),
    [anon_sym_LPAREN] = ACTIONS(751),
    [anon_sym_LPAREN_PIPE] = ACTIONS(753),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(743),
  },
  [468] = {
    [sym__expr1] = STATE(523),
    [sym__application] = STATE(524),
    [sym__expr2] = STATE(525),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(526),
    [sym__atomic_expr_curly] = STATE(527),
    [sym__atomic_expr_no_curly] = STATE(527),
    [aux_sym__expr1_repeat1] = STATE(528),
    [aux_sym__application_repeat1] = STATE(529),
    [sym_literal] = ACTIONS(755),
    [sym_set_n] = ACTIONS(755),
    [sym_name_at] = ACTIONS(757),
    [sym_qualified_name] = ACTIONS(755),
    [anon_sym__] = ACTIONS(755),
    [anon_sym_DOT] = ACTIONS(757),
    [anon_sym_LBRACE] = ACTIONS(759),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(761),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(755),
    [anon_sym_Prop] = ACTIONS(755),
    [anon_sym_Set] = ACTIONS(755),
    [anon_sym_quote] = ACTIONS(755),
    [anon_sym_quoteTerm] = ACTIONS(755),
    [anon_sym_unquote] = ACTIONS(755),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_LPAREN_PIPE] = ACTIONS(765),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(755),
  },
  [469] = {
    [sym_with_expressions] = STATE(530),
    [sym__layout_semicolon] = ACTIONS(320),
    [sym__layout_close_brace] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(320),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(320),
    [anon_sym_module] = ACTIONS(320),
    [anon_sym_with] = ACTIONS(689),
    [anon_sym_where] = ACTIONS(320),
  },
  [470] = {
    [sym__layout_semicolon] = ACTIONS(320),
    [sym__layout_close_brace] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(320),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(320),
    [anon_sym_module] = ACTIONS(320),
    [anon_sym_where] = ACTIONS(320),
  },
  [471] = {
    [sym_expr] = STATE(538),
    [sym__expr1] = STATE(539),
    [sym__application] = STATE(540),
    [sym__expr2] = STATE(541),
    [sym__atomic_exprs1] = STATE(542),
    [sym_atomic_expr] = STATE(543),
    [sym__atomic_expr_curly] = STATE(544),
    [sym__atomic_expr_no_curly] = STATE(544),
    [sym_tele_arrow] = STATE(545),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(546),
    [aux_sym__application_repeat1] = STATE(547),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(767),
    [sym_set_n] = ACTIONS(767),
    [sym_name_at] = ACTIONS(769),
    [sym_qualified_name] = ACTIONS(767),
    [anon_sym__] = ACTIONS(767),
    [anon_sym_DOT] = ACTIONS(771),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(773),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(767),
    [anon_sym_Prop] = ACTIONS(767),
    [anon_sym_Set] = ACTIONS(767),
    [anon_sym_quote] = ACTIONS(767),
    [anon_sym_quoteTerm] = ACTIONS(767),
    [anon_sym_unquote] = ACTIONS(767),
    [anon_sym_LPAREN] = ACTIONS(777),
    [anon_sym_LPAREN_PIPE] = ACTIONS(779),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(767),
  },
  [472] = {
    [sym_anonymous_name] = STATE(548),
    [sym_name] = ACTIONS(781),
    [anon_sym__] = ACTIONS(340),
    [sym_comment] = ACTIONS(16),
  },
  [473] = {
    [sym__vopen] = STATE(549),
    [sym_declarations] = STATE(550),
    [sym__declarations0] = STATE(551),
    [sym__layout_open_brace] = ACTIONS(8),
    [sym_comment] = ACTIONS(10),
  },
  [474] = {
    [sym__layout_semicolon] = ACTIONS(342),
    [sym__layout_close_brace] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [sym_comment] = ACTIONS(10),
  },
  [475] = {
    [sym_where_clause] = STATE(552),
    [sym__layout_semicolon] = ACTIONS(342),
    [sym__layout_close_brace] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [sym_comment] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(693),
    [anon_sym_where] = ACTIONS(695),
  },
  [476] = {
    [sym_literal] = ACTIONS(346),
    [sym_set_n] = ACTIONS(346),
    [sym_name_at] = ACTIONS(346),
    [sym_qualified_name] = ACTIONS(346),
    [anon_sym__] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(346),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(346),
    [anon_sym_Prop] = ACTIONS(346),
    [anon_sym_Set] = ACTIONS(346),
    [anon_sym_quote] = ACTIONS(346),
    [anon_sym_quoteTerm] = ACTIONS(346),
    [anon_sym_unquote] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_LPAREN_PIPE] = ACTIONS(346),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(346),
  },
  [477] = {
    [sym__expr1] = STATE(401),
    [sym__application] = STATE(402),
    [sym__expr2] = STATE(403),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(404),
    [sym__atomic_expr_curly] = STATE(405),
    [sym__atomic_expr_no_curly] = STATE(405),
    [sym_lhs] = STATE(406),
    [sym__declaration] = STATE(553),
    [sym_function_clause] = STATE(408),
    [aux_sym__expr1_repeat1] = STATE(410),
    [aux_sym__application_repeat1] = STATE(411),
    [sym_literal] = ACTIONS(583),
    [sym_set_n] = ACTIONS(583),
    [sym_name_at] = ACTIONS(585),
    [sym_qualified_name] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_Prop] = ACTIONS(583),
    [anon_sym_Set] = ACTIONS(583),
    [anon_sym_quote] = ACTIONS(583),
    [anon_sym_quoteTerm] = ACTIONS(583),
    [anon_sym_unquote] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LPAREN_PIPE] = ACTIONS(593),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(583),
  },
  [478] = {
    [sym_semi] = STATE(477),
    [aux_sym__declarations1_repeat1] = STATE(554),
    [sym__layout_semicolon] = ACTIONS(697),
    [sym__layout_close_brace] = ACTIONS(783),
    [anon_sym_SEMI] = ACTIONS(697),
    [sym_comment] = ACTIONS(10),
  },
  [479] = {
    [sym__layout_semicolon] = ACTIONS(785),
    [anon_sym_SEMI] = ACTIONS(785),
    [sym_comment] = ACTIONS(10),
  },
  [480] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [sym__layout_close_brace] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_rewrite] = ACTIONS(372),
    [anon_sym_with] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
  },
  [481] = {
    [sym__layout_semicolon] = ACTIONS(392),
    [sym__layout_close_brace] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
    [anon_sym_module] = ACTIONS(392),
    [anon_sym_rewrite] = ACTIONS(392),
    [anon_sym_with] = ACTIONS(392),
    [anon_sym_where] = ACTIONS(392),
  },
  [482] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
  },
  [483] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
  },
  [484] = {
    [anon_sym_RBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(10),
  },
  [485] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(10),
  },
  [486] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(787),
  },
  [487] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
  },
  [488] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
  },
  [489] = {
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
  },
  [490] = {
    [sym_atomic_expr] = STATE(556),
    [sym__atomic_expr_curly] = STATE(496),
    [sym__atomic_expr_no_curly] = STATE(496),
    [sym_literal] = ACTIONS(789),
    [sym_set_n] = ACTIONS(789),
    [sym_name_at] = ACTIONS(791),
    [sym_qualified_name] = ACTIONS(789),
    [anon_sym__] = ACTIONS(789),
    [anon_sym_DOT] = ACTIONS(791),
    [anon_sym_LBRACE] = ACTIONS(793),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(795),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(789),
    [anon_sym_Prop] = ACTIONS(789),
    [anon_sym_Set] = ACTIONS(789),
    [anon_sym_quote] = ACTIONS(789),
    [anon_sym_quoteTerm] = ACTIONS(789),
    [anon_sym_unquote] = ACTIONS(789),
    [anon_sym_LPAREN] = ACTIONS(797),
    [anon_sym_LPAREN_PIPE] = ACTIONS(799),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(789),
  },
  [491] = {
    [sym_expr] = STATE(558),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(801),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [492] = {
    [sym_expr] = STATE(559),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(803),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [493] = {
    [sym_expr] = STATE(560),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(803),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [494] = {
    [sym_expr] = STATE(561),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [495] = {
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [496] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [497] = {
    [anon_sym_DOT] = ACTIONS(805),
    [anon_sym_DOT_DOT] = ACTIONS(807),
    [anon_sym_LBRACE] = ACTIONS(805),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(807),
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(807),
    [anon_sym_LPAREN] = ACTIONS(807),
  },
  [498] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
  },
  [499] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
  },
  [500] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [501] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [502] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym__layout_close_brace] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_rewrite] = ACTIONS(470),
    [anon_sym_with] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [503] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym__layout_close_brace] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_rewrite] = ACTIONS(517),
    [anon_sym_with] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [504] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym__layout_close_brace] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_with] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [505] = {
    [sym_atomic_expr] = STATE(562),
    [sym__atomic_expr_curly] = STATE(514),
    [sym__atomic_expr_no_curly] = STATE(514),
    [sym_literal] = ACTIONS(743),
    [sym_set_n] = ACTIONS(743),
    [sym_name_at] = ACTIONS(745),
    [sym_qualified_name] = ACTIONS(743),
    [anon_sym__] = ACTIONS(743),
    [anon_sym_DOT] = ACTIONS(745),
    [anon_sym_LBRACE] = ACTIONS(747),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(749),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(743),
    [anon_sym_Prop] = ACTIONS(743),
    [anon_sym_Set] = ACTIONS(743),
    [anon_sym_quote] = ACTIONS(743),
    [anon_sym_quoteTerm] = ACTIONS(743),
    [anon_sym_unquote] = ACTIONS(743),
    [anon_sym_LPAREN] = ACTIONS(751),
    [anon_sym_LPAREN_PIPE] = ACTIONS(753),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(743),
  },
  [506] = {
    [sym_expr] = STATE(564),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(809),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [507] = {
    [sym_expr] = STATE(565),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(811),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [508] = {
    [sym_expr] = STATE(566),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(811),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [509] = {
    [sym_expr] = STATE(567),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [510] = {
    [sym__layout_semicolon] = ACTIONS(535),
    [sym__layout_close_brace] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(535),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(535),
    [anon_sym_module] = ACTIONS(535),
    [anon_sym_with] = ACTIONS(535),
    [anon_sym_where] = ACTIONS(535),
  },
  [511] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [sym__layout_close_brace] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_with] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
  },
  [512] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [sym__layout_close_brace] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_with] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
  },
  [513] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym__layout_close_brace] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_with] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [514] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym__layout_close_brace] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_with] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [515] = {
    [sym__application] = STATE(568),
    [sym__expr2] = STATE(512),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(513),
    [sym__atomic_expr_curly] = STATE(514),
    [sym__atomic_expr_no_curly] = STATE(514),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(516),
    [sym_literal] = ACTIONS(743),
    [sym_set_n] = ACTIONS(743),
    [sym_name_at] = ACTIONS(745),
    [sym_qualified_name] = ACTIONS(743),
    [anon_sym__] = ACTIONS(743),
    [anon_sym_DOT] = ACTIONS(745),
    [anon_sym_LBRACE] = ACTIONS(747),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(749),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(743),
    [anon_sym_Prop] = ACTIONS(743),
    [anon_sym_Set] = ACTIONS(743),
    [anon_sym_quote] = ACTIONS(743),
    [anon_sym_quoteTerm] = ACTIONS(743),
    [anon_sym_unquote] = ACTIONS(743),
    [anon_sym_LPAREN] = ACTIONS(751),
    [anon_sym_LPAREN_PIPE] = ACTIONS(753),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(743),
  },
  [516] = {
    [sym__expr2] = STATE(569),
    [sym_atomic_expr] = STATE(513),
    [sym__atomic_expr_curly] = STATE(514),
    [sym__atomic_expr_no_curly] = STATE(514),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(743),
    [sym_set_n] = ACTIONS(743),
    [sym_name_at] = ACTIONS(745),
    [sym_qualified_name] = ACTIONS(743),
    [anon_sym__] = ACTIONS(743),
    [anon_sym_DOT] = ACTIONS(745),
    [anon_sym_LBRACE] = ACTIONS(747),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(749),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(743),
    [anon_sym_Prop] = ACTIONS(743),
    [anon_sym_Set] = ACTIONS(743),
    [anon_sym_quote] = ACTIONS(743),
    [anon_sym_quoteTerm] = ACTIONS(743),
    [anon_sym_unquote] = ACTIONS(743),
    [anon_sym_LPAREN] = ACTIONS(751),
    [anon_sym_LPAREN_PIPE] = ACTIONS(753),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(743),
  },
  [517] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym__layout_close_brace] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [518] = {
    [sym_atomic_expr] = STATE(570),
    [sym__atomic_expr_curly] = STATE(527),
    [sym__atomic_expr_no_curly] = STATE(527),
    [sym_literal] = ACTIONS(755),
    [sym_set_n] = ACTIONS(755),
    [sym_name_at] = ACTIONS(757),
    [sym_qualified_name] = ACTIONS(755),
    [anon_sym__] = ACTIONS(755),
    [anon_sym_DOT] = ACTIONS(757),
    [anon_sym_LBRACE] = ACTIONS(759),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(761),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(755),
    [anon_sym_Prop] = ACTIONS(755),
    [anon_sym_Set] = ACTIONS(755),
    [anon_sym_quote] = ACTIONS(755),
    [anon_sym_quoteTerm] = ACTIONS(755),
    [anon_sym_unquote] = ACTIONS(755),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_LPAREN_PIPE] = ACTIONS(765),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(755),
  },
  [519] = {
    [sym_expr] = STATE(572),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(813),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [520] = {
    [sym_expr] = STATE(573),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(815),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [521] = {
    [sym_expr] = STATE(574),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(815),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [522] = {
    [sym_expr] = STATE(575),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [523] = {
    [sym__layout_semicolon] = ACTIONS(541),
    [sym__layout_close_brace] = ACTIONS(541),
    [anon_sym_SEMI] = ACTIONS(541),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_COLON] = ACTIONS(541),
    [anon_sym_module] = ACTIONS(541),
    [anon_sym_where] = ACTIONS(541),
  },
  [524] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [sym__layout_close_brace] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
  },
  [525] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [sym__layout_close_brace] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
  },
  [526] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym__layout_close_brace] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [527] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym__layout_close_brace] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [528] = {
    [sym__application] = STATE(576),
    [sym__expr2] = STATE(525),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(526),
    [sym__atomic_expr_curly] = STATE(527),
    [sym__atomic_expr_no_curly] = STATE(527),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(529),
    [sym_literal] = ACTIONS(755),
    [sym_set_n] = ACTIONS(755),
    [sym_name_at] = ACTIONS(757),
    [sym_qualified_name] = ACTIONS(755),
    [anon_sym__] = ACTIONS(755),
    [anon_sym_DOT] = ACTIONS(757),
    [anon_sym_LBRACE] = ACTIONS(759),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(761),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(755),
    [anon_sym_Prop] = ACTIONS(755),
    [anon_sym_Set] = ACTIONS(755),
    [anon_sym_quote] = ACTIONS(755),
    [anon_sym_quoteTerm] = ACTIONS(755),
    [anon_sym_unquote] = ACTIONS(755),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_LPAREN_PIPE] = ACTIONS(765),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(755),
  },
  [529] = {
    [sym__expr2] = STATE(577),
    [sym_atomic_expr] = STATE(526),
    [sym__atomic_expr_curly] = STATE(527),
    [sym__atomic_expr_no_curly] = STATE(527),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(755),
    [sym_set_n] = ACTIONS(755),
    [sym_name_at] = ACTIONS(757),
    [sym_qualified_name] = ACTIONS(755),
    [anon_sym__] = ACTIONS(755),
    [anon_sym_DOT] = ACTIONS(757),
    [anon_sym_LBRACE] = ACTIONS(759),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(761),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(755),
    [anon_sym_Prop] = ACTIONS(755),
    [anon_sym_Set] = ACTIONS(755),
    [anon_sym_quote] = ACTIONS(755),
    [anon_sym_quoteTerm] = ACTIONS(755),
    [anon_sym_unquote] = ACTIONS(755),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_LPAREN_PIPE] = ACTIONS(765),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(755),
  },
  [530] = {
    [sym__layout_semicolon] = ACTIONS(543),
    [sym__layout_close_brace] = ACTIONS(543),
    [anon_sym_SEMI] = ACTIONS(543),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_where] = ACTIONS(543),
  },
  [531] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym__layout_close_brace] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [532] = {
    [sym_atomic_expr] = STATE(581),
    [sym__atomic_expr_curly] = STATE(544),
    [sym__atomic_expr_no_curly] = STATE(544),
    [sym_literal] = ACTIONS(767),
    [sym_set_n] = ACTIONS(767),
    [sym_name_at] = ACTIONS(769),
    [sym_qualified_name] = ACTIONS(767),
    [anon_sym__] = ACTIONS(767),
    [anon_sym_DOT] = ACTIONS(769),
    [anon_sym_LBRACE] = ACTIONS(817),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(819),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(767),
    [anon_sym_Prop] = ACTIONS(767),
    [anon_sym_Set] = ACTIONS(767),
    [anon_sym_quote] = ACTIONS(767),
    [anon_sym_quoteTerm] = ACTIONS(767),
    [anon_sym_unquote] = ACTIONS(767),
    [anon_sym_LPAREN] = ACTIONS(821),
    [anon_sym_LPAREN_PIPE] = ACTIONS(779),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(767),
  },
  [533] = {
    [sym_atomic_expr] = STATE(581),
    [sym__atomic_expr_curly] = STATE(544),
    [sym__atomic_expr_no_curly] = STATE(544),
    [sym_literal] = ACTIONS(767),
    [sym_set_n] = ACTIONS(767),
    [sym_name_at] = ACTIONS(769),
    [sym_qualified_name] = ACTIONS(767),
    [anon_sym__] = ACTIONS(767),
    [anon_sym_DOT] = ACTIONS(769),
    [anon_sym_LBRACE] = ACTIONS(823),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(825),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(767),
    [anon_sym_Prop] = ACTIONS(767),
    [anon_sym_Set] = ACTIONS(767),
    [anon_sym_quote] = ACTIONS(767),
    [anon_sym_quoteTerm] = ACTIONS(767),
    [anon_sym_unquote] = ACTIONS(767),
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_LPAREN_PIPE] = ACTIONS(779),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(767),
  },
  [534] = {
    [sym_expr] = STATE(586),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(124),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [535] = {
    [sym_expr] = STATE(587),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [536] = {
    [sym_expr] = STATE(588),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(143),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [537] = {
    [sym_expr] = STATE(589),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [538] = {
    [sym__layout_semicolon] = ACTIONS(561),
    [sym__layout_close_brace] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(561),
    [sym_comment] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(561),
    [anon_sym_where] = ACTIONS(561),
  },
  [539] = {
    [sym__layout_semicolon] = ACTIONS(198),
    [sym__layout_close_brace] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(833),
    [anon_sym_module] = ACTIONS(198),
    [anon_sym_where] = ACTIONS(198),
  },
  [540] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [sym__layout_close_brace] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
  },
  [541] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [sym__layout_close_brace] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
  },
  [542] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(833),
    [anon_sym_PIPE] = ACTIONS(106),
  },
  [543] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym__layout_close_brace] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [544] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym__layout_close_brace] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [545] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(833),
  },
  [546] = {
    [sym__application] = STATE(597),
    [sym__expr2] = STATE(541),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(598),
    [sym__atomic_expr_curly] = STATE(599),
    [sym__atomic_expr_no_curly] = STATE(599),
    [aux_sym__expr1_repeat1] = STATE(102),
    [aux_sym__application_repeat1] = STATE(600),
    [sym_literal] = ACTIONS(835),
    [sym_set_n] = ACTIONS(835),
    [sym_name_at] = ACTIONS(837),
    [sym_qualified_name] = ACTIONS(835),
    [anon_sym__] = ACTIONS(835),
    [anon_sym_DOT] = ACTIONS(837),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(841),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(835),
    [anon_sym_Prop] = ACTIONS(835),
    [anon_sym_Set] = ACTIONS(835),
    [anon_sym_quote] = ACTIONS(835),
    [anon_sym_quoteTerm] = ACTIONS(835),
    [anon_sym_unquote] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(843),
    [anon_sym_LPAREN_PIPE] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(835),
  },
  [547] = {
    [sym__expr2] = STATE(601),
    [sym_atomic_expr] = STATE(543),
    [sym__atomic_expr_curly] = STATE(544),
    [sym__atomic_expr_no_curly] = STATE(544),
    [aux_sym__application_repeat1] = STATE(159),
    [sym_literal] = ACTIONS(767),
    [sym_set_n] = ACTIONS(767),
    [sym_name_at] = ACTIONS(769),
    [sym_qualified_name] = ACTIONS(767),
    [anon_sym__] = ACTIONS(767),
    [anon_sym_DOT] = ACTIONS(769),
    [anon_sym_LBRACE] = ACTIONS(817),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(819),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(767),
    [anon_sym_Prop] = ACTIONS(767),
    [anon_sym_Set] = ACTIONS(767),
    [anon_sym_quote] = ACTIONS(767),
    [anon_sym_quoteTerm] = ACTIONS(767),
    [anon_sym_unquote] = ACTIONS(767),
    [anon_sym_LPAREN] = ACTIONS(821),
    [anon_sym_LPAREN_PIPE] = ACTIONS(779),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(767),
  },
  [548] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_where] = ACTIONS(847),
  },
  [549] = {
    [sym__vclose] = STATE(604),
    [sym__expr1] = STATE(401),
    [sym__application] = STATE(402),
    [sym__expr2] = STATE(403),
    [sym__atomic_exprs1] = STATE(16),
    [sym_atomic_expr] = STATE(404),
    [sym__atomic_expr_curly] = STATE(405),
    [sym__atomic_expr_no_curly] = STATE(405),
    [sym_lhs] = STATE(406),
    [sym__declaration] = STATE(407),
    [sym_function_clause] = STATE(408),
    [sym__declarations1] = STATE(605),
    [aux_sym__expr1_repeat1] = STATE(410),
    [aux_sym__application_repeat1] = STATE(411),
    [sym__layout_close_brace] = ACTIONS(849),
    [sym_literal] = ACTIONS(583),
    [sym_set_n] = ACTIONS(583),
    [sym_name_at] = ACTIONS(585),
    [sym_qualified_name] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_Prop] = ACTIONS(583),
    [anon_sym_Set] = ACTIONS(583),
    [anon_sym_quote] = ACTIONS(583),
    [anon_sym_quoteTerm] = ACTIONS(583),
    [anon_sym_unquote] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LPAREN_PIPE] = ACTIONS(593),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(583),
  },
  [550] = {
    [sym__layout_semicolon] = ACTIONS(595),
    [sym__layout_close_brace] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(595),
    [sym_comment] = ACTIONS(10),
  },
  [551] = {
    [sym__layout_semicolon] = ACTIONS(597),
    [sym__layout_close_brace] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(597),
    [sym_comment] = ACTIONS(10),
  },
  [552] = {
    [sym__layout_semicolon] = ACTIONS(599),
    [sym__layout_close_brace] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [sym_comment] = ACTIONS(10),
  },
  [553] = {
    [sym__layout_semicolon] = ACTIONS(851),
    [sym__layout_close_brace] = ACTIONS(851),
    [anon_sym_SEMI] = ACTIONS(851),
    [sym_comment] = ACTIONS(10),
  },
  [554] = {
    [sym_semi] = STATE(477),
    [aux_sym__declarations1_repeat1] = STATE(554),
    [sym__layout_semicolon] = ACTIONS(853),
    [sym__layout_close_brace] = ACTIONS(851),
    [anon_sym_SEMI] = ACTIONS(853),
    [sym_comment] = ACTIONS(10),
  },
  [555] = {
    [anon_sym_DOT] = ACTIONS(856),
    [anon_sym_DOT_DOT] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(858),
    [sym_comment] = ACTIONS(10),
    [anon_sym_DASH_GT] = ACTIONS(858),
    [anon_sym_LPAREN] = ACTIONS(858),
  },
  [556] = {
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [557] = {
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
  },
  [558] = {
    [anon_sym_RBRACE] = ACTIONS(860),
    [sym_comment] = ACTIONS(10),
  },
  [559] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(862),
    [sym_comment] = ACTIONS(10),
  },
  [560] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(862),
  },
  [561] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(862),
  },
  [562] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym__layout_close_brace] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_with] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [563] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym__layout_close_brace] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_with] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [564] = {
    [anon_sym_RBRACE] = ACTIONS(864),
    [sym_comment] = ACTIONS(10),
  },
  [565] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(866),
    [sym_comment] = ACTIONS(10),
  },
  [566] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(866),
  },
  [567] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(866),
  },
  [568] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [sym__layout_close_brace] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_with] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
  },
  [569] = {
    [sym__layout_semicolon] = ACTIONS(392),
    [sym__layout_close_brace] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
    [anon_sym_module] = ACTIONS(392),
    [anon_sym_with] = ACTIONS(392),
    [anon_sym_where] = ACTIONS(392),
  },
  [570] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym__layout_close_brace] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [571] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym__layout_close_brace] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [572] = {
    [anon_sym_RBRACE] = ACTIONS(868),
    [sym_comment] = ACTIONS(10),
  },
  [573] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(870),
    [sym_comment] = ACTIONS(10),
  },
  [574] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(870),
  },
  [575] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(870),
  },
  [576] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [sym__layout_close_brace] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
  },
  [577] = {
    [sym__layout_semicolon] = ACTIONS(392),
    [sym__layout_close_brace] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
    [anon_sym_module] = ACTIONS(392),
    [anon_sym_where] = ACTIONS(392),
  },
  [578] = {
    [sym_expr] = STATE(586),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [579] = {
    [sym_expr] = STATE(587),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [580] = {
    [sym_expr] = STATE(588),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [581] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym__layout_close_brace] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [582] = {
    [sym_expr] = STATE(586),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(273),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(127),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(158),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [583] = {
    [sym_expr] = STATE(587),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(274),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(137),
    [sym__atomic_expr_curly] = STATE(138),
    [sym__atomic_expr_no_curly] = STATE(138),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(139),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(176),
    [sym_set_n] = ACTIONS(176),
    [sym_name_at] = ACTIONS(178),
    [sym_qualified_name] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_Prop] = ACTIONS(176),
    [anon_sym_Set] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(176),
    [anon_sym_quoteTerm] = ACTIONS(176),
    [anon_sym_unquote] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_LPAREN_PIPE] = ACTIONS(190),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(176),
  },
  [584] = {
    [sym_expr] = STATE(588),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(275),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(125),
    [sym__atomic_expr_curly] = STATE(126),
    [sym__atomic_expr_no_curly] = STATE(126),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(144),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(156),
    [sym_set_n] = ACTIONS(156),
    [sym_name_at] = ACTIONS(192),
    [sym_qualified_name] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(166),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_Prop] = ACTIONS(156),
    [anon_sym_Set] = ACTIONS(156),
    [anon_sym_quote] = ACTIONS(156),
    [anon_sym_quoteTerm] = ACTIONS(156),
    [anon_sym_unquote] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_LPAREN_PIPE] = ACTIONS(170),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
  },
  [585] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym__layout_close_brace] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [586] = {
    [anon_sym_RBRACE] = ACTIONS(872),
    [sym_comment] = ACTIONS(10),
  },
  [587] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(874),
    [sym_comment] = ACTIONS(10),
  },
  [588] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(874),
  },
  [589] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(874),
  },
  [590] = {
    [sym_expr] = STATE(614),
    [sym__expr1] = STATE(539),
    [sym__application] = STATE(540),
    [sym__expr2] = STATE(541),
    [sym__atomic_exprs1] = STATE(542),
    [sym_atomic_expr] = STATE(543),
    [sym__atomic_expr_curly] = STATE(544),
    [sym__atomic_expr_no_curly] = STATE(544),
    [sym_tele_arrow] = STATE(545),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(546),
    [aux_sym__application_repeat1] = STATE(547),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(767),
    [sym_set_n] = ACTIONS(767),
    [sym_name_at] = ACTIONS(769),
    [sym_qualified_name] = ACTIONS(767),
    [anon_sym__] = ACTIONS(767),
    [anon_sym_DOT] = ACTIONS(771),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(773),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(767),
    [anon_sym_Prop] = ACTIONS(767),
    [anon_sym_Set] = ACTIONS(767),
    [anon_sym_quote] = ACTIONS(767),
    [anon_sym_quoteTerm] = ACTIONS(767),
    [anon_sym_unquote] = ACTIONS(767),
    [anon_sym_LPAREN] = ACTIONS(777),
    [anon_sym_LPAREN_PIPE] = ACTIONS(779),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(767),
  },
  [591] = {
    [sym__layout_semicolon] = ACTIONS(38),
    [sym__layout_close_brace] = ACTIONS(38),
    [sym_literal] = ACTIONS(40),
    [sym_set_n] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_name_at] = ACTIONS(40),
    [sym_qualified_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_Prop] = ACTIONS(40),
    [anon_sym_Set] = ACTIONS(40),
    [anon_sym_quote] = ACTIONS(40),
    [anon_sym_quoteTerm] = ACTIONS(40),
    [anon_sym_unquote] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(40),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
  },
  [592] = {
    [sym_atomic_expr] = STATE(615),
    [sym__atomic_expr_curly] = STATE(599),
    [sym__atomic_expr_no_curly] = STATE(599),
    [sym_literal] = ACTIONS(835),
    [sym_set_n] = ACTIONS(835),
    [sym_name_at] = ACTIONS(837),
    [sym_qualified_name] = ACTIONS(835),
    [anon_sym__] = ACTIONS(835),
    [anon_sym_DOT] = ACTIONS(837),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(841),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(835),
    [anon_sym_Prop] = ACTIONS(835),
    [anon_sym_Set] = ACTIONS(835),
    [anon_sym_quote] = ACTIONS(835),
    [anon_sym_quoteTerm] = ACTIONS(835),
    [anon_sym_unquote] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(843),
    [anon_sym_LPAREN_PIPE] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(835),
  },
  [593] = {
    [sym_expr] = STATE(617),
    [sym__expr1] = STATE(36),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(39),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(42),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(44),
    [aux_sym__application_repeat1] = STATE(45),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(44),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(876),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [594] = {
    [sym_expr] = STATE(618),
    [sym__expr1] = STATE(55),
    [sym__application] = STATE(56),
    [sym__expr2] = STATE(57),
    [sym__atomic_exprs1] = STATE(58),
    [sym_atomic_expr] = STATE(59),
    [sym__atomic_expr_curly] = STATE(60),
    [sym__atomic_expr_no_curly] = STATE(60),
    [sym_tele_arrow] = STATE(61),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(60),
    [sym_set_n] = ACTIONS(60),
    [sym_name_at] = ACTIONS(62),
    [sym_qualified_name] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(878),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_Prop] = ACTIONS(60),
    [anon_sym_Set] = ACTIONS(60),
    [anon_sym_quote] = ACTIONS(60),
    [anon_sym_quoteTerm] = ACTIONS(60),
    [anon_sym_unquote] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LPAREN_PIPE] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(60),
  },
  [595] = {
    [sym_expr] = STATE(619),
    [sym__expr1] = STATE(67),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(68),
    [sym_atomic_expr] = STATE(40),
    [sym__atomic_expr_curly] = STATE(41),
    [sym__atomic_expr_no_curly] = STATE(41),
    [sym_tele_arrow] = STATE(69),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(70),
    [aux_sym__application_repeat1] = STATE(71),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(42),
    [sym_set_n] = ACTIONS(42),
    [sym_name_at] = ACTIONS(76),
    [sym_qualified_name] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_Prop] = ACTIONS(42),
    [anon_sym_Set] = ACTIONS(42),
    [anon_sym_quote] = ACTIONS(42),
    [anon_sym_quoteTerm] = ACTIONS(42),
    [anon_sym_unquote] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(878),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(42),
  },
  [596] = {
    [sym_expr] = STATE(620),
    [sym__expr1] = STATE(80),
    [sym__application] = STATE(37),
    [sym__expr2] = STATE(38),
    [sym__atomic_exprs1] = STATE(81),
    [sym_atomic_expr] = STATE(82),
    [sym__atomic_expr_curly] = STATE(83),
    [sym__atomic_expr_no_curly] = STATE(83),
    [sym_tele_arrow] = STATE(84),
    [sym_typed_bindings] = STATE(43),
    [aux_sym__expr1_repeat1] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [aux_sym_tele_arrow_repeat1] = STATE(46),
    [sym_literal] = ACTIONS(80),
    [sym_set_n] = ACTIONS(80),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_Prop] = ACTIONS(80),
    [anon_sym_Set] = ACTIONS(80),
    [anon_sym_quote] = ACTIONS(80),
    [anon_sym_quoteTerm] = ACTIONS(80),
    [anon_sym_unquote] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(92),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(80),
  },
  [597] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [sym__layout_close_brace] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
  },
  [598] = {
    [sym__layout_semicolon] = ACTIONS(108),
    [sym__layout_close_brace] = ACTIONS(108),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
  },
  [599] = {
    [sym__layout_semicolon] = ACTIONS(114),
    [sym__layout_close_brace] = ACTIONS(114),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [600] = {
    [sym__expr2] = STATE(601),
    [sym_atomic_expr] = STATE(598),
    [sym__atomic_expr_curly] = STATE(599),
    [sym__atomic_expr_no_curly] = STATE(599),
    [aux_sym__application_repeat1] = STATE(104),
    [sym_literal] = ACTIONS(835),
    [sym_set_n] = ACTIONS(835),
    [sym_name_at] = ACTIONS(837),
    [sym_qualified_name] = ACTIONS(835),
    [anon_sym__] = ACTIONS(835),
    [anon_sym_DOT] = ACTIONS(837),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(841),
    [sym_comment] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(835),
    [anon_sym_Prop] = ACTIONS(835),
    [anon_sym_Set] = ACTIONS(835),
    [anon_sym_quote] = ACTIONS(835),
    [anon_sym_quoteTerm] = ACTIONS(835),
    [anon_sym_unquote] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(843),
    [anon_sym_LPAREN_PIPE] = ACTIONS(845),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(835),
  },
  [601] = {
    [sym__layout_semicolon] = ACTIONS(392),
    [sym__layout_close_brace] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_module] = ACTIONS(392),
    [anon_sym_where] = ACTIONS(392),
  },
  [602] = {
    [sym__vopen] = STATE(549),
    [sym_declarations] = STATE(550),
    [sym__declarations0] = STATE(621),
    [sym__layout_open_brace] = ACTIONS(8),
    [sym_comment] = ACTIONS(10),
  },
  [603] = {
    [sym__layout_semicolon] = ACTIONS(36),
    [sym__layout_close_brace] = ACTIONS(36),
    [anon_sym_SEMI] = ACTIONS(36),
    [sym_comment] = ACTIONS(10),
  },
  [604] = {
    [sym__layout_semicolon] = ACTIONS(685),
    [sym__layout_close_brace] = ACTIONS(685),
    [anon_sym_SEMI] = ACTIONS(685),
    [sym_comment] = ACTIONS(10),
  },
  [605] = {
    [sym__vclose] = STATE(622),
    [sym__layout_close_brace] = ACTIONS(849),
    [sym_comment] = ACTIONS(10),
  },
  [606] = {
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
  },
  [607] = {
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
  },
  [608] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym__layout_close_brace] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_with] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [609] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym__layout_close_brace] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_with] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [610] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym__layout_close_brace] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [611] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym__layout_close_brace] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [612] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym__layout_close_brace] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [613] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym__layout_close_brace] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_DASH_GT] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [614] = {
    [sym__layout_semicolon] = ACTIONS(635),
    [sym__layout_close_brace] = ACTIONS(635),
    [anon_sym_SEMI] = ACTIONS(635),
    [sym_comment] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(635),
    [anon_sym_where] = ACTIONS(635),
  },
  [615] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [sym__layout_close_brace] = ACTIONS(134),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_name_at] = ACTIONS(136),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LPAREN_PIPE] = ACTIONS(136),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
  },
  [616] = {
    [sym__layout_semicolon] = ACTIONS(172),
    [sym__layout_close_brace] = ACTIONS(172),
    [sym_literal] = ACTIONS(174),
    [sym_set_n] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_name_at] = ACTIONS(174),
    [sym_qualified_name] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_Prop] = ACTIONS(174),
    [anon_sym_Set] = ACTIONS(174),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_quoteTerm] = ACTIONS(174),
    [anon_sym_unquote] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN_PIPE] = ACTIONS(174),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_where] = ACTIONS(174),
  },
  [617] = {
    [anon_sym_RBRACE] = ACTIONS(880),
    [sym_comment] = ACTIONS(10),
  },
  [618] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(882),
    [sym_comment] = ACTIONS(10),
  },
  [619] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(882),
  },
  [620] = {
    [sym_comment] = ACTIONS(10),
    [anon_sym_PIPE_RPAREN] = ACTIONS(882),
  },
  [621] = {
    [sym__layout_semicolon] = ACTIONS(737),
    [sym__layout_close_brace] = ACTIONS(737),
    [anon_sym_SEMI] = ACTIONS(737),
    [sym_comment] = ACTIONS(10),
  },
  [622] = {
    [sym__layout_semicolon] = ACTIONS(785),
    [sym__layout_close_brace] = ACTIONS(785),
    [anon_sym_SEMI] = ACTIONS(785),
    [sym_comment] = ACTIONS(10),
  },
  [623] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [sym__layout_close_brace] = ACTIONS(468),
    [sym_literal] = ACTIONS(470),
    [sym_set_n] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_name_at] = ACTIONS(470),
    [sym_qualified_name] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_Prop] = ACTIONS(470),
    [anon_sym_Set] = ACTIONS(470),
    [anon_sym_quote] = ACTIONS(470),
    [anon_sym_quoteTerm] = ACTIONS(470),
    [anon_sym_unquote] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_LPAREN_PIPE] = ACTIONS(470),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
  },
  [624] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [sym__layout_close_brace] = ACTIONS(515),
    [sym_literal] = ACTIONS(517),
    [sym_set_n] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_name_at] = ACTIONS(517),
    [sym_qualified_name] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_Prop] = ACTIONS(517),
    [anon_sym_Set] = ACTIONS(517),
    [anon_sym_quote] = ACTIONS(517),
    [anon_sym_quoteTerm] = ACTIONS(517),
    [anon_sym_unquote] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_LPAREN_PIPE] = ACTIONS(517),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [anon_sym_module] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__vopen, 1),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__vopen, 1),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__vclose, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 1),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 2),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lhs, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expr1, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__application, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expr2, 1),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expr2, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_atomic_expr, 1),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_atomic_expr, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_clause, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_source_file, 2),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_exprs1, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 2),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 2),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(121),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_curly, 2),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_curly, 2),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expr, 1),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tele_arrow_repeat1, 1),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 1),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(152),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tele_arrow, 1),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(205),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(206),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(207),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(208),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(209),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(210),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(214),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(216),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(218),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(230),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(231),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(232),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lhs, 2),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(242),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(243),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(244),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(245),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(246),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(247),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(258),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(259),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_clause, 2),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_semi, 1),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_semi, 1),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 3),
  [354] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [357] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [360] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [363] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [366] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [369] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expr1, 2),
  [374] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(264),
  [377] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(265),
  [380] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(266),
  [383] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(267),
  [386] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(268),
  [389] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(269),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__application, 2),
  [394] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(264),
  [397] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(265),
  [400] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(266),
  [403] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(267),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2),
  [408] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(268),
  [411] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(269),
  [414] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(276),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(277),
  [418] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(278),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(279),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(280),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(281),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(288),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(289),
  [430] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(290),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(292),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(293),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(294),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(295),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(291),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(302),
  [448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(303),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(304),
  [452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(306),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(307),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(308),
  [458] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(309),
  [460] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(305),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_curly, 3),
  [470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_curly, 3),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(319),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(318),
  [476] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(324),
  [479] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(325),
  [482] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(326),
  [485] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(327),
  [488] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(328),
  [491] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(329),
  [494] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(29),
  [497] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(29),
  [500] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(160),
  [503] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(161),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 2),
  [508] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(162),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 3),
  [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 3),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(339),
  [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(338),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(347),
  [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(346),
  [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(353),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(352),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_rewrite_equations, 2),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(361),
  [539] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(360),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_expressions, 2),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lhs, 3),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(368),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(369),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(370),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(372),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(373),
  [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(374),
  [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(375),
  [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(371),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_rhs, 2),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(381),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(382),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(383),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(384),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(385),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(386),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_anonymous_name, 1),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(394),
  [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(395),
  [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(396),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(397),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(398),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(399),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations0, 1),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_where_clause, 2),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_clause, 3),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(264),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(265),
  [605] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(266),
  [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(267),
  [609] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(268),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(269),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(413),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(412),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(422),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(421),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expr, 3),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(324),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(325),
  [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(326),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [649] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(328),
  [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(329),
  [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(438),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(437),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
  [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(455),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(454),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(462),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(461),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations0, 2),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations1, 1),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
  [709] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(489),
  [712] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(490),
  [715] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(491),
  [718] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(492),
  [721] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(493),
  [724] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(494),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_where_clause, 4),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
  [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(504),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(505),
  [747] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(506),
  [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(507),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(508),
  [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(509),
  [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(517),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(518),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(519),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(520),
  [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(521),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(522),
  [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(531),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(532),
  [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(533),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(534),
  [775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(535),
  [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(536),
  [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(537),
  [781] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(548),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations1, 2),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(489),
  [791] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(490),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(491),
  [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(492),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(493),
  [799] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(494),
  [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(557),
  [803] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(556),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_typed_bindings, 5),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_typed_bindings, 5),
  [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(563),
  [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(562),
  [813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(571),
  [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(570),
  [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(578),
  [819] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(579),
  [821] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(580),
  [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(582),
  [825] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(583),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(584),
  [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(585),
  [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(581),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(591),
  [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(592),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(593),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(594),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(595),
  [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(596),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(603),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [853] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(476),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_typed_bindings, 6),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_typed_bindings, 6),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
  [876] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(616),
  [878] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(615),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(623),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(624),
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
