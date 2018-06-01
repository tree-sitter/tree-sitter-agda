#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 790
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__newline = 1,
  sym__indent = 2,
  sym__dedent = 3,
  sym__const_forall = 4,
  sym__const_right_arrow = 5,
  sym_string = 6,
  sym_int = 7,
  sym_name = 8,
  sym_qualified_name = 9,
  anon_sym__ = 10,
  anon_sym_DOT = 11,
  anon_sym_DOT_DOT = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACE_LBRACE = 15,
  anon_sym_RBRACE_RBRACE = 16,
  sym_comment = 17,
  anon_sym_EQ = 18,
  anon_sym_PIPE = 19,
  anon_sym_QMARK = 20,
  anon_sym_Prop = 21,
  anon_sym_Set = 22,
  anon_sym_quote = 23,
  anon_sym_quoteTerm = 24,
  anon_sym_unquote = 25,
  anon_sym_record = 26,
  anon_sym_SEMI = 27,
  anon_sym_LPAREN = 28,
  anon_sym_COLON = 29,
  anon_sym_RPAREN = 30,
  anon_sym_public = 31,
  anon_sym_using = 32,
  anon_sym_hiding = 33,
  anon_sym_renaming = 34,
  anon_sym_module = 35,
  anon_sym_to = 36,
  anon_sym_rewrite = 37,
  anon_sym_with = 38,
  anon_sym_where = 39,
  anon_sym_data = 40,
  anon_sym_codata = 41,
  anon_sym_instance = 42,
  anon_sym_constructor = 43,
  anon_sym_inductive = 44,
  anon_sym_coinductive = 45,
  anon_sym_eta_DASHequality = 46,
  anon_sym_no_DASHeta_DASHequality = 47,
  anon_sym_field = 48,
  anon_sym_overlap = 49,
  sym_pragma = 50,
  anon_sym_infix = 51,
  anon_sym_infixl = 52,
  anon_sym_infixr = 53,
  sym_source_file = 54,
  sym_literal = 55,
  sym_anonymous_name = 56,
  sym__binding_name = 57,
  sym__maybe_dotted_name = 58,
  sym__maybe_dotted_names1 = 59,
  sym__arg_names = 60,
  sym_arg_name = 61,
  sym_expr = 62,
  sym__expr1 = 63,
  sym__application = 64,
  sym__expr2 = 65,
  sym__atoms1 = 66,
  sym_atom = 67,
  sym__atom_curly = 68,
  sym__atom_no_curly = 69,
  sym__record_assignments1 = 70,
  sym__record_assignment = 71,
  sym_module_assignment = 72,
  sym__field_assignments1 = 73,
  sym_field_assignment = 74,
  sym__typed_bindings1 = 75,
  sym_untyped_binding = 76,
  sym_typed_binding = 77,
  sym__typed_untyped_binding1 = 78,
  sym__open_args1 = 79,
  sym_import_directive = 80,
  sym_renaming = 81,
  sym__import_name = 82,
  sym__comma_import_names1 = 83,
  sym_function_clause = 84,
  sym_lhs = 85,
  sym_rewrite_equations = 86,
  sym_with_expressions = 87,
  sym_rhs = 88,
  sym_where_clause = 89,
  sym_data = 90,
  sym_data_signature_only = 91,
  sym_record = 92,
  sym_record_signature_only = 93,
  sym_record_declarations_block = 94,
  sym__record_directives1 = 95,
  sym_record_constructor_instance = 96,
  sym_record_constructor = 97,
  sym__record_directive = 98,
  sym_record_induction = 99,
  sym_record_eta = 100,
  sym_field = 101,
  sym__arg_type_signatures_block = 102,
  sym__arg_type_signatures1 = 103,
  sym_arg_type_signature = 104,
  sym__declaration = 105,
  sym__declaration_block = 106,
  sym_infix = 107,
  sym_instance = 108,
  sym__declarations0 = 109,
  sym__declarations1 = 110,
  aux_sym__maybe_dotted_names1_repeat1 = 111,
  aux_sym__arg_names_repeat1 = 112,
  aux_sym_arg_name_repeat1 = 113,
  aux_sym__expr1_repeat1 = 114,
  aux_sym__application_repeat1 = 115,
  aux_sym__record_assignments1_repeat1 = 116,
  aux_sym_module_assignment_repeat1 = 117,
  aux_sym__field_assignments1_repeat1 = 118,
  aux_sym__typed_bindings1_repeat1 = 119,
  aux_sym__typed_untyped_binding1_repeat1 = 120,
  aux_sym_import_directive_repeat1 = 121,
  aux_sym__comma_import_names1_repeat1 = 122,
  aux_sym__record_directives1_repeat1 = 123,
  aux_sym__arg_type_signatures1_repeat1 = 124,
  aux_sym_infix_repeat1 = 125,
  aux_sym__declarations1_repeat1 = 126,
};

static const char *ts_symbol_names[] = {
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [ts_builtin_sym_end] = "END",
  [sym__const_forall] = "_const_forall",
  [sym__const_right_arrow] = "_const_right_arrow",
  [sym_string] = "string",
  [sym_int] = "int",
  [sym_name] = "name",
  [sym_qualified_name] = "qualified_name",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_QMARK] = "?",
  [anon_sym_Prop] = "Prop",
  [anon_sym_Set] = "Set",
  [anon_sym_quote] = "quote",
  [anon_sym_quoteTerm] = "quoteTerm",
  [anon_sym_unquote] = "unquote",
  [anon_sym_record] = "record",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_RPAREN] = ")",
  [anon_sym_public] = "public",
  [anon_sym_using] = "using",
  [anon_sym_hiding] = "hiding",
  [anon_sym_renaming] = "renaming",
  [anon_sym_module] = "module",
  [anon_sym_to] = "to",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_with] = "with",
  [anon_sym_where] = "where",
  [anon_sym_data] = "data",
  [anon_sym_codata] = "codata",
  [anon_sym_instance] = "instance",
  [anon_sym_constructor] = "constructor",
  [anon_sym_inductive] = "inductive",
  [anon_sym_coinductive] = "coinductive",
  [anon_sym_eta_DASHequality] = "eta-equality",
  [anon_sym_no_DASHeta_DASHequality] = "no-eta-equality",
  [anon_sym_field] = "field",
  [anon_sym_overlap] = "overlap",
  [sym_pragma] = "pragma",
  [anon_sym_infix] = "infix",
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [sym_source_file] = "source_file",
  [sym_literal] = "literal",
  [sym_anonymous_name] = "anonymous_name",
  [sym__binding_name] = "_binding_name",
  [sym__maybe_dotted_name] = "_maybe_dotted_name",
  [sym__maybe_dotted_names1] = "_maybe_dotted_names1",
  [sym__arg_names] = "_arg_names",
  [sym_arg_name] = "arg_name",
  [sym_expr] = "expr",
  [sym__expr1] = "_expr1",
  [sym__application] = "_application",
  [sym__expr2] = "_expr2",
  [sym__atoms1] = "_atoms1",
  [sym_atom] = "atom",
  [sym__atom_curly] = "_atom_curly",
  [sym__atom_no_curly] = "_atom_no_curly",
  [sym__record_assignments1] = "_record_assignments1",
  [sym__record_assignment] = "_record_assignment",
  [sym_module_assignment] = "module_assignment",
  [sym__field_assignments1] = "_field_assignments1",
  [sym_field_assignment] = "field_assignment",
  [sym__typed_bindings1] = "_typed_bindings1",
  [sym_untyped_binding] = "untyped_binding",
  [sym_typed_binding] = "typed_binding",
  [sym__typed_untyped_binding1] = "_typed_untyped_binding1",
  [sym__open_args1] = "_open_args1",
  [sym_import_directive] = "import_directive",
  [sym_renaming] = "renaming",
  [sym__import_name] = "_import_name",
  [sym__comma_import_names1] = "_comma_import_names1",
  [sym_function_clause] = "function_clause",
  [sym_lhs] = "lhs",
  [sym_rewrite_equations] = "rewrite_equations",
  [sym_with_expressions] = "with_expressions",
  [sym_rhs] = "rhs",
  [sym_where_clause] = "where_clause",
  [sym_data] = "data",
  [sym_data_signature_only] = "data_signature_only",
  [sym_record] = "record",
  [sym_record_signature_only] = "record_signature_only",
  [sym_record_declarations_block] = "record_declarations_block",
  [sym__record_directives1] = "_record_directives1",
  [sym_record_constructor_instance] = "record_constructor_instance",
  [sym_record_constructor] = "record_constructor",
  [sym__record_directive] = "_record_directive",
  [sym_record_induction] = "record_induction",
  [sym_record_eta] = "record_eta",
  [sym_field] = "field",
  [sym__arg_type_signatures_block] = "_arg_type_signatures_block",
  [sym__arg_type_signatures1] = "_arg_type_signatures1",
  [sym_arg_type_signature] = "arg_type_signature",
  [sym__declaration] = "_declaration",
  [sym__declaration_block] = "_declaration_block",
  [sym_infix] = "infix",
  [sym_instance] = "instance",
  [sym__declarations0] = "_declarations0",
  [sym__declarations1] = "_declarations1",
  [aux_sym__maybe_dotted_names1_repeat1] = "_maybe_dotted_names1_repeat1",
  [aux_sym__arg_names_repeat1] = "_arg_names_repeat1",
  [aux_sym_arg_name_repeat1] = "arg_name_repeat1",
  [aux_sym__expr1_repeat1] = "_expr1_repeat1",
  [aux_sym__application_repeat1] = "_application_repeat1",
  [aux_sym__record_assignments1_repeat1] = "_record_assignments1_repeat1",
  [aux_sym_module_assignment_repeat1] = "module_assignment_repeat1",
  [aux_sym__field_assignments1_repeat1] = "_field_assignments1_repeat1",
  [aux_sym__typed_bindings1_repeat1] = "_typed_bindings1_repeat1",
  [aux_sym__typed_untyped_binding1_repeat1] = "_typed_untyped_binding1_repeat1",
  [aux_sym_import_directive_repeat1] = "import_directive_repeat1",
  [aux_sym__comma_import_names1_repeat1] = "_comma_import_names1_repeat1",
  [aux_sym__record_directives1_repeat1] = "_record_directives1_repeat1",
  [aux_sym__arg_type_signatures1_repeat1] = "_arg_type_signatures1_repeat1",
  [aux_sym_infix_repeat1] = "infix_repeat1",
  [aux_sym__declarations1_repeat1] = "_declarations1_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__const_forall] = {
    .visible = false,
    .named = true,
  },
  [sym__const_right_arrow] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inductive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coinductive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eta_DASHequality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHeta_DASHequality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlap] = {
    .visible = true,
    .named = false,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_infix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixr] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_name] = {
    .visible = true,
    .named = true,
  },
  [sym__binding_name] = {
    .visible = false,
    .named = true,
  },
  [sym__maybe_dotted_name] = {
    .visible = false,
    .named = true,
  },
  [sym__maybe_dotted_names1] = {
    .visible = false,
    .named = true,
  },
  [sym__arg_names] = {
    .visible = false,
    .named = true,
  },
  [sym_arg_name] = {
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
  [sym__atoms1] = {
    .visible = false,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_curly] = {
    .visible = false,
    .named = true,
  },
  [sym__atom_no_curly] = {
    .visible = false,
    .named = true,
  },
  [sym__record_assignments1] = {
    .visible = false,
    .named = true,
  },
  [sym__record_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_module_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__field_assignments1] = {
    .visible = false,
    .named = true,
  },
  [sym_field_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__typed_bindings1] = {
    .visible = false,
    .named = true,
  },
  [sym_untyped_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_binding] = {
    .visible = true,
    .named = true,
  },
  [sym__typed_untyped_binding1] = {
    .visible = false,
    .named = true,
  },
  [sym__open_args1] = {
    .visible = false,
    .named = true,
  },
  [sym_import_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_renaming] = {
    .visible = true,
    .named = true,
  },
  [sym__import_name] = {
    .visible = false,
    .named = true,
  },
  [sym__comma_import_names1] = {
    .visible = false,
    .named = true,
  },
  [sym_function_clause] = {
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
  [sym_rhs] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [sym_data_signature_only] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_record_signature_only] = {
    .visible = true,
    .named = true,
  },
  [sym_record_declarations_block] = {
    .visible = true,
    .named = true,
  },
  [sym__record_directives1] = {
    .visible = false,
    .named = true,
  },
  [sym_record_constructor_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_record_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym__record_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_record_induction] = {
    .visible = true,
    .named = true,
  },
  [sym_record_eta] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__arg_type_signatures_block] = {
    .visible = false,
    .named = true,
  },
  [sym__arg_type_signatures1] = {
    .visible = false,
    .named = true,
  },
  [sym_arg_type_signature] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration_block] = {
    .visible = false,
    .named = true,
  },
  [sym_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_instance] = {
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
  [aux_sym__maybe_dotted_names1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_name_repeat1] = {
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
  [aux_sym__record_assignments1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_assignments1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__typed_bindings1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__typed_untyped_binding1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_import_names1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__record_directives1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_type_signatures1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_infix_repeat1] = {
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'P')
        ADVANCE(15);
      if (lookahead == 'S')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(22);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'c')
        ADVANCE(24);
      if (lookahead == 'd')
        ADVANCE(48);
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == 'f')
        ADVANCE(64);
      if (lookahead == 'h')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(80);
      if (lookahead == 'm')
        ADVANCE(100);
      if (lookahead == 'n')
        ADVANCE(106);
      if (lookahead == 'o')
        ADVANCE(121);
      if (lookahead == 'p')
        ADVANCE(128);
      if (lookahead == 'q')
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(143);
      if (lookahead == 't')
        ADVANCE(160);
      if (lookahead == 'u')
        ADVANCE(162);
      if (lookahead == 'w')
        ADVANCE(173);
      if (lookahead == '{')
        ADVANCE(181);
      if (lookahead == '|')
        ADVANCE(191);
      if (lookahead == '}')
        ADVANCE(192);
      if (lookahead == 8594)
        ADVANCE(8);
      if (lookahead == 8704)
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(194);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__const_right_arrow);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 15:
      if (lookahead == 'r')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'o')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'p')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_Prop);
      END_STATE();
    case 19:
      if (lookahead == 'e')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 't')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 22:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 24:
      if (lookahead == 'o')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'd')
        ADVANCE(26);
      if (lookahead == 'i')
        ADVANCE(30);
      if (lookahead == 'n')
        ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'a')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 't')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'a')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_codata);
      END_STATE();
    case 30:
      if (lookahead == 'n')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'd')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'c')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 't')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'i')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'v')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_coinductive);
      END_STATE();
    case 39:
      if (lookahead == 's')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 't')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'r')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'u')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'c')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 't')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'o')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'r')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 48:
      if (lookahead == 'a')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 't')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'a')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 52:
      if (lookahead == 't')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'a')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == '-')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'e')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'q')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'u')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'l')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'i')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 't')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'y')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_eta_DASHequality);
      END_STATE();
    case 64:
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'e')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'l')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'd')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 69:
      if (lookahead == 'r')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'a')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'l')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'l')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__const_forall);
      END_STATE();
    case 74:
      if (lookahead == 'i')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'd')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'i')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'n')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'g')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 80:
      if (lookahead == 'n')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'd')
        ADVANCE(82);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 's')
        ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'u')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'c')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'i')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'v')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'e')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_inductive);
      END_STATE();
    case 89:
      if (lookahead == 'i')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'x')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l')
        ADVANCE(92);
      if (lookahead == 'r')
        ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_infixl);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_infixr);
      END_STATE();
    case 94:
      if (lookahead == 't')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'a')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'n')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'c')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 100:
      if (lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'd')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'u')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'l')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 106:
      if (lookahead == 'o')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == '-')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 't')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'a')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == '-')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'e')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'q')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'u')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'a')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'l')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'i')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 't')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'y')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_no_DASHeta_DASHequality);
      END_STATE();
    case 121:
      if (lookahead == 'v')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'e')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'r')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'l')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'a')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'p')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_overlap);
      END_STATE();
    case 128:
      if (lookahead == 'u')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'b')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'l')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'i')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'c')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 134:
      if (lookahead == 'u')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'o')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 't')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'e')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == 'T')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'e')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'r')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'm')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      END_STATE();
    case 143:
      if (lookahead == 'e')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'c')
        ADVANCE(145);
      if (lookahead == 'n')
        ADVANCE(149);
      if (lookahead == 'w')
        ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 'o')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'r')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'd')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 149:
      if (lookahead == 'a')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'm')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'i')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'n')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'g')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_renaming);
      END_STATE();
    case 155:
      if (lookahead == 'r')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'i')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'e')
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 160:
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 162:
      if (lookahead == 'n')
        ADVANCE(163);
      if (lookahead == 's')
        ADVANCE(169);
      END_STATE();
    case 163:
      if (lookahead == 'q')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'u')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'o')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 't')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'e')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_unquote);
      END_STATE();
    case 169:
      if (lookahead == 'i')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'n')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'g')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 173:
      if (lookahead == 'h')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(178);
      END_STATE();
    case 174:
      if (lookahead == 'e')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'r')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'e')
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 178:
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'h')
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '{')
        ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == '#')
        ADVANCE(183);
      if (lookahead != 0)
        ADVANCE(187);
      END_STATE();
    case 183:
      if (lookahead == '#')
        ADVANCE(184);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 184:
      if (lookahead == '-')
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 185:
      if (lookahead == '}')
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_pragma);
      END_STATE();
    case 187:
      if (lookahead == '-')
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == '}')
        ADVANCE(189);
      if (lookahead != 0)
        ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(194);
      END_STATE();
    case 195:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(213);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'c')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'f')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(231);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(197);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(198);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '_')
        ADVANCE(199);
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
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(197);
      END_STATE();
    case 199:
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
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(197);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(198);
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
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(197);
      END_STATE();
    case 201:
      if (lookahead == '_')
        ADVANCE(202);
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
        ADVANCE(203);
      END_STATE();
    case 202:
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
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
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
        ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(207);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(208);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'p')
        ADVANCE(209);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(211);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(212);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(214);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(213);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'c')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'f')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(231);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '.')
        ADVANCE(201);
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
        ADVANCE(203);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(217);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(218);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(219);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(220);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(221);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_codata);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(223);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(224);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(225);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(227);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(228);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(229);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(230);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_field);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(232);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(233);
      if (lookahead == 's')
        ADVANCE(238);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(234);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'x')
        ADVANCE(235);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(236);
      if (lookahead == 'r')
        ADVANCE(237);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(239);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(240);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(241);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(242);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(243);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(245);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(246);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(247);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(248);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == 'T')
        ADVANCE(249);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(250);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(251);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'm')
        ADVANCE(252);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(254);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(255);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(256);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(257);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(258);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(260);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'q')
        ADVANCE(261);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(262);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(263);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(264);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(265);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 267:
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
        ADVANCE(203);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(182);
      END_STATE();
    case 269:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(272);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(280);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(287);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(269);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(273);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(272);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(280);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(287);
      if (lookahead == '|')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(275);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(276);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(277);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(278);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(279);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(281);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(255);
      if (lookahead == 'w')
        ADVANCE(282);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(283);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(284);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(285);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(286);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'h')
        ADVANCE(288);
      if (lookahead == 'i')
        ADVANCE(292);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(289);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(290);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(291);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(293);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'h')
        ADVANCE(294);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(187);
      END_STATE();
    case 298:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(299);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(300);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(301);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(299);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '_')
        ADVANCE(202);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(190);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 304:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(305);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(304);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(306);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(305);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 307:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(313);
      if (lookahead == '_')
        ADVANCE(315);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(307);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(309);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(310);
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
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
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
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
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
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(314);
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
        ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(313);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 315:
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
        ADVANCE(312);
      END_STATE();
    case 316:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == '\\')
        SKIP(318);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(316);
      END_STATE();
    case 317:
      if (lookahead == '-')
        ADVANCE(7);
      END_STATE();
    case 318:
      if (lookahead == 'n')
        SKIP(316);
      END_STATE();
    case 319:
      if (lookahead == '-')
        ADVANCE(297);
      END_STATE();
    case 320:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(321);
      if (lookahead == 'w')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '|')
        ADVANCE(191);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == 8594)
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(320);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(194);
      END_STATE();
    case 321:
      if (lookahead == 'n')
        SKIP(320);
      END_STATE();
    case 322:
      if (lookahead == 'h')
        ADVANCE(174);
      END_STATE();
    case 323:
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(324);
      if (lookahead == 'm')
        ADVANCE(100);
      if (lookahead == 'r')
        ADVANCE(325);
      if (lookahead == 'w')
        ADVANCE(173);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(323);
      END_STATE();
    case 324:
      if (lookahead == 'n')
        SKIP(323);
      END_STATE();
    case 325:
      if (lookahead == 'e')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'w')
        ADVANCE(155);
      END_STATE();
    case 327:
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(328);
      if (lookahead == 'm')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      END_STATE();
    case 328:
      if (lookahead == 'n')
        SKIP(327);
      END_STATE();
    case 329:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(330);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(329);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(330);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '|')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 332:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(335);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == 8594)
        ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(332);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(197);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '>')
        ADVANCE(334);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__const_right_arrow);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(335);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == 8594)
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 337:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(338);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == 8594)
        ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(337);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(338);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == 8594)
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 340:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == '\\')
        ADVANCE(342);
      if (lookahead == '_')
        ADVANCE(344);
      if (lookahead == 'w')
        ADVANCE(345);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(340);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(343);
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
        ADVANCE(312);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == '\\')
        ADVANCE(342);
      if (lookahead == '_')
        ADVANCE(344);
      if (lookahead == 'w')
        ADVANCE(345);
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
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 344:
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
        ADVANCE(312);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'h')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'e')
        ADVANCE(347);
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
        ADVANCE(312);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'r')
        ADVANCE(348);
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
        ADVANCE(312);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'e')
        ADVANCE(349);
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
        ADVANCE(312);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 350:
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '\\')
        ADVANCE(351);
      if (lookahead == '_')
        ADVANCE(202);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(350);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '\\')
        ADVANCE(351);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 353:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == '_')
        ADVANCE(315);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'o')
        ADVANCE(364);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(353);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(355);
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
        ADVANCE(312);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'o')
        ADVANCE(364);
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
        ADVANCE(312);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(357);
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
        ADVANCE(312);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 's')
        ADVANCE(358);
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
        ADVANCE(312);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 't')
        ADVANCE(359);
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
        ADVANCE(312);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'a')
        ADVANCE(360);
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
        ADVANCE(312);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(361);
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
        ADVANCE(312);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'c')
        ADVANCE(362);
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
        ADVANCE(312);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'e')
        ADVANCE(363);
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
        ADVANCE(312);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'v')
        ADVANCE(365);
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
        ADVANCE(312);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'r')
        ADVANCE(367);
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
        ADVANCE(312);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'l')
        ADVANCE(368);
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
        ADVANCE(312);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'a')
        ADVANCE(369);
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
        ADVANCE(312);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'p')
        ADVANCE(370);
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
        ADVANCE(312);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_overlap);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 371:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(372);
      if (lookahead == '_')
        ADVANCE(344);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(371);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(373);
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
        ADVANCE(312);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(372);
      if (lookahead == '_')
        ADVANCE(344);
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
        ADVANCE(312);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(375);
      if (lookahead == 'm')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(173);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(374);
      END_STATE();
    case 375:
      if (lookahead == 'n')
        SKIP(374);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == '\\')
        SKIP(377);
      if (lookahead == 'm')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(376);
      END_STATE();
    case 377:
      if (lookahead == 'n')
        SKIP(376);
      END_STATE();
    case 378:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(379);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == 8594)
        ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(378);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(379);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == 8594)
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 381:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(382);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(381);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(383);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(382);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(385);
      if (lookahead == 'c')
        ADVANCE(386);
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == 'h')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(388);
      if (lookahead == 'n')
        ADVANCE(106);
      if (lookahead == 'p')
        ADVANCE(128);
      if (lookahead == 'r')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(160);
      if (lookahead == 'u')
        ADVANCE(392);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(384);
      END_STATE();
    case 385:
      if (lookahead == 'n')
        SKIP(384);
      END_STATE();
    case 386:
      if (lookahead == 'o')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'i')
        ADVANCE(30);
      if (lookahead == 'n')
        ADVANCE(39);
      END_STATE();
    case 388:
      if (lookahead == 'n')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'd')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(94);
      END_STATE();
    case 390:
      if (lookahead == 'e')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'n')
        ADVANCE(149);
      END_STATE();
    case 392:
      if (lookahead == 's')
        ADVANCE(169);
      END_STATE();
    case 393:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(394);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(393);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(395);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(394);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '|')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 396:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(397);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'h')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(405);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(411);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(396);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(398);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(397);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'h')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(405);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(411);
      if (lookahead == 'u')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(400);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(401);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(402);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(403);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'g')
        ADVANCE(404);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(406);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'b')
        ADVANCE(407);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'l')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(409);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(410);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(412);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(255);
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(414);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'm')
        ADVANCE(415);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(417);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'g')
        ADVANCE(418);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_renaming);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(260);
      if (lookahead == 's')
        ADVANCE(420);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(421);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(422);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'g')
        ADVANCE(423);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 424:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == '\\')
        ADVANCE(425);
      if (lookahead == '_')
        ADVANCE(315);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(424);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(426);
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
        ADVANCE(312);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == '\\')
        ADVANCE(425);
      if (lookahead == '_')
        ADVANCE(311);
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
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 427:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == '_')
        ADVANCE(344);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(427);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(429);
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
        ADVANCE(312);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == '_')
        ADVANCE(344);
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
        ADVANCE(312);
      END_STATE();
    case 430:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(431);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(287);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(430);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(432);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(431);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(287);
      if (lookahead == '|')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 433:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(433);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '|')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'h')
        ADVANCE(288);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 437:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(438);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == 8594)
        ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(439);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(438);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == 8594)
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 440:
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(441);
      if (lookahead == 'm')
        ADVANCE(100);
      if (lookahead == 'w')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(440);
      END_STATE();
    case 441:
      if (lookahead == 'n')
        SKIP(440);
      END_STATE();
    case 442:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(443);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'h')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(405);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(411);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(442);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(443);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'h')
        ADVANCE(399);
      if (lookahead == 'p')
        ADVANCE(405);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(411);
      if (lookahead == 'u')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 445:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(446);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '}')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(445);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(446);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 448:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(449);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '}')
        ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(448);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == ':')
        ADVANCE(270);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(449);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 451:
      if (lookahead == '}')
        ADVANCE(193);
      END_STATE();
    case 452:
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(453);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(452);
      END_STATE();
    case 453:
      if (lookahead == 'n')
        SKIP(452);
      END_STATE();
    case 454:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(455);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == 8594)
        ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(454);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(455);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == 8594)
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 457:
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == '\\')
        SKIP(458);
      if (lookahead == 'w')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(457);
      END_STATE();
    case 458:
      if (lookahead == 'n')
        SKIP(457);
      END_STATE();
    case 459:
      if (lookahead == '-')
        ADVANCE(317);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(460);
      if (lookahead == 'w')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(459);
      END_STATE();
    case 460:
      if (lookahead == 'n')
        SKIP(459);
      END_STATE();
    case 461:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(462);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'c')
        ADVANCE(464);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(484);
      if (lookahead == 'f')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(496);
      if (lookahead == 'n')
        ADVANCE(505);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(461);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(462);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'c')
        ADVANCE(464);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(484);
      if (lookahead == 'f')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(496);
      if (lookahead == 'n')
        ADVANCE(505);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(465);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(466);
      if (lookahead == 'n')
        ADVANCE(475);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(467);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'd')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(469);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(470);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(472);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'v')
        ADVANCE(473);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(474);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_coinductive);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 's')
        ADVANCE(476);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(477);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(478);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(479);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(480);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(481);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(482);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(483);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(485);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(486);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(487);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(488);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'q')
        ADVANCE(489);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(490);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(491);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(492);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(493);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(494);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'y')
        ADVANCE(495);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_eta_DASHequality);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(497);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(498);
      if (lookahead == 'f')
        ADVANCE(233);
      if (lookahead == 's')
        ADVANCE(238);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(499);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(500);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(501);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(502);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'v')
        ADVANCE(503);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(504);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_inductive);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(506);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(507);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(508);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(509);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(510);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(511);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(512);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'q')
        ADVANCE(513);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(514);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(515);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(516);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(517);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(518);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'y')
        ADVANCE(519);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_no_DASHeta_DASHequality);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 520:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(521);
      if (lookahead == '_')
        ADVANCE(315);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(520);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(312);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(522);
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
        ADVANCE(312);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(521);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 523:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(524);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(523);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(525);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(524);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '|')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 526:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(527);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(451);
      if (lookahead == 8594)
        ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(526);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(528);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(527);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == 8594)
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 529:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(530);
      if (lookahead == '_')
        ADVANCE(315);
      if (lookahead == 'm')
        ADVANCE(532);
      if (lookahead == '{')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(529);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(531);
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
        ADVANCE(312);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(530);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'm')
        ADVANCE(532);
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
        ADVANCE(312);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'o')
        ADVANCE(533);
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
        ADVANCE(312);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'd')
        ADVANCE(534);
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
        ADVANCE(312);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'u')
        ADVANCE(535);
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
        ADVANCE(312);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'l')
        ADVANCE(536);
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
        ADVANCE(312);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'e')
        ADVANCE(537);
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
        ADVANCE(312);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 538:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(539);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(538);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(540);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(539);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(436);
      if (lookahead == '|')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 541:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(542);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(548);
      if (lookahead == '?')
        ADVANCE(549);
      if (lookahead == 'P')
        ADVANCE(550);
      if (lookahead == 'S')
        ADVANCE(554);
      if (lookahead == '\\')
        ADVANCE(557);
      if (lookahead == '_')
        ADVANCE(599);
      if (lookahead == 'i')
        ADVANCE(560);
      if (lookahead == 'o')
        ADVANCE(568);
      if (lookahead == 'q')
        ADVANCE(575);
      if (lookahead == 'r')
        ADVANCE(584);
      if (lookahead == 'u')
        ADVANCE(590);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '|')
        ADVANCE(597);
      if (lookahead == 8594)
        ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(541);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(547);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(543);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '>')
        ADVANCE(545);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(198);
      if (lookahead == '_')
        ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(198);
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
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(543);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__const_right_arrow);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
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
        ADVANCE(547);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'r')
        ADVANCE(551);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'o')
        ADVANCE(552);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'p')
        ADVANCE(553);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'e')
        ADVANCE(555);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 't')
        ADVANCE(556);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'n')
        ADVANCE(558);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(542);
      if (lookahead == '.')
        ADVANCE(301);
      if (lookahead == '=')
        ADVANCE(548);
      if (lookahead == '?')
        ADVANCE(549);
      if (lookahead == 'P')
        ADVANCE(550);
      if (lookahead == 'S')
        ADVANCE(554);
      if (lookahead == '\\')
        ADVANCE(557);
      if (lookahead == '_')
        ADVANCE(559);
      if (lookahead == 'i')
        ADVANCE(560);
      if (lookahead == 'o')
        ADVANCE(568);
      if (lookahead == 'q')
        ADVANCE(575);
      if (lookahead == 'r')
        ADVANCE(584);
      if (lookahead == 'u')
        ADVANCE(590);
      if (lookahead == '|')
        ADVANCE(597);
      if (lookahead == 8594)
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(547);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '.')
        ADVANCE(201);
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
        ADVANCE(547);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'n')
        ADVANCE(561);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 's')
        ADVANCE(562);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 't')
        ADVANCE(563);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'a')
        ADVANCE(564);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'n')
        ADVANCE(565);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'c')
        ADVANCE(566);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'e')
        ADVANCE(567);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'v')
        ADVANCE(569);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'e')
        ADVANCE(570);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'r')
        ADVANCE(571);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'l')
        ADVANCE(572);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'a')
        ADVANCE(573);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'p')
        ADVANCE(574);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_overlap);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'u')
        ADVANCE(576);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'o')
        ADVANCE(577);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 't')
        ADVANCE(578);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'e')
        ADVANCE(579);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == 'T')
        ADVANCE(580);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'e')
        ADVANCE(581);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'r')
        ADVANCE(582);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'm')
        ADVANCE(583);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'e')
        ADVANCE(585);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'c')
        ADVANCE(586);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'o')
        ADVANCE(587);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'r')
        ADVANCE(588);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'd')
        ADVANCE(589);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'n')
        ADVANCE(591);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'q')
        ADVANCE(592);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'u')
        ADVANCE(593);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'o')
        ADVANCE(594);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 't')
        ADVANCE(595);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'e')
        ADVANCE(596);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(598);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 599:
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
        ADVANCE(547);
      END_STATE();
    case 600:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(601);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == '_')
        ADVANCE(315);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'o')
        ADVANCE(364);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(600);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(312);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '_')
        ADVANCE(311);
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
        ADVANCE(312);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(603);
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
        ADVANCE(312);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '=')
        ADVANCE(601);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == '_')
        ADVANCE(311);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'o')
        ADVANCE(364);
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
        ADVANCE(312);
      END_STATE();
    case 604:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(605);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(296);
      if (lookahead == '|')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(604);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(203);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(606);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '=')
        ADVANCE(271);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(605);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '|')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(203);
      END_STATE();
    case 607:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(608);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'c')
        ADVANCE(610);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'f')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(231);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(607);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(609);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(196);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == 'P')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(608);
      if (lookahead == '_')
        ADVANCE(215);
      if (lookahead == 'c')
        ADVANCE(610);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'f')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(231);
      if (lookahead == 'q')
        ADVANCE(244);
      if (lookahead == 'r')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(611);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(475);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(203);
      END_STATE();
    case 612:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(613);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(548);
      if (lookahead == '?')
        ADVANCE(549);
      if (lookahead == 'P')
        ADVANCE(550);
      if (lookahead == 'S')
        ADVANCE(554);
      if (lookahead == '\\')
        ADVANCE(614);
      if (lookahead == '_')
        ADVANCE(599);
      if (lookahead == 'i')
        ADVANCE(560);
      if (lookahead == 'o')
        ADVANCE(568);
      if (lookahead == 'q')
        ADVANCE(575);
      if (lookahead == 'r')
        ADVANCE(584);
      if (lookahead == 'u')
        ADVANCE(590);
      if (lookahead == '{')
        ADVANCE(302);
      if (lookahead == '|')
        ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(612);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(547);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(543);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
      if (lookahead == '_')
        ADVANCE(546);
      if (lookahead == 'n')
        ADVANCE(615);
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(547);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(613);
      if (lookahead == '.')
        ADVANCE(301);
      if (lookahead == '=')
        ADVANCE(548);
      if (lookahead == '?')
        ADVANCE(549);
      if (lookahead == 'P')
        ADVANCE(550);
      if (lookahead == 'S')
        ADVANCE(554);
      if (lookahead == '\\')
        ADVANCE(614);
      if (lookahead == '_')
        ADVANCE(559);
      if (lookahead == 'i')
        ADVANCE(560);
      if (lookahead == 'o')
        ADVANCE(568);
      if (lookahead == 'q')
        ADVANCE(575);
      if (lookahead == 'r')
        ADVANCE(584);
      if (lookahead == 'u')
        ADVANCE(590);
      if (lookahead == '|')
        ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(547);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 195},
  [2] = {.lex_state = 269, .external_lex_state = 2},
  [3] = {.lex_state = 298},
  [4] = {.lex_state = 304},
  [5] = {.lex_state = 307},
  [6] = {.lex_state = 307},
  [7] = {.lex_state = 316, .external_lex_state = 3},
  [8] = {.lex_state = 316, .external_lex_state = 4},
  [9] = {.lex_state = 320},
  [10] = {.lex_state = 316},
  [11] = {.lex_state = 323, .external_lex_state = 2},
  [12] = {.lex_state = 320},
  [13] = {.lex_state = 269, .external_lex_state = 2},
  [14] = {.lex_state = 269, .external_lex_state = 2},
  [15] = {.lex_state = 327, .external_lex_state = 2},
  [16] = {.lex_state = 316, .external_lex_state = 2},
  [17] = {.lex_state = 195},
  [18] = {.lex_state = 316},
  [19] = {.lex_state = 304},
  [20] = {.lex_state = 329},
  [21] = {.lex_state = 195},
  [22] = {.lex_state = 332},
  [23] = {.lex_state = 320},
  [24] = {.lex_state = 298},
  [25] = {.lex_state = 269, .external_lex_state = 2},
  [26] = {.lex_state = 304},
  [27] = {.lex_state = 304},
  [28] = {.lex_state = 304},
  [29] = {.lex_state = 320},
  [30] = {.lex_state = 320},
  [31] = {.lex_state = 320},
  [32] = {.lex_state = 332},
  [33] = {.lex_state = 332},
  [34] = {.lex_state = 320},
  [35] = {.lex_state = 304},
  [36] = {.lex_state = 337},
  [37] = {.lex_state = 320},
  [38] = {.lex_state = 340},
  [39] = {.lex_state = 350},
  [40] = {.lex_state = 304},
  [41] = {.lex_state = 340},
  [42] = {.lex_state = 340},
  [43] = {.lex_state = 340},
  [44] = {.lex_state = 195},
  [45] = {.lex_state = 195},
  [46] = {.lex_state = 353},
  [47] = {.lex_state = 195},
  [48] = {.lex_state = 371},
  [49] = {.lex_state = 304},
  [50] = {.lex_state = 304},
  [51] = {.lex_state = 374, .external_lex_state = 2},
  [52] = {.lex_state = 327, .external_lex_state = 2},
  [53] = {.lex_state = 304},
  [54] = {.lex_state = 298},
  [55] = {.lex_state = 371},
  [56] = {.lex_state = 316, .external_lex_state = 3},
  [57] = {.lex_state = 376, .external_lex_state = 2},
  [58] = {.lex_state = 316, .external_lex_state = 2},
  [59] = {.lex_state = 195},
  [60] = {.lex_state = 304},
  [61] = {.lex_state = 323, .external_lex_state = 2},
  [62] = {.lex_state = 304},
  [63] = {.lex_state = 323, .external_lex_state = 2},
  [64] = {.lex_state = 329},
  [65] = {.lex_state = 316, .external_lex_state = 2},
  [66] = {.lex_state = 195},
  [67] = {.lex_state = 195},
  [68] = {.lex_state = 304},
  [69] = {.lex_state = 304},
  [70] = {.lex_state = 304},
  [71] = {.lex_state = 378},
  [72] = {.lex_state = 298},
  [73] = {.lex_state = 332},
  [74] = {.lex_state = 304},
  [75] = {.lex_state = 320},
  [76] = {.lex_state = 320},
  [77] = {.lex_state = 378},
  [78] = {.lex_state = 378},
  [79] = {.lex_state = 337},
  [80] = {.lex_state = 381},
  [81] = {.lex_state = 298},
  [82] = {.lex_state = 304},
  [83] = {.lex_state = 320},
  [84] = {.lex_state = 381},
  [85] = {.lex_state = 381},
  [86] = {.lex_state = 304},
  [87] = {.lex_state = 384},
  [88] = {.lex_state = 350},
  [89] = {.lex_state = 304},
  [90] = {.lex_state = 384},
  [91] = {.lex_state = 320},
  [92] = {.lex_state = 269, .external_lex_state = 2},
  [93] = {.lex_state = 298},
  [94] = {.lex_state = 393},
  [95] = {.lex_state = 298},
  [96] = {.lex_state = 304},
  [97] = {.lex_state = 320},
  [98] = {.lex_state = 393},
  [99] = {.lex_state = 393},
  [100] = {.lex_state = 329},
  [101] = {.lex_state = 298},
  [102] = {.lex_state = 320},
  [103] = {.lex_state = 337},
  [104] = {.lex_state = 304},
  [105] = {.lex_state = 320},
  [106] = {.lex_state = 396},
  [107] = {.lex_state = 269, .external_lex_state = 2},
  [108] = {.lex_state = 320},
  [109] = {.lex_state = 320},
  [110] = {.lex_state = 350},
  [111] = {.lex_state = 384},
  [112] = {.lex_state = 340},
  [113] = {.lex_state = 371},
  [114] = {.lex_state = 304},
  [115] = {.lex_state = 304},
  [116] = {.lex_state = 304},
  [117] = {.lex_state = 298},
  [118] = {.lex_state = 195, .external_lex_state = 4},
  [119] = {.lex_state = 340},
  [120] = {.lex_state = 320},
  [121] = {.lex_state = 340},
  [122] = {.lex_state = 304},
  [123] = {.lex_state = 298},
  [124] = {.lex_state = 316, .external_lex_state = 3},
  [125] = {.lex_state = 320},
  [126] = {.lex_state = 298},
  [127] = {.lex_state = 320},
  [128] = {.lex_state = 304},
  [129] = {.lex_state = 307},
  [130] = {.lex_state = 307},
  [131] = {.lex_state = 316, .external_lex_state = 3},
  [132] = {.lex_state = 316, .external_lex_state = 4},
  [133] = {.lex_state = 316, .external_lex_state = 2},
  [134] = {.lex_state = 195, .external_lex_state = 5},
  [135] = {.lex_state = 316, .external_lex_state = 5},
  [136] = {.lex_state = 195},
  [137] = {.lex_state = 307},
  [138] = {.lex_state = 307},
  [139] = {.lex_state = 307},
  [140] = {.lex_state = 316, .external_lex_state = 4},
  [141] = {.lex_state = 307},
  [142] = {.lex_state = 424},
  [143] = {.lex_state = 320},
  [144] = {.lex_state = 316, .external_lex_state = 5},
  [145] = {.lex_state = 424},
  [146] = {.lex_state = 353, .external_lex_state = 5},
  [147] = {.lex_state = 427, .external_lex_state = 2},
  [148] = {.lex_state = 427, .external_lex_state = 2},
  [149] = {.lex_state = 430, .external_lex_state = 2},
  [150] = {.lex_state = 298},
  [151] = {.lex_state = 304},
  [152] = {.lex_state = 374, .external_lex_state = 2},
  [153] = {.lex_state = 430, .external_lex_state = 2},
  [154] = {.lex_state = 430, .external_lex_state = 2},
  [155] = {.lex_state = 304},
  [156] = {.lex_state = 329},
  [157] = {.lex_state = 433, .external_lex_state = 2},
  [158] = {.lex_state = 298},
  [159] = {.lex_state = 304},
  [160] = {.lex_state = 327, .external_lex_state = 2},
  [161] = {.lex_state = 433, .external_lex_state = 2},
  [162] = {.lex_state = 433, .external_lex_state = 2},
  [163] = {.lex_state = 304},
  [164] = {.lex_state = 329},
  [165] = {.lex_state = 327, .external_lex_state = 2},
  [166] = {.lex_state = 437, .external_lex_state = 2},
  [167] = {.lex_state = 298},
  [168] = {.lex_state = 304},
  [169] = {.lex_state = 376, .external_lex_state = 2},
  [170] = {.lex_state = 440, .external_lex_state = 2},
  [171] = {.lex_state = 320},
  [172] = {.lex_state = 437, .external_lex_state = 2},
  [173] = {.lex_state = 437, .external_lex_state = 2},
  [174] = {.lex_state = 320},
  [175] = {.lex_state = 304},
  [176] = {.lex_state = 337},
  [177] = {.lex_state = 320},
  [178] = {.lex_state = 320},
  [179] = {.lex_state = 195},
  [180] = {.lex_state = 316, .external_lex_state = 2},
  [181] = {.lex_state = 316, .external_lex_state = 2},
  [182] = {.lex_state = 384},
  [183] = {.lex_state = 329},
  [184] = {.lex_state = 298},
  [185] = {.lex_state = 304},
  [186] = {.lex_state = 329},
  [187] = {.lex_state = 329},
  [188] = {.lex_state = 195},
  [189] = {.lex_state = 316, .external_lex_state = 2},
  [190] = {.lex_state = 320},
  [191] = {.lex_state = 320},
  [192] = {.lex_state = 320},
  [193] = {.lex_state = 378},
  [194] = {.lex_state = 320},
  [195] = {.lex_state = 350},
  [196] = {.lex_state = 384},
  [197] = {.lex_state = 332},
  [198] = {.lex_state = 298},
  [199] = {.lex_state = 298},
  [200] = {.lex_state = 381},
  [201] = {.lex_state = 320},
  [202] = {.lex_state = 350},
  [203] = {.lex_state = 384},
  [204] = {.lex_state = 298},
  [205] = {.lex_state = 304},
  [206] = {.lex_state = 332},
  [207] = {.lex_state = 320},
  [208] = {.lex_state = 350},
  [209] = {.lex_state = 384},
  [210] = {.lex_state = 350},
  [211] = {.lex_state = 298},
  [212] = {.lex_state = 320},
  [213] = {.lex_state = 393},
  [214] = {.lex_state = 320},
  [215] = {.lex_state = 350},
  [216] = {.lex_state = 384},
  [217] = {.lex_state = 337},
  [218] = {.lex_state = 298},
  [219] = {.lex_state = 304},
  [220] = {.lex_state = 337},
  [221] = {.lex_state = 320},
  [222] = {.lex_state = 442},
  [223] = {.lex_state = 298},
  [224] = {.lex_state = 298},
  [225] = {.lex_state = 304},
  [226] = {.lex_state = 384},
  [227] = {.lex_state = 320},
  [228] = {.lex_state = 320},
  [229] = {.lex_state = 442},
  [230] = {.lex_state = 384},
  [231] = {.lex_state = 442},
  [232] = {.lex_state = 384},
  [233] = {.lex_state = 269, .external_lex_state = 2},
  [234] = {.lex_state = 350},
  [235] = {.lex_state = 320},
  [236] = {.lex_state = 340},
  [237] = {.lex_state = 320},
  [238] = {.lex_state = 350},
  [239] = {.lex_state = 304},
  [240] = {.lex_state = 304},
  [241] = {.lex_state = 304},
  [242] = {.lex_state = 340},
  [243] = {.lex_state = 445},
  [244] = {.lex_state = 320},
  [245] = {.lex_state = 320},
  [246] = {.lex_state = 320},
  [247] = {.lex_state = 448},
  [248] = {.lex_state = 298},
  [249] = {.lex_state = 304},
  [250] = {.lex_state = 452},
  [251] = {.lex_state = 448},
  [252] = {.lex_state = 448},
  [253] = {.lex_state = 304},
  [254] = {.lex_state = 320},
  [255] = {.lex_state = 454, .external_lex_state = 2},
  [256] = {.lex_state = 298},
  [257] = {.lex_state = 304},
  [258] = {.lex_state = 457, .external_lex_state = 2},
  [259] = {.lex_state = 459, .external_lex_state = 2},
  [260] = {.lex_state = 320},
  [261] = {.lex_state = 454, .external_lex_state = 2},
  [262] = {.lex_state = 454, .external_lex_state = 2},
  [263] = {.lex_state = 320},
  [264] = {.lex_state = 304},
  [265] = {.lex_state = 337},
  [266] = {.lex_state = 461, .external_lex_state = 5},
  [267] = {.lex_state = 195},
  [268] = {.lex_state = 298},
  [269] = {.lex_state = 195, .external_lex_state = 4},
  [270] = {.lex_state = 340},
  [271] = {.lex_state = 457, .external_lex_state = 2},
  [272] = {.lex_state = 195},
  [273] = {.lex_state = 298},
  [274] = {.lex_state = 316, .external_lex_state = 3},
  [275] = {.lex_state = 454},
  [276] = {.lex_state = 298},
  [277] = {.lex_state = 304},
  [278] = {.lex_state = 320},
  [279] = {.lex_state = 320},
  [280] = {.lex_state = 320},
  [281] = {.lex_state = 454},
  [282] = {.lex_state = 454},
  [283] = {.lex_state = 320},
  [284] = {.lex_state = 304},
  [285] = {.lex_state = 337},
  [286] = {.lex_state = 298},
  [287] = {.lex_state = 340},
  [288] = {.lex_state = 340},
  [289] = {.lex_state = 340},
  [290] = {.lex_state = 195},
  [291] = {.lex_state = 195, .external_lex_state = 5},
  [292] = {.lex_state = 353},
  [293] = {.lex_state = 195, .external_lex_state = 5},
  [294] = {.lex_state = 195, .external_lex_state = 5},
  [295] = {.lex_state = 195},
  [296] = {.lex_state = 316, .external_lex_state = 2},
  [297] = {.lex_state = 195, .external_lex_state = 5},
  [298] = {.lex_state = 424},
  [299] = {.lex_state = 307},
  [300] = {.lex_state = 307},
  [301] = {.lex_state = 307},
  [302] = {.lex_state = 320},
  [303] = {.lex_state = 307},
  [304] = {.lex_state = 307},
  [305] = {.lex_state = 452},
  [306] = {.lex_state = 520},
  [307] = {.lex_state = 353},
  [308] = {.lex_state = 353, .external_lex_state = 5},
  [309] = {.lex_state = 320},
  [310] = {.lex_state = 298},
  [311] = {.lex_state = 195},
  [312] = {.lex_state = 424},
  [313] = {.lex_state = 353, .external_lex_state = 5},
  [314] = {.lex_state = 427, .external_lex_state = 2},
  [315] = {.lex_state = 430, .external_lex_state = 2},
  [316] = {.lex_state = 320},
  [317] = {.lex_state = 350},
  [318] = {.lex_state = 384},
  [319] = {.lex_state = 433, .external_lex_state = 2},
  [320] = {.lex_state = 320},
  [321] = {.lex_state = 350},
  [322] = {.lex_state = 384},
  [323] = {.lex_state = 437, .external_lex_state = 2},
  [324] = {.lex_state = 320},
  [325] = {.lex_state = 350},
  [326] = {.lex_state = 384},
  [327] = {.lex_state = 298},
  [328] = {.lex_state = 523, .external_lex_state = 2},
  [329] = {.lex_state = 298},
  [330] = {.lex_state = 304},
  [331] = {.lex_state = 523, .external_lex_state = 2},
  [332] = {.lex_state = 523, .external_lex_state = 2},
  [333] = {.lex_state = 329},
  [334] = {.lex_state = 298},
  [335] = {.lex_state = 316, .external_lex_state = 3},
  [336] = {.lex_state = 316, .external_lex_state = 5},
  [337] = {.lex_state = 350},
  [338] = {.lex_state = 329},
  [339] = {.lex_state = 320},
  [340] = {.lex_state = 350},
  [341] = {.lex_state = 384},
  [342] = {.lex_state = 195},
  [343] = {.lex_state = 298},
  [344] = {.lex_state = 298},
  [345] = {.lex_state = 298},
  [346] = {.lex_state = 378},
  [347] = {.lex_state = 378},
  [348] = {.lex_state = 320},
  [349] = {.lex_state = 350},
  [350] = {.lex_state = 320},
  [351] = {.lex_state = 381},
  [352] = {.lex_state = 381},
  [353] = {.lex_state = 320},
  [354] = {.lex_state = 350},
  [355] = {.lex_state = 526},
  [356] = {.lex_state = 298},
  [357] = {.lex_state = 304},
  [358] = {.lex_state = 452},
  [359] = {.lex_state = 452},
  [360] = {.lex_state = 320},
  [361] = {.lex_state = 526},
  [362] = {.lex_state = 526},
  [363] = {.lex_state = 320},
  [364] = {.lex_state = 304},
  [365] = {.lex_state = 337},
  [366] = {.lex_state = 304},
  [367] = {.lex_state = 298},
  [368] = {.lex_state = 304},
  [369] = {.lex_state = 304},
  [370] = {.lex_state = 332},
  [371] = {.lex_state = 384},
  [372] = {.lex_state = 320},
  [373] = {.lex_state = 350},
  [374] = {.lex_state = 320},
  [375] = {.lex_state = 320},
  [376] = {.lex_state = 320},
  [377] = {.lex_state = 320},
  [378] = {.lex_state = 320},
  [379] = {.lex_state = 320},
  [380] = {.lex_state = 393},
  [381] = {.lex_state = 393},
  [382] = {.lex_state = 320},
  [383] = {.lex_state = 350},
  [384] = {.lex_state = 337},
  [385] = {.lex_state = 320},
  [386] = {.lex_state = 350},
  [387] = {.lex_state = 384},
  [388] = {.lex_state = 442},
  [389] = {.lex_state = 320},
  [390] = {.lex_state = 320},
  [391] = {.lex_state = 320},
  [392] = {.lex_state = 320},
  [393] = {.lex_state = 320},
  [394] = {.lex_state = 350},
  [395] = {.lex_state = 384},
  [396] = {.lex_state = 529},
  [397] = {.lex_state = 529},
  [398] = {.lex_state = 384},
  [399] = {.lex_state = 442},
  [400] = {.lex_state = 384},
  [401] = {.lex_state = 320},
  [402] = {.lex_state = 320},
  [403] = {.lex_state = 340},
  [404] = {.lex_state = 320},
  [405] = {.lex_state = 320},
  [406] = {.lex_state = 452},
  [407] = {.lex_state = 320},
  [408] = {.lex_state = 340},
  [409] = {.lex_state = 298},
  [410] = {.lex_state = 269, .external_lex_state = 2},
  [411] = {.lex_state = 350},
  [412] = {.lex_state = 320},
  [413] = {.lex_state = 448},
  [414] = {.lex_state = 320},
  [415] = {.lex_state = 350},
  [416] = {.lex_state = 384},
  [417] = {.lex_state = 298},
  [418] = {.lex_state = 452},
  [419] = {.lex_state = 298},
  [420] = {.lex_state = 454, .external_lex_state = 2},
  [421] = {.lex_state = 320},
  [422] = {.lex_state = 350},
  [423] = {.lex_state = 384},
  [424] = {.lex_state = 195, .external_lex_state = 4},
  [425] = {.lex_state = 298},
  [426] = {.lex_state = 538, .external_lex_state = 2},
  [427] = {.lex_state = 298},
  [428] = {.lex_state = 304},
  [429] = {.lex_state = 538, .external_lex_state = 2},
  [430] = {.lex_state = 538, .external_lex_state = 2},
  [431] = {.lex_state = 329},
  [432] = {.lex_state = 298},
  [433] = {.lex_state = 195},
  [434] = {.lex_state = 316, .external_lex_state = 3},
  [435] = {.lex_state = 307},
  [436] = {.lex_state = 316, .external_lex_state = 2},
  [437] = {.lex_state = 316, .external_lex_state = 2},
  [438] = {.lex_state = 195, .external_lex_state = 5},
  [439] = {.lex_state = 461, .external_lex_state = 5},
  [440] = {.lex_state = 316, .external_lex_state = 2},
  [441] = {.lex_state = 316, .external_lex_state = 5},
  [442] = {.lex_state = 384},
  [443] = {.lex_state = 457, .external_lex_state = 2},
  [444] = {.lex_state = 195},
  [445] = {.lex_state = 316, .external_lex_state = 3},
  [446] = {.lex_state = 457, .external_lex_state = 2},
  [447] = {.lex_state = 195},
  [448] = {.lex_state = 454},
  [449] = {.lex_state = 320},
  [450] = {.lex_state = 350},
  [451] = {.lex_state = 384},
  [452] = {.lex_state = 298},
  [453] = {.lex_state = 538},
  [454] = {.lex_state = 298},
  [455] = {.lex_state = 304},
  [456] = {.lex_state = 538},
  [457] = {.lex_state = 538},
  [458] = {.lex_state = 329},
  [459] = {.lex_state = 298},
  [460] = {.lex_state = 320},
  [461] = {.lex_state = 298},
  [462] = {.lex_state = 195, .external_lex_state = 6},
  [463] = {.lex_state = 320},
  [464] = {.lex_state = 298},
  [465] = {.lex_state = 316, .external_lex_state = 3},
  [466] = {.lex_state = 320},
  [467] = {.lex_state = 298},
  [468] = {.lex_state = 320},
  [469] = {.lex_state = 316, .external_lex_state = 5},
  [470] = {.lex_state = 316, .external_lex_state = 5},
  [471] = {.lex_state = 195, .external_lex_state = 5},
  [472] = {.lex_state = 307},
  [473] = {.lex_state = 520},
  [474] = {.lex_state = 307},
  [475] = {.lex_state = 424},
  [476] = {.lex_state = 307},
  [477] = {.lex_state = 520},
  [478] = {.lex_state = 520},
  [479] = {.lex_state = 316, .external_lex_state = 5},
  [480] = {.lex_state = 298},
  [481] = {.lex_state = 541, .external_lex_state = 5},
  [482] = {.lex_state = 298},
  [483] = {.lex_state = 304},
  [484] = {.lex_state = 353, .external_lex_state = 5},
  [485] = {.lex_state = 600, .external_lex_state = 5},
  [486] = {.lex_state = 320},
  [487] = {.lex_state = 541, .external_lex_state = 5},
  [488] = {.lex_state = 541, .external_lex_state = 5},
  [489] = {.lex_state = 320},
  [490] = {.lex_state = 304},
  [491] = {.lex_state = 337},
  [492] = {.lex_state = 430, .external_lex_state = 2},
  [493] = {.lex_state = 430, .external_lex_state = 2},
  [494] = {.lex_state = 320},
  [495] = {.lex_state = 350},
  [496] = {.lex_state = 433, .external_lex_state = 2},
  [497] = {.lex_state = 433, .external_lex_state = 2},
  [498] = {.lex_state = 320},
  [499] = {.lex_state = 350},
  [500] = {.lex_state = 437, .external_lex_state = 2},
  [501] = {.lex_state = 437, .external_lex_state = 2},
  [502] = {.lex_state = 320},
  [503] = {.lex_state = 350},
  [504] = {.lex_state = 376, .external_lex_state = 2},
  [505] = {.lex_state = 523, .external_lex_state = 2},
  [506] = {.lex_state = 320},
  [507] = {.lex_state = 350},
  [508] = {.lex_state = 384},
  [509] = {.lex_state = 316, .external_lex_state = 2},
  [510] = {.lex_state = 316, .external_lex_state = 2},
  [511] = {.lex_state = 329},
  [512] = {.lex_state = 329},
  [513] = {.lex_state = 320},
  [514] = {.lex_state = 350},
  [515] = {.lex_state = 320},
  [516] = {.lex_state = 452},
  [517] = {.lex_state = 320},
  [518] = {.lex_state = 378},
  [519] = {.lex_state = 320},
  [520] = {.lex_state = 320},
  [521] = {.lex_state = 381},
  [522] = {.lex_state = 320},
  [523] = {.lex_state = 526},
  [524] = {.lex_state = 320},
  [525] = {.lex_state = 350},
  [526] = {.lex_state = 384},
  [527] = {.lex_state = 298},
  [528] = {.lex_state = 604},
  [529] = {.lex_state = 298},
  [530] = {.lex_state = 304},
  [531] = {.lex_state = 452},
  [532] = {.lex_state = 604},
  [533] = {.lex_state = 604},
  [534] = {.lex_state = 329},
  [535] = {.lex_state = 298},
  [536] = {.lex_state = 304},
  [537] = {.lex_state = 320},
  [538] = {.lex_state = 350},
  [539] = {.lex_state = 384},
  [540] = {.lex_state = 384},
  [541] = {.lex_state = 320},
  [542] = {.lex_state = 332},
  [543] = {.lex_state = 298},
  [544] = {.lex_state = 393},
  [545] = {.lex_state = 320},
  [546] = {.lex_state = 337},
  [547] = {.lex_state = 337},
  [548] = {.lex_state = 320},
  [549] = {.lex_state = 350},
  [550] = {.lex_state = 442},
  [551] = {.lex_state = 298},
  [552] = {.lex_state = 442},
  [553] = {.lex_state = 320},
  [554] = {.lex_state = 350},
  [555] = {.lex_state = 384},
  [556] = {.lex_state = 307},
  [557] = {.lex_state = 320},
  [558] = {.lex_state = 320},
  [559] = {.lex_state = 384},
  [560] = {.lex_state = 307},
  [561] = {.lex_state = 320},
  [562] = {.lex_state = 340},
  [563] = {.lex_state = 340},
  [564] = {.lex_state = 298},
  [565] = {.lex_state = 298},
  [566] = {.lex_state = 298},
  [567] = {.lex_state = 320},
  [568] = {.lex_state = 320},
  [569] = {.lex_state = 320},
  [570] = {.lex_state = 448},
  [571] = {.lex_state = 448},
  [572] = {.lex_state = 320},
  [573] = {.lex_state = 350},
  [574] = {.lex_state = 452},
  [575] = {.lex_state = 320},
  [576] = {.lex_state = 454, .external_lex_state = 2},
  [577] = {.lex_state = 454, .external_lex_state = 2},
  [578] = {.lex_state = 320},
  [579] = {.lex_state = 350},
  [580] = {.lex_state = 195},
  [581] = {.lex_state = 538, .external_lex_state = 2},
  [582] = {.lex_state = 320},
  [583] = {.lex_state = 350},
  [584] = {.lex_state = 384},
  [585] = {.lex_state = 607},
  [586] = {.lex_state = 316, .external_lex_state = 2},
  [587] = {.lex_state = 195},
  [588] = {.lex_state = 316, .external_lex_state = 5},
  [589] = {.lex_state = 461, .external_lex_state = 5},
  [590] = {.lex_state = 316, .external_lex_state = 4},
  [591] = {.lex_state = 461, .external_lex_state = 5},
  [592] = {.lex_state = 316, .external_lex_state = 2},
  [593] = {.lex_state = 384},
  [594] = {.lex_state = 195, .external_lex_state = 4},
  [595] = {.lex_state = 195},
  [596] = {.lex_state = 316, .external_lex_state = 3},
  [597] = {.lex_state = 454},
  [598] = {.lex_state = 454},
  [599] = {.lex_state = 320},
  [600] = {.lex_state = 350},
  [601] = {.lex_state = 538},
  [602] = {.lex_state = 320},
  [603] = {.lex_state = 350},
  [604] = {.lex_state = 384},
  [605] = {.lex_state = 457, .external_lex_state = 2},
  [606] = {.lex_state = 461, .external_lex_state = 5},
  [607] = {.lex_state = 195, .external_lex_state = 5},
  [608] = {.lex_state = 298},
  [609] = {.lex_state = 195, .external_lex_state = 6},
  [610] = {.lex_state = 457, .external_lex_state = 2},
  [611] = {.lex_state = 195, .external_lex_state = 5},
  [612] = {.lex_state = 298},
  [613] = {.lex_state = 316, .external_lex_state = 3},
  [614] = {.lex_state = 320},
  [615] = {.lex_state = 298},
  [616] = {.lex_state = 195, .external_lex_state = 5},
  [617] = {.lex_state = 195, .external_lex_state = 5},
  [618] = {.lex_state = 424},
  [619] = {.lex_state = 307},
  [620] = {.lex_state = 520},
  [621] = {.lex_state = 353, .external_lex_state = 5},
  [622] = {.lex_state = 353, .external_lex_state = 5},
  [623] = {.lex_state = 541, .external_lex_state = 5},
  [624] = {.lex_state = 320},
  [625] = {.lex_state = 350},
  [626] = {.lex_state = 384},
  [627] = {.lex_state = 298},
  [628] = {.lex_state = 612, .external_lex_state = 5},
  [629] = {.lex_state = 298},
  [630] = {.lex_state = 304},
  [631] = {.lex_state = 600, .external_lex_state = 5},
  [632] = {.lex_state = 612, .external_lex_state = 5},
  [633] = {.lex_state = 612, .external_lex_state = 5},
  [634] = {.lex_state = 329},
  [635] = {.lex_state = 298},
  [636] = {.lex_state = 600, .external_lex_state = 5},
  [637] = {.lex_state = 430, .external_lex_state = 2},
  [638] = {.lex_state = 320},
  [639] = {.lex_state = 433, .external_lex_state = 2},
  [640] = {.lex_state = 320},
  [641] = {.lex_state = 437, .external_lex_state = 2},
  [642] = {.lex_state = 320},
  [643] = {.lex_state = 523, .external_lex_state = 2},
  [644] = {.lex_state = 523, .external_lex_state = 2},
  [645] = {.lex_state = 320},
  [646] = {.lex_state = 350},
  [647] = {.lex_state = 329},
  [648] = {.lex_state = 320},
  [649] = {.lex_state = 320},
  [650] = {.lex_state = 378},
  [651] = {.lex_state = 381},
  [652] = {.lex_state = 526},
  [653] = {.lex_state = 526},
  [654] = {.lex_state = 320},
  [655] = {.lex_state = 350},
  [656] = {.lex_state = 452},
  [657] = {.lex_state = 604},
  [658] = {.lex_state = 320},
  [659] = {.lex_state = 350},
  [660] = {.lex_state = 384},
  [661] = {.lex_state = 304},
  [662] = {.lex_state = 304},
  [663] = {.lex_state = 320},
  [664] = {.lex_state = 350},
  [665] = {.lex_state = 384},
  [666] = {.lex_state = 393},
  [667] = {.lex_state = 337},
  [668] = {.lex_state = 320},
  [669] = {.lex_state = 442},
  [670] = {.lex_state = 320},
  [671] = {.lex_state = 320},
  [672] = {.lex_state = 529},
  [673] = {.lex_state = 320},
  [674] = {.lex_state = 384},
  [675] = {.lex_state = 307},
  [676] = {.lex_state = 384},
  [677] = {.lex_state = 529},
  [678] = {.lex_state = 320},
  [679] = {.lex_state = 320},
  [680] = {.lex_state = 452},
  [681] = {.lex_state = 320},
  [682] = {.lex_state = 340},
  [683] = {.lex_state = 448},
  [684] = {.lex_state = 320},
  [685] = {.lex_state = 454, .external_lex_state = 2},
  [686] = {.lex_state = 320},
  [687] = {.lex_state = 538, .external_lex_state = 2},
  [688] = {.lex_state = 538, .external_lex_state = 2},
  [689] = {.lex_state = 320},
  [690] = {.lex_state = 350},
  [691] = {.lex_state = 307},
  [692] = {.lex_state = 195},
  [693] = {.lex_state = 384},
  [694] = {.lex_state = 461, .external_lex_state = 5},
  [695] = {.lex_state = 316, .external_lex_state = 4},
  [696] = {.lex_state = 316, .external_lex_state = 2},
  [697] = {.lex_state = 195},
  [698] = {.lex_state = 195},
  [699] = {.lex_state = 454},
  [700] = {.lex_state = 320},
  [701] = {.lex_state = 538},
  [702] = {.lex_state = 538},
  [703] = {.lex_state = 320},
  [704] = {.lex_state = 350},
  [705] = {.lex_state = 195, .external_lex_state = 6},
  [706] = {.lex_state = 195, .external_lex_state = 5},
  [707] = {.lex_state = 195, .external_lex_state = 5},
  [708] = {.lex_state = 316, .external_lex_state = 5},
  [709] = {.lex_state = 457, .external_lex_state = 2},
  [710] = {.lex_state = 195, .external_lex_state = 5},
  [711] = {.lex_state = 316, .external_lex_state = 3},
  [712] = {.lex_state = 457, .external_lex_state = 2},
  [713] = {.lex_state = 195, .external_lex_state = 5},
  [714] = {.lex_state = 320},
  [715] = {.lex_state = 541, .external_lex_state = 5},
  [716] = {.lex_state = 541, .external_lex_state = 5},
  [717] = {.lex_state = 320},
  [718] = {.lex_state = 350},
  [719] = {.lex_state = 353, .external_lex_state = 5},
  [720] = {.lex_state = 612, .external_lex_state = 5},
  [721] = {.lex_state = 320},
  [722] = {.lex_state = 350},
  [723] = {.lex_state = 384},
  [724] = {.lex_state = 430, .external_lex_state = 2},
  [725] = {.lex_state = 433, .external_lex_state = 2},
  [726] = {.lex_state = 437, .external_lex_state = 2},
  [727] = {.lex_state = 523, .external_lex_state = 2},
  [728] = {.lex_state = 320},
  [729] = {.lex_state = 329},
  [730] = {.lex_state = 526},
  [731] = {.lex_state = 320},
  [732] = {.lex_state = 604},
  [733] = {.lex_state = 604},
  [734] = {.lex_state = 320},
  [735] = {.lex_state = 350},
  [736] = {.lex_state = 304},
  [737] = {.lex_state = 320},
  [738] = {.lex_state = 337},
  [739] = {.lex_state = 442},
  [740] = {.lex_state = 320},
  [741] = {.lex_state = 320},
  [742] = {.lex_state = 320},
  [743] = {.lex_state = 307},
  [744] = {.lex_state = 320},
  [745] = {.lex_state = 384},
  [746] = {.lex_state = 320},
  [747] = {.lex_state = 340},
  [748] = {.lex_state = 448},
  [749] = {.lex_state = 454, .external_lex_state = 2},
  [750] = {.lex_state = 538, .external_lex_state = 2},
  [751] = {.lex_state = 320},
  [752] = {.lex_state = 316, .external_lex_state = 5},
  [753] = {.lex_state = 384},
  [754] = {.lex_state = 384},
  [755] = {.lex_state = 454},
  [756] = {.lex_state = 538},
  [757] = {.lex_state = 320},
  [758] = {.lex_state = 195, .external_lex_state = 5},
  [759] = {.lex_state = 195, .external_lex_state = 5},
  [760] = {.lex_state = 316, .external_lex_state = 5},
  [761] = {.lex_state = 195, .external_lex_state = 6},
  [762] = {.lex_state = 195, .external_lex_state = 5},
  [763] = {.lex_state = 316, .external_lex_state = 3},
  [764] = {.lex_state = 541, .external_lex_state = 5},
  [765] = {.lex_state = 320},
  [766] = {.lex_state = 612, .external_lex_state = 5},
  [767] = {.lex_state = 612, .external_lex_state = 5},
  [768] = {.lex_state = 320},
  [769] = {.lex_state = 350},
  [770] = {.lex_state = 523, .external_lex_state = 2},
  [771] = {.lex_state = 526},
  [772] = {.lex_state = 604},
  [773] = {.lex_state = 320},
  [774] = {.lex_state = 304},
  [775] = {.lex_state = 320},
  [776] = {.lex_state = 538, .external_lex_state = 2},
  [777] = {.lex_state = 461, .external_lex_state = 5},
  [778] = {.lex_state = 307},
  [779] = {.lex_state = 538},
  [780] = {.lex_state = 195, .external_lex_state = 5},
  [781] = {.lex_state = 195, .external_lex_state = 5},
  [782] = {.lex_state = 195, .external_lex_state = 5},
  [783] = {.lex_state = 541, .external_lex_state = 5},
  [784] = {.lex_state = 612, .external_lex_state = 5},
  [785] = {.lex_state = 320},
  [786] = {.lex_state = 604},
  [787] = {.lex_state = 316, .external_lex_state = 5},
  [788] = {.lex_state = 612, .external_lex_state = 5},
  [789] = {.lex_state = 384},
};

enum {
  ts_external_token__newline,
  ts_external_token__indent,
  ts_external_token__dedent,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__dedent] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__const_forall] = ACTIONS(1),
    [sym__const_right_arrow] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_Prop] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(3),
    [anon_sym_quoteTerm] = ACTIONS(1),
    [anon_sym_unquote] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_hiding] = ACTIONS(1),
    [anon_sym_renaming] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_codata] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_inductive] = ACTIONS(1),
    [anon_sym_coinductive] = ACTIONS(1),
    [anon_sym_eta_DASHequality] = ACTIONS(1),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_overlap] = ACTIONS(1),
    [sym_pragma] = ACTIONS(1),
    [anon_sym_infix] = ACTIONS(3),
    [anon_sym_infixl] = ACTIONS(1),
    [anon_sym_infixr] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(16),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(17),
    [sym_data_signature_only] = STATE(16),
    [sym_record] = STATE(17),
    [sym_record_signature_only] = STATE(16),
    [sym_field] = STATE(17),
    [sym__declaration] = STATE(16),
    [sym__declaration_block] = STATE(17),
    [sym_infix] = STATE(16),
    [sym_instance] = STATE(17),
    [sym__declarations1] = STATE(18),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(17),
    [anon_sym_codata] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_field] = ACTIONS(23),
    [sym_pragma] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [2] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_rewrite] = ACTIONS(31),
    [anon_sym_with] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [3] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(29),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [4] = {
    [sym_literal] = STATE(41),
    [sym__atom_no_curly] = STATE(41),
    [sym_string] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_qualified_name] = ACTIONS(51),
    [anon_sym__] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_Prop] = ACTIONS(51),
    [anon_sym_Set] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(51),
    [anon_sym_quoteTerm] = ACTIONS(51),
    [anon_sym_unquote] = ACTIONS(51),
    [anon_sym_record] = ACTIONS(55),
  },
  [5] = {
    [sym_name] = ACTIONS(57),
    [sym_comment] = ACTIONS(13),
  },
  [6] = {
    [sym_name] = ACTIONS(59),
    [sym_comment] = ACTIONS(13),
  },
  [7] = {
    [sym__declarations0] = STATE(45),
    [sym__newline] = ACTIONS(61),
    [sym__indent] = ACTIONS(63),
    [sym_comment] = ACTIONS(65),
  },
  [8] = {
    [sym__arg_type_signatures_block] = STATE(47),
    [sym__indent] = ACTIONS(67),
    [sym_comment] = ACTIONS(65),
  },
  [9] = {
    [sym_int] = ACTIONS(69),
    [sym_comment] = ACTIONS(65),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(65),
  },
  [11] = {
    [sym_rewrite_equations] = STATE(51),
    [sym_with_expressions] = STATE(52),
    [sym__newline] = ACTIONS(73),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(73),
    [anon_sym_rewrite] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(73),
  },
  [12] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [13] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_module] = ACTIONS(85),
    [anon_sym_rewrite] = ACTIONS(85),
    [anon_sym_with] = ACTIONS(85),
    [anon_sym_where] = ACTIONS(85),
  },
  [14] = {
    [sym__newline] = ACTIONS(87),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(89),
    [anon_sym_rewrite] = ACTIONS(89),
    [anon_sym_with] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
  },
  [15] = {
    [sym_rhs] = STATE(57),
    [sym_where_clause] = STATE(58),
    [sym__newline] = ACTIONS(91),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_where] = ACTIONS(97),
  },
  [16] = {
    [sym__newline] = ACTIONS(99),
    [sym_comment] = ACTIONS(65),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_string] = ACTIONS(103),
    [sym_int] = ACTIONS(103),
    [sym_qualified_name] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(103),
    [anon_sym_Prop] = ACTIONS(103),
    [anon_sym_Set] = ACTIONS(103),
    [anon_sym_quote] = ACTIONS(103),
    [anon_sym_quoteTerm] = ACTIONS(103),
    [anon_sym_unquote] = ACTIONS(103),
    [anon_sym_record] = ACTIONS(103),
    [anon_sym_data] = ACTIONS(103),
    [anon_sym_codata] = ACTIONS(103),
    [anon_sym_instance] = ACTIONS(103),
    [anon_sym_field] = ACTIONS(103),
    [sym_pragma] = ACTIONS(103),
    [anon_sym_infix] = ACTIONS(103),
    [anon_sym_infixl] = ACTIONS(103),
    [anon_sym_infixr] = ACTIONS(103),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(65),
  },
  [19] = {
    [sym_literal] = STATE(14),
    [sym__application] = STATE(61),
    [sym__expr2] = STATE(61),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(20),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(107),
  },
  [20] = {
    [sym_literal] = STATE(14),
    [sym__expr2] = STATE(63),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(107),
  },
  [21] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(65),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(66),
    [sym_data_signature_only] = STATE(65),
    [sym_record] = STATE(66),
    [sym_record_signature_only] = STATE(65),
    [sym_field] = STATE(66),
    [sym__declaration] = STATE(65),
    [sym__declaration_block] = STATE(66),
    [sym_infix] = STATE(65),
    [sym_instance] = STATE(66),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(67),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(17),
    [anon_sym_codata] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_field] = ACTIONS(23),
    [sym_pragma] = ACTIONS(111),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [22] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [23] = {
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(117),
  },
  [24] = {
    [sym_literal] = STATE(78),
    [sym_expr] = STATE(75),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(76),
    [sym__expr2] = STATE(76),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(77),
    [sym__atom_curly] = STATE(78),
    [sym__atom_no_curly] = STATE(78),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(79),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_record] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [25] = {
    [sym__newline] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_module] = ACTIONS(131),
    [anon_sym_rewrite] = ACTIONS(131),
    [anon_sym_with] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
  },
  [26] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(83),
    [sym__expr2] = STATE(83),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [27] = {
    [sym_literal] = STATE(90),
    [sym__atom_no_curly] = STATE(90),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(143),
    [anon_sym__] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(143),
    [anon_sym_Prop] = ACTIONS(143),
    [anon_sym_Set] = ACTIONS(143),
    [anon_sym_quote] = ACTIONS(143),
    [anon_sym_quoteTerm] = ACTIONS(143),
    [anon_sym_unquote] = ACTIONS(143),
    [anon_sym_record] = ACTIONS(147),
  },
  [28] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(91),
    [sym__expr2] = STATE(91),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym_comment] = ACTIONS(65),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(153),
  },
  [31] = {
    [sym__const_right_arrow] = ACTIONS(153),
    [sym_comment] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [32] = {
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
  },
  [33] = {
    [sym__const_right_arrow] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [34] = {
    [sym__const_right_arrow] = ACTIONS(153),
    [sym_comment] = ACTIONS(65),
  },
  [35] = {
    [sym_literal] = STATE(99),
    [sym__application] = STATE(97),
    [sym__expr2] = STATE(97),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(98),
    [sym__atom_curly] = STATE(99),
    [sym__atom_no_curly] = STATE(99),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(100),
    [sym_string] = ACTIONS(155),
    [sym_int] = ACTIONS(155),
    [sym_qualified_name] = ACTIONS(157),
    [anon_sym__] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(157),
    [anon_sym_Prop] = ACTIONS(157),
    [anon_sym_Set] = ACTIONS(157),
    [anon_sym_quote] = ACTIONS(157),
    [anon_sym_quoteTerm] = ACTIONS(157),
    [anon_sym_unquote] = ACTIONS(157),
    [anon_sym_record] = ACTIONS(161),
  },
  [36] = {
    [sym_literal] = STATE(33),
    [sym__expr2] = STATE(102),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [aux_sym__application_repeat1] = STATE(103),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(163),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
  },
  [37] = {
    [sym_typed_binding] = STATE(105),
    [aux_sym__typed_bindings1_repeat1] = STATE(105),
    [sym__const_right_arrow] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(171),
    [sym_comment] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(173),
  },
  [38] = {
    [sym_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [39] = {
    [sym__record_assignments1] = STATE(108),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym_comment] = ACTIONS(13),
  },
  [40] = {
    [sym_literal] = STATE(111),
    [sym__atom_no_curly] = STATE(111),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(179),
    [anon_sym__] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_Prop] = ACTIONS(179),
    [anon_sym_Set] = ACTIONS(179),
    [anon_sym_quote] = ACTIONS(179),
    [anon_sym_quoteTerm] = ACTIONS(179),
    [anon_sym_unquote] = ACTIONS(179),
    [anon_sym_record] = ACTIONS(147),
  },
  [41] = {
    [sym_anonymous_name] = STATE(119),
    [sym__binding_name] = STATE(119),
    [sym_untyped_binding] = STATE(121),
    [sym_typed_binding] = STATE(121),
    [sym__typed_untyped_binding1] = STATE(120),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(121),
    [sym_name] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_where] = ACTIONS(197),
  },
  [42] = {
    [sym_anonymous_name] = STATE(119),
    [sym__binding_name] = STATE(119),
    [sym_untyped_binding] = STATE(121),
    [sym_typed_binding] = STATE(121),
    [sym__typed_untyped_binding1] = STATE(125),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(121),
    [sym_name] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_where] = ACTIONS(203),
  },
  [43] = {
    [sym_anonymous_name] = STATE(119),
    [sym__binding_name] = STATE(119),
    [sym_untyped_binding] = STATE(121),
    [sym_typed_binding] = STATE(121),
    [sym__typed_untyped_binding1] = STATE(127),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(121),
    [sym_name] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(203),
  },
  [44] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(133),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(134),
    [sym_data_signature_only] = STATE(133),
    [sym_record] = STATE(134),
    [sym_record_signature_only] = STATE(133),
    [sym_field] = STATE(134),
    [sym__declaration] = STATE(133),
    [sym__declaration_block] = STATE(134),
    [sym_infix] = STATE(133),
    [sym_instance] = STATE(134),
    [sym__declarations1] = STATE(135),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(136),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_data] = ACTIONS(209),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(213),
    [anon_sym_field] = ACTIONS(215),
    [sym_pragma] = ACTIONS(217),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_string] = ACTIONS(221),
    [sym_int] = ACTIONS(221),
    [sym_qualified_name] = ACTIONS(221),
    [anon_sym__] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_Prop] = ACTIONS(221),
    [anon_sym_Set] = ACTIONS(221),
    [anon_sym_quote] = ACTIONS(221),
    [anon_sym_quoteTerm] = ACTIONS(221),
    [anon_sym_unquote] = ACTIONS(221),
    [anon_sym_record] = ACTIONS(221),
    [anon_sym_data] = ACTIONS(221),
    [anon_sym_codata] = ACTIONS(221),
    [anon_sym_instance] = ACTIONS(221),
    [anon_sym_field] = ACTIONS(221),
    [sym_pragma] = ACTIONS(221),
    [anon_sym_infix] = ACTIONS(221),
    [anon_sym_infixl] = ACTIONS(221),
    [anon_sym_infixr] = ACTIONS(221),
  },
  [46] = {
    [sym__maybe_dotted_name] = STATE(142),
    [sym__arg_names] = STATE(143),
    [sym_arg_name] = STATE(145),
    [sym__arg_type_signatures1] = STATE(144),
    [sym_arg_type_signature] = STATE(146),
    [aux_sym__arg_names_repeat1] = STATE(145),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(146),
    [sym_name] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(229),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(231),
    [anon_sym_overlap] = ACTIONS(233),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_int] = ACTIONS(237),
    [sym_qualified_name] = ACTIONS(237),
    [anon_sym__] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(237),
    [anon_sym_Prop] = ACTIONS(237),
    [anon_sym_Set] = ACTIONS(237),
    [anon_sym_quote] = ACTIONS(237),
    [anon_sym_quoteTerm] = ACTIONS(237),
    [anon_sym_unquote] = ACTIONS(237),
    [anon_sym_record] = ACTIONS(237),
    [anon_sym_data] = ACTIONS(237),
    [anon_sym_codata] = ACTIONS(237),
    [anon_sym_instance] = ACTIONS(237),
    [anon_sym_field] = ACTIONS(237),
    [sym_pragma] = ACTIONS(237),
    [anon_sym_infix] = ACTIONS(237),
    [anon_sym_infixl] = ACTIONS(237),
    [anon_sym_infixr] = ACTIONS(237),
  },
  [48] = {
    [sym_anonymous_name] = STATE(148),
    [sym__binding_name] = STATE(148),
    [aux_sym_infix_repeat1] = STATE(148),
    [sym_name] = ACTIONS(239),
    [anon_sym__] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
  },
  [49] = {
    [sym_literal] = STATE(154),
    [sym__expr1] = STATE(152),
    [sym__application] = STATE(152),
    [sym__expr2] = STATE(152),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(153),
    [sym__atom_curly] = STATE(154),
    [sym__atom_no_curly] = STATE(154),
    [aux_sym__expr1_repeat1] = STATE(155),
    [aux_sym__application_repeat1] = STATE(156),
    [sym_string] = ACTIONS(243),
    [sym_int] = ACTIONS(243),
    [sym_qualified_name] = ACTIONS(245),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(245),
    [anon_sym_Prop] = ACTIONS(245),
    [anon_sym_Set] = ACTIONS(245),
    [anon_sym_quote] = ACTIONS(245),
    [anon_sym_quoteTerm] = ACTIONS(245),
    [anon_sym_unquote] = ACTIONS(245),
    [anon_sym_record] = ACTIONS(249),
  },
  [50] = {
    [sym_literal] = STATE(162),
    [sym__expr1] = STATE(160),
    [sym__application] = STATE(160),
    [sym__expr2] = STATE(160),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(161),
    [sym__atom_curly] = STATE(162),
    [sym__atom_no_curly] = STATE(162),
    [aux_sym__expr1_repeat1] = STATE(163),
    [aux_sym__application_repeat1] = STATE(164),
    [sym_string] = ACTIONS(251),
    [sym_int] = ACTIONS(251),
    [sym_qualified_name] = ACTIONS(253),
    [anon_sym__] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(253),
    [anon_sym_Prop] = ACTIONS(253),
    [anon_sym_Set] = ACTIONS(253),
    [anon_sym_quote] = ACTIONS(253),
    [anon_sym_quoteTerm] = ACTIONS(253),
    [anon_sym_unquote] = ACTIONS(253),
    [anon_sym_record] = ACTIONS(257),
  },
  [51] = {
    [sym_with_expressions] = STATE(165),
    [sym__newline] = ACTIONS(259),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_module] = ACTIONS(259),
    [anon_sym_with] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(259),
  },
  [52] = {
    [sym__newline] = ACTIONS(259),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_module] = ACTIONS(259),
    [anon_sym_where] = ACTIONS(259),
  },
  [53] = {
    [sym_string] = ACTIONS(261),
    [sym_int] = ACTIONS(261),
    [sym_qualified_name] = ACTIONS(261),
    [anon_sym__] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(261),
    [anon_sym_Prop] = ACTIONS(261),
    [anon_sym_Set] = ACTIONS(261),
    [anon_sym_quote] = ACTIONS(261),
    [anon_sym_quoteTerm] = ACTIONS(261),
    [anon_sym_unquote] = ACTIONS(261),
    [anon_sym_record] = ACTIONS(261),
  },
  [54] = {
    [sym_literal] = STATE(173),
    [sym_expr] = STATE(169),
    [sym__expr1] = STATE(170),
    [sym__application] = STATE(170),
    [sym__expr2] = STATE(170),
    [sym__atoms1] = STATE(171),
    [sym_atom] = STATE(172),
    [sym__atom_curly] = STATE(173),
    [sym__atom_no_curly] = STATE(173),
    [sym__typed_bindings1] = STATE(174),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(175),
    [aux_sym__application_repeat1] = STATE(176),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(263),
    [sym_int] = ACTIONS(263),
    [sym_qualified_name] = ACTIONS(265),
    [anon_sym__] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(265),
    [anon_sym_Prop] = ACTIONS(265),
    [anon_sym_Set] = ACTIONS(265),
    [anon_sym_quote] = ACTIONS(265),
    [anon_sym_quoteTerm] = ACTIONS(265),
    [anon_sym_unquote] = ACTIONS(265),
    [anon_sym_record] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [55] = {
    [sym_anonymous_name] = STATE(177),
    [sym_name] = ACTIONS(271),
    [anon_sym__] = ACTIONS(273),
    [sym_comment] = ACTIONS(13),
  },
  [56] = {
    [sym__declarations0] = STATE(180),
    [sym__newline] = ACTIONS(275),
    [sym__indent] = ACTIONS(277),
    [sym_comment] = ACTIONS(65),
  },
  [57] = {
    [sym_where_clause] = STATE(181),
    [sym__newline] = ACTIONS(279),
    [sym_comment] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_where] = ACTIONS(97),
  },
  [58] = {
    [sym__newline] = ACTIONS(279),
    [sym_comment] = ACTIONS(65),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_string] = ACTIONS(283),
    [sym_int] = ACTIONS(283),
    [sym_qualified_name] = ACTIONS(283),
    [anon_sym__] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(283),
    [anon_sym_Prop] = ACTIONS(283),
    [anon_sym_Set] = ACTIONS(283),
    [anon_sym_quote] = ACTIONS(283),
    [anon_sym_quoteTerm] = ACTIONS(283),
    [anon_sym_unquote] = ACTIONS(283),
    [anon_sym_record] = ACTIONS(283),
    [anon_sym_data] = ACTIONS(283),
    [anon_sym_codata] = ACTIONS(283),
    [anon_sym_instance] = ACTIONS(283),
    [anon_sym_field] = ACTIONS(283),
    [sym_pragma] = ACTIONS(283),
    [anon_sym_infix] = ACTIONS(283),
    [anon_sym_infixl] = ACTIONS(283),
    [anon_sym_infixr] = ACTIONS(283),
  },
  [60] = {
    [sym_literal] = STATE(182),
    [sym__atom_no_curly] = STATE(182),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(147),
  },
  [61] = {
    [sym__newline] = ACTIONS(287),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_module] = ACTIONS(287),
    [anon_sym_rewrite] = ACTIONS(287),
    [anon_sym_with] = ACTIONS(287),
    [anon_sym_where] = ACTIONS(287),
  },
  [62] = {
    [sym_literal] = STATE(186),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(187),
    [sym__atom_curly] = STATE(186),
    [sym__atom_no_curly] = STATE(186),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(187),
    [sym_string] = ACTIONS(289),
    [sym_int] = ACTIONS(289),
    [sym_qualified_name] = ACTIONS(292),
    [anon_sym__] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(295),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(292),
    [anon_sym_Prop] = ACTIONS(292),
    [anon_sym_Set] = ACTIONS(292),
    [anon_sym_quote] = ACTIONS(292),
    [anon_sym_quoteTerm] = ACTIONS(292),
    [anon_sym_unquote] = ACTIONS(292),
    [anon_sym_record] = ACTIONS(298),
  },
  [63] = {
    [sym__newline] = ACTIONS(301),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_module] = ACTIONS(301),
    [anon_sym_rewrite] = ACTIONS(301),
    [anon_sym_with] = ACTIONS(301),
    [anon_sym_where] = ACTIONS(301),
  },
  [64] = {
    [sym_literal] = STATE(186),
    [sym_atom] = STATE(64),
    [sym__atom_curly] = STATE(186),
    [sym__atom_no_curly] = STATE(186),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(303),
    [sym_int] = ACTIONS(303),
    [sym_qualified_name] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(309),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(312),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_Prop] = ACTIONS(306),
    [anon_sym_Set] = ACTIONS(306),
    [anon_sym_quote] = ACTIONS(306),
    [anon_sym_quoteTerm] = ACTIONS(306),
    [anon_sym_unquote] = ACTIONS(306),
    [anon_sym_record] = ACTIONS(314),
  },
  [65] = {
    [sym__newline] = ACTIONS(317),
    [sym_comment] = ACTIONS(65),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_string] = ACTIONS(103),
    [sym_int] = ACTIONS(103),
    [sym_qualified_name] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(103),
    [anon_sym_Prop] = ACTIONS(103),
    [anon_sym_Set] = ACTIONS(103),
    [anon_sym_quote] = ACTIONS(103),
    [anon_sym_quoteTerm] = ACTIONS(103),
    [anon_sym_unquote] = ACTIONS(103),
    [anon_sym_record] = ACTIONS(103),
    [anon_sym_data] = ACTIONS(103),
    [anon_sym_codata] = ACTIONS(103),
    [anon_sym_instance] = ACTIONS(103),
    [anon_sym_field] = ACTIONS(103),
    [sym_pragma] = ACTIONS(103),
    [anon_sym_infix] = ACTIONS(103),
    [anon_sym_infixl] = ACTIONS(103),
    [anon_sym_infixr] = ACTIONS(103),
  },
  [67] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(189),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(67),
    [sym_data_signature_only] = STATE(189),
    [sym_record] = STATE(67),
    [sym_record_signature_only] = STATE(189),
    [sym_field] = STATE(67),
    [sym__declaration] = STATE(189),
    [sym__declaration_block] = STATE(67),
    [sym_infix] = STATE(189),
    [sym_instance] = STATE(67),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(67),
    [sym_string] = ACTIONS(319),
    [sym_int] = ACTIONS(319),
    [sym_qualified_name] = ACTIONS(322),
    [anon_sym__] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(325),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(322),
    [anon_sym_Prop] = ACTIONS(322),
    [anon_sym_Set] = ACTIONS(322),
    [anon_sym_quote] = ACTIONS(322),
    [anon_sym_quoteTerm] = ACTIONS(322),
    [anon_sym_unquote] = ACTIONS(322),
    [anon_sym_record] = ACTIONS(328),
    [anon_sym_data] = ACTIONS(331),
    [anon_sym_codata] = ACTIONS(334),
    [anon_sym_instance] = ACTIONS(337),
    [anon_sym_field] = ACTIONS(340),
    [sym_pragma] = ACTIONS(343),
    [anon_sym_infix] = ACTIONS(346),
    [anon_sym_infixl] = ACTIONS(346),
    [anon_sym_infixr] = ACTIONS(346),
  },
  [68] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(190),
    [sym__expr2] = STATE(190),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [69] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(191),
    [sym__expr2] = STATE(191),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [70] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(192),
    [sym__expr2] = STATE(192),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [71] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
  },
  [72] = {
    [sym_literal] = STATE(78),
    [sym_expr] = STATE(194),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(76),
    [sym__expr2] = STATE(76),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(77),
    [sym__atom_curly] = STATE(78),
    [sym__atom_no_curly] = STATE(78),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(79),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_record] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [73] = {
    [sym__const_right_arrow] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
  },
  [74] = {
    [sym_literal] = STATE(196),
    [sym__atom_no_curly] = STATE(196),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(351),
    [anon_sym__] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(353),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(351),
    [anon_sym_Prop] = ACTIONS(351),
    [anon_sym_Set] = ACTIONS(351),
    [anon_sym_quote] = ACTIONS(351),
    [anon_sym_quoteTerm] = ACTIONS(351),
    [anon_sym_unquote] = ACTIONS(351),
    [anon_sym_record] = ACTIONS(147),
  },
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(355),
    [sym_comment] = ACTIONS(65),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(357),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(359),
  },
  [77] = {
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
  },
  [78] = {
    [sym__const_right_arrow] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
  },
  [79] = {
    [sym_literal] = STATE(78),
    [sym__expr2] = STATE(102),
    [sym_atom] = STATE(77),
    [sym__atom_curly] = STATE(78),
    [sym__atom_no_curly] = STATE(78),
    [aux_sym__application_repeat1] = STATE(103),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(361),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_record] = ACTIONS(127),
  },
  [80] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
  },
  [81] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(201),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [82] = {
    [sym_literal] = STATE(203),
    [sym__atom_no_curly] = STATE(203),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(365),
    [anon_sym__] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(367),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(365),
    [anon_sym_Prop] = ACTIONS(365),
    [anon_sym_Set] = ACTIONS(365),
    [anon_sym_quote] = ACTIONS(365),
    [anon_sym_quoteTerm] = ACTIONS(365),
    [anon_sym_unquote] = ACTIONS(365),
    [anon_sym_record] = ACTIONS(147),
  },
  [83] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(369),
  },
  [84] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
  },
  [85] = {
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
  },
  [86] = {
    [sym_literal] = STATE(85),
    [sym__expr2] = STATE(102),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(205),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [87] = {
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(65),
  },
  [88] = {
    [sym__record_assignments1] = STATE(207),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(371),
    [sym_comment] = ACTIONS(13),
  },
  [89] = {
    [sym_literal] = STATE(209),
    [sym__atom_no_curly] = STATE(209),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(373),
    [anon_sym__] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(375),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(373),
    [anon_sym_Prop] = ACTIONS(373),
    [anon_sym_Set] = ACTIONS(373),
    [anon_sym_quote] = ACTIONS(373),
    [anon_sym_quoteTerm] = ACTIONS(373),
    [anon_sym_unquote] = ACTIONS(373),
    [anon_sym_record] = ACTIONS(147),
  },
  [90] = {
    [anon_sym_LBRACE] = ACTIONS(377),
    [sym_comment] = ACTIONS(65),
  },
  [91] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(379),
  },
  [92] = {
    [sym__newline] = ACTIONS(381),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_module] = ACTIONS(383),
    [anon_sym_rewrite] = ACTIONS(383),
    [anon_sym_with] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(383),
  },
  [93] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(212),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [94] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [95] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(214),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [96] = {
    [sym_literal] = STATE(216),
    [sym__atom_no_curly] = STATE(216),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(387),
    [anon_sym__] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(389),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_Prop] = ACTIONS(387),
    [anon_sym_Set] = ACTIONS(387),
    [anon_sym_quote] = ACTIONS(387),
    [anon_sym_quoteTerm] = ACTIONS(387),
    [anon_sym_unquote] = ACTIONS(387),
    [anon_sym_record] = ACTIONS(147),
  },
  [97] = {
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_where] = ACTIONS(287),
  },
  [98] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
  },
  [99] = {
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [100] = {
    [sym_literal] = STATE(99),
    [sym__expr2] = STATE(102),
    [sym_atom] = STATE(98),
    [sym__atom_curly] = STATE(99),
    [sym__atom_no_curly] = STATE(99),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(155),
    [sym_int] = ACTIONS(155),
    [sym_qualified_name] = ACTIONS(157),
    [anon_sym__] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(157),
    [anon_sym_Prop] = ACTIONS(157),
    [anon_sym_Set] = ACTIONS(157),
    [anon_sym_quote] = ACTIONS(157),
    [anon_sym_quoteTerm] = ACTIONS(157),
    [anon_sym_unquote] = ACTIONS(157),
    [anon_sym_record] = ACTIONS(161),
  },
  [101] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(75),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(301),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_where] = ACTIONS(301),
  },
  [103] = {
    [sym_literal] = STATE(220),
    [sym_atom] = STATE(103),
    [sym__atom_curly] = STATE(220),
    [sym__atom_no_curly] = STATE(220),
    [aux_sym__application_repeat1] = STATE(103),
    [sym__const_right_arrow] = ACTIONS(312),
    [sym_string] = ACTIONS(391),
    [sym_int] = ACTIONS(391),
    [sym_qualified_name] = ACTIONS(394),
    [anon_sym__] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(397),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(312),
    [anon_sym_QMARK] = ACTIONS(394),
    [anon_sym_Prop] = ACTIONS(394),
    [anon_sym_Set] = ACTIONS(394),
    [anon_sym_quote] = ACTIONS(394),
    [anon_sym_quoteTerm] = ACTIONS(394),
    [anon_sym_unquote] = ACTIONS(394),
    [anon_sym_record] = ACTIONS(400),
  },
  [104] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(221),
    [sym__expr2] = STATE(221),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [105] = {
    [sym_typed_binding] = STATE(105),
    [aux_sym__typed_bindings1_repeat1] = STATE(105),
    [sym__const_right_arrow] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_DOT_DOT] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(414),
    [sym_comment] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(417),
  },
  [106] = {
    [sym_literal] = STATE(229),
    [sym_atom] = STATE(231),
    [sym__atom_curly] = STATE(229),
    [sym__atom_no_curly] = STATE(229),
    [sym__open_args1] = STATE(230),
    [sym_import_directive] = STATE(232),
    [aux_sym__application_repeat1] = STATE(231),
    [aux_sym_module_assignment_repeat1] = STATE(232),
    [sym_string] = ACTIONS(420),
    [sym_int] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(426),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(426),
    [anon_sym_public] = ACTIONS(432),
    [anon_sym_using] = ACTIONS(434),
    [anon_sym_hiding] = ACTIONS(434),
    [anon_sym_renaming] = ACTIONS(436),
  },
  [107] = {
    [sym__newline] = ACTIONS(438),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_rewrite] = ACTIONS(440),
    [anon_sym_with] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [108] = {
    [anon_sym_RBRACE] = ACTIONS(442),
    [sym_comment] = ACTIONS(65),
  },
  [109] = {
    [aux_sym__record_assignments1_repeat1] = STATE(235),
    [anon_sym_RBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(446),
  },
  [110] = {
    [sym__record_assignments1] = STATE(237),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(448),
    [sym_comment] = ACTIONS(13),
  },
  [111] = {
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(65),
  },
  [112] = {
    [sym_name] = ACTIONS(452),
    [anon_sym__] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_DOT_DOT] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(452),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_COLON] = ACTIONS(452),
    [anon_sym_where] = ACTIONS(452),
  },
  [113] = {
    [sym_anonymous_name] = STATE(242),
    [sym__binding_name] = STATE(242),
    [sym_name] = ACTIONS(454),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(456),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(458),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(460),
  },
  [114] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(244),
    [sym__expr2] = STATE(244),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [sym__field_assignments1] = STATE(245),
    [sym_field_assignment] = STATE(246),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(462),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(464),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [115] = {
    [sym_literal] = STATE(252),
    [sym__application] = STATE(250),
    [sym__expr2] = STATE(250),
    [sym_atom] = STATE(251),
    [sym__atom_curly] = STATE(252),
    [sym__atom_no_curly] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [sym_string] = ACTIONS(466),
    [sym_int] = ACTIONS(466),
    [sym_qualified_name] = ACTIONS(468),
    [anon_sym__] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_Prop] = ACTIONS(468),
    [anon_sym_Set] = ACTIONS(468),
    [anon_sym_quote] = ACTIONS(468),
    [anon_sym_quoteTerm] = ACTIONS(468),
    [anon_sym_unquote] = ACTIONS(468),
    [anon_sym_record] = ACTIONS(472),
  },
  [116] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(254),
    [sym__expr2] = STATE(254),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [117] = {
    [sym_literal] = STATE(262),
    [sym_expr] = STATE(258),
    [sym__expr1] = STATE(259),
    [sym__application] = STATE(259),
    [sym__expr2] = STATE(259),
    [sym__atoms1] = STATE(260),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [sym__typed_bindings1] = STATE(263),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(264),
    [aux_sym__application_repeat1] = STATE(265),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [118] = {
    [sym_record_declarations_block] = STATE(267),
    [sym__indent] = ACTIONS(482),
    [ts_builtin_sym_end] = ACTIONS(484),
    [sym_string] = ACTIONS(486),
    [sym_int] = ACTIONS(486),
    [sym_qualified_name] = ACTIONS(486),
    [anon_sym__] = ACTIONS(486),
    [anon_sym_LBRACE] = ACTIONS(486),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_Prop] = ACTIONS(486),
    [anon_sym_Set] = ACTIONS(486),
    [anon_sym_quote] = ACTIONS(486),
    [anon_sym_quoteTerm] = ACTIONS(486),
    [anon_sym_unquote] = ACTIONS(486),
    [anon_sym_record] = ACTIONS(486),
    [anon_sym_data] = ACTIONS(486),
    [anon_sym_codata] = ACTIONS(486),
    [anon_sym_instance] = ACTIONS(486),
    [anon_sym_field] = ACTIONS(486),
    [sym_pragma] = ACTIONS(486),
    [anon_sym_infix] = ACTIONS(486),
    [anon_sym_infixl] = ACTIONS(486),
    [anon_sym_infixr] = ACTIONS(486),
  },
  [119] = {
    [sym_name] = ACTIONS(488),
    [anon_sym__] = ACTIONS(488),
    [anon_sym_DOT] = ACTIONS(488),
    [anon_sym_DOT_DOT] = ACTIONS(488),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(488),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(488),
    [anon_sym_COLON] = ACTIONS(488),
    [anon_sym_where] = ACTIONS(488),
  },
  [120] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_where] = ACTIONS(492),
  },
  [121] = {
    [sym_anonymous_name] = STATE(119),
    [sym__binding_name] = STATE(119),
    [sym_untyped_binding] = STATE(270),
    [sym_typed_binding] = STATE(270),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(270),
    [sym_name] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_where] = ACTIONS(494),
  },
  [122] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(244),
    [sym__expr2] = STATE(244),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [123] = {
    [sym_literal] = STATE(262),
    [sym_expr] = STATE(271),
    [sym__expr1] = STATE(259),
    [sym__application] = STATE(259),
    [sym__expr2] = STATE(259),
    [sym__atoms1] = STATE(260),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [sym__typed_bindings1] = STATE(263),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(264),
    [aux_sym__application_repeat1] = STATE(265),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [124] = {
    [sym__declarations0] = STATE(272),
    [sym__newline] = ACTIONS(496),
    [sym__indent] = ACTIONS(63),
    [sym_comment] = ACTIONS(65),
  },
  [125] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_where] = ACTIONS(500),
  },
  [126] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(278),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(502),
    [sym_int] = ACTIONS(502),
    [sym_qualified_name] = ACTIONS(504),
    [anon_sym__] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_Prop] = ACTIONS(504),
    [anon_sym_Set] = ACTIONS(504),
    [anon_sym_quote] = ACTIONS(504),
    [anon_sym_quoteTerm] = ACTIONS(504),
    [anon_sym_unquote] = ACTIONS(504),
    [anon_sym_record] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [127] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(510),
    [anon_sym_where] = ACTIONS(500),
  },
  [128] = {
    [sym_literal] = STATE(287),
    [sym__atom_no_curly] = STATE(287),
    [sym_string] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_qualified_name] = ACTIONS(512),
    [anon_sym__] = ACTIONS(512),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(512),
    [anon_sym_Prop] = ACTIONS(512),
    [anon_sym_Set] = ACTIONS(512),
    [anon_sym_quote] = ACTIONS(512),
    [anon_sym_quoteTerm] = ACTIONS(512),
    [anon_sym_unquote] = ACTIONS(512),
    [anon_sym_record] = ACTIONS(55),
  },
  [129] = {
    [sym_name] = ACTIONS(514),
    [sym_comment] = ACTIONS(13),
  },
  [130] = {
    [sym_name] = ACTIONS(516),
    [sym_comment] = ACTIONS(13),
  },
  [131] = {
    [sym__declarations0] = STATE(291),
    [sym__newline] = ACTIONS(518),
    [sym__indent] = ACTIONS(520),
    [sym_comment] = ACTIONS(65),
  },
  [132] = {
    [sym__arg_type_signatures_block] = STATE(293),
    [sym__indent] = ACTIONS(522),
    [sym_comment] = ACTIONS(65),
  },
  [133] = {
    [sym__newline] = ACTIONS(524),
    [sym_comment] = ACTIONS(65),
  },
  [134] = {
    [sym__dedent] = ACTIONS(101),
    [sym_string] = ACTIONS(103),
    [sym_int] = ACTIONS(103),
    [sym_qualified_name] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(103),
    [anon_sym_Prop] = ACTIONS(103),
    [anon_sym_Set] = ACTIONS(103),
    [anon_sym_quote] = ACTIONS(103),
    [anon_sym_quoteTerm] = ACTIONS(103),
    [anon_sym_unquote] = ACTIONS(103),
    [anon_sym_record] = ACTIONS(103),
    [anon_sym_data] = ACTIONS(103),
    [anon_sym_codata] = ACTIONS(103),
    [anon_sym_instance] = ACTIONS(103),
    [anon_sym_field] = ACTIONS(103),
    [sym_pragma] = ACTIONS(103),
    [anon_sym_infix] = ACTIONS(103),
    [anon_sym_infixl] = ACTIONS(103),
    [anon_sym_infixr] = ACTIONS(103),
  },
  [135] = {
    [sym__dedent] = ACTIONS(526),
    [sym_comment] = ACTIONS(65),
  },
  [136] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(296),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(297),
    [sym_data_signature_only] = STATE(296),
    [sym_record] = STATE(297),
    [sym_record_signature_only] = STATE(296),
    [sym_field] = STATE(297),
    [sym__declaration] = STATE(296),
    [sym__declaration_block] = STATE(297),
    [sym_infix] = STATE(296),
    [sym_instance] = STATE(297),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(67),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_data] = ACTIONS(209),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(213),
    [anon_sym_field] = ACTIONS(215),
    [sym_pragma] = ACTIONS(528),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [137] = {
    [sym_name] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(532),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(534),
    [sym_comment] = ACTIONS(13),
  },
  [138] = {
    [sym__maybe_dotted_names1] = STATE(302),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(303),
    [sym_name] = ACTIONS(536),
    [anon_sym_DOT] = ACTIONS(538),
    [anon_sym_DOT_DOT] = ACTIONS(538),
    [sym_comment] = ACTIONS(13),
  },
  [139] = {
    [sym__maybe_dotted_names1] = STATE(305),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(306),
    [sym_name] = ACTIONS(540),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_DOT_DOT] = ACTIONS(542),
    [sym_comment] = ACTIONS(13),
  },
  [140] = {
    [sym__arg_type_signatures_block] = STATE(308),
    [sym__indent] = ACTIONS(544),
    [sym_comment] = ACTIONS(65),
  },
  [141] = {
    [sym__maybe_dotted_name] = STATE(142),
    [sym__arg_names] = STATE(309),
    [sym_arg_name] = STATE(145),
    [aux_sym__arg_names_repeat1] = STATE(145),
    [sym_name] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(229),
    [sym_comment] = ACTIONS(13),
  },
  [142] = {
    [sym_name] = ACTIONS(546),
    [anon_sym_DOT] = ACTIONS(546),
    [anon_sym_DOT_DOT] = ACTIONS(546),
    [anon_sym_LBRACE] = ACTIONS(546),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(546),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(546),
  },
  [143] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(548),
  },
  [144] = {
    [sym__dedent] = ACTIONS(550),
    [sym_comment] = ACTIONS(65),
  },
  [145] = {
    [sym__maybe_dotted_name] = STATE(142),
    [sym_arg_name] = STATE(312),
    [aux_sym__arg_names_repeat1] = STATE(312),
    [sym_name] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(229),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(552),
  },
  [146] = {
    [sym__maybe_dotted_name] = STATE(142),
    [sym__arg_names] = STATE(143),
    [sym_arg_name] = STATE(145),
    [sym_arg_type_signature] = STATE(313),
    [aux_sym__arg_names_repeat1] = STATE(145),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(313),
    [sym__dedent] = ACTIONS(554),
    [sym_name] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(229),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(231),
    [anon_sym_overlap] = ACTIONS(233),
  },
  [147] = {
    [sym__newline] = ACTIONS(556),
    [sym_name] = ACTIONS(452),
    [anon_sym__] = ACTIONS(452),
    [sym_comment] = ACTIONS(13),
  },
  [148] = {
    [sym_anonymous_name] = STATE(314),
    [sym__binding_name] = STATE(314),
    [aux_sym_infix_repeat1] = STATE(314),
    [sym__newline] = ACTIONS(558),
    [sym_name] = ACTIONS(560),
    [anon_sym__] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
  },
  [149] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_with] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [150] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(316),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(562),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [151] = {
    [sym_literal] = STATE(318),
    [sym__atom_no_curly] = STATE(318),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(564),
    [anon_sym__] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(564),
    [anon_sym_Prop] = ACTIONS(564),
    [anon_sym_Set] = ACTIONS(564),
    [anon_sym_quote] = ACTIONS(564),
    [anon_sym_quoteTerm] = ACTIONS(564),
    [anon_sym_unquote] = ACTIONS(564),
    [anon_sym_record] = ACTIONS(147),
  },
  [152] = {
    [sym__newline] = ACTIONS(568),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(568),
    [anon_sym_COLON] = ACTIONS(568),
    [anon_sym_module] = ACTIONS(568),
    [anon_sym_with] = ACTIONS(568),
    [anon_sym_where] = ACTIONS(568),
  },
  [153] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_module] = ACTIONS(85),
    [anon_sym_with] = ACTIONS(85),
    [anon_sym_where] = ACTIONS(85),
  },
  [154] = {
    [sym__newline] = ACTIONS(87),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(89),
    [anon_sym_with] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
  },
  [155] = {
    [sym_literal] = STATE(154),
    [sym__application] = STATE(61),
    [sym__expr2] = STATE(61),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(153),
    [sym__atom_curly] = STATE(154),
    [sym__atom_no_curly] = STATE(154),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(156),
    [sym_string] = ACTIONS(243),
    [sym_int] = ACTIONS(243),
    [sym_qualified_name] = ACTIONS(245),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(245),
    [anon_sym_Prop] = ACTIONS(245),
    [anon_sym_Set] = ACTIONS(245),
    [anon_sym_quote] = ACTIONS(245),
    [anon_sym_quoteTerm] = ACTIONS(245),
    [anon_sym_unquote] = ACTIONS(245),
    [anon_sym_record] = ACTIONS(249),
  },
  [156] = {
    [sym_literal] = STATE(154),
    [sym__expr2] = STATE(63),
    [sym_atom] = STATE(153),
    [sym__atom_curly] = STATE(154),
    [sym__atom_no_curly] = STATE(154),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(243),
    [sym_int] = ACTIONS(243),
    [sym_qualified_name] = ACTIONS(245),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(245),
    [anon_sym_Prop] = ACTIONS(245),
    [anon_sym_Set] = ACTIONS(245),
    [anon_sym_quote] = ACTIONS(245),
    [anon_sym_quoteTerm] = ACTIONS(245),
    [anon_sym_unquote] = ACTIONS(245),
    [anon_sym_record] = ACTIONS(249),
  },
  [157] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [158] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(320),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(570),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [159] = {
    [sym_literal] = STATE(322),
    [sym__atom_no_curly] = STATE(322),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_LBRACE] = ACTIONS(574),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(572),
    [anon_sym_Prop] = ACTIONS(572),
    [anon_sym_Set] = ACTIONS(572),
    [anon_sym_quote] = ACTIONS(572),
    [anon_sym_quoteTerm] = ACTIONS(572),
    [anon_sym_unquote] = ACTIONS(572),
    [anon_sym_record] = ACTIONS(147),
  },
  [160] = {
    [sym__newline] = ACTIONS(576),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(576),
    [anon_sym_COLON] = ACTIONS(576),
    [anon_sym_module] = ACTIONS(576),
    [anon_sym_where] = ACTIONS(576),
  },
  [161] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_module] = ACTIONS(85),
    [anon_sym_where] = ACTIONS(85),
  },
  [162] = {
    [sym__newline] = ACTIONS(87),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
  },
  [163] = {
    [sym_literal] = STATE(162),
    [sym__application] = STATE(61),
    [sym__expr2] = STATE(61),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(161),
    [sym__atom_curly] = STATE(162),
    [sym__atom_no_curly] = STATE(162),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(164),
    [sym_string] = ACTIONS(251),
    [sym_int] = ACTIONS(251),
    [sym_qualified_name] = ACTIONS(253),
    [anon_sym__] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(253),
    [anon_sym_Prop] = ACTIONS(253),
    [anon_sym_Set] = ACTIONS(253),
    [anon_sym_quote] = ACTIONS(253),
    [anon_sym_quoteTerm] = ACTIONS(253),
    [anon_sym_unquote] = ACTIONS(253),
    [anon_sym_record] = ACTIONS(257),
  },
  [164] = {
    [sym_literal] = STATE(162),
    [sym__expr2] = STATE(63),
    [sym_atom] = STATE(161),
    [sym__atom_curly] = STATE(162),
    [sym__atom_no_curly] = STATE(162),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(251),
    [sym_int] = ACTIONS(251),
    [sym_qualified_name] = ACTIONS(253),
    [anon_sym__] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(253),
    [anon_sym_Prop] = ACTIONS(253),
    [anon_sym_Set] = ACTIONS(253),
    [anon_sym_quote] = ACTIONS(253),
    [anon_sym_quoteTerm] = ACTIONS(253),
    [anon_sym_unquote] = ACTIONS(253),
    [anon_sym_record] = ACTIONS(257),
  },
  [165] = {
    [sym__newline] = ACTIONS(578),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(578),
    [anon_sym_module] = ACTIONS(578),
    [anon_sym_where] = ACTIONS(578),
  },
  [166] = {
    [sym__newline] = ACTIONS(29),
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [167] = {
    [sym_literal] = STATE(78),
    [sym_expr] = STATE(324),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(76),
    [sym__expr2] = STATE(76),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(77),
    [sym__atom_curly] = STATE(78),
    [sym__atom_no_curly] = STATE(78),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(79),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(580),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_record] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [168] = {
    [sym_literal] = STATE(326),
    [sym__atom_no_curly] = STATE(326),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(582),
    [anon_sym__] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(584),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(582),
    [anon_sym_Prop] = ACTIONS(582),
    [anon_sym_Set] = ACTIONS(582),
    [anon_sym_quote] = ACTIONS(582),
    [anon_sym_quoteTerm] = ACTIONS(582),
    [anon_sym_unquote] = ACTIONS(582),
    [anon_sym_record] = ACTIONS(147),
  },
  [169] = {
    [sym__newline] = ACTIONS(586),
    [sym_comment] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(586),
    [anon_sym_where] = ACTIONS(586),
  },
  [170] = {
    [sym__newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(588),
    [anon_sym_module] = ACTIONS(151),
    [anon_sym_where] = ACTIONS(151),
  },
  [171] = {
    [sym__const_right_arrow] = ACTIONS(588),
    [sym_comment] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [172] = {
    [sym__newline] = ACTIONS(81),
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(85),
    [anon_sym_where] = ACTIONS(85),
  },
  [173] = {
    [sym__newline] = ACTIONS(87),
    [sym__const_right_arrow] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
  },
  [174] = {
    [sym__const_right_arrow] = ACTIONS(588),
    [sym_comment] = ACTIONS(65),
  },
  [175] = {
    [sym_literal] = STATE(332),
    [sym__application] = STATE(61),
    [sym__expr2] = STATE(61),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(331),
    [sym__atom_curly] = STATE(332),
    [sym__atom_no_curly] = STATE(332),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(333),
    [sym_string] = ACTIONS(590),
    [sym_int] = ACTIONS(590),
    [sym_qualified_name] = ACTIONS(592),
    [anon_sym__] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(594),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(592),
    [anon_sym_Prop] = ACTIONS(592),
    [anon_sym_Set] = ACTIONS(592),
    [anon_sym_quote] = ACTIONS(592),
    [anon_sym_quoteTerm] = ACTIONS(592),
    [anon_sym_unquote] = ACTIONS(592),
    [anon_sym_record] = ACTIONS(596),
  },
  [176] = {
    [sym_literal] = STATE(173),
    [sym__expr2] = STATE(63),
    [sym_atom] = STATE(172),
    [sym__atom_curly] = STATE(173),
    [sym__atom_no_curly] = STATE(173),
    [aux_sym__application_repeat1] = STATE(103),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(263),
    [sym_int] = ACTIONS(263),
    [sym_qualified_name] = ACTIONS(265),
    [anon_sym__] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(598),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(265),
    [anon_sym_Prop] = ACTIONS(265),
    [anon_sym_Set] = ACTIONS(265),
    [anon_sym_quote] = ACTIONS(265),
    [anon_sym_quoteTerm] = ACTIONS(265),
    [anon_sym_unquote] = ACTIONS(265),
    [anon_sym_record] = ACTIONS(269),
  },
  [177] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(600),
  },
  [178] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(556),
  },
  [179] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(133),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(134),
    [sym_data_signature_only] = STATE(133),
    [sym_record] = STATE(134),
    [sym_record_signature_only] = STATE(133),
    [sym_field] = STATE(134),
    [sym__declaration] = STATE(133),
    [sym__declaration_block] = STATE(134),
    [sym_infix] = STATE(133),
    [sym_instance] = STATE(134),
    [sym__declarations1] = STATE(336),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(136),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_data] = ACTIONS(209),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(213),
    [anon_sym_field] = ACTIONS(215),
    [sym_pragma] = ACTIONS(217),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [180] = {
    [sym__newline] = ACTIONS(602),
    [sym_comment] = ACTIONS(65),
  },
  [181] = {
    [sym__newline] = ACTIONS(604),
    [sym_comment] = ACTIONS(65),
  },
  [182] = {
    [anon_sym_LBRACE] = ACTIONS(606),
    [sym_comment] = ACTIONS(65),
  },
  [183] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
  },
  [184] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(339),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(608),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [185] = {
    [sym_literal] = STATE(341),
    [sym__atom_no_curly] = STATE(341),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(610),
    [anon_sym__] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(612),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(610),
    [anon_sym_Prop] = ACTIONS(610),
    [anon_sym_Set] = ACTIONS(610),
    [anon_sym_quote] = ACTIONS(610),
    [anon_sym_quoteTerm] = ACTIONS(610),
    [anon_sym_unquote] = ACTIONS(610),
    [anon_sym_record] = ACTIONS(147),
  },
  [186] = {
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
  },
  [187] = {
    [sym_literal] = STATE(186),
    [sym_atom] = STATE(64),
    [sym__atom_curly] = STATE(186),
    [sym__atom_no_curly] = STATE(186),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(614),
    [sym_int] = ACTIONS(614),
    [sym_qualified_name] = ACTIONS(616),
    [anon_sym__] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(618),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(616),
    [anon_sym_Prop] = ACTIONS(616),
    [anon_sym_Set] = ACTIONS(616),
    [anon_sym_quote] = ACTIONS(616),
    [anon_sym_quoteTerm] = ACTIONS(616),
    [anon_sym_unquote] = ACTIONS(616),
    [anon_sym_record] = ACTIONS(620),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(622),
    [sym_string] = ACTIONS(283),
    [sym_int] = ACTIONS(283),
    [sym_qualified_name] = ACTIONS(283),
    [anon_sym__] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(283),
    [anon_sym_Prop] = ACTIONS(283),
    [anon_sym_Set] = ACTIONS(283),
    [anon_sym_quote] = ACTIONS(283),
    [anon_sym_quoteTerm] = ACTIONS(283),
    [anon_sym_unquote] = ACTIONS(283),
    [anon_sym_record] = ACTIONS(283),
    [anon_sym_data] = ACTIONS(283),
    [anon_sym_codata] = ACTIONS(283),
    [anon_sym_instance] = ACTIONS(283),
    [anon_sym_field] = ACTIONS(283),
    [sym_pragma] = ACTIONS(283),
    [anon_sym_infix] = ACTIONS(283),
    [anon_sym_infixl] = ACTIONS(283),
    [anon_sym_infixr] = ACTIONS(283),
  },
  [189] = {
    [sym__newline] = ACTIONS(624),
    [sym_comment] = ACTIONS(65),
  },
  [190] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(626),
  },
  [191] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(628),
  },
  [192] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(630),
  },
  [193] = {
    [sym__const_right_arrow] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
  },
  [194] = {
    [anon_sym_RBRACE] = ACTIONS(632),
    [sym_comment] = ACTIONS(65),
  },
  [195] = {
    [sym__record_assignments1] = STATE(348),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(634),
    [sym_comment] = ACTIONS(13),
  },
  [196] = {
    [anon_sym_LBRACE] = ACTIONS(636),
    [sym_comment] = ACTIONS(65),
  },
  [197] = {
    [sym__const_right_arrow] = ACTIONS(383),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
  },
  [198] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(350),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [199] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(194),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [200] = {
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
  },
  [201] = {
    [anon_sym_RBRACE] = ACTIONS(638),
    [sym_comment] = ACTIONS(65),
  },
  [202] = {
    [sym__record_assignments1] = STATE(353),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(640),
    [sym_comment] = ACTIONS(13),
  },
  [203] = {
    [anon_sym_LBRACE] = ACTIONS(642),
    [sym_comment] = ACTIONS(65),
  },
  [204] = {
    [sym_literal] = STATE(362),
    [sym_expr] = STATE(358),
    [sym__expr1] = STATE(359),
    [sym__application] = STATE(359),
    [sym__expr2] = STATE(359),
    [sym__atoms1] = STATE(360),
    [sym_atom] = STATE(361),
    [sym__atom_curly] = STATE(362),
    [sym__atom_no_curly] = STATE(362),
    [sym__typed_bindings1] = STATE(363),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(364),
    [aux_sym__application_repeat1] = STATE(365),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(644),
    [sym_int] = ACTIONS(644),
    [sym_qualified_name] = ACTIONS(646),
    [anon_sym__] = ACTIONS(646),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(648),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(646),
    [anon_sym_Prop] = ACTIONS(646),
    [anon_sym_Set] = ACTIONS(646),
    [anon_sym_quote] = ACTIONS(646),
    [anon_sym_quoteTerm] = ACTIONS(646),
    [anon_sym_unquote] = ACTIONS(646),
    [anon_sym_record] = ACTIONS(650),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [205] = {
    [sym_literal] = STATE(369),
    [sym_atom] = STATE(205),
    [sym__atom_curly] = STATE(369),
    [sym__atom_no_curly] = STATE(369),
    [aux_sym__application_repeat1] = STATE(205),
    [sym_string] = ACTIONS(652),
    [sym_int] = ACTIONS(652),
    [sym_qualified_name] = ACTIONS(655),
    [anon_sym__] = ACTIONS(655),
    [anon_sym_LBRACE] = ACTIONS(658),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(655),
    [anon_sym_Prop] = ACTIONS(655),
    [anon_sym_Set] = ACTIONS(655),
    [anon_sym_quote] = ACTIONS(655),
    [anon_sym_quoteTerm] = ACTIONS(655),
    [anon_sym_unquote] = ACTIONS(655),
    [anon_sym_record] = ACTIONS(661),
  },
  [206] = {
    [sym__const_right_arrow] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
  },
  [207] = {
    [anon_sym_RBRACE] = ACTIONS(664),
    [sym_comment] = ACTIONS(65),
  },
  [208] = {
    [sym__record_assignments1] = STATE(372),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(666),
    [sym_comment] = ACTIONS(13),
  },
  [209] = {
    [anon_sym_LBRACE] = ACTIONS(668),
    [sym_comment] = ACTIONS(65),
  },
  [210] = {
    [sym__field_assignments1] = STATE(375),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(672),
    [sym_comment] = ACTIONS(13),
  },
  [211] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(376),
    [sym__expr1] = STATE(377),
    [sym__application] = STATE(377),
    [sym__expr2] = STATE(377),
    [sym__atoms1] = STATE(378),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(379),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [212] = {
    [anon_sym_RBRACE] = ACTIONS(674),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_where] = ACTIONS(674),
  },
  [213] = {
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
  },
  [214] = {
    [anon_sym_RBRACE] = ACTIONS(676),
    [sym_comment] = ACTIONS(65),
  },
  [215] = {
    [sym__record_assignments1] = STATE(382),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(678),
    [sym_comment] = ACTIONS(13),
  },
  [216] = {
    [anon_sym_LBRACE] = ACTIONS(680),
    [sym_comment] = ACTIONS(65),
  },
  [217] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
  },
  [218] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(385),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [219] = {
    [sym_literal] = STATE(387),
    [sym__atom_no_curly] = STATE(387),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(684),
    [anon_sym__] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(686),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(684),
    [anon_sym_Prop] = ACTIONS(684),
    [anon_sym_Set] = ACTIONS(684),
    [anon_sym_quote] = ACTIONS(684),
    [anon_sym_quoteTerm] = ACTIONS(684),
    [anon_sym_unquote] = ACTIONS(684),
    [anon_sym_record] = ACTIONS(147),
  },
  [220] = {
    [sym__const_right_arrow] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
  },
  [221] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(359),
  },
  [222] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_public] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(31),
    [anon_sym_hiding] = ACTIONS(31),
    [anon_sym_renaming] = ACTIONS(31),
  },
  [223] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(389),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(688),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [224] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(390),
    [sym__expr1] = STATE(391),
    [sym__application] = STATE(391),
    [sym__expr2] = STATE(391),
    [sym__atoms1] = STATE(392),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(393),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [225] = {
    [sym_literal] = STATE(395),
    [sym__atom_no_curly] = STATE(395),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(690),
    [anon_sym__] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(692),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(690),
    [anon_sym_Prop] = ACTIONS(690),
    [anon_sym_Set] = ACTIONS(690),
    [anon_sym_quote] = ACTIONS(690),
    [anon_sym_quoteTerm] = ACTIONS(690),
    [anon_sym_unquote] = ACTIONS(690),
    [anon_sym_record] = ACTIONS(147),
  },
  [226] = {
    [anon_sym_RBRACE] = ACTIONS(694),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(694),
    [anon_sym_public] = ACTIONS(694),
    [anon_sym_using] = ACTIONS(694),
    [anon_sym_hiding] = ACTIONS(694),
    [anon_sym_renaming] = ACTIONS(694),
  },
  [227] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(696),
  },
  [228] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(698),
  },
  [229] = {
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_public] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_hiding] = ACTIONS(89),
    [anon_sym_renaming] = ACTIONS(89),
  },
  [230] = {
    [sym_import_directive] = STATE(398),
    [aux_sym_module_assignment_repeat1] = STATE(398),
    [anon_sym_RBRACE] = ACTIONS(700),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_public] = ACTIONS(702),
    [anon_sym_using] = ACTIONS(704),
    [anon_sym_hiding] = ACTIONS(704),
    [anon_sym_renaming] = ACTIONS(706),
  },
  [231] = {
    [sym_literal] = STATE(229),
    [sym_atom] = STATE(399),
    [sym__atom_curly] = STATE(229),
    [sym__atom_no_curly] = STATE(229),
    [aux_sym__application_repeat1] = STATE(399),
    [sym_string] = ACTIONS(420),
    [sym_int] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(708),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(708),
    [anon_sym_public] = ACTIONS(708),
    [anon_sym_using] = ACTIONS(708),
    [anon_sym_hiding] = ACTIONS(708),
    [anon_sym_renaming] = ACTIONS(708),
  },
  [232] = {
    [sym_import_directive] = STATE(400),
    [aux_sym_module_assignment_repeat1] = STATE(400),
    [anon_sym_RBRACE] = ACTIONS(700),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_public] = ACTIONS(702),
    [anon_sym_using] = ACTIONS(704),
    [anon_sym_hiding] = ACTIONS(704),
    [anon_sym_renaming] = ACTIONS(706),
  },
  [233] = {
    [sym__newline] = ACTIONS(710),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(712),
    [anon_sym_module] = ACTIONS(712),
    [anon_sym_rewrite] = ACTIONS(712),
    [anon_sym_with] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [234] = {
    [sym__record_assignment] = STATE(401),
    [sym_module_assignment] = STATE(401),
    [sym_field_assignment] = STATE(401),
    [sym_qualified_name] = ACTIONS(175),
    [sym_comment] = ACTIONS(13),
  },
  [235] = {
    [aux_sym__record_assignments1_repeat1] = STATE(402),
    [anon_sym_RBRACE] = ACTIONS(714),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(446),
  },
  [236] = {
    [sym_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [anon_sym_DOT_DOT] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [237] = {
    [anon_sym_RBRACE] = ACTIONS(716),
    [sym_comment] = ACTIONS(65),
  },
  [238] = {
    [sym__field_assignments1] = STATE(404),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(718),
    [sym_comment] = ACTIONS(13),
  },
  [239] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(405),
    [sym__expr2] = STATE(405),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [240] = {
    [sym_literal] = STATE(252),
    [sym__application] = STATE(406),
    [sym__expr2] = STATE(406),
    [sym_atom] = STATE(251),
    [sym__atom_curly] = STATE(252),
    [sym__atom_no_curly] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [sym_string] = ACTIONS(466),
    [sym_int] = ACTIONS(466),
    [sym_qualified_name] = ACTIONS(468),
    [anon_sym__] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_Prop] = ACTIONS(468),
    [anon_sym_Set] = ACTIONS(468),
    [anon_sym_quote] = ACTIONS(468),
    [anon_sym_quoteTerm] = ACTIONS(468),
    [anon_sym_unquote] = ACTIONS(468),
    [anon_sym_record] = ACTIONS(472),
  },
  [241] = {
    [sym_literal] = STATE(85),
    [sym__application] = STATE(407),
    [sym__expr2] = STATE(407),
    [sym_atom] = STATE(84),
    [sym__atom_curly] = STATE(85),
    [sym__atom_no_curly] = STATE(85),
    [aux_sym__application_repeat1] = STATE(86),
    [sym_string] = ACTIONS(133),
    [sym_int] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(139),
  },
  [242] = {
    [sym_name] = ACTIONS(720),
    [anon_sym__] = ACTIONS(720),
    [anon_sym_DOT] = ACTIONS(720),
    [anon_sym_DOT_DOT] = ACTIONS(720),
    [anon_sym_LBRACE] = ACTIONS(720),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(720),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(720),
    [anon_sym_COLON] = ACTIONS(720),
    [anon_sym_where] = ACTIONS(720),
  },
  [243] = {
    [sym_string] = ACTIONS(722),
    [sym_int] = ACTIONS(722),
    [sym_qualified_name] = ACTIONS(722),
    [anon_sym__] = ACTIONS(722),
    [anon_sym_LBRACE] = ACTIONS(722),
    [anon_sym_RBRACE] = ACTIONS(722),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_QMARK] = ACTIONS(722),
    [anon_sym_Prop] = ACTIONS(722),
    [anon_sym_Set] = ACTIONS(722),
    [anon_sym_quote] = ACTIONS(722),
    [anon_sym_quoteTerm] = ACTIONS(722),
    [anon_sym_unquote] = ACTIONS(722),
    [anon_sym_record] = ACTIONS(722),
    [anon_sym_COLON] = ACTIONS(722),
  },
  [244] = {
    [anon_sym_RBRACE] = ACTIONS(724),
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(726),
  },
  [245] = {
    [anon_sym_RBRACE] = ACTIONS(728),
    [sym_comment] = ACTIONS(65),
  },
  [246] = {
    [aux_sym__field_assignments1_repeat1] = STATE(412),
    [anon_sym_RBRACE] = ACTIONS(730),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(732),
  },
  [247] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
  },
  [248] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(414),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(734),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [249] = {
    [sym_literal] = STATE(416),
    [sym__atom_no_curly] = STATE(416),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(736),
    [anon_sym__] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(738),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(736),
    [anon_sym_Prop] = ACTIONS(736),
    [anon_sym_Set] = ACTIONS(736),
    [anon_sym_quote] = ACTIONS(736),
    [anon_sym_quoteTerm] = ACTIONS(736),
    [anon_sym_unquote] = ACTIONS(736),
    [anon_sym_record] = ACTIONS(147),
  },
  [250] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(724),
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(740),
  },
  [251] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
  },
  [252] = {
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
  },
  [253] = {
    [sym_literal] = STATE(252),
    [sym__expr2] = STATE(418),
    [sym_atom] = STATE(251),
    [sym__atom_curly] = STATE(252),
    [sym__atom_no_curly] = STATE(252),
    [aux_sym__application_repeat1] = STATE(205),
    [sym_string] = ACTIONS(466),
    [sym_int] = ACTIONS(466),
    [sym_qualified_name] = ACTIONS(468),
    [anon_sym__] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_Prop] = ACTIONS(468),
    [anon_sym_Set] = ACTIONS(468),
    [anon_sym_quote] = ACTIONS(468),
    [anon_sym_quoteTerm] = ACTIONS(468),
    [anon_sym_unquote] = ACTIONS(468),
    [anon_sym_record] = ACTIONS(472),
  },
  [254] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(742),
  },
  [255] = {
    [sym__newline] = ACTIONS(29),
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [256] = {
    [sym_literal] = STATE(78),
    [sym_expr] = STATE(421),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(76),
    [sym__expr2] = STATE(76),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(77),
    [sym__atom_curly] = STATE(78),
    [sym__atom_no_curly] = STATE(78),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(79),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_record] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [257] = {
    [sym_literal] = STATE(423),
    [sym__atom_no_curly] = STATE(423),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(746),
    [anon_sym__] = ACTIONS(746),
    [anon_sym_LBRACE] = ACTIONS(748),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_Prop] = ACTIONS(746),
    [anon_sym_Set] = ACTIONS(746),
    [anon_sym_quote] = ACTIONS(746),
    [anon_sym_quoteTerm] = ACTIONS(746),
    [anon_sym_unquote] = ACTIONS(746),
    [anon_sym_record] = ACTIONS(147),
  },
  [258] = {
    [sym__newline] = ACTIONS(750),
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(752),
  },
  [259] = {
    [sym__newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(754),
    [anon_sym_where] = ACTIONS(151),
  },
  [260] = {
    [sym__const_right_arrow] = ACTIONS(754),
    [sym_comment] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [261] = {
    [sym__newline] = ACTIONS(81),
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(85),
  },
  [262] = {
    [sym__newline] = ACTIONS(87),
    [sym__const_right_arrow] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
  },
  [263] = {
    [sym__const_right_arrow] = ACTIONS(754),
    [sym_comment] = ACTIONS(65),
  },
  [264] = {
    [sym_literal] = STATE(430),
    [sym__application] = STATE(61),
    [sym__expr2] = STATE(61),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(429),
    [sym__atom_curly] = STATE(430),
    [sym__atom_no_curly] = STATE(430),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(431),
    [sym_string] = ACTIONS(756),
    [sym_int] = ACTIONS(756),
    [sym_qualified_name] = ACTIONS(758),
    [anon_sym__] = ACTIONS(758),
    [anon_sym_LBRACE] = ACTIONS(760),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(758),
    [anon_sym_Prop] = ACTIONS(758),
    [anon_sym_Set] = ACTIONS(758),
    [anon_sym_quote] = ACTIONS(758),
    [anon_sym_quoteTerm] = ACTIONS(758),
    [anon_sym_unquote] = ACTIONS(758),
    [anon_sym_record] = ACTIONS(762),
  },
  [265] = {
    [sym_literal] = STATE(262),
    [sym__expr2] = STATE(63),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [aux_sym__application_repeat1] = STATE(103),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_LBRACE] = ACTIONS(764),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
  },
  [266] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(133),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(134),
    [sym_data_signature_only] = STATE(133),
    [sym_record] = STATE(134),
    [sym_record_signature_only] = STATE(133),
    [sym__record_directives1] = STATE(438),
    [sym_record_constructor_instance] = STATE(439),
    [sym_record_constructor] = STATE(440),
    [sym__record_directive] = STATE(440),
    [sym_record_induction] = STATE(440),
    [sym_record_eta] = STATE(440),
    [sym_field] = STATE(134),
    [sym__declaration] = STATE(133),
    [sym__declaration_block] = STATE(134),
    [sym_infix] = STATE(133),
    [sym_instance] = STATE(134),
    [sym__declarations1] = STATE(441),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__record_directives1_repeat1] = STATE(442),
    [aux_sym__declarations1_repeat1] = STATE(136),
    [sym__dedent] = ACTIONS(766),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_data] = ACTIONS(209),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(768),
    [anon_sym_constructor] = ACTIONS(770),
    [anon_sym_inductive] = ACTIONS(772),
    [anon_sym_coinductive] = ACTIONS(772),
    [anon_sym_eta_DASHequality] = ACTIONS(774),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(774),
    [anon_sym_field] = ACTIONS(215),
    [sym_pragma] = ACTIONS(217),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(776),
    [sym_string] = ACTIONS(778),
    [sym_int] = ACTIONS(778),
    [sym_qualified_name] = ACTIONS(778),
    [anon_sym__] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(778),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(778),
    [anon_sym_Prop] = ACTIONS(778),
    [anon_sym_Set] = ACTIONS(778),
    [anon_sym_quote] = ACTIONS(778),
    [anon_sym_quoteTerm] = ACTIONS(778),
    [anon_sym_unquote] = ACTIONS(778),
    [anon_sym_record] = ACTIONS(778),
    [anon_sym_data] = ACTIONS(778),
    [anon_sym_codata] = ACTIONS(778),
    [anon_sym_instance] = ACTIONS(778),
    [anon_sym_field] = ACTIONS(778),
    [sym_pragma] = ACTIONS(778),
    [anon_sym_infix] = ACTIONS(778),
    [anon_sym_infixl] = ACTIONS(778),
    [anon_sym_infixr] = ACTIONS(778),
  },
  [268] = {
    [sym_literal] = STATE(262),
    [sym_expr] = STATE(443),
    [sym__expr1] = STATE(259),
    [sym__application] = STATE(259),
    [sym__expr2] = STATE(259),
    [sym__atoms1] = STATE(260),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [sym__typed_bindings1] = STATE(263),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(264),
    [aux_sym__application_repeat1] = STATE(265),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [269] = {
    [sym_record_declarations_block] = STATE(444),
    [sym__indent] = ACTIONS(482),
    [ts_builtin_sym_end] = ACTIONS(776),
    [sym_string] = ACTIONS(778),
    [sym_int] = ACTIONS(778),
    [sym_qualified_name] = ACTIONS(778),
    [anon_sym__] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(778),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(778),
    [anon_sym_Prop] = ACTIONS(778),
    [anon_sym_Set] = ACTIONS(778),
    [anon_sym_quote] = ACTIONS(778),
    [anon_sym_quoteTerm] = ACTIONS(778),
    [anon_sym_unquote] = ACTIONS(778),
    [anon_sym_record] = ACTIONS(778),
    [anon_sym_data] = ACTIONS(778),
    [anon_sym_codata] = ACTIONS(778),
    [anon_sym_instance] = ACTIONS(778),
    [anon_sym_field] = ACTIONS(778),
    [sym_pragma] = ACTIONS(778),
    [anon_sym_infix] = ACTIONS(778),
    [anon_sym_infixl] = ACTIONS(778),
    [anon_sym_infixr] = ACTIONS(778),
  },
  [270] = {
    [sym_anonymous_name] = STATE(119),
    [sym__binding_name] = STATE(119),
    [sym_untyped_binding] = STATE(270),
    [sym_typed_binding] = STATE(270),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(270),
    [sym_name] = ACTIONS(780),
    [anon_sym__] = ACTIONS(783),
    [anon_sym_DOT] = ACTIONS(786),
    [anon_sym_DOT_DOT] = ACTIONS(786),
    [anon_sym_LBRACE] = ACTIONS(789),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(792),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(795),
    [anon_sym_COLON] = ACTIONS(798),
    [anon_sym_where] = ACTIONS(798),
  },
  [271] = {
    [sym__newline] = ACTIONS(800),
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(802),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(804),
    [sym_string] = ACTIONS(806),
    [sym_int] = ACTIONS(806),
    [sym_qualified_name] = ACTIONS(806),
    [anon_sym__] = ACTIONS(806),
    [anon_sym_LBRACE] = ACTIONS(806),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(806),
    [anon_sym_Prop] = ACTIONS(806),
    [anon_sym_Set] = ACTIONS(806),
    [anon_sym_quote] = ACTIONS(806),
    [anon_sym_quoteTerm] = ACTIONS(806),
    [anon_sym_unquote] = ACTIONS(806),
    [anon_sym_record] = ACTIONS(806),
    [anon_sym_data] = ACTIONS(806),
    [anon_sym_codata] = ACTIONS(806),
    [anon_sym_instance] = ACTIONS(806),
    [anon_sym_field] = ACTIONS(806),
    [sym_pragma] = ACTIONS(806),
    [anon_sym_infix] = ACTIONS(806),
    [anon_sym_infixl] = ACTIONS(806),
    [anon_sym_infixr] = ACTIONS(806),
  },
  [273] = {
    [sym_literal] = STATE(262),
    [sym_expr] = STATE(446),
    [sym__expr1] = STATE(259),
    [sym__application] = STATE(259),
    [sym__expr2] = STATE(259),
    [sym__atoms1] = STATE(260),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [sym__typed_bindings1] = STATE(263),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(264),
    [aux_sym__application_repeat1] = STATE(265),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [274] = {
    [sym__declarations0] = STATE(447),
    [sym__newline] = ACTIONS(808),
    [sym__indent] = ACTIONS(63),
    [sym_comment] = ACTIONS(65),
  },
  [275] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [276] = {
    [sym_literal] = STATE(78),
    [sym_expr] = STATE(449),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(76),
    [sym__expr2] = STATE(76),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(77),
    [sym__atom_curly] = STATE(78),
    [sym__atom_no_curly] = STATE(78),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(79),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(810),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_record] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [277] = {
    [sym_literal] = STATE(451),
    [sym__atom_no_curly] = STATE(451),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(812),
    [anon_sym__] = ACTIONS(812),
    [anon_sym_LBRACE] = ACTIONS(814),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(812),
    [anon_sym_Prop] = ACTIONS(812),
    [anon_sym_Set] = ACTIONS(812),
    [anon_sym_quote] = ACTIONS(812),
    [anon_sym_quoteTerm] = ACTIONS(812),
    [anon_sym_unquote] = ACTIONS(812),
    [anon_sym_record] = ACTIONS(147),
  },
  [278] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(802),
  },
  [279] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(816),
    [anon_sym_where] = ACTIONS(151),
  },
  [280] = {
    [sym__const_right_arrow] = ACTIONS(816),
    [sym_comment] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [281] = {
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(85),
  },
  [282] = {
    [sym__const_right_arrow] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
  },
  [283] = {
    [sym__const_right_arrow] = ACTIONS(816),
    [sym_comment] = ACTIONS(65),
  },
  [284] = {
    [sym_literal] = STATE(457),
    [sym__application] = STATE(97),
    [sym__expr2] = STATE(97),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(456),
    [sym__atom_curly] = STATE(457),
    [sym__atom_no_curly] = STATE(457),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(458),
    [sym_string] = ACTIONS(818),
    [sym_int] = ACTIONS(818),
    [sym_qualified_name] = ACTIONS(820),
    [anon_sym__] = ACTIONS(820),
    [anon_sym_LBRACE] = ACTIONS(822),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(820),
    [anon_sym_Prop] = ACTIONS(820),
    [anon_sym_Set] = ACTIONS(820),
    [anon_sym_quote] = ACTIONS(820),
    [anon_sym_quoteTerm] = ACTIONS(820),
    [anon_sym_unquote] = ACTIONS(820),
    [anon_sym_record] = ACTIONS(824),
  },
  [285] = {
    [sym_literal] = STATE(282),
    [sym__expr2] = STATE(102),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [aux_sym__application_repeat1] = STATE(103),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(502),
    [sym_int] = ACTIONS(502),
    [sym_qualified_name] = ACTIONS(504),
    [anon_sym__] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(826),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_Prop] = ACTIONS(504),
    [anon_sym_Set] = ACTIONS(504),
    [anon_sym_quote] = ACTIONS(504),
    [anon_sym_quoteTerm] = ACTIONS(504),
    [anon_sym_unquote] = ACTIONS(504),
    [anon_sym_record] = ACTIONS(508),
  },
  [286] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(460),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(502),
    [sym_int] = ACTIONS(502),
    [sym_qualified_name] = ACTIONS(504),
    [anon_sym__] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_Prop] = ACTIONS(504),
    [anon_sym_Set] = ACTIONS(504),
    [anon_sym_quote] = ACTIONS(504),
    [anon_sym_quoteTerm] = ACTIONS(504),
    [anon_sym_unquote] = ACTIONS(504),
    [anon_sym_record] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [287] = {
    [sym_anonymous_name] = STATE(119),
    [sym__binding_name] = STATE(119),
    [sym_untyped_binding] = STATE(121),
    [sym_typed_binding] = STATE(121),
    [sym__typed_untyped_binding1] = STATE(463),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(121),
    [sym_name] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(828),
    [anon_sym_where] = ACTIONS(830),
  },
  [288] = {
    [sym_anonymous_name] = STATE(119),
    [sym__binding_name] = STATE(119),
    [sym_untyped_binding] = STATE(121),
    [sym_typed_binding] = STATE(121),
    [sym__typed_untyped_binding1] = STATE(466),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(121),
    [sym_name] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_where] = ACTIONS(834),
  },
  [289] = {
    [sym_anonymous_name] = STATE(119),
    [sym__binding_name] = STATE(119),
    [sym_untyped_binding] = STATE(121),
    [sym_typed_binding] = STATE(121),
    [sym__typed_untyped_binding1] = STATE(468),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(121),
    [sym_name] = ACTIONS(183),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(836),
    [anon_sym_where] = ACTIONS(834),
  },
  [290] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(133),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(134),
    [sym_data_signature_only] = STATE(133),
    [sym_record] = STATE(134),
    [sym_record_signature_only] = STATE(133),
    [sym_field] = STATE(134),
    [sym__declaration] = STATE(133),
    [sym__declaration_block] = STATE(134),
    [sym_infix] = STATE(133),
    [sym_instance] = STATE(134),
    [sym__declarations1] = STATE(469),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(136),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_data] = ACTIONS(209),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(213),
    [anon_sym_field] = ACTIONS(215),
    [sym_pragma] = ACTIONS(217),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [291] = {
    [sym__dedent] = ACTIONS(219),
    [sym_string] = ACTIONS(221),
    [sym_int] = ACTIONS(221),
    [sym_qualified_name] = ACTIONS(221),
    [anon_sym__] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_Prop] = ACTIONS(221),
    [anon_sym_Set] = ACTIONS(221),
    [anon_sym_quote] = ACTIONS(221),
    [anon_sym_quoteTerm] = ACTIONS(221),
    [anon_sym_unquote] = ACTIONS(221),
    [anon_sym_record] = ACTIONS(221),
    [anon_sym_data] = ACTIONS(221),
    [anon_sym_codata] = ACTIONS(221),
    [anon_sym_instance] = ACTIONS(221),
    [anon_sym_field] = ACTIONS(221),
    [sym_pragma] = ACTIONS(221),
    [anon_sym_infix] = ACTIONS(221),
    [anon_sym_infixl] = ACTIONS(221),
    [anon_sym_infixr] = ACTIONS(221),
  },
  [292] = {
    [sym__maybe_dotted_name] = STATE(142),
    [sym__arg_names] = STATE(143),
    [sym_arg_name] = STATE(145),
    [sym__arg_type_signatures1] = STATE(470),
    [sym_arg_type_signature] = STATE(146),
    [aux_sym__arg_names_repeat1] = STATE(145),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(146),
    [sym_name] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(229),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(231),
    [anon_sym_overlap] = ACTIONS(233),
  },
  [293] = {
    [sym__dedent] = ACTIONS(235),
    [sym_string] = ACTIONS(237),
    [sym_int] = ACTIONS(237),
    [sym_qualified_name] = ACTIONS(237),
    [anon_sym__] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(237),
    [anon_sym_Prop] = ACTIONS(237),
    [anon_sym_Set] = ACTIONS(237),
    [anon_sym_quote] = ACTIONS(237),
    [anon_sym_quoteTerm] = ACTIONS(237),
    [anon_sym_unquote] = ACTIONS(237),
    [anon_sym_record] = ACTIONS(237),
    [anon_sym_data] = ACTIONS(237),
    [anon_sym_codata] = ACTIONS(237),
    [anon_sym_instance] = ACTIONS(237),
    [anon_sym_field] = ACTIONS(237),
    [sym_pragma] = ACTIONS(237),
    [anon_sym_infix] = ACTIONS(237),
    [anon_sym_infixl] = ACTIONS(237),
    [anon_sym_infixr] = ACTIONS(237),
  },
  [294] = {
    [sym__dedent] = ACTIONS(281),
    [sym_string] = ACTIONS(283),
    [sym_int] = ACTIONS(283),
    [sym_qualified_name] = ACTIONS(283),
    [anon_sym__] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(283),
    [anon_sym_Prop] = ACTIONS(283),
    [anon_sym_Set] = ACTIONS(283),
    [anon_sym_quote] = ACTIONS(283),
    [anon_sym_quoteTerm] = ACTIONS(283),
    [anon_sym_unquote] = ACTIONS(283),
    [anon_sym_record] = ACTIONS(283),
    [anon_sym_data] = ACTIONS(283),
    [anon_sym_codata] = ACTIONS(283),
    [anon_sym_instance] = ACTIONS(283),
    [anon_sym_field] = ACTIONS(283),
    [sym_pragma] = ACTIONS(283),
    [anon_sym_infix] = ACTIONS(283),
    [anon_sym_infixl] = ACTIONS(283),
    [anon_sym_infixr] = ACTIONS(283),
  },
  [295] = {
    [ts_builtin_sym_end] = ACTIONS(838),
    [sym_string] = ACTIONS(840),
    [sym_int] = ACTIONS(840),
    [sym_qualified_name] = ACTIONS(840),
    [anon_sym__] = ACTIONS(840),
    [anon_sym_LBRACE] = ACTIONS(840),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(840),
    [anon_sym_Prop] = ACTIONS(840),
    [anon_sym_Set] = ACTIONS(840),
    [anon_sym_quote] = ACTIONS(840),
    [anon_sym_quoteTerm] = ACTIONS(840),
    [anon_sym_unquote] = ACTIONS(840),
    [anon_sym_record] = ACTIONS(840),
    [anon_sym_data] = ACTIONS(840),
    [anon_sym_codata] = ACTIONS(840),
    [anon_sym_instance] = ACTIONS(840),
    [anon_sym_field] = ACTIONS(840),
    [sym_pragma] = ACTIONS(840),
    [anon_sym_infix] = ACTIONS(840),
    [anon_sym_infixl] = ACTIONS(840),
    [anon_sym_infixr] = ACTIONS(840),
  },
  [296] = {
    [sym__newline] = ACTIONS(842),
    [sym_comment] = ACTIONS(65),
  },
  [297] = {
    [sym__dedent] = ACTIONS(281),
    [sym_string] = ACTIONS(103),
    [sym_int] = ACTIONS(103),
    [sym_qualified_name] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(103),
    [anon_sym_Prop] = ACTIONS(103),
    [anon_sym_Set] = ACTIONS(103),
    [anon_sym_quote] = ACTIONS(103),
    [anon_sym_quoteTerm] = ACTIONS(103),
    [anon_sym_unquote] = ACTIONS(103),
    [anon_sym_record] = ACTIONS(103),
    [anon_sym_data] = ACTIONS(103),
    [anon_sym_codata] = ACTIONS(103),
    [anon_sym_instance] = ACTIONS(103),
    [anon_sym_field] = ACTIONS(103),
    [sym_pragma] = ACTIONS(103),
    [anon_sym_infix] = ACTIONS(103),
    [anon_sym_infixl] = ACTIONS(103),
    [anon_sym_infixr] = ACTIONS(103),
  },
  [298] = {
    [sym_name] = ACTIONS(844),
    [anon_sym_DOT] = ACTIONS(844),
    [anon_sym_DOT_DOT] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(844),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(844),
  },
  [299] = {
    [aux_sym_arg_name_repeat1] = STATE(472),
    [sym_name] = ACTIONS(846),
    [sym_comment] = ACTIONS(13),
  },
  [300] = {
    [aux_sym_arg_name_repeat1] = STATE(473),
    [sym_name] = ACTIONS(848),
    [sym_comment] = ACTIONS(13),
  },
  [301] = {
    [sym_name] = ACTIONS(850),
    [sym_comment] = ACTIONS(13),
  },
  [302] = {
    [anon_sym_RBRACE] = ACTIONS(852),
    [sym_comment] = ACTIONS(65),
  },
  [303] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(476),
    [sym_name] = ACTIONS(854),
    [anon_sym_DOT] = ACTIONS(538),
    [anon_sym_DOT_DOT] = ACTIONS(538),
    [anon_sym_RBRACE] = ACTIONS(856),
    [sym_comment] = ACTIONS(13),
  },
  [304] = {
    [sym_name] = ACTIONS(858),
    [sym_comment] = ACTIONS(13),
  },
  [305] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(852),
    [sym_comment] = ACTIONS(65),
  },
  [306] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(478),
    [sym_name] = ACTIONS(860),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_DOT_DOT] = ACTIONS(542),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(856),
    [sym_comment] = ACTIONS(13),
  },
  [307] = {
    [sym__maybe_dotted_name] = STATE(142),
    [sym__arg_names] = STATE(143),
    [sym_arg_name] = STATE(145),
    [sym__arg_type_signatures1] = STATE(479),
    [sym_arg_type_signature] = STATE(146),
    [aux_sym__arg_names_repeat1] = STATE(145),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(146),
    [sym_name] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(229),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(231),
    [anon_sym_overlap] = ACTIONS(233),
  },
  [308] = {
    [sym__dedent] = ACTIONS(862),
    [sym_name] = ACTIONS(864),
    [anon_sym_DOT] = ACTIONS(864),
    [anon_sym_DOT_DOT] = ACTIONS(864),
    [anon_sym_LBRACE] = ACTIONS(864),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(864),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(864),
    [anon_sym_overlap] = ACTIONS(864),
  },
  [309] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(866),
  },
  [310] = {
    [sym_literal] = STATE(488),
    [sym_expr] = STATE(484),
    [sym__expr1] = STATE(485),
    [sym__application] = STATE(485),
    [sym__expr2] = STATE(485),
    [sym__atoms1] = STATE(486),
    [sym_atom] = STATE(487),
    [sym__atom_curly] = STATE(488),
    [sym__atom_no_curly] = STATE(488),
    [sym__typed_bindings1] = STATE(489),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(490),
    [aux_sym__application_repeat1] = STATE(491),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(868),
    [sym_int] = ACTIONS(868),
    [sym_qualified_name] = ACTIONS(870),
    [anon_sym__] = ACTIONS(870),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(872),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(870),
    [anon_sym_Prop] = ACTIONS(870),
    [anon_sym_Set] = ACTIONS(870),
    [anon_sym_quote] = ACTIONS(870),
    [anon_sym_quoteTerm] = ACTIONS(870),
    [anon_sym_unquote] = ACTIONS(870),
    [anon_sym_record] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(876),
    [sym_string] = ACTIONS(878),
    [sym_int] = ACTIONS(878),
    [sym_qualified_name] = ACTIONS(878),
    [anon_sym__] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(878),
    [anon_sym_Prop] = ACTIONS(878),
    [anon_sym_Set] = ACTIONS(878),
    [anon_sym_quote] = ACTIONS(878),
    [anon_sym_quoteTerm] = ACTIONS(878),
    [anon_sym_unquote] = ACTIONS(878),
    [anon_sym_record] = ACTIONS(878),
    [anon_sym_data] = ACTIONS(878),
    [anon_sym_codata] = ACTIONS(878),
    [anon_sym_instance] = ACTIONS(878),
    [anon_sym_field] = ACTIONS(878),
    [sym_pragma] = ACTIONS(878),
    [anon_sym_infix] = ACTIONS(878),
    [anon_sym_infixl] = ACTIONS(878),
    [anon_sym_infixr] = ACTIONS(878),
  },
  [312] = {
    [sym__maybe_dotted_name] = STATE(142),
    [sym_arg_name] = STATE(312),
    [aux_sym__arg_names_repeat1] = STATE(312),
    [sym_name] = ACTIONS(880),
    [anon_sym_DOT] = ACTIONS(883),
    [anon_sym_DOT_DOT] = ACTIONS(883),
    [anon_sym_LBRACE] = ACTIONS(886),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(889),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(892),
  },
  [313] = {
    [sym__maybe_dotted_name] = STATE(142),
    [sym__arg_names] = STATE(143),
    [sym_arg_name] = STATE(145),
    [sym_arg_type_signature] = STATE(313),
    [aux_sym__arg_names_repeat1] = STATE(145),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(313),
    [sym__dedent] = ACTIONS(894),
    [sym_name] = ACTIONS(896),
    [anon_sym_DOT] = ACTIONS(899),
    [anon_sym_DOT_DOT] = ACTIONS(899),
    [anon_sym_LBRACE] = ACTIONS(902),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(905),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(908),
    [anon_sym_overlap] = ACTIONS(911),
  },
  [314] = {
    [sym_anonymous_name] = STATE(314),
    [sym__binding_name] = STATE(314),
    [aux_sym_infix_repeat1] = STATE(314),
    [sym__newline] = ACTIONS(914),
    [sym_name] = ACTIONS(916),
    [anon_sym__] = ACTIONS(919),
    [sym_comment] = ACTIONS(13),
  },
  [315] = {
    [sym__newline] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_module] = ACTIONS(131),
    [anon_sym_with] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
  },
  [316] = {
    [anon_sym_RBRACE] = ACTIONS(922),
    [sym_comment] = ACTIONS(65),
  },
  [317] = {
    [sym__record_assignments1] = STATE(494),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(924),
    [sym_comment] = ACTIONS(13),
  },
  [318] = {
    [anon_sym_LBRACE] = ACTIONS(926),
    [sym_comment] = ACTIONS(65),
  },
  [319] = {
    [sym__newline] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_module] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
  },
  [320] = {
    [anon_sym_RBRACE] = ACTIONS(928),
    [sym_comment] = ACTIONS(65),
  },
  [321] = {
    [sym__record_assignments1] = STATE(498),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(930),
    [sym_comment] = ACTIONS(13),
  },
  [322] = {
    [anon_sym_LBRACE] = ACTIONS(932),
    [sym_comment] = ACTIONS(65),
  },
  [323] = {
    [sym__newline] = ACTIONS(129),
    [sym__const_right_arrow] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_module] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
  },
  [324] = {
    [anon_sym_RBRACE] = ACTIONS(934),
    [sym_comment] = ACTIONS(65),
  },
  [325] = {
    [sym__record_assignments1] = STATE(502),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(936),
    [sym_comment] = ACTIONS(13),
  },
  [326] = {
    [anon_sym_LBRACE] = ACTIONS(938),
    [sym_comment] = ACTIONS(65),
  },
  [327] = {
    [sym_literal] = STATE(173),
    [sym_expr] = STATE(504),
    [sym__expr1] = STATE(170),
    [sym__application] = STATE(170),
    [sym__expr2] = STATE(170),
    [sym__atoms1] = STATE(171),
    [sym_atom] = STATE(172),
    [sym__atom_curly] = STATE(173),
    [sym__atom_no_curly] = STATE(173),
    [sym__typed_bindings1] = STATE(174),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(175),
    [aux_sym__application_repeat1] = STATE(176),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(263),
    [sym_int] = ACTIONS(263),
    [sym_qualified_name] = ACTIONS(265),
    [anon_sym__] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(265),
    [anon_sym_Prop] = ACTIONS(265),
    [anon_sym_Set] = ACTIONS(265),
    [anon_sym_quote] = ACTIONS(265),
    [anon_sym_quoteTerm] = ACTIONS(265),
    [anon_sym_unquote] = ACTIONS(265),
    [anon_sym_record] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [328] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [329] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(506),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(940),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [330] = {
    [sym_literal] = STATE(508),
    [sym__atom_no_curly] = STATE(508),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(942),
    [anon_sym__] = ACTIONS(942),
    [anon_sym_LBRACE] = ACTIONS(944),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(942),
    [anon_sym_Prop] = ACTIONS(942),
    [anon_sym_Set] = ACTIONS(942),
    [anon_sym_quote] = ACTIONS(942),
    [anon_sym_quoteTerm] = ACTIONS(942),
    [anon_sym_unquote] = ACTIONS(942),
    [anon_sym_record] = ACTIONS(147),
  },
  [331] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(85),
    [anon_sym_where] = ACTIONS(85),
  },
  [332] = {
    [sym__newline] = ACTIONS(87),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
  },
  [333] = {
    [sym_literal] = STATE(332),
    [sym__expr2] = STATE(63),
    [sym_atom] = STATE(331),
    [sym__atom_curly] = STATE(332),
    [sym__atom_no_curly] = STATE(332),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(590),
    [sym_int] = ACTIONS(590),
    [sym_qualified_name] = ACTIONS(592),
    [anon_sym__] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(594),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(592),
    [anon_sym_Prop] = ACTIONS(592),
    [anon_sym_Set] = ACTIONS(592),
    [anon_sym_quote] = ACTIONS(592),
    [anon_sym_quoteTerm] = ACTIONS(592),
    [anon_sym_unquote] = ACTIONS(592),
    [anon_sym_record] = ACTIONS(596),
  },
  [334] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(324),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(580),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [335] = {
    [sym__declarations0] = STATE(509),
    [sym__newline] = ACTIONS(946),
    [sym__indent] = ACTIONS(277),
    [sym_comment] = ACTIONS(65),
  },
  [336] = {
    [sym__dedent] = ACTIONS(948),
    [sym_comment] = ACTIONS(65),
  },
  [337] = {
    [sym__field_assignments1] = STATE(245),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(464),
    [sym_comment] = ACTIONS(13),
  },
  [338] = {
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
  },
  [339] = {
    [anon_sym_RBRACE] = ACTIONS(950),
    [sym_comment] = ACTIONS(65),
  },
  [340] = {
    [sym__record_assignments1] = STATE(513),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(952),
    [sym_comment] = ACTIONS(13),
  },
  [341] = {
    [anon_sym_LBRACE] = ACTIONS(954),
    [sym_comment] = ACTIONS(65),
  },
  [342] = {
    [sym_string] = ACTIONS(283),
    [sym_int] = ACTIONS(283),
    [sym_qualified_name] = ACTIONS(283),
    [anon_sym__] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(283),
    [anon_sym_Prop] = ACTIONS(283),
    [anon_sym_Set] = ACTIONS(283),
    [anon_sym_quote] = ACTIONS(283),
    [anon_sym_quoteTerm] = ACTIONS(283),
    [anon_sym_unquote] = ACTIONS(283),
    [anon_sym_record] = ACTIONS(283),
    [anon_sym_data] = ACTIONS(283),
    [anon_sym_codata] = ACTIONS(283),
    [anon_sym_instance] = ACTIONS(283),
    [anon_sym_field] = ACTIONS(283),
    [sym_pragma] = ACTIONS(283),
    [anon_sym_infix] = ACTIONS(283),
    [anon_sym_infixl] = ACTIONS(283),
    [anon_sym_infixr] = ACTIONS(283),
  },
  [343] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(515),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [344] = {
    [sym_literal] = STATE(362),
    [sym_expr] = STATE(516),
    [sym__expr1] = STATE(359),
    [sym__application] = STATE(359),
    [sym__expr2] = STATE(359),
    [sym__atoms1] = STATE(360),
    [sym_atom] = STATE(361),
    [sym__atom_curly] = STATE(362),
    [sym__atom_no_curly] = STATE(362),
    [sym__typed_bindings1] = STATE(363),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(364),
    [aux_sym__application_repeat1] = STATE(365),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(644),
    [sym_int] = ACTIONS(644),
    [sym_qualified_name] = ACTIONS(646),
    [anon_sym__] = ACTIONS(646),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(648),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(646),
    [anon_sym_Prop] = ACTIONS(646),
    [anon_sym_Set] = ACTIONS(646),
    [anon_sym_quote] = ACTIONS(646),
    [anon_sym_quoteTerm] = ACTIONS(646),
    [anon_sym_unquote] = ACTIONS(646),
    [anon_sym_record] = ACTIONS(650),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [345] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(517),
    [sym__expr1] = STATE(377),
    [sym__application] = STATE(377),
    [sym__expr2] = STATE(377),
    [sym__atoms1] = STATE(378),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(379),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [346] = {
    [sym__const_right_arrow] = ACTIONS(383),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
  },
  [347] = {
    [sym__const_right_arrow] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
  },
  [348] = {
    [anon_sym_RBRACE] = ACTIONS(956),
    [sym_comment] = ACTIONS(65),
  },
  [349] = {
    [sym__field_assignments1] = STATE(519),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(958),
    [sym_comment] = ACTIONS(13),
  },
  [350] = {
    [anon_sym_RBRACE] = ACTIONS(960),
    [sym_comment] = ACTIONS(65),
  },
  [351] = {
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
  },
  [352] = {
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
  },
  [353] = {
    [anon_sym_RBRACE] = ACTIONS(962),
    [sym_comment] = ACTIONS(65),
  },
  [354] = {
    [sym__field_assignments1] = STATE(522),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(964),
    [sym_comment] = ACTIONS(13),
  },
  [355] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
  },
  [356] = {
    [sym_literal] = STATE(78),
    [sym_expr] = STATE(524),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(76),
    [sym__expr2] = STATE(76),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(77),
    [sym__atom_curly] = STATE(78),
    [sym__atom_no_curly] = STATE(78),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(79),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(966),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_record] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [357] = {
    [sym_literal] = STATE(526),
    [sym__atom_no_curly] = STATE(526),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(968),
    [anon_sym__] = ACTIONS(968),
    [anon_sym_LBRACE] = ACTIONS(970),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(968),
    [anon_sym_Prop] = ACTIONS(968),
    [anon_sym_Set] = ACTIONS(968),
    [anon_sym_quote] = ACTIONS(968),
    [anon_sym_quoteTerm] = ACTIONS(968),
    [anon_sym_unquote] = ACTIONS(968),
    [anon_sym_record] = ACTIONS(147),
  },
  [358] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(960),
    [sym_comment] = ACTIONS(65),
  },
  [359] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(151),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(972),
  },
  [360] = {
    [sym__const_right_arrow] = ACTIONS(972),
    [sym_comment] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [361] = {
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
  },
  [362] = {
    [sym__const_right_arrow] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
  },
  [363] = {
    [sym__const_right_arrow] = ACTIONS(972),
    [sym_comment] = ACTIONS(65),
  },
  [364] = {
    [sym_literal] = STATE(533),
    [sym__application] = STATE(531),
    [sym__expr2] = STATE(531),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(532),
    [sym__atom_curly] = STATE(533),
    [sym__atom_no_curly] = STATE(533),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(534),
    [sym_string] = ACTIONS(974),
    [sym_int] = ACTIONS(974),
    [sym_qualified_name] = ACTIONS(976),
    [anon_sym__] = ACTIONS(976),
    [anon_sym_LBRACE] = ACTIONS(978),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(976),
    [anon_sym_Prop] = ACTIONS(976),
    [anon_sym_Set] = ACTIONS(976),
    [anon_sym_quote] = ACTIONS(976),
    [anon_sym_quoteTerm] = ACTIONS(976),
    [anon_sym_unquote] = ACTIONS(976),
    [anon_sym_record] = ACTIONS(980),
  },
  [365] = {
    [sym_literal] = STATE(362),
    [sym__expr2] = STATE(418),
    [sym_atom] = STATE(361),
    [sym__atom_curly] = STATE(362),
    [sym__atom_no_curly] = STATE(362),
    [aux_sym__application_repeat1] = STATE(103),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(644),
    [sym_int] = ACTIONS(644),
    [sym_qualified_name] = ACTIONS(646),
    [anon_sym__] = ACTIONS(646),
    [anon_sym_LBRACE] = ACTIONS(982),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(646),
    [anon_sym_Prop] = ACTIONS(646),
    [anon_sym_Set] = ACTIONS(646),
    [anon_sym_quote] = ACTIONS(646),
    [anon_sym_quoteTerm] = ACTIONS(646),
    [anon_sym_unquote] = ACTIONS(646),
    [anon_sym_record] = ACTIONS(650),
  },
  [366] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
  },
  [367] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(537),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(984),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [368] = {
    [sym_literal] = STATE(539),
    [sym__atom_no_curly] = STATE(539),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(986),
    [anon_sym__] = ACTIONS(986),
    [anon_sym_LBRACE] = ACTIONS(988),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(986),
    [anon_sym_Prop] = ACTIONS(986),
    [anon_sym_Set] = ACTIONS(986),
    [anon_sym_quote] = ACTIONS(986),
    [anon_sym_quoteTerm] = ACTIONS(986),
    [anon_sym_unquote] = ACTIONS(986),
    [anon_sym_record] = ACTIONS(147),
  },
  [369] = {
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
  },
  [370] = {
    [sym__const_right_arrow] = ACTIONS(712),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_RBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(712),
    [anon_sym_RPAREN] = ACTIONS(712),
  },
  [371] = {
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(65),
  },
  [372] = {
    [anon_sym_RBRACE] = ACTIONS(990),
    [sym_comment] = ACTIONS(65),
  },
  [373] = {
    [sym__field_assignments1] = STATE(541),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(992),
    [sym_comment] = ACTIONS(13),
  },
  [374] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(994),
  },
  [375] = {
    [anon_sym_RBRACE] = ACTIONS(996),
    [sym_comment] = ACTIONS(65),
  },
  [376] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(960),
  },
  [377] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(998),
    [anon_sym_RPAREN] = ACTIONS(151),
  },
  [378] = {
    [sym__const_right_arrow] = ACTIONS(998),
    [sym_comment] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [379] = {
    [sym__const_right_arrow] = ACTIONS(998),
    [sym_comment] = ACTIONS(65),
  },
  [380] = {
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
  },
  [381] = {
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
  },
  [382] = {
    [anon_sym_RBRACE] = ACTIONS(1000),
    [sym_comment] = ACTIONS(65),
  },
  [383] = {
    [sym__field_assignments1] = STATE(545),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1002),
    [sym_comment] = ACTIONS(13),
  },
  [384] = {
    [sym__const_right_arrow] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
  },
  [385] = {
    [anon_sym_RBRACE] = ACTIONS(1004),
    [sym_comment] = ACTIONS(65),
  },
  [386] = {
    [sym__record_assignments1] = STATE(548),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1006),
    [sym_comment] = ACTIONS(13),
  },
  [387] = {
    [anon_sym_LBRACE] = ACTIONS(1008),
    [sym_comment] = ACTIONS(65),
  },
  [388] = {
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_public] = ACTIONS(131),
    [anon_sym_using] = ACTIONS(131),
    [anon_sym_hiding] = ACTIONS(131),
    [anon_sym_renaming] = ACTIONS(131),
  },
  [389] = {
    [anon_sym_RBRACE] = ACTIONS(1010),
    [sym_comment] = ACTIONS(65),
  },
  [390] = {
    [anon_sym_RBRACE] = ACTIONS(1012),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1012),
  },
  [391] = {
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(1014),
    [anon_sym_SEMI] = ACTIONS(151),
  },
  [392] = {
    [sym__const_right_arrow] = ACTIONS(1014),
    [sym_comment] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [393] = {
    [sym__const_right_arrow] = ACTIONS(1014),
    [sym_comment] = ACTIONS(65),
  },
  [394] = {
    [sym__record_assignments1] = STATE(553),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1016),
    [sym_comment] = ACTIONS(13),
  },
  [395] = {
    [anon_sym_LBRACE] = ACTIONS(1018),
    [sym_comment] = ACTIONS(65),
  },
  [396] = {
    [sym__import_name] = STATE(557),
    [sym__comma_import_names1] = STATE(558),
    [sym_name] = ACTIONS(1020),
    [sym_comment] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(1022),
    [anon_sym_module] = ACTIONS(1024),
  },
  [397] = {
    [sym_renaming] = STATE(561),
    [sym_name] = ACTIONS(1026),
    [sym_comment] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(1022),
    [anon_sym_module] = ACTIONS(1028),
  },
  [398] = {
    [sym_import_directive] = STATE(400),
    [aux_sym_module_assignment_repeat1] = STATE(400),
    [anon_sym_RBRACE] = ACTIONS(1030),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1030),
    [anon_sym_public] = ACTIONS(702),
    [anon_sym_using] = ACTIONS(704),
    [anon_sym_hiding] = ACTIONS(704),
    [anon_sym_renaming] = ACTIONS(706),
  },
  [399] = {
    [sym_literal] = STATE(229),
    [sym_atom] = STATE(399),
    [sym__atom_curly] = STATE(229),
    [sym__atom_no_curly] = STATE(229),
    [aux_sym__application_repeat1] = STATE(399),
    [sym_string] = ACTIONS(1032),
    [sym_int] = ACTIONS(1032),
    [sym_qualified_name] = ACTIONS(1035),
    [anon_sym__] = ACTIONS(1035),
    [anon_sym_LBRACE] = ACTIONS(1038),
    [anon_sym_RBRACE] = ACTIONS(312),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1035),
    [anon_sym_Prop] = ACTIONS(1035),
    [anon_sym_Set] = ACTIONS(1035),
    [anon_sym_quote] = ACTIONS(1035),
    [anon_sym_quoteTerm] = ACTIONS(1035),
    [anon_sym_unquote] = ACTIONS(1035),
    [anon_sym_record] = ACTIONS(1041),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_public] = ACTIONS(312),
    [anon_sym_using] = ACTIONS(312),
    [anon_sym_hiding] = ACTIONS(312),
    [anon_sym_renaming] = ACTIONS(312),
  },
  [400] = {
    [sym_import_directive] = STATE(400),
    [aux_sym_module_assignment_repeat1] = STATE(400),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1044),
    [anon_sym_public] = ACTIONS(1046),
    [anon_sym_using] = ACTIONS(1049),
    [anon_sym_hiding] = ACTIONS(1049),
    [anon_sym_renaming] = ACTIONS(1052),
  },
  [401] = {
    [anon_sym_RBRACE] = ACTIONS(1055),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1055),
  },
  [402] = {
    [aux_sym__record_assignments1_repeat1] = STATE(402),
    [anon_sym_RBRACE] = ACTIONS(1055),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1057),
  },
  [403] = {
    [sym_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_DOT] = ACTIONS(712),
    [anon_sym_DOT_DOT] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [404] = {
    [anon_sym_RBRACE] = ACTIONS(1060),
    [sym_comment] = ACTIONS(65),
  },
  [405] = {
    [anon_sym_RBRACE] = ACTIONS(1062),
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(1064),
  },
  [406] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1062),
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(1066),
  },
  [407] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(1068),
  },
  [408] = {
    [sym_name] = ACTIONS(1070),
    [anon_sym__] = ACTIONS(1070),
    [anon_sym_DOT] = ACTIONS(1070),
    [anon_sym_DOT_DOT] = ACTIONS(1070),
    [anon_sym_LBRACE] = ACTIONS(1070),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1070),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(1070),
    [anon_sym_COLON] = ACTIONS(1070),
    [anon_sym_where] = ACTIONS(1070),
  },
  [409] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(567),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [410] = {
    [sym__newline] = ACTIONS(1072),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_COLON] = ACTIONS(1074),
    [anon_sym_module] = ACTIONS(1074),
    [anon_sym_rewrite] = ACTIONS(1074),
    [anon_sym_with] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [411] = {
    [sym_field_assignment] = STATE(568),
    [sym_qualified_name] = ACTIONS(670),
    [sym_comment] = ACTIONS(13),
  },
  [412] = {
    [aux_sym__field_assignments1_repeat1] = STATE(569),
    [anon_sym_RBRACE] = ACTIONS(1076),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(732),
  },
  [413] = {
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
  },
  [414] = {
    [anon_sym_RBRACE] = ACTIONS(1078),
    [sym_comment] = ACTIONS(65),
  },
  [415] = {
    [sym__record_assignments1] = STATE(572),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1080),
    [sym_comment] = ACTIONS(13),
  },
  [416] = {
    [anon_sym_LBRACE] = ACTIONS(1082),
    [sym_comment] = ACTIONS(65),
  },
  [417] = {
    [sym_literal] = STATE(362),
    [sym_expr] = STATE(574),
    [sym__expr1] = STATE(359),
    [sym__application] = STATE(359),
    [sym__expr2] = STATE(359),
    [sym__atoms1] = STATE(360),
    [sym_atom] = STATE(361),
    [sym__atom_curly] = STATE(362),
    [sym__atom_no_curly] = STATE(362),
    [sym__typed_bindings1] = STATE(363),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(364),
    [aux_sym__application_repeat1] = STATE(365),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(644),
    [sym_int] = ACTIONS(644),
    [sym_qualified_name] = ACTIONS(646),
    [anon_sym__] = ACTIONS(646),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(648),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(646),
    [anon_sym_Prop] = ACTIONS(646),
    [anon_sym_Set] = ACTIONS(646),
    [anon_sym_quote] = ACTIONS(646),
    [anon_sym_quoteTerm] = ACTIONS(646),
    [anon_sym_unquote] = ACTIONS(646),
    [anon_sym_record] = ACTIONS(650),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [418] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(301),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
  },
  [419] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(575),
    [sym__expr1] = STATE(377),
    [sym__application] = STATE(377),
    [sym__expr2] = STATE(377),
    [sym__atoms1] = STATE(378),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(379),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [420] = {
    [sym__newline] = ACTIONS(129),
    [sym__const_right_arrow] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
  },
  [421] = {
    [anon_sym_RBRACE] = ACTIONS(1084),
    [sym_comment] = ACTIONS(65),
  },
  [422] = {
    [sym__record_assignments1] = STATE(578),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1086),
    [sym_comment] = ACTIONS(13),
  },
  [423] = {
    [anon_sym_LBRACE] = ACTIONS(1088),
    [sym_comment] = ACTIONS(65),
  },
  [424] = {
    [sym_record_declarations_block] = STATE(580),
    [sym__indent] = ACTIONS(482),
    [ts_builtin_sym_end] = ACTIONS(1090),
    [sym_string] = ACTIONS(1092),
    [sym_int] = ACTIONS(1092),
    [sym_qualified_name] = ACTIONS(1092),
    [anon_sym__] = ACTIONS(1092),
    [anon_sym_LBRACE] = ACTIONS(1092),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1092),
    [anon_sym_Prop] = ACTIONS(1092),
    [anon_sym_Set] = ACTIONS(1092),
    [anon_sym_quote] = ACTIONS(1092),
    [anon_sym_quoteTerm] = ACTIONS(1092),
    [anon_sym_unquote] = ACTIONS(1092),
    [anon_sym_record] = ACTIONS(1092),
    [anon_sym_data] = ACTIONS(1092),
    [anon_sym_codata] = ACTIONS(1092),
    [anon_sym_instance] = ACTIONS(1092),
    [anon_sym_field] = ACTIONS(1092),
    [sym_pragma] = ACTIONS(1092),
    [anon_sym_infix] = ACTIONS(1092),
    [anon_sym_infixl] = ACTIONS(1092),
    [anon_sym_infixr] = ACTIONS(1092),
  },
  [425] = {
    [sym_literal] = STATE(262),
    [sym_expr] = STATE(504),
    [sym__expr1] = STATE(259),
    [sym__application] = STATE(259),
    [sym__expr2] = STATE(259),
    [sym__atoms1] = STATE(260),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [sym__typed_bindings1] = STATE(263),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(264),
    [aux_sym__application_repeat1] = STATE(265),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [426] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [427] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(582),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(1094),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [428] = {
    [sym_literal] = STATE(584),
    [sym__atom_no_curly] = STATE(584),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(1096),
    [anon_sym__] = ACTIONS(1096),
    [anon_sym_LBRACE] = ACTIONS(1098),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1096),
    [anon_sym_Prop] = ACTIONS(1096),
    [anon_sym_Set] = ACTIONS(1096),
    [anon_sym_quote] = ACTIONS(1096),
    [anon_sym_quoteTerm] = ACTIONS(1096),
    [anon_sym_unquote] = ACTIONS(1096),
    [anon_sym_record] = ACTIONS(147),
  },
  [429] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(85),
  },
  [430] = {
    [sym__newline] = ACTIONS(87),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
  },
  [431] = {
    [sym_literal] = STATE(430),
    [sym__expr2] = STATE(63),
    [sym_atom] = STATE(429),
    [sym__atom_curly] = STATE(430),
    [sym__atom_no_curly] = STATE(430),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(756),
    [sym_int] = ACTIONS(756),
    [sym_qualified_name] = ACTIONS(758),
    [anon_sym__] = ACTIONS(758),
    [anon_sym_LBRACE] = ACTIONS(760),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(758),
    [anon_sym_Prop] = ACTIONS(758),
    [anon_sym_Set] = ACTIONS(758),
    [anon_sym_quote] = ACTIONS(758),
    [anon_sym_quoteTerm] = ACTIONS(758),
    [anon_sym_unquote] = ACTIONS(758),
    [anon_sym_record] = ACTIONS(762),
  },
  [432] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(421),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [433] = {
    [ts_builtin_sym_end] = ACTIONS(1100),
    [sym_string] = ACTIONS(1102),
    [sym_int] = ACTIONS(1102),
    [sym_qualified_name] = ACTIONS(1102),
    [anon_sym__] = ACTIONS(1102),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1102),
    [anon_sym_Prop] = ACTIONS(1102),
    [anon_sym_Set] = ACTIONS(1102),
    [anon_sym_quote] = ACTIONS(1102),
    [anon_sym_quoteTerm] = ACTIONS(1102),
    [anon_sym_unquote] = ACTIONS(1102),
    [anon_sym_record] = ACTIONS(1102),
    [anon_sym_data] = ACTIONS(1102),
    [anon_sym_codata] = ACTIONS(1102),
    [anon_sym_instance] = ACTIONS(1102),
    [anon_sym_field] = ACTIONS(1102),
    [sym_pragma] = ACTIONS(1102),
    [anon_sym_infix] = ACTIONS(1102),
    [anon_sym_infixl] = ACTIONS(1102),
    [anon_sym_infixr] = ACTIONS(1102),
  },
  [434] = {
    [sym__declarations0] = STATE(291),
    [sym__newline] = ACTIONS(518),
    [sym__indent] = ACTIONS(1104),
    [sym_comment] = ACTIONS(65),
  },
  [435] = {
    [sym_name] = ACTIONS(1106),
    [sym_comment] = ACTIONS(13),
  },
  [436] = {
    [sym__newline] = ACTIONS(1108),
    [sym_comment] = ACTIONS(65),
  },
  [437] = {
    [sym__newline] = ACTIONS(1110),
    [sym_comment] = ACTIONS(65),
  },
  [438] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(133),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(134),
    [sym_data_signature_only] = STATE(133),
    [sym_record] = STATE(134),
    [sym_record_signature_only] = STATE(133),
    [sym_field] = STATE(134),
    [sym__declaration] = STATE(133),
    [sym__declaration_block] = STATE(134),
    [sym_infix] = STATE(133),
    [sym_instance] = STATE(134),
    [sym__declarations1] = STATE(588),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(136),
    [sym__dedent] = ACTIONS(1112),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_data] = ACTIONS(209),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(213),
    [anon_sym_field] = ACTIONS(215),
    [sym_pragma] = ACTIONS(217),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [439] = {
    [sym__dedent] = ACTIONS(1114),
    [sym_string] = ACTIONS(1116),
    [sym_int] = ACTIONS(1116),
    [sym_qualified_name] = ACTIONS(1116),
    [anon_sym__] = ACTIONS(1116),
    [anon_sym_LBRACE] = ACTIONS(1116),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1116),
    [anon_sym_Prop] = ACTIONS(1116),
    [anon_sym_Set] = ACTIONS(1116),
    [anon_sym_quote] = ACTIONS(1116),
    [anon_sym_quoteTerm] = ACTIONS(1116),
    [anon_sym_unquote] = ACTIONS(1116),
    [anon_sym_record] = ACTIONS(1116),
    [anon_sym_data] = ACTIONS(1116),
    [anon_sym_codata] = ACTIONS(1116),
    [anon_sym_instance] = ACTIONS(1118),
    [anon_sym_constructor] = ACTIONS(1121),
    [anon_sym_inductive] = ACTIONS(1121),
    [anon_sym_coinductive] = ACTIONS(1121),
    [anon_sym_eta_DASHequality] = ACTIONS(1121),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1121),
    [anon_sym_field] = ACTIONS(1116),
    [sym_pragma] = ACTIONS(1116),
    [anon_sym_infix] = ACTIONS(1116),
    [anon_sym_infixl] = ACTIONS(1116),
    [anon_sym_infixr] = ACTIONS(1116),
  },
  [440] = {
    [sym__newline] = ACTIONS(1123),
    [sym_comment] = ACTIONS(65),
  },
  [441] = {
    [sym__dedent] = ACTIONS(1112),
    [sym_comment] = ACTIONS(65),
  },
  [442] = {
    [sym_record_constructor_instance] = STATE(591),
    [sym_record_constructor] = STATE(592),
    [sym__record_directive] = STATE(592),
    [sym_record_induction] = STATE(592),
    [sym_record_eta] = STATE(592),
    [aux_sym__record_directives1_repeat1] = STATE(593),
    [sym_comment] = ACTIONS(65),
    [anon_sym_instance] = ACTIONS(1125),
    [anon_sym_constructor] = ACTIONS(1127),
    [anon_sym_inductive] = ACTIONS(1129),
    [anon_sym_coinductive] = ACTIONS(1129),
    [anon_sym_eta_DASHequality] = ACTIONS(1131),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1131),
  },
  [443] = {
    [sym__newline] = ACTIONS(1133),
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(1135),
  },
  [444] = {
    [ts_builtin_sym_end] = ACTIONS(1090),
    [sym_string] = ACTIONS(1092),
    [sym_int] = ACTIONS(1092),
    [sym_qualified_name] = ACTIONS(1092),
    [anon_sym__] = ACTIONS(1092),
    [anon_sym_LBRACE] = ACTIONS(1092),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1092),
    [anon_sym_Prop] = ACTIONS(1092),
    [anon_sym_Set] = ACTIONS(1092),
    [anon_sym_quote] = ACTIONS(1092),
    [anon_sym_quoteTerm] = ACTIONS(1092),
    [anon_sym_unquote] = ACTIONS(1092),
    [anon_sym_record] = ACTIONS(1092),
    [anon_sym_data] = ACTIONS(1092),
    [anon_sym_codata] = ACTIONS(1092),
    [anon_sym_instance] = ACTIONS(1092),
    [anon_sym_field] = ACTIONS(1092),
    [sym_pragma] = ACTIONS(1092),
    [anon_sym_infix] = ACTIONS(1092),
    [anon_sym_infixl] = ACTIONS(1092),
    [anon_sym_infixr] = ACTIONS(1092),
  },
  [445] = {
    [sym__declarations0] = STATE(595),
    [sym__newline] = ACTIONS(1137),
    [sym__indent] = ACTIONS(63),
    [sym_comment] = ACTIONS(65),
  },
  [446] = {
    [sym__newline] = ACTIONS(1139),
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(1141),
  },
  [447] = {
    [ts_builtin_sym_end] = ACTIONS(1143),
    [sym_string] = ACTIONS(1145),
    [sym_int] = ACTIONS(1145),
    [sym_qualified_name] = ACTIONS(1145),
    [anon_sym__] = ACTIONS(1145),
    [anon_sym_LBRACE] = ACTIONS(1145),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1145),
    [anon_sym_Prop] = ACTIONS(1145),
    [anon_sym_Set] = ACTIONS(1145),
    [anon_sym_quote] = ACTIONS(1145),
    [anon_sym_quoteTerm] = ACTIONS(1145),
    [anon_sym_unquote] = ACTIONS(1145),
    [anon_sym_record] = ACTIONS(1145),
    [anon_sym_data] = ACTIONS(1145),
    [anon_sym_codata] = ACTIONS(1145),
    [anon_sym_instance] = ACTIONS(1145),
    [anon_sym_field] = ACTIONS(1145),
    [sym_pragma] = ACTIONS(1145),
    [anon_sym_infix] = ACTIONS(1145),
    [anon_sym_infixl] = ACTIONS(1145),
    [anon_sym_infixr] = ACTIONS(1145),
  },
  [448] = {
    [sym__const_right_arrow] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
  },
  [449] = {
    [anon_sym_RBRACE] = ACTIONS(1147),
    [sym_comment] = ACTIONS(65),
  },
  [450] = {
    [sym__record_assignments1] = STATE(599),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1149),
    [sym_comment] = ACTIONS(13),
  },
  [451] = {
    [anon_sym_LBRACE] = ACTIONS(1151),
    [sym_comment] = ACTIONS(65),
  },
  [452] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(212),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(502),
    [sym_int] = ACTIONS(502),
    [sym_qualified_name] = ACTIONS(504),
    [anon_sym__] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_Prop] = ACTIONS(504),
    [anon_sym_Set] = ACTIONS(504),
    [anon_sym_quote] = ACTIONS(504),
    [anon_sym_quoteTerm] = ACTIONS(504),
    [anon_sym_unquote] = ACTIONS(504),
    [anon_sym_record] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [453] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [454] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(602),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(1153),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [455] = {
    [sym_literal] = STATE(604),
    [sym__atom_no_curly] = STATE(604),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(1155),
    [anon_sym__] = ACTIONS(1155),
    [anon_sym_LBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1155),
    [anon_sym_Prop] = ACTIONS(1155),
    [anon_sym_Set] = ACTIONS(1155),
    [anon_sym_quote] = ACTIONS(1155),
    [anon_sym_quoteTerm] = ACTIONS(1155),
    [anon_sym_unquote] = ACTIONS(1155),
    [anon_sym_record] = ACTIONS(147),
  },
  [456] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(85),
  },
  [457] = {
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_where] = ACTIONS(89),
  },
  [458] = {
    [sym_literal] = STATE(457),
    [sym__expr2] = STATE(102),
    [sym_atom] = STATE(456),
    [sym__atom_curly] = STATE(457),
    [sym__atom_no_curly] = STATE(457),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(818),
    [sym_int] = ACTIONS(818),
    [sym_qualified_name] = ACTIONS(820),
    [anon_sym__] = ACTIONS(820),
    [anon_sym_LBRACE] = ACTIONS(822),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(820),
    [anon_sym_Prop] = ACTIONS(820),
    [anon_sym_Set] = ACTIONS(820),
    [anon_sym_quote] = ACTIONS(820),
    [anon_sym_quoteTerm] = ACTIONS(820),
    [anon_sym_unquote] = ACTIONS(820),
    [anon_sym_record] = ACTIONS(824),
  },
  [459] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(449),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(810),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [460] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(1141),
  },
  [461] = {
    [sym_literal] = STATE(262),
    [sym_expr] = STATE(605),
    [sym__expr1] = STATE(259),
    [sym__application] = STATE(259),
    [sym__expr2] = STATE(259),
    [sym__atoms1] = STATE(260),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [sym__typed_bindings1] = STATE(263),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(264),
    [aux_sym__application_repeat1] = STATE(265),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [462] = {
    [sym_record_declarations_block] = STATE(607),
    [sym__indent] = ACTIONS(1159),
    [sym__dedent] = ACTIONS(484),
    [sym_string] = ACTIONS(486),
    [sym_int] = ACTIONS(486),
    [sym_qualified_name] = ACTIONS(486),
    [anon_sym__] = ACTIONS(486),
    [anon_sym_LBRACE] = ACTIONS(486),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_Prop] = ACTIONS(486),
    [anon_sym_Set] = ACTIONS(486),
    [anon_sym_quote] = ACTIONS(486),
    [anon_sym_quoteTerm] = ACTIONS(486),
    [anon_sym_unquote] = ACTIONS(486),
    [anon_sym_record] = ACTIONS(486),
    [anon_sym_data] = ACTIONS(486),
    [anon_sym_codata] = ACTIONS(486),
    [anon_sym_instance] = ACTIONS(486),
    [anon_sym_field] = ACTIONS(486),
    [sym_pragma] = ACTIONS(486),
    [anon_sym_infix] = ACTIONS(486),
    [anon_sym_infixl] = ACTIONS(486),
    [anon_sym_infixr] = ACTIONS(486),
  },
  [463] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(1161),
    [anon_sym_where] = ACTIONS(1163),
  },
  [464] = {
    [sym_literal] = STATE(262),
    [sym_expr] = STATE(610),
    [sym__expr1] = STATE(259),
    [sym__application] = STATE(259),
    [sym__expr2] = STATE(259),
    [sym__atoms1] = STATE(260),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [sym__typed_bindings1] = STATE(263),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(264),
    [aux_sym__application_repeat1] = STATE(265),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [465] = {
    [sym__declarations0] = STATE(611),
    [sym__newline] = ACTIONS(1165),
    [sym__indent] = ACTIONS(520),
    [sym_comment] = ACTIONS(65),
  },
  [466] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(1167),
    [anon_sym_where] = ACTIONS(1169),
  },
  [467] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(614),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(502),
    [sym_int] = ACTIONS(502),
    [sym_qualified_name] = ACTIONS(504),
    [anon_sym__] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_Prop] = ACTIONS(504),
    [anon_sym_Set] = ACTIONS(504),
    [anon_sym_quote] = ACTIONS(504),
    [anon_sym_quoteTerm] = ACTIONS(504),
    [anon_sym_unquote] = ACTIONS(504),
    [anon_sym_record] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [468] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(1171),
    [anon_sym_where] = ACTIONS(1169),
  },
  [469] = {
    [sym__dedent] = ACTIONS(1173),
    [sym_comment] = ACTIONS(65),
  },
  [470] = {
    [sym__dedent] = ACTIONS(1175),
    [sym_comment] = ACTIONS(65),
  },
  [471] = {
    [sym__dedent] = ACTIONS(622),
    [sym_string] = ACTIONS(283),
    [sym_int] = ACTIONS(283),
    [sym_qualified_name] = ACTIONS(283),
    [anon_sym__] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(283),
    [anon_sym_Prop] = ACTIONS(283),
    [anon_sym_Set] = ACTIONS(283),
    [anon_sym_quote] = ACTIONS(283),
    [anon_sym_quoteTerm] = ACTIONS(283),
    [anon_sym_unquote] = ACTIONS(283),
    [anon_sym_record] = ACTIONS(283),
    [anon_sym_data] = ACTIONS(283),
    [anon_sym_codata] = ACTIONS(283),
    [anon_sym_instance] = ACTIONS(283),
    [anon_sym_field] = ACTIONS(283),
    [sym_pragma] = ACTIONS(283),
    [anon_sym_infix] = ACTIONS(283),
    [anon_sym_infixl] = ACTIONS(283),
    [anon_sym_infixr] = ACTIONS(283),
  },
  [472] = {
    [aux_sym_arg_name_repeat1] = STATE(619),
    [sym_name] = ACTIONS(1177),
    [anon_sym_RBRACE] = ACTIONS(1179),
    [sym_comment] = ACTIONS(13),
  },
  [473] = {
    [aux_sym_arg_name_repeat1] = STATE(620),
    [sym_name] = ACTIONS(1181),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1179),
    [sym_comment] = ACTIONS(13),
  },
  [474] = {
    [sym_name] = ACTIONS(1183),
    [anon_sym_DOT] = ACTIONS(1183),
    [anon_sym_DOT_DOT] = ACTIONS(1183),
    [anon_sym_RBRACE] = ACTIONS(1183),
    [sym_comment] = ACTIONS(13),
  },
  [475] = {
    [sym_name] = ACTIONS(1185),
    [anon_sym_DOT] = ACTIONS(1185),
    [anon_sym_DOT_DOT] = ACTIONS(1185),
    [anon_sym_LBRACE] = ACTIONS(1185),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1185),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(1185),
  },
  [476] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(476),
    [sym_name] = ACTIONS(1187),
    [anon_sym_DOT] = ACTIONS(1190),
    [anon_sym_DOT_DOT] = ACTIONS(1190),
    [anon_sym_RBRACE] = ACTIONS(1183),
    [sym_comment] = ACTIONS(13),
  },
  [477] = {
    [sym_name] = ACTIONS(1183),
    [anon_sym_DOT] = ACTIONS(1183),
    [anon_sym_DOT_DOT] = ACTIONS(1183),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1183),
    [sym_comment] = ACTIONS(13),
  },
  [478] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(478),
    [sym_name] = ACTIONS(1193),
    [anon_sym_DOT] = ACTIONS(1196),
    [anon_sym_DOT_DOT] = ACTIONS(1196),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1183),
    [sym_comment] = ACTIONS(13),
  },
  [479] = {
    [sym__dedent] = ACTIONS(1199),
    [sym_comment] = ACTIONS(65),
  },
  [480] = {
    [sym_literal] = STATE(488),
    [sym_expr] = STATE(622),
    [sym__expr1] = STATE(485),
    [sym__application] = STATE(485),
    [sym__expr2] = STATE(485),
    [sym__atoms1] = STATE(486),
    [sym_atom] = STATE(487),
    [sym__atom_curly] = STATE(488),
    [sym__atom_no_curly] = STATE(488),
    [sym__typed_bindings1] = STATE(489),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(490),
    [aux_sym__application_repeat1] = STATE(491),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(868),
    [sym_int] = ACTIONS(868),
    [sym_qualified_name] = ACTIONS(870),
    [anon_sym__] = ACTIONS(870),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(872),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(870),
    [anon_sym_Prop] = ACTIONS(870),
    [anon_sym_Set] = ACTIONS(870),
    [anon_sym_quote] = ACTIONS(870),
    [anon_sym_quoteTerm] = ACTIONS(870),
    [anon_sym_unquote] = ACTIONS(870),
    [anon_sym_record] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [481] = {
    [sym__dedent] = ACTIONS(29),
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_name] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_instance] = ACTIONS(31),
    [anon_sym_overlap] = ACTIONS(31),
  },
  [482] = {
    [sym_literal] = STATE(78),
    [sym_expr] = STATE(624),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(76),
    [sym__expr2] = STATE(76),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(77),
    [sym__atom_curly] = STATE(78),
    [sym__atom_no_curly] = STATE(78),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(79),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(1201),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_record] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [483] = {
    [sym_literal] = STATE(626),
    [sym__atom_no_curly] = STATE(626),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(1203),
    [anon_sym__] = ACTIONS(1203),
    [anon_sym_LBRACE] = ACTIONS(1205),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1203),
    [anon_sym_Prop] = ACTIONS(1203),
    [anon_sym_Set] = ACTIONS(1203),
    [anon_sym_quote] = ACTIONS(1203),
    [anon_sym_quoteTerm] = ACTIONS(1203),
    [anon_sym_unquote] = ACTIONS(1203),
    [anon_sym_record] = ACTIONS(147),
  },
  [484] = {
    [sym__dedent] = ACTIONS(1207),
    [sym_name] = ACTIONS(1209),
    [anon_sym_DOT] = ACTIONS(1209),
    [anon_sym_DOT_DOT] = ACTIONS(1209),
    [anon_sym_LBRACE] = ACTIONS(1209),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1209),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(1209),
    [anon_sym_overlap] = ACTIONS(1209),
  },
  [485] = {
    [sym__dedent] = ACTIONS(151),
    [sym_name] = ACTIONS(1211),
    [anon_sym_DOT] = ACTIONS(1211),
    [anon_sym_DOT_DOT] = ACTIONS(1211),
    [anon_sym_LBRACE] = ACTIONS(1211),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1211),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1213),
    [anon_sym_instance] = ACTIONS(1211),
    [anon_sym_overlap] = ACTIONS(1211),
  },
  [486] = {
    [sym__const_right_arrow] = ACTIONS(1215),
    [sym_comment] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(79),
  },
  [487] = {
    [sym__dedent] = ACTIONS(81),
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_name] = ACTIONS(85),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_instance] = ACTIONS(85),
    [anon_sym_overlap] = ACTIONS(85),
  },
  [488] = {
    [sym__dedent] = ACTIONS(87),
    [sym__const_right_arrow] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_name] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_DOT_DOT] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_instance] = ACTIONS(89),
    [anon_sym_overlap] = ACTIONS(89),
  },
  [489] = {
    [sym__const_right_arrow] = ACTIONS(1215),
    [sym_comment] = ACTIONS(65),
  },
  [490] = {
    [sym_literal] = STATE(633),
    [sym__application] = STATE(631),
    [sym__expr2] = STATE(631),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(632),
    [sym__atom_curly] = STATE(633),
    [sym__atom_no_curly] = STATE(633),
    [aux_sym__expr1_repeat1] = STATE(62),
    [aux_sym__application_repeat1] = STATE(634),
    [sym_string] = ACTIONS(1217),
    [sym_int] = ACTIONS(1217),
    [sym_qualified_name] = ACTIONS(1219),
    [anon_sym__] = ACTIONS(1219),
    [anon_sym_LBRACE] = ACTIONS(1221),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1219),
    [anon_sym_Prop] = ACTIONS(1219),
    [anon_sym_Set] = ACTIONS(1219),
    [anon_sym_quote] = ACTIONS(1219),
    [anon_sym_quoteTerm] = ACTIONS(1219),
    [anon_sym_unquote] = ACTIONS(1219),
    [anon_sym_record] = ACTIONS(1223),
  },
  [491] = {
    [sym_literal] = STATE(488),
    [sym__expr2] = STATE(636),
    [sym_atom] = STATE(487),
    [sym__atom_curly] = STATE(488),
    [sym__atom_no_curly] = STATE(488),
    [aux_sym__application_repeat1] = STATE(103),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(868),
    [sym_int] = ACTIONS(868),
    [sym_qualified_name] = ACTIONS(870),
    [anon_sym__] = ACTIONS(870),
    [anon_sym_LBRACE] = ACTIONS(1225),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(870),
    [anon_sym_Prop] = ACTIONS(870),
    [anon_sym_Set] = ACTIONS(870),
    [anon_sym_quote] = ACTIONS(870),
    [anon_sym_quoteTerm] = ACTIONS(870),
    [anon_sym_unquote] = ACTIONS(870),
    [anon_sym_record] = ACTIONS(874),
  },
  [492] = {
    [sym__newline] = ACTIONS(381),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_module] = ACTIONS(383),
    [anon_sym_with] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(383),
  },
  [493] = {
    [sym__newline] = ACTIONS(438),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_with] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [494] = {
    [anon_sym_RBRACE] = ACTIONS(1227),
    [sym_comment] = ACTIONS(65),
  },
  [495] = {
    [sym__field_assignments1] = STATE(638),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1229),
    [sym_comment] = ACTIONS(13),
  },
  [496] = {
    [sym__newline] = ACTIONS(381),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_module] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(383),
  },
  [497] = {
    [sym__newline] = ACTIONS(438),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [498] = {
    [anon_sym_RBRACE] = ACTIONS(1231),
    [sym_comment] = ACTIONS(65),
  },
  [499] = {
    [sym__field_assignments1] = STATE(640),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1233),
    [sym_comment] = ACTIONS(13),
  },
  [500] = {
    [sym__newline] = ACTIONS(381),
    [sym__const_right_arrow] = ACTIONS(383),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_module] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(383),
  },
  [501] = {
    [sym__newline] = ACTIONS(438),
    [sym__const_right_arrow] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [502] = {
    [anon_sym_RBRACE] = ACTIONS(1235),
    [sym_comment] = ACTIONS(65),
  },
  [503] = {
    [sym__field_assignments1] = STATE(642),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1237),
    [sym_comment] = ACTIONS(13),
  },
  [504] = {
    [sym__newline] = ACTIONS(674),
    [sym_comment] = ACTIONS(65),
    [anon_sym_module] = ACTIONS(674),
    [anon_sym_where] = ACTIONS(674),
  },
  [505] = {
    [sym__newline] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_module] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
  },
  [506] = {
    [anon_sym_RBRACE] = ACTIONS(1239),
    [sym_comment] = ACTIONS(65),
  },
  [507] = {
    [sym__record_assignments1] = STATE(645),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1241),
    [sym_comment] = ACTIONS(13),
  },
  [508] = {
    [anon_sym_LBRACE] = ACTIONS(1243),
    [sym_comment] = ACTIONS(65),
  },
  [509] = {
    [sym__newline] = ACTIONS(1245),
    [sym_comment] = ACTIONS(65),
  },
  [510] = {
    [sym__newline] = ACTIONS(838),
    [sym_comment] = ACTIONS(65),
  },
  [511] = {
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
  },
  [512] = {
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
  },
  [513] = {
    [anon_sym_RBRACE] = ACTIONS(1247),
    [sym_comment] = ACTIONS(65),
  },
  [514] = {
    [sym__field_assignments1] = STATE(648),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1249),
    [sym_comment] = ACTIONS(13),
  },
  [515] = {
    [anon_sym_RBRACE] = ACTIONS(1251),
    [sym_comment] = ACTIONS(65),
  },
  [516] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1251),
    [sym_comment] = ACTIONS(65),
  },
  [517] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(1251),
  },
  [518] = {
    [sym__const_right_arrow] = ACTIONS(712),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_RBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(712),
  },
  [519] = {
    [anon_sym_RBRACE] = ACTIONS(1253),
    [sym_comment] = ACTIONS(65),
  },
  [520] = {
    [sym__const_right_arrow] = ACTIONS(1255),
    [anon_sym_DOT] = ACTIONS(1257),
    [anon_sym_DOT_DOT] = ACTIONS(1255),
    [anon_sym_LBRACE] = ACTIONS(1257),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1255),
    [sym_comment] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(1255),
  },
  [521] = {
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_RBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(712),
  },
  [522] = {
    [anon_sym_RBRACE] = ACTIONS(1259),
    [sym_comment] = ACTIONS(65),
  },
  [523] = {
    [sym__const_right_arrow] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
  },
  [524] = {
    [anon_sym_RBRACE] = ACTIONS(1261),
    [sym_comment] = ACTIONS(65),
  },
  [525] = {
    [sym__record_assignments1] = STATE(654),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1263),
    [sym_comment] = ACTIONS(13),
  },
  [526] = {
    [anon_sym_LBRACE] = ACTIONS(1265),
    [sym_comment] = ACTIONS(65),
  },
  [527] = {
    [sym_literal] = STATE(362),
    [sym_expr] = STATE(656),
    [sym__expr1] = STATE(359),
    [sym__application] = STATE(359),
    [sym__expr2] = STATE(359),
    [sym__atoms1] = STATE(360),
    [sym_atom] = STATE(361),
    [sym__atom_curly] = STATE(362),
    [sym__atom_no_curly] = STATE(362),
    [sym__typed_bindings1] = STATE(363),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(364),
    [aux_sym__application_repeat1] = STATE(365),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(644),
    [sym_int] = ACTIONS(644),
    [sym_qualified_name] = ACTIONS(646),
    [anon_sym__] = ACTIONS(646),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(648),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(646),
    [anon_sym_Prop] = ACTIONS(646),
    [anon_sym_Set] = ACTIONS(646),
    [anon_sym_quote] = ACTIONS(646),
    [anon_sym_quoteTerm] = ACTIONS(646),
    [anon_sym_unquote] = ACTIONS(646),
    [anon_sym_record] = ACTIONS(650),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [528] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
  },
  [529] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(658),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(1267),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [530] = {
    [sym_literal] = STATE(660),
    [sym__atom_no_curly] = STATE(660),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(1269),
    [anon_sym__] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1271),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1269),
    [anon_sym_Prop] = ACTIONS(1269),
    [anon_sym_Set] = ACTIONS(1269),
    [anon_sym_quote] = ACTIONS(1269),
    [anon_sym_quoteTerm] = ACTIONS(1269),
    [anon_sym_unquote] = ACTIONS(1269),
    [anon_sym_record] = ACTIONS(147),
  },
  [531] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(287),
    [sym_comment] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(287),
  },
  [532] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
  },
  [533] = {
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
  },
  [534] = {
    [sym_literal] = STATE(533),
    [sym__expr2] = STATE(418),
    [sym_atom] = STATE(532),
    [sym__atom_curly] = STATE(533),
    [sym__atom_no_curly] = STATE(533),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(974),
    [sym_int] = ACTIONS(974),
    [sym_qualified_name] = ACTIONS(976),
    [anon_sym__] = ACTIONS(976),
    [anon_sym_LBRACE] = ACTIONS(978),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(976),
    [anon_sym_Prop] = ACTIONS(976),
    [anon_sym_Set] = ACTIONS(976),
    [anon_sym_quote] = ACTIONS(976),
    [anon_sym_quoteTerm] = ACTIONS(976),
    [anon_sym_unquote] = ACTIONS(976),
    [anon_sym_record] = ACTIONS(980),
  },
  [535] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(524),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(966),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [536] = {
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
  },
  [537] = {
    [anon_sym_RBRACE] = ACTIONS(1273),
    [sym_comment] = ACTIONS(65),
  },
  [538] = {
    [sym__record_assignments1] = STATE(663),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1275),
    [sym_comment] = ACTIONS(13),
  },
  [539] = {
    [anon_sym_LBRACE] = ACTIONS(1277),
    [sym_comment] = ACTIONS(65),
  },
  [540] = {
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(65),
  },
  [541] = {
    [anon_sym_RBRACE] = ACTIONS(1279),
    [sym_comment] = ACTIONS(65),
  },
  [542] = {
    [sym__const_right_arrow] = ACTIONS(1074),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_RBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_SEMI] = ACTIONS(1074),
    [anon_sym_RPAREN] = ACTIONS(1074),
  },
  [543] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(212),
    [sym__expr1] = STATE(377),
    [sym__application] = STATE(377),
    [sym__expr2] = STATE(377),
    [sym__atoms1] = STATE(378),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(379),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [544] = {
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_RBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(712),
    [anon_sym_RPAREN] = ACTIONS(712),
  },
  [545] = {
    [anon_sym_RBRACE] = ACTIONS(1281),
    [sym_comment] = ACTIONS(65),
  },
  [546] = {
    [sym__const_right_arrow] = ACTIONS(383),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
  },
  [547] = {
    [sym__const_right_arrow] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
  },
  [548] = {
    [anon_sym_RBRACE] = ACTIONS(1283),
    [sym_comment] = ACTIONS(65),
  },
  [549] = {
    [sym__field_assignments1] = STATE(668),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1285),
    [sym_comment] = ACTIONS(13),
  },
  [550] = {
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_public] = ACTIONS(383),
    [anon_sym_using] = ACTIONS(383),
    [anon_sym_hiding] = ACTIONS(383),
    [anon_sym_renaming] = ACTIONS(383),
  },
  [551] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(212),
    [sym__expr1] = STATE(391),
    [sym__application] = STATE(391),
    [sym__expr2] = STATE(391),
    [sym__atoms1] = STATE(392),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(393),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [552] = {
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_public] = ACTIONS(440),
    [anon_sym_using] = ACTIONS(440),
    [anon_sym_hiding] = ACTIONS(440),
    [anon_sym_renaming] = ACTIONS(440),
  },
  [553] = {
    [anon_sym_RBRACE] = ACTIONS(1287),
    [sym_comment] = ACTIONS(65),
  },
  [554] = {
    [sym__field_assignments1] = STATE(670),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1289),
    [sym_comment] = ACTIONS(13),
  },
  [555] = {
    [anon_sym_RBRACE] = ACTIONS(1291),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1291),
    [anon_sym_public] = ACTIONS(1291),
    [anon_sym_using] = ACTIONS(1291),
    [anon_sym_hiding] = ACTIONS(1291),
    [anon_sym_renaming] = ACTIONS(1291),
  },
  [556] = {
    [sym_name] = ACTIONS(1293),
    [sym_comment] = ACTIONS(13),
  },
  [557] = {
    [aux_sym__comma_import_names1_repeat1] = STATE(673),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1295),
    [anon_sym_RPAREN] = ACTIONS(1297),
  },
  [558] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(1299),
  },
  [559] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_to] = ACTIONS(1301),
  },
  [560] = {
    [sym_name] = ACTIONS(1303),
    [sym_comment] = ACTIONS(13),
  },
  [561] = {
    [aux_sym_import_directive_repeat1] = STATE(678),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1305),
    [anon_sym_RPAREN] = ACTIONS(1299),
  },
  [562] = {
    [sym_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_DOT] = ACTIONS(1074),
    [anon_sym_DOT_DOT] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(1074),
    [anon_sym_COLON] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [563] = {
    [sym_name] = ACTIONS(1307),
    [anon_sym__] = ACTIONS(1307),
    [anon_sym_DOT] = ACTIONS(1307),
    [anon_sym_DOT_DOT] = ACTIONS(1307),
    [anon_sym_LBRACE] = ACTIONS(1307),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1307),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(1307),
    [anon_sym_COLON] = ACTIONS(1307),
    [anon_sym_where] = ACTIONS(1307),
  },
  [564] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(679),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [565] = {
    [sym_literal] = STATE(362),
    [sym_expr] = STATE(680),
    [sym__expr1] = STATE(359),
    [sym__application] = STATE(359),
    [sym__expr2] = STATE(359),
    [sym__atoms1] = STATE(360),
    [sym_atom] = STATE(361),
    [sym__atom_curly] = STATE(362),
    [sym__atom_no_curly] = STATE(362),
    [sym__typed_bindings1] = STATE(363),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(364),
    [aux_sym__application_repeat1] = STATE(365),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(644),
    [sym_int] = ACTIONS(644),
    [sym_qualified_name] = ACTIONS(646),
    [anon_sym__] = ACTIONS(646),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(648),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(646),
    [anon_sym_Prop] = ACTIONS(646),
    [anon_sym_Set] = ACTIONS(646),
    [anon_sym_quote] = ACTIONS(646),
    [anon_sym_quoteTerm] = ACTIONS(646),
    [anon_sym_unquote] = ACTIONS(646),
    [anon_sym_record] = ACTIONS(650),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [566] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(681),
    [sym__expr1] = STATE(377),
    [sym__application] = STATE(377),
    [sym__expr2] = STATE(377),
    [sym__atoms1] = STATE(378),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(379),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [567] = {
    [anon_sym_RBRACE] = ACTIONS(1309),
    [sym_comment] = ACTIONS(65),
  },
  [568] = {
    [anon_sym_RBRACE] = ACTIONS(1311),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1311),
  },
  [569] = {
    [aux_sym__field_assignments1_repeat1] = STATE(569),
    [anon_sym_RBRACE] = ACTIONS(1311),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1313),
  },
  [570] = {
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
  },
  [571] = {
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
  },
  [572] = {
    [anon_sym_RBRACE] = ACTIONS(1316),
    [sym_comment] = ACTIONS(65),
  },
  [573] = {
    [sym__field_assignments1] = STATE(684),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1318),
    [sym_comment] = ACTIONS(13),
  },
  [574] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1309),
    [sym_comment] = ACTIONS(65),
  },
  [575] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(1309),
  },
  [576] = {
    [sym__newline] = ACTIONS(381),
    [sym__const_right_arrow] = ACTIONS(383),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(383),
  },
  [577] = {
    [sym__newline] = ACTIONS(438),
    [sym__const_right_arrow] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [578] = {
    [anon_sym_RBRACE] = ACTIONS(1320),
    [sym_comment] = ACTIONS(65),
  },
  [579] = {
    [sym__field_assignments1] = STATE(686),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1322),
    [sym_comment] = ACTIONS(13),
  },
  [580] = {
    [ts_builtin_sym_end] = ACTIONS(1324),
    [sym_string] = ACTIONS(1326),
    [sym_int] = ACTIONS(1326),
    [sym_qualified_name] = ACTIONS(1326),
    [anon_sym__] = ACTIONS(1326),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1326),
    [anon_sym_Prop] = ACTIONS(1326),
    [anon_sym_Set] = ACTIONS(1326),
    [anon_sym_quote] = ACTIONS(1326),
    [anon_sym_quoteTerm] = ACTIONS(1326),
    [anon_sym_unquote] = ACTIONS(1326),
    [anon_sym_record] = ACTIONS(1326),
    [anon_sym_data] = ACTIONS(1326),
    [anon_sym_codata] = ACTIONS(1326),
    [anon_sym_instance] = ACTIONS(1326),
    [anon_sym_field] = ACTIONS(1326),
    [sym_pragma] = ACTIONS(1326),
    [anon_sym_infix] = ACTIONS(1326),
    [anon_sym_infixl] = ACTIONS(1326),
    [anon_sym_infixr] = ACTIONS(1326),
  },
  [581] = {
    [sym__newline] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
  },
  [582] = {
    [anon_sym_RBRACE] = ACTIONS(1328),
    [sym_comment] = ACTIONS(65),
  },
  [583] = {
    [sym__record_assignments1] = STATE(689),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1330),
    [sym_comment] = ACTIONS(13),
  },
  [584] = {
    [anon_sym_LBRACE] = ACTIONS(1332),
    [sym_comment] = ACTIONS(65),
  },
  [585] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(133),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(134),
    [sym_data_signature_only] = STATE(133),
    [sym_record] = STATE(134),
    [sym_record_signature_only] = STATE(133),
    [sym_field] = STATE(134),
    [sym__declaration] = STATE(133),
    [sym__declaration_block] = STATE(134),
    [sym_infix] = STATE(133),
    [sym_instance] = STATE(134),
    [sym__declarations1] = STATE(469),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(136),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_data] = ACTIONS(209),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(213),
    [anon_sym_constructor] = ACTIONS(1334),
    [anon_sym_field] = ACTIONS(215),
    [sym_pragma] = ACTIONS(217),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [586] = {
    [sym__newline] = ACTIONS(1336),
    [sym_comment] = ACTIONS(65),
  },
  [587] = {
    [ts_builtin_sym_end] = ACTIONS(1338),
    [sym_string] = ACTIONS(1340),
    [sym_int] = ACTIONS(1340),
    [sym_qualified_name] = ACTIONS(1340),
    [anon_sym__] = ACTIONS(1340),
    [anon_sym_LBRACE] = ACTIONS(1340),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1340),
    [anon_sym_Prop] = ACTIONS(1340),
    [anon_sym_Set] = ACTIONS(1340),
    [anon_sym_quote] = ACTIONS(1340),
    [anon_sym_quoteTerm] = ACTIONS(1340),
    [anon_sym_unquote] = ACTIONS(1340),
    [anon_sym_record] = ACTIONS(1340),
    [anon_sym_data] = ACTIONS(1340),
    [anon_sym_codata] = ACTIONS(1340),
    [anon_sym_instance] = ACTIONS(1340),
    [anon_sym_field] = ACTIONS(1340),
    [sym_pragma] = ACTIONS(1340),
    [anon_sym_infix] = ACTIONS(1340),
    [anon_sym_infixl] = ACTIONS(1340),
    [anon_sym_infixr] = ACTIONS(1340),
  },
  [588] = {
    [sym__dedent] = ACTIONS(1342),
    [sym_comment] = ACTIONS(65),
  },
  [589] = {
    [sym__dedent] = ACTIONS(1344),
    [sym_string] = ACTIONS(1346),
    [sym_int] = ACTIONS(1346),
    [sym_qualified_name] = ACTIONS(1346),
    [anon_sym__] = ACTIONS(1346),
    [anon_sym_LBRACE] = ACTIONS(1346),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1346),
    [anon_sym_Prop] = ACTIONS(1346),
    [anon_sym_Set] = ACTIONS(1346),
    [anon_sym_quote] = ACTIONS(1346),
    [anon_sym_quoteTerm] = ACTIONS(1346),
    [anon_sym_unquote] = ACTIONS(1346),
    [anon_sym_record] = ACTIONS(1346),
    [anon_sym_data] = ACTIONS(1346),
    [anon_sym_codata] = ACTIONS(1346),
    [anon_sym_instance] = ACTIONS(1348),
    [anon_sym_constructor] = ACTIONS(1351),
    [anon_sym_inductive] = ACTIONS(1351),
    [anon_sym_coinductive] = ACTIONS(1351),
    [anon_sym_eta_DASHequality] = ACTIONS(1351),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1351),
    [anon_sym_field] = ACTIONS(1346),
    [sym_pragma] = ACTIONS(1346),
    [anon_sym_infix] = ACTIONS(1346),
    [anon_sym_infixl] = ACTIONS(1346),
    [anon_sym_infixr] = ACTIONS(1346),
  },
  [590] = {
    [sym__indent] = ACTIONS(1353),
    [sym_comment] = ACTIONS(65),
  },
  [591] = {
    [sym__dedent] = ACTIONS(1344),
    [sym_string] = ACTIONS(1346),
    [sym_int] = ACTIONS(1346),
    [sym_qualified_name] = ACTIONS(1346),
    [anon_sym__] = ACTIONS(1346),
    [anon_sym_LBRACE] = ACTIONS(1346),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1346),
    [anon_sym_Prop] = ACTIONS(1346),
    [anon_sym_Set] = ACTIONS(1346),
    [anon_sym_quote] = ACTIONS(1346),
    [anon_sym_quoteTerm] = ACTIONS(1346),
    [anon_sym_unquote] = ACTIONS(1346),
    [anon_sym_record] = ACTIONS(1346),
    [anon_sym_data] = ACTIONS(1346),
    [anon_sym_codata] = ACTIONS(1346),
    [anon_sym_instance] = ACTIONS(1355),
    [anon_sym_constructor] = ACTIONS(1121),
    [anon_sym_inductive] = ACTIONS(1121),
    [anon_sym_coinductive] = ACTIONS(1121),
    [anon_sym_eta_DASHequality] = ACTIONS(1121),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1121),
    [anon_sym_field] = ACTIONS(1346),
    [sym_pragma] = ACTIONS(1346),
    [anon_sym_infix] = ACTIONS(1346),
    [anon_sym_infixl] = ACTIONS(1346),
    [anon_sym_infixr] = ACTIONS(1346),
  },
  [592] = {
    [sym__newline] = ACTIONS(1358),
    [sym_comment] = ACTIONS(65),
  },
  [593] = {
    [sym_record_constructor_instance] = STATE(593),
    [sym_record_constructor] = STATE(696),
    [sym__record_directive] = STATE(696),
    [sym_record_induction] = STATE(696),
    [sym_record_eta] = STATE(696),
    [aux_sym__record_directives1_repeat1] = STATE(593),
    [sym_comment] = ACTIONS(65),
    [anon_sym_instance] = ACTIONS(1360),
    [anon_sym_constructor] = ACTIONS(1363),
    [anon_sym_inductive] = ACTIONS(1366),
    [anon_sym_coinductive] = ACTIONS(1366),
    [anon_sym_eta_DASHequality] = ACTIONS(1369),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1369),
  },
  [594] = {
    [sym_record_declarations_block] = STATE(697),
    [sym__indent] = ACTIONS(482),
    [ts_builtin_sym_end] = ACTIONS(1324),
    [sym_string] = ACTIONS(1326),
    [sym_int] = ACTIONS(1326),
    [sym_qualified_name] = ACTIONS(1326),
    [anon_sym__] = ACTIONS(1326),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1326),
    [anon_sym_Prop] = ACTIONS(1326),
    [anon_sym_Set] = ACTIONS(1326),
    [anon_sym_quote] = ACTIONS(1326),
    [anon_sym_quoteTerm] = ACTIONS(1326),
    [anon_sym_unquote] = ACTIONS(1326),
    [anon_sym_record] = ACTIONS(1326),
    [anon_sym_data] = ACTIONS(1326),
    [anon_sym_codata] = ACTIONS(1326),
    [anon_sym_instance] = ACTIONS(1326),
    [anon_sym_field] = ACTIONS(1326),
    [sym_pragma] = ACTIONS(1326),
    [anon_sym_infix] = ACTIONS(1326),
    [anon_sym_infixl] = ACTIONS(1326),
    [anon_sym_infixr] = ACTIONS(1326),
  },
  [595] = {
    [ts_builtin_sym_end] = ACTIONS(1372),
    [sym_string] = ACTIONS(1374),
    [sym_int] = ACTIONS(1374),
    [sym_qualified_name] = ACTIONS(1374),
    [anon_sym__] = ACTIONS(1374),
    [anon_sym_LBRACE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1374),
    [anon_sym_Prop] = ACTIONS(1374),
    [anon_sym_Set] = ACTIONS(1374),
    [anon_sym_quote] = ACTIONS(1374),
    [anon_sym_quoteTerm] = ACTIONS(1374),
    [anon_sym_unquote] = ACTIONS(1374),
    [anon_sym_record] = ACTIONS(1374),
    [anon_sym_data] = ACTIONS(1374),
    [anon_sym_codata] = ACTIONS(1374),
    [anon_sym_instance] = ACTIONS(1374),
    [anon_sym_field] = ACTIONS(1374),
    [sym_pragma] = ACTIONS(1374),
    [anon_sym_infix] = ACTIONS(1374),
    [anon_sym_infixl] = ACTIONS(1374),
    [anon_sym_infixr] = ACTIONS(1374),
  },
  [596] = {
    [sym__declarations0] = STATE(698),
    [sym__newline] = ACTIONS(1376),
    [sym__indent] = ACTIONS(63),
    [sym_comment] = ACTIONS(65),
  },
  [597] = {
    [sym__const_right_arrow] = ACTIONS(383),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(383),
  },
  [598] = {
    [sym__const_right_arrow] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [599] = {
    [anon_sym_RBRACE] = ACTIONS(1378),
    [sym_comment] = ACTIONS(65),
  },
  [600] = {
    [sym__field_assignments1] = STATE(700),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1380),
    [sym_comment] = ACTIONS(13),
  },
  [601] = {
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
  },
  [602] = {
    [anon_sym_RBRACE] = ACTIONS(1382),
    [sym_comment] = ACTIONS(65),
  },
  [603] = {
    [sym__record_assignments1] = STATE(703),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1384),
    [sym_comment] = ACTIONS(13),
  },
  [604] = {
    [anon_sym_LBRACE] = ACTIONS(1386),
    [sym_comment] = ACTIONS(65),
  },
  [605] = {
    [sym__newline] = ACTIONS(750),
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(1388),
  },
  [606] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(133),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(134),
    [sym_data_signature_only] = STATE(133),
    [sym_record] = STATE(134),
    [sym_record_signature_only] = STATE(133),
    [sym__record_directives1] = STATE(707),
    [sym_record_constructor_instance] = STATE(439),
    [sym_record_constructor] = STATE(440),
    [sym__record_directive] = STATE(440),
    [sym_record_induction] = STATE(440),
    [sym_record_eta] = STATE(440),
    [sym_field] = STATE(134),
    [sym__declaration] = STATE(133),
    [sym__declaration_block] = STATE(134),
    [sym_infix] = STATE(133),
    [sym_instance] = STATE(134),
    [sym__declarations1] = STATE(708),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__record_directives1_repeat1] = STATE(442),
    [aux_sym__declarations1_repeat1] = STATE(136),
    [sym__dedent] = ACTIONS(1390),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_data] = ACTIONS(209),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(768),
    [anon_sym_constructor] = ACTIONS(770),
    [anon_sym_inductive] = ACTIONS(772),
    [anon_sym_coinductive] = ACTIONS(772),
    [anon_sym_eta_DASHequality] = ACTIONS(774),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(774),
    [anon_sym_field] = ACTIONS(215),
    [sym_pragma] = ACTIONS(217),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [607] = {
    [sym__dedent] = ACTIONS(776),
    [sym_string] = ACTIONS(778),
    [sym_int] = ACTIONS(778),
    [sym_qualified_name] = ACTIONS(778),
    [anon_sym__] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(778),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(778),
    [anon_sym_Prop] = ACTIONS(778),
    [anon_sym_Set] = ACTIONS(778),
    [anon_sym_quote] = ACTIONS(778),
    [anon_sym_quoteTerm] = ACTIONS(778),
    [anon_sym_unquote] = ACTIONS(778),
    [anon_sym_record] = ACTIONS(778),
    [anon_sym_data] = ACTIONS(778),
    [anon_sym_codata] = ACTIONS(778),
    [anon_sym_instance] = ACTIONS(778),
    [anon_sym_field] = ACTIONS(778),
    [sym_pragma] = ACTIONS(778),
    [anon_sym_infix] = ACTIONS(778),
    [anon_sym_infixl] = ACTIONS(778),
    [anon_sym_infixr] = ACTIONS(778),
  },
  [608] = {
    [sym_literal] = STATE(262),
    [sym_expr] = STATE(709),
    [sym__expr1] = STATE(259),
    [sym__application] = STATE(259),
    [sym__expr2] = STATE(259),
    [sym__atoms1] = STATE(260),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [sym__typed_bindings1] = STATE(263),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(264),
    [aux_sym__application_repeat1] = STATE(265),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [609] = {
    [sym_record_declarations_block] = STATE(710),
    [sym__indent] = ACTIONS(1159),
    [sym__dedent] = ACTIONS(776),
    [sym_string] = ACTIONS(778),
    [sym_int] = ACTIONS(778),
    [sym_qualified_name] = ACTIONS(778),
    [anon_sym__] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(778),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(778),
    [anon_sym_Prop] = ACTIONS(778),
    [anon_sym_Set] = ACTIONS(778),
    [anon_sym_quote] = ACTIONS(778),
    [anon_sym_quoteTerm] = ACTIONS(778),
    [anon_sym_unquote] = ACTIONS(778),
    [anon_sym_record] = ACTIONS(778),
    [anon_sym_data] = ACTIONS(778),
    [anon_sym_codata] = ACTIONS(778),
    [anon_sym_instance] = ACTIONS(778),
    [anon_sym_field] = ACTIONS(778),
    [sym_pragma] = ACTIONS(778),
    [anon_sym_infix] = ACTIONS(778),
    [anon_sym_infixl] = ACTIONS(778),
    [anon_sym_infixr] = ACTIONS(778),
  },
  [610] = {
    [sym__newline] = ACTIONS(800),
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(1392),
  },
  [611] = {
    [sym__dedent] = ACTIONS(804),
    [sym_string] = ACTIONS(806),
    [sym_int] = ACTIONS(806),
    [sym_qualified_name] = ACTIONS(806),
    [anon_sym__] = ACTIONS(806),
    [anon_sym_LBRACE] = ACTIONS(806),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(806),
    [anon_sym_Prop] = ACTIONS(806),
    [anon_sym_Set] = ACTIONS(806),
    [anon_sym_quote] = ACTIONS(806),
    [anon_sym_quoteTerm] = ACTIONS(806),
    [anon_sym_unquote] = ACTIONS(806),
    [anon_sym_record] = ACTIONS(806),
    [anon_sym_data] = ACTIONS(806),
    [anon_sym_codata] = ACTIONS(806),
    [anon_sym_instance] = ACTIONS(806),
    [anon_sym_field] = ACTIONS(806),
    [sym_pragma] = ACTIONS(806),
    [anon_sym_infix] = ACTIONS(806),
    [anon_sym_infixl] = ACTIONS(806),
    [anon_sym_infixr] = ACTIONS(806),
  },
  [612] = {
    [sym_literal] = STATE(262),
    [sym_expr] = STATE(712),
    [sym__expr1] = STATE(259),
    [sym__application] = STATE(259),
    [sym__expr2] = STATE(259),
    [sym__atoms1] = STATE(260),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [sym__typed_bindings1] = STATE(263),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(264),
    [aux_sym__application_repeat1] = STATE(265),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(474),
    [sym_int] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_Prop] = ACTIONS(476),
    [anon_sym_Set] = ACTIONS(476),
    [anon_sym_quote] = ACTIONS(476),
    [anon_sym_quoteTerm] = ACTIONS(476),
    [anon_sym_unquote] = ACTIONS(476),
    [anon_sym_record] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [613] = {
    [sym__declarations0] = STATE(713),
    [sym__newline] = ACTIONS(1394),
    [sym__indent] = ACTIONS(520),
    [sym_comment] = ACTIONS(65),
  },
  [614] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(1392),
  },
  [615] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(714),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(502),
    [sym_int] = ACTIONS(502),
    [sym_qualified_name] = ACTIONS(504),
    [anon_sym__] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(504),
    [anon_sym_Prop] = ACTIONS(504),
    [anon_sym_Set] = ACTIONS(504),
    [anon_sym_quote] = ACTIONS(504),
    [anon_sym_quoteTerm] = ACTIONS(504),
    [anon_sym_unquote] = ACTIONS(504),
    [anon_sym_record] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [616] = {
    [sym__dedent] = ACTIONS(838),
    [sym_string] = ACTIONS(840),
    [sym_int] = ACTIONS(840),
    [sym_qualified_name] = ACTIONS(840),
    [anon_sym__] = ACTIONS(840),
    [anon_sym_LBRACE] = ACTIONS(840),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(840),
    [anon_sym_Prop] = ACTIONS(840),
    [anon_sym_Set] = ACTIONS(840),
    [anon_sym_quote] = ACTIONS(840),
    [anon_sym_quoteTerm] = ACTIONS(840),
    [anon_sym_unquote] = ACTIONS(840),
    [anon_sym_record] = ACTIONS(840),
    [anon_sym_data] = ACTIONS(840),
    [anon_sym_codata] = ACTIONS(840),
    [anon_sym_instance] = ACTIONS(840),
    [anon_sym_field] = ACTIONS(840),
    [sym_pragma] = ACTIONS(840),
    [anon_sym_infix] = ACTIONS(840),
    [anon_sym_infixl] = ACTIONS(840),
    [anon_sym_infixr] = ACTIONS(840),
  },
  [617] = {
    [sym__dedent] = ACTIONS(876),
    [sym_string] = ACTIONS(878),
    [sym_int] = ACTIONS(878),
    [sym_qualified_name] = ACTIONS(878),
    [anon_sym__] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(878),
    [anon_sym_Prop] = ACTIONS(878),
    [anon_sym_Set] = ACTIONS(878),
    [anon_sym_quote] = ACTIONS(878),
    [anon_sym_quoteTerm] = ACTIONS(878),
    [anon_sym_unquote] = ACTIONS(878),
    [anon_sym_record] = ACTIONS(878),
    [anon_sym_data] = ACTIONS(878),
    [anon_sym_codata] = ACTIONS(878),
    [anon_sym_instance] = ACTIONS(878),
    [anon_sym_field] = ACTIONS(878),
    [sym_pragma] = ACTIONS(878),
    [anon_sym_infix] = ACTIONS(878),
    [anon_sym_infixl] = ACTIONS(878),
    [anon_sym_infixr] = ACTIONS(878),
  },
  [618] = {
    [sym_name] = ACTIONS(1396),
    [anon_sym_DOT] = ACTIONS(1396),
    [anon_sym_DOT_DOT] = ACTIONS(1396),
    [anon_sym_LBRACE] = ACTIONS(1396),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1396),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(1396),
  },
  [619] = {
    [aux_sym_arg_name_repeat1] = STATE(619),
    [sym_name] = ACTIONS(1398),
    [anon_sym_RBRACE] = ACTIONS(1401),
    [sym_comment] = ACTIONS(13),
  },
  [620] = {
    [aux_sym_arg_name_repeat1] = STATE(620),
    [sym_name] = ACTIONS(1403),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1401),
    [sym_comment] = ACTIONS(13),
  },
  [621] = {
    [sym__dedent] = ACTIONS(876),
    [sym_name] = ACTIONS(878),
    [anon_sym_DOT] = ACTIONS(878),
    [anon_sym_DOT_DOT] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(878),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(878),
    [anon_sym_overlap] = ACTIONS(878),
  },
  [622] = {
    [sym__dedent] = ACTIONS(1406),
    [sym_name] = ACTIONS(1408),
    [anon_sym_DOT] = ACTIONS(1408),
    [anon_sym_DOT_DOT] = ACTIONS(1408),
    [anon_sym_LBRACE] = ACTIONS(1408),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1408),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(1408),
    [anon_sym_overlap] = ACTIONS(1408),
  },
  [623] = {
    [sym__dedent] = ACTIONS(129),
    [sym__const_right_arrow] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_name] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_DOT_DOT] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_instance] = ACTIONS(131),
    [anon_sym_overlap] = ACTIONS(131),
  },
  [624] = {
    [anon_sym_RBRACE] = ACTIONS(1410),
    [sym_comment] = ACTIONS(65),
  },
  [625] = {
    [sym__record_assignments1] = STATE(717),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1412),
    [sym_comment] = ACTIONS(13),
  },
  [626] = {
    [anon_sym_LBRACE] = ACTIONS(1414),
    [sym_comment] = ACTIONS(65),
  },
  [627] = {
    [sym_literal] = STATE(488),
    [sym_expr] = STATE(719),
    [sym__expr1] = STATE(485),
    [sym__application] = STATE(485),
    [sym__expr2] = STATE(485),
    [sym__atoms1] = STATE(486),
    [sym_atom] = STATE(487),
    [sym__atom_curly] = STATE(488),
    [sym__atom_no_curly] = STATE(488),
    [sym__typed_bindings1] = STATE(489),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(490),
    [aux_sym__application_repeat1] = STATE(491),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(868),
    [sym_int] = ACTIONS(868),
    [sym_qualified_name] = ACTIONS(870),
    [anon_sym__] = ACTIONS(870),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(872),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(870),
    [anon_sym_Prop] = ACTIONS(870),
    [anon_sym_Set] = ACTIONS(870),
    [anon_sym_quote] = ACTIONS(870),
    [anon_sym_quoteTerm] = ACTIONS(870),
    [anon_sym_unquote] = ACTIONS(870),
    [anon_sym_record] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [628] = {
    [sym__dedent] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_name] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(31),
    [anon_sym_instance] = ACTIONS(31),
    [anon_sym_overlap] = ACTIONS(31),
  },
  [629] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(721),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(1416),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [630] = {
    [sym_literal] = STATE(723),
    [sym__atom_no_curly] = STATE(723),
    [sym_string] = ACTIONS(141),
    [sym_int] = ACTIONS(141),
    [sym_qualified_name] = ACTIONS(1418),
    [anon_sym__] = ACTIONS(1418),
    [anon_sym_LBRACE] = ACTIONS(1420),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1418),
    [anon_sym_Prop] = ACTIONS(1418),
    [anon_sym_Set] = ACTIONS(1418),
    [anon_sym_quote] = ACTIONS(1418),
    [anon_sym_quoteTerm] = ACTIONS(1418),
    [anon_sym_unquote] = ACTIONS(1418),
    [anon_sym_record] = ACTIONS(147),
  },
  [631] = {
    [sym__dedent] = ACTIONS(287),
    [sym_name] = ACTIONS(1422),
    [anon_sym_DOT] = ACTIONS(1422),
    [anon_sym_DOT_DOT] = ACTIONS(1422),
    [anon_sym_LBRACE] = ACTIONS(1422),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1422),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1422),
    [anon_sym_instance] = ACTIONS(1422),
    [anon_sym_overlap] = ACTIONS(1422),
  },
  [632] = {
    [sym__dedent] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_name] = ACTIONS(85),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(85),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_record] = ACTIONS(83),
    [anon_sym_instance] = ACTIONS(85),
    [anon_sym_overlap] = ACTIONS(85),
  },
  [633] = {
    [sym__dedent] = ACTIONS(87),
    [sym_string] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_name] = ACTIONS(89),
    [sym_qualified_name] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_DOT_DOT] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_Prop] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_quoteTerm] = ACTIONS(89),
    [anon_sym_unquote] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_instance] = ACTIONS(89),
    [anon_sym_overlap] = ACTIONS(89),
  },
  [634] = {
    [sym_literal] = STATE(633),
    [sym__expr2] = STATE(636),
    [sym_atom] = STATE(632),
    [sym__atom_curly] = STATE(633),
    [sym__atom_no_curly] = STATE(633),
    [aux_sym__application_repeat1] = STATE(64),
    [sym_string] = ACTIONS(1217),
    [sym_int] = ACTIONS(1217),
    [sym_qualified_name] = ACTIONS(1219),
    [anon_sym__] = ACTIONS(1219),
    [anon_sym_LBRACE] = ACTIONS(1221),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(1219),
    [anon_sym_Prop] = ACTIONS(1219),
    [anon_sym_Set] = ACTIONS(1219),
    [anon_sym_quote] = ACTIONS(1219),
    [anon_sym_quoteTerm] = ACTIONS(1219),
    [anon_sym_unquote] = ACTIONS(1219),
    [anon_sym_record] = ACTIONS(1223),
  },
  [635] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(624),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(30),
    [sym__expr2] = STATE(30),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(1201),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_record] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [636] = {
    [sym__dedent] = ACTIONS(301),
    [sym_name] = ACTIONS(1424),
    [anon_sym_DOT] = ACTIONS(1424),
    [anon_sym_DOT_DOT] = ACTIONS(1424),
    [anon_sym_LBRACE] = ACTIONS(1424),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1424),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1424),
    [anon_sym_instance] = ACTIONS(1424),
    [anon_sym_overlap] = ACTIONS(1424),
  },
  [637] = {
    [sym__newline] = ACTIONS(710),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(712),
    [anon_sym_module] = ACTIONS(712),
    [anon_sym_with] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [638] = {
    [anon_sym_RBRACE] = ACTIONS(1426),
    [sym_comment] = ACTIONS(65),
  },
  [639] = {
    [sym__newline] = ACTIONS(710),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(712),
    [anon_sym_module] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [640] = {
    [anon_sym_RBRACE] = ACTIONS(1428),
    [sym_comment] = ACTIONS(65),
  },
  [641] = {
    [sym__newline] = ACTIONS(710),
    [sym__const_right_arrow] = ACTIONS(712),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_module] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [642] = {
    [anon_sym_RBRACE] = ACTIONS(1430),
    [sym_comment] = ACTIONS(65),
  },
  [643] = {
    [sym__newline] = ACTIONS(381),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_module] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(383),
  },
  [644] = {
    [sym__newline] = ACTIONS(438),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [645] = {
    [anon_sym_RBRACE] = ACTIONS(1432),
    [sym_comment] = ACTIONS(65),
  },
  [646] = {
    [sym__field_assignments1] = STATE(728),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1434),
    [sym_comment] = ACTIONS(13),
  },
  [647] = {
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
  },
  [648] = {
    [anon_sym_RBRACE] = ACTIONS(1436),
    [sym_comment] = ACTIONS(65),
  },
  [649] = {
    [sym__const_right_arrow] = ACTIONS(1438),
    [anon_sym_DOT] = ACTIONS(1440),
    [anon_sym_DOT_DOT] = ACTIONS(1438),
    [anon_sym_LBRACE] = ACTIONS(1440),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1438),
    [sym_comment] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(1438),
  },
  [650] = {
    [sym__const_right_arrow] = ACTIONS(1074),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_RBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_COLON] = ACTIONS(1074),
  },
  [651] = {
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_RBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_COLON] = ACTIONS(1074),
  },
  [652] = {
    [sym__const_right_arrow] = ACTIONS(383),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
  },
  [653] = {
    [sym__const_right_arrow] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
  },
  [654] = {
    [anon_sym_RBRACE] = ACTIONS(1442),
    [sym_comment] = ACTIONS(65),
  },
  [655] = {
    [sym__field_assignments1] = STATE(731),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1444),
    [sym_comment] = ACTIONS(13),
  },
  [656] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(674),
    [sym_comment] = ACTIONS(65),
  },
  [657] = {
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
  },
  [658] = {
    [anon_sym_RBRACE] = ACTIONS(1446),
    [sym_comment] = ACTIONS(65),
  },
  [659] = {
    [sym__record_assignments1] = STATE(734),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1448),
    [sym_comment] = ACTIONS(13),
  },
  [660] = {
    [anon_sym_LBRACE] = ACTIONS(1450),
    [sym_comment] = ACTIONS(65),
  },
  [661] = {
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
  },
  [662] = {
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
  },
  [663] = {
    [anon_sym_RBRACE] = ACTIONS(1452),
    [sym_comment] = ACTIONS(65),
  },
  [664] = {
    [sym__field_assignments1] = STATE(737),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1454),
    [sym_comment] = ACTIONS(13),
  },
  [665] = {
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(65),
  },
  [666] = {
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_RBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_SEMI] = ACTIONS(1074),
    [anon_sym_RPAREN] = ACTIONS(1074),
  },
  [667] = {
    [sym__const_right_arrow] = ACTIONS(712),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
  },
  [668] = {
    [anon_sym_RBRACE] = ACTIONS(1456),
    [sym_comment] = ACTIONS(65),
  },
  [669] = {
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_RBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(712),
    [anon_sym_public] = ACTIONS(712),
    [anon_sym_using] = ACTIONS(712),
    [anon_sym_hiding] = ACTIONS(712),
    [anon_sym_renaming] = ACTIONS(712),
  },
  [670] = {
    [anon_sym_RBRACE] = ACTIONS(1458),
    [sym_comment] = ACTIONS(65),
  },
  [671] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1460),
    [anon_sym_RPAREN] = ACTIONS(1460),
  },
  [672] = {
    [sym__import_name] = STATE(740),
    [sym_name] = ACTIONS(1462),
    [sym_comment] = ACTIONS(13),
    [anon_sym_module] = ACTIONS(1024),
  },
  [673] = {
    [aux_sym__comma_import_names1_repeat1] = STATE(741),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1295),
    [anon_sym_RPAREN] = ACTIONS(1464),
  },
  [674] = {
    [anon_sym_RBRACE] = ACTIONS(1466),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1466),
    [anon_sym_public] = ACTIONS(1466),
    [anon_sym_using] = ACTIONS(1466),
    [anon_sym_hiding] = ACTIONS(1466),
    [anon_sym_renaming] = ACTIONS(1466),
  },
  [675] = {
    [sym_name] = ACTIONS(1468),
    [sym_comment] = ACTIONS(13),
  },
  [676] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_to] = ACTIONS(1470),
  },
  [677] = {
    [sym_renaming] = STATE(744),
    [sym_name] = ACTIONS(1026),
    [sym_comment] = ACTIONS(13),
    [anon_sym_module] = ACTIONS(1028),
  },
  [678] = {
    [aux_sym_import_directive_repeat1] = STATE(746),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1305),
    [anon_sym_RPAREN] = ACTIONS(1472),
  },
  [679] = {
    [anon_sym_RBRACE] = ACTIONS(1474),
    [sym_comment] = ACTIONS(65),
  },
  [680] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1474),
    [sym_comment] = ACTIONS(65),
  },
  [681] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(1474),
  },
  [682] = {
    [sym_name] = ACTIONS(1257),
    [anon_sym__] = ACTIONS(1257),
    [anon_sym_DOT] = ACTIONS(1257),
    [anon_sym_DOT_DOT] = ACTIONS(1257),
    [anon_sym_LBRACE] = ACTIONS(1257),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1257),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(1257),
    [anon_sym_COLON] = ACTIONS(1257),
    [anon_sym_where] = ACTIONS(1257),
  },
  [683] = {
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(712),
  },
  [684] = {
    [anon_sym_RBRACE] = ACTIONS(1476),
    [sym_comment] = ACTIONS(65),
  },
  [685] = {
    [sym__newline] = ACTIONS(710),
    [sym__const_right_arrow] = ACTIONS(712),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [686] = {
    [anon_sym_RBRACE] = ACTIONS(1478),
    [sym_comment] = ACTIONS(65),
  },
  [687] = {
    [sym__newline] = ACTIONS(381),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(383),
  },
  [688] = {
    [sym__newline] = ACTIONS(438),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [689] = {
    [anon_sym_RBRACE] = ACTIONS(1480),
    [sym_comment] = ACTIONS(65),
  },
  [690] = {
    [sym__field_assignments1] = STATE(751),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1482),
    [sym_comment] = ACTIONS(13),
  },
  [691] = {
    [sym_name] = ACTIONS(1484),
    [sym_comment] = ACTIONS(13),
  },
  [692] = {
    [ts_builtin_sym_end] = ACTIONS(1486),
    [sym_string] = ACTIONS(1488),
    [sym_int] = ACTIONS(1488),
    [sym_qualified_name] = ACTIONS(1488),
    [anon_sym__] = ACTIONS(1488),
    [anon_sym_LBRACE] = ACTIONS(1488),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1488),
    [anon_sym_Prop] = ACTIONS(1488),
    [anon_sym_Set] = ACTIONS(1488),
    [anon_sym_quote] = ACTIONS(1488),
    [anon_sym_quoteTerm] = ACTIONS(1488),
    [anon_sym_unquote] = ACTIONS(1488),
    [anon_sym_record] = ACTIONS(1488),
    [anon_sym_data] = ACTIONS(1488),
    [anon_sym_codata] = ACTIONS(1488),
    [anon_sym_instance] = ACTIONS(1488),
    [anon_sym_field] = ACTIONS(1488),
    [sym_pragma] = ACTIONS(1488),
    [anon_sym_infix] = ACTIONS(1488),
    [anon_sym_infixl] = ACTIONS(1488),
    [anon_sym_infixr] = ACTIONS(1488),
  },
  [693] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_constructor] = ACTIONS(1490),
  },
  [694] = {
    [sym__dedent] = ACTIONS(1492),
    [sym_string] = ACTIONS(1494),
    [sym_int] = ACTIONS(1494),
    [sym_qualified_name] = ACTIONS(1494),
    [anon_sym__] = ACTIONS(1494),
    [anon_sym_LBRACE] = ACTIONS(1494),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1494),
    [anon_sym_Prop] = ACTIONS(1494),
    [anon_sym_Set] = ACTIONS(1494),
    [anon_sym_quote] = ACTIONS(1494),
    [anon_sym_quoteTerm] = ACTIONS(1494),
    [anon_sym_unquote] = ACTIONS(1494),
    [anon_sym_record] = ACTIONS(1494),
    [anon_sym_data] = ACTIONS(1494),
    [anon_sym_codata] = ACTIONS(1494),
    [anon_sym_instance] = ACTIONS(1496),
    [anon_sym_constructor] = ACTIONS(1351),
    [anon_sym_inductive] = ACTIONS(1351),
    [anon_sym_coinductive] = ACTIONS(1351),
    [anon_sym_eta_DASHequality] = ACTIONS(1351),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1351),
    [anon_sym_field] = ACTIONS(1494),
    [sym_pragma] = ACTIONS(1494),
    [anon_sym_infix] = ACTIONS(1494),
    [anon_sym_infixl] = ACTIONS(1494),
    [anon_sym_infixr] = ACTIONS(1494),
  },
  [695] = {
    [sym__indent] = ACTIONS(1499),
    [sym_comment] = ACTIONS(65),
  },
  [696] = {
    [sym__newline] = ACTIONS(1501),
    [sym_comment] = ACTIONS(65),
  },
  [697] = {
    [ts_builtin_sym_end] = ACTIONS(1503),
    [sym_string] = ACTIONS(1505),
    [sym_int] = ACTIONS(1505),
    [sym_qualified_name] = ACTIONS(1505),
    [anon_sym__] = ACTIONS(1505),
    [anon_sym_LBRACE] = ACTIONS(1505),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1505),
    [anon_sym_Prop] = ACTIONS(1505),
    [anon_sym_Set] = ACTIONS(1505),
    [anon_sym_quote] = ACTIONS(1505),
    [anon_sym_quoteTerm] = ACTIONS(1505),
    [anon_sym_unquote] = ACTIONS(1505),
    [anon_sym_record] = ACTIONS(1505),
    [anon_sym_data] = ACTIONS(1505),
    [anon_sym_codata] = ACTIONS(1505),
    [anon_sym_instance] = ACTIONS(1505),
    [anon_sym_field] = ACTIONS(1505),
    [sym_pragma] = ACTIONS(1505),
    [anon_sym_infix] = ACTIONS(1505),
    [anon_sym_infixl] = ACTIONS(1505),
    [anon_sym_infixr] = ACTIONS(1505),
  },
  [698] = {
    [ts_builtin_sym_end] = ACTIONS(1507),
    [sym_string] = ACTIONS(1509),
    [sym_int] = ACTIONS(1509),
    [sym_qualified_name] = ACTIONS(1509),
    [anon_sym__] = ACTIONS(1509),
    [anon_sym_LBRACE] = ACTIONS(1509),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1509),
    [anon_sym_Prop] = ACTIONS(1509),
    [anon_sym_Set] = ACTIONS(1509),
    [anon_sym_quote] = ACTIONS(1509),
    [anon_sym_quoteTerm] = ACTIONS(1509),
    [anon_sym_unquote] = ACTIONS(1509),
    [anon_sym_record] = ACTIONS(1509),
    [anon_sym_data] = ACTIONS(1509),
    [anon_sym_codata] = ACTIONS(1509),
    [anon_sym_instance] = ACTIONS(1509),
    [anon_sym_field] = ACTIONS(1509),
    [sym_pragma] = ACTIONS(1509),
    [anon_sym_infix] = ACTIONS(1509),
    [anon_sym_infixl] = ACTIONS(1509),
    [anon_sym_infixr] = ACTIONS(1509),
  },
  [699] = {
    [sym__const_right_arrow] = ACTIONS(712),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [700] = {
    [anon_sym_RBRACE] = ACTIONS(1511),
    [sym_comment] = ACTIONS(65),
  },
  [701] = {
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(383),
  },
  [702] = {
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
  },
  [703] = {
    [anon_sym_RBRACE] = ACTIONS(1513),
    [sym_comment] = ACTIONS(65),
  },
  [704] = {
    [sym__field_assignments1] = STATE(757),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1515),
    [sym_comment] = ACTIONS(13),
  },
  [705] = {
    [sym_record_declarations_block] = STATE(758),
    [sym__indent] = ACTIONS(1159),
    [sym__dedent] = ACTIONS(1090),
    [sym_string] = ACTIONS(1092),
    [sym_int] = ACTIONS(1092),
    [sym_qualified_name] = ACTIONS(1092),
    [anon_sym__] = ACTIONS(1092),
    [anon_sym_LBRACE] = ACTIONS(1092),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1092),
    [anon_sym_Prop] = ACTIONS(1092),
    [anon_sym_Set] = ACTIONS(1092),
    [anon_sym_quote] = ACTIONS(1092),
    [anon_sym_quoteTerm] = ACTIONS(1092),
    [anon_sym_unquote] = ACTIONS(1092),
    [anon_sym_record] = ACTIONS(1092),
    [anon_sym_data] = ACTIONS(1092),
    [anon_sym_codata] = ACTIONS(1092),
    [anon_sym_instance] = ACTIONS(1092),
    [anon_sym_field] = ACTIONS(1092),
    [sym_pragma] = ACTIONS(1092),
    [anon_sym_infix] = ACTIONS(1092),
    [anon_sym_infixl] = ACTIONS(1092),
    [anon_sym_infixr] = ACTIONS(1092),
  },
  [706] = {
    [sym__dedent] = ACTIONS(1100),
    [sym_string] = ACTIONS(1102),
    [sym_int] = ACTIONS(1102),
    [sym_qualified_name] = ACTIONS(1102),
    [anon_sym__] = ACTIONS(1102),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1102),
    [anon_sym_Prop] = ACTIONS(1102),
    [anon_sym_Set] = ACTIONS(1102),
    [anon_sym_quote] = ACTIONS(1102),
    [anon_sym_quoteTerm] = ACTIONS(1102),
    [anon_sym_unquote] = ACTIONS(1102),
    [anon_sym_record] = ACTIONS(1102),
    [anon_sym_data] = ACTIONS(1102),
    [anon_sym_codata] = ACTIONS(1102),
    [anon_sym_instance] = ACTIONS(1102),
    [anon_sym_field] = ACTIONS(1102),
    [sym_pragma] = ACTIONS(1102),
    [anon_sym_infix] = ACTIONS(1102),
    [anon_sym_infixl] = ACTIONS(1102),
    [anon_sym_infixr] = ACTIONS(1102),
  },
  [707] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(133),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(134),
    [sym_data_signature_only] = STATE(133),
    [sym_record] = STATE(134),
    [sym_record_signature_only] = STATE(133),
    [sym_field] = STATE(134),
    [sym__declaration] = STATE(133),
    [sym__declaration_block] = STATE(134),
    [sym_infix] = STATE(133),
    [sym_instance] = STATE(134),
    [sym__declarations1] = STATE(760),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(136),
    [sym__dedent] = ACTIONS(1517),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_data] = ACTIONS(209),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_instance] = ACTIONS(213),
    [anon_sym_field] = ACTIONS(215),
    [sym_pragma] = ACTIONS(217),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [708] = {
    [sym__dedent] = ACTIONS(1517),
    [sym_comment] = ACTIONS(65),
  },
  [709] = {
    [sym__newline] = ACTIONS(1133),
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(1519),
  },
  [710] = {
    [sym__dedent] = ACTIONS(1090),
    [sym_string] = ACTIONS(1092),
    [sym_int] = ACTIONS(1092),
    [sym_qualified_name] = ACTIONS(1092),
    [anon_sym__] = ACTIONS(1092),
    [anon_sym_LBRACE] = ACTIONS(1092),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1092),
    [anon_sym_Prop] = ACTIONS(1092),
    [anon_sym_Set] = ACTIONS(1092),
    [anon_sym_quote] = ACTIONS(1092),
    [anon_sym_quoteTerm] = ACTIONS(1092),
    [anon_sym_unquote] = ACTIONS(1092),
    [anon_sym_record] = ACTIONS(1092),
    [anon_sym_data] = ACTIONS(1092),
    [anon_sym_codata] = ACTIONS(1092),
    [anon_sym_instance] = ACTIONS(1092),
    [anon_sym_field] = ACTIONS(1092),
    [sym_pragma] = ACTIONS(1092),
    [anon_sym_infix] = ACTIONS(1092),
    [anon_sym_infixl] = ACTIONS(1092),
    [anon_sym_infixr] = ACTIONS(1092),
  },
  [711] = {
    [sym__declarations0] = STATE(762),
    [sym__newline] = ACTIONS(1521),
    [sym__indent] = ACTIONS(520),
    [sym_comment] = ACTIONS(65),
  },
  [712] = {
    [sym__newline] = ACTIONS(1139),
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(1523),
  },
  [713] = {
    [sym__dedent] = ACTIONS(1143),
    [sym_string] = ACTIONS(1145),
    [sym_int] = ACTIONS(1145),
    [sym_qualified_name] = ACTIONS(1145),
    [anon_sym__] = ACTIONS(1145),
    [anon_sym_LBRACE] = ACTIONS(1145),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1145),
    [anon_sym_Prop] = ACTIONS(1145),
    [anon_sym_Set] = ACTIONS(1145),
    [anon_sym_quote] = ACTIONS(1145),
    [anon_sym_quoteTerm] = ACTIONS(1145),
    [anon_sym_unquote] = ACTIONS(1145),
    [anon_sym_record] = ACTIONS(1145),
    [anon_sym_data] = ACTIONS(1145),
    [anon_sym_codata] = ACTIONS(1145),
    [anon_sym_instance] = ACTIONS(1145),
    [anon_sym_field] = ACTIONS(1145),
    [sym_pragma] = ACTIONS(1145),
    [anon_sym_infix] = ACTIONS(1145),
    [anon_sym_infixl] = ACTIONS(1145),
    [anon_sym_infixr] = ACTIONS(1145),
  },
  [714] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_where] = ACTIONS(1523),
  },
  [715] = {
    [sym__dedent] = ACTIONS(381),
    [sym__const_right_arrow] = ACTIONS(383),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_name] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_instance] = ACTIONS(383),
    [anon_sym_overlap] = ACTIONS(383),
  },
  [716] = {
    [sym__dedent] = ACTIONS(438),
    [sym__const_right_arrow] = ACTIONS(440),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_name] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [anon_sym_DOT_DOT] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_instance] = ACTIONS(440),
    [anon_sym_overlap] = ACTIONS(440),
  },
  [717] = {
    [anon_sym_RBRACE] = ACTIONS(1525),
    [sym_comment] = ACTIONS(65),
  },
  [718] = {
    [sym__field_assignments1] = STATE(765),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1527),
    [sym_comment] = ACTIONS(13),
  },
  [719] = {
    [sym__dedent] = ACTIONS(674),
    [sym_name] = ACTIONS(1529),
    [anon_sym_DOT] = ACTIONS(1529),
    [anon_sym_DOT_DOT] = ACTIONS(1529),
    [anon_sym_LBRACE] = ACTIONS(1529),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1529),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(1529),
    [anon_sym_overlap] = ACTIONS(1529),
  },
  [720] = {
    [sym__dedent] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_name] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_DOT_DOT] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_Prop] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_quoteTerm] = ACTIONS(131),
    [anon_sym_unquote] = ACTIONS(131),
    [anon_sym_record] = ACTIONS(131),
    [anon_sym_instance] = ACTIONS(131),
    [anon_sym_overlap] = ACTIONS(131),
  },
  [721] = {
    [anon_sym_RBRACE] = ACTIONS(1531),
    [sym_comment] = ACTIONS(65),
  },
  [722] = {
    [sym__record_assignments1] = STATE(768),
    [sym__record_assignment] = STATE(109),
    [sym_module_assignment] = STATE(109),
    [sym_field_assignment] = STATE(109),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(1533),
    [sym_comment] = ACTIONS(13),
  },
  [723] = {
    [anon_sym_LBRACE] = ACTIONS(1535),
    [sym_comment] = ACTIONS(65),
  },
  [724] = {
    [sym__newline] = ACTIONS(1072),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_COLON] = ACTIONS(1074),
    [anon_sym_module] = ACTIONS(1074),
    [anon_sym_with] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [725] = {
    [sym__newline] = ACTIONS(1072),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_COLON] = ACTIONS(1074),
    [anon_sym_module] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [726] = {
    [sym__newline] = ACTIONS(1072),
    [sym__const_right_arrow] = ACTIONS(1074),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_module] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [727] = {
    [sym__newline] = ACTIONS(710),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_module] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [728] = {
    [anon_sym_RBRACE] = ACTIONS(1537),
    [sym_comment] = ACTIONS(65),
  },
  [729] = {
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
  },
  [730] = {
    [sym__const_right_arrow] = ACTIONS(712),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
  },
  [731] = {
    [anon_sym_RBRACE] = ACTIONS(1539),
    [sym_comment] = ACTIONS(65),
  },
  [732] = {
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
  },
  [733] = {
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
  },
  [734] = {
    [anon_sym_RBRACE] = ACTIONS(1541),
    [sym_comment] = ACTIONS(65),
  },
  [735] = {
    [sym__field_assignments1] = STATE(773),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1543),
    [sym_comment] = ACTIONS(13),
  },
  [736] = {
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
  },
  [737] = {
    [anon_sym_RBRACE] = ACTIONS(1545),
    [sym_comment] = ACTIONS(65),
  },
  [738] = {
    [sym__const_right_arrow] = ACTIONS(1074),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
  },
  [739] = {
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_RBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_SEMI] = ACTIONS(1074),
    [anon_sym_public] = ACTIONS(1074),
    [anon_sym_using] = ACTIONS(1074),
    [anon_sym_hiding] = ACTIONS(1074),
    [anon_sym_renaming] = ACTIONS(1074),
  },
  [740] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1547),
    [anon_sym_RPAREN] = ACTIONS(1547),
  },
  [741] = {
    [aux_sym__comma_import_names1_repeat1] = STATE(741),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1549),
    [anon_sym_RPAREN] = ACTIONS(1547),
  },
  [742] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1552),
    [anon_sym_RPAREN] = ACTIONS(1552),
  },
  [743] = {
    [sym_name] = ACTIONS(1554),
    [sym_comment] = ACTIONS(13),
  },
  [744] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1556),
    [anon_sym_RPAREN] = ACTIONS(1556),
  },
  [745] = {
    [anon_sym_RBRACE] = ACTIONS(1558),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1558),
    [anon_sym_public] = ACTIONS(1558),
    [anon_sym_using] = ACTIONS(1558),
    [anon_sym_hiding] = ACTIONS(1558),
    [anon_sym_renaming] = ACTIONS(1558),
  },
  [746] = {
    [aux_sym_import_directive_repeat1] = STATE(746),
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1560),
    [anon_sym_RPAREN] = ACTIONS(1556),
  },
  [747] = {
    [sym_name] = ACTIONS(1440),
    [anon_sym__] = ACTIONS(1440),
    [anon_sym_DOT] = ACTIONS(1440),
    [anon_sym_DOT_DOT] = ACTIONS(1440),
    [anon_sym_LBRACE] = ACTIONS(1440),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(1440),
    [anon_sym_COLON] = ACTIONS(1440),
    [anon_sym_where] = ACTIONS(1440),
  },
  [748] = {
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_COLON] = ACTIONS(1074),
  },
  [749] = {
    [sym__newline] = ACTIONS(1072),
    [sym__const_right_arrow] = ACTIONS(1074),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [750] = {
    [sym__newline] = ACTIONS(710),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [751] = {
    [anon_sym_RBRACE] = ACTIONS(1563),
    [sym_comment] = ACTIONS(65),
  },
  [752] = {
    [sym__dedent] = ACTIONS(1565),
    [sym_comment] = ACTIONS(65),
  },
  [753] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_constructor] = ACTIONS(1567),
  },
  [754] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_instance] = ACTIONS(1569),
    [anon_sym_constructor] = ACTIONS(1569),
    [anon_sym_inductive] = ACTIONS(1569),
    [anon_sym_coinductive] = ACTIONS(1569),
    [anon_sym_eta_DASHequality] = ACTIONS(1569),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1569),
  },
  [755] = {
    [sym__const_right_arrow] = ACTIONS(1074),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [756] = {
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [757] = {
    [anon_sym_RBRACE] = ACTIONS(1571),
    [sym_comment] = ACTIONS(65),
  },
  [758] = {
    [sym__dedent] = ACTIONS(1324),
    [sym_string] = ACTIONS(1326),
    [sym_int] = ACTIONS(1326),
    [sym_qualified_name] = ACTIONS(1326),
    [anon_sym__] = ACTIONS(1326),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1326),
    [anon_sym_Prop] = ACTIONS(1326),
    [anon_sym_Set] = ACTIONS(1326),
    [anon_sym_quote] = ACTIONS(1326),
    [anon_sym_quoteTerm] = ACTIONS(1326),
    [anon_sym_unquote] = ACTIONS(1326),
    [anon_sym_record] = ACTIONS(1326),
    [anon_sym_data] = ACTIONS(1326),
    [anon_sym_codata] = ACTIONS(1326),
    [anon_sym_instance] = ACTIONS(1326),
    [anon_sym_field] = ACTIONS(1326),
    [sym_pragma] = ACTIONS(1326),
    [anon_sym_infix] = ACTIONS(1326),
    [anon_sym_infixl] = ACTIONS(1326),
    [anon_sym_infixr] = ACTIONS(1326),
  },
  [759] = {
    [sym__dedent] = ACTIONS(1338),
    [sym_string] = ACTIONS(1340),
    [sym_int] = ACTIONS(1340),
    [sym_qualified_name] = ACTIONS(1340),
    [anon_sym__] = ACTIONS(1340),
    [anon_sym_LBRACE] = ACTIONS(1340),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1340),
    [anon_sym_Prop] = ACTIONS(1340),
    [anon_sym_Set] = ACTIONS(1340),
    [anon_sym_quote] = ACTIONS(1340),
    [anon_sym_quoteTerm] = ACTIONS(1340),
    [anon_sym_unquote] = ACTIONS(1340),
    [anon_sym_record] = ACTIONS(1340),
    [anon_sym_data] = ACTIONS(1340),
    [anon_sym_codata] = ACTIONS(1340),
    [anon_sym_instance] = ACTIONS(1340),
    [anon_sym_field] = ACTIONS(1340),
    [sym_pragma] = ACTIONS(1340),
    [anon_sym_infix] = ACTIONS(1340),
    [anon_sym_infixl] = ACTIONS(1340),
    [anon_sym_infixr] = ACTIONS(1340),
  },
  [760] = {
    [sym__dedent] = ACTIONS(1573),
    [sym_comment] = ACTIONS(65),
  },
  [761] = {
    [sym_record_declarations_block] = STATE(781),
    [sym__indent] = ACTIONS(1159),
    [sym__dedent] = ACTIONS(1324),
    [sym_string] = ACTIONS(1326),
    [sym_int] = ACTIONS(1326),
    [sym_qualified_name] = ACTIONS(1326),
    [anon_sym__] = ACTIONS(1326),
    [anon_sym_LBRACE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1326),
    [anon_sym_Prop] = ACTIONS(1326),
    [anon_sym_Set] = ACTIONS(1326),
    [anon_sym_quote] = ACTIONS(1326),
    [anon_sym_quoteTerm] = ACTIONS(1326),
    [anon_sym_unquote] = ACTIONS(1326),
    [anon_sym_record] = ACTIONS(1326),
    [anon_sym_data] = ACTIONS(1326),
    [anon_sym_codata] = ACTIONS(1326),
    [anon_sym_instance] = ACTIONS(1326),
    [anon_sym_field] = ACTIONS(1326),
    [sym_pragma] = ACTIONS(1326),
    [anon_sym_infix] = ACTIONS(1326),
    [anon_sym_infixl] = ACTIONS(1326),
    [anon_sym_infixr] = ACTIONS(1326),
  },
  [762] = {
    [sym__dedent] = ACTIONS(1372),
    [sym_string] = ACTIONS(1374),
    [sym_int] = ACTIONS(1374),
    [sym_qualified_name] = ACTIONS(1374),
    [anon_sym__] = ACTIONS(1374),
    [anon_sym_LBRACE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1374),
    [anon_sym_Prop] = ACTIONS(1374),
    [anon_sym_Set] = ACTIONS(1374),
    [anon_sym_quote] = ACTIONS(1374),
    [anon_sym_quoteTerm] = ACTIONS(1374),
    [anon_sym_unquote] = ACTIONS(1374),
    [anon_sym_record] = ACTIONS(1374),
    [anon_sym_data] = ACTIONS(1374),
    [anon_sym_codata] = ACTIONS(1374),
    [anon_sym_instance] = ACTIONS(1374),
    [anon_sym_field] = ACTIONS(1374),
    [sym_pragma] = ACTIONS(1374),
    [anon_sym_infix] = ACTIONS(1374),
    [anon_sym_infixl] = ACTIONS(1374),
    [anon_sym_infixr] = ACTIONS(1374),
  },
  [763] = {
    [sym__declarations0] = STATE(782),
    [sym__newline] = ACTIONS(1575),
    [sym__indent] = ACTIONS(520),
    [sym_comment] = ACTIONS(65),
  },
  [764] = {
    [sym__dedent] = ACTIONS(710),
    [sym__const_right_arrow] = ACTIONS(712),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_name] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_DOT] = ACTIONS(712),
    [anon_sym_DOT_DOT] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_instance] = ACTIONS(712),
    [anon_sym_overlap] = ACTIONS(712),
  },
  [765] = {
    [anon_sym_RBRACE] = ACTIONS(1577),
    [sym_comment] = ACTIONS(65),
  },
  [766] = {
    [sym__dedent] = ACTIONS(381),
    [sym_string] = ACTIONS(383),
    [sym_int] = ACTIONS(383),
    [sym_name] = ACTIONS(383),
    [sym_qualified_name] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(383),
    [anon_sym_DOT_DOT] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_QMARK] = ACTIONS(383),
    [anon_sym_Prop] = ACTIONS(383),
    [anon_sym_Set] = ACTIONS(383),
    [anon_sym_quote] = ACTIONS(383),
    [anon_sym_quoteTerm] = ACTIONS(383),
    [anon_sym_unquote] = ACTIONS(383),
    [anon_sym_record] = ACTIONS(383),
    [anon_sym_instance] = ACTIONS(383),
    [anon_sym_overlap] = ACTIONS(383),
  },
  [767] = {
    [sym__dedent] = ACTIONS(438),
    [sym_string] = ACTIONS(440),
    [sym_int] = ACTIONS(440),
    [sym_name] = ACTIONS(440),
    [sym_qualified_name] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [anon_sym_DOT_DOT] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_Prop] = ACTIONS(440),
    [anon_sym_Set] = ACTIONS(440),
    [anon_sym_quote] = ACTIONS(440),
    [anon_sym_quoteTerm] = ACTIONS(440),
    [anon_sym_unquote] = ACTIONS(440),
    [anon_sym_record] = ACTIONS(440),
    [anon_sym_instance] = ACTIONS(440),
    [anon_sym_overlap] = ACTIONS(440),
  },
  [768] = {
    [anon_sym_RBRACE] = ACTIONS(1579),
    [sym_comment] = ACTIONS(65),
  },
  [769] = {
    [sym__field_assignments1] = STATE(785),
    [sym_field_assignment] = STATE(246),
    [sym_qualified_name] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1581),
    [sym_comment] = ACTIONS(13),
  },
  [770] = {
    [sym__newline] = ACTIONS(1072),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_module] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [771] = {
    [sym__const_right_arrow] = ACTIONS(1074),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
  },
  [772] = {
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
  },
  [773] = {
    [anon_sym_RBRACE] = ACTIONS(1583),
    [sym_comment] = ACTIONS(65),
  },
  [774] = {
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
  },
  [775] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(1585),
  },
  [776] = {
    [sym__newline] = ACTIONS(1072),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [777] = {
    [sym__dedent] = ACTIONS(1587),
    [sym_string] = ACTIONS(1589),
    [sym_int] = ACTIONS(1589),
    [sym_qualified_name] = ACTIONS(1589),
    [anon_sym__] = ACTIONS(1589),
    [anon_sym_LBRACE] = ACTIONS(1589),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1589),
    [anon_sym_Prop] = ACTIONS(1589),
    [anon_sym_Set] = ACTIONS(1589),
    [anon_sym_quote] = ACTIONS(1589),
    [anon_sym_quoteTerm] = ACTIONS(1589),
    [anon_sym_unquote] = ACTIONS(1589),
    [anon_sym_record] = ACTIONS(1589),
    [anon_sym_data] = ACTIONS(1589),
    [anon_sym_codata] = ACTIONS(1589),
    [anon_sym_instance] = ACTIONS(1589),
    [anon_sym_constructor] = ACTIONS(1589),
    [anon_sym_inductive] = ACTIONS(1589),
    [anon_sym_coinductive] = ACTIONS(1589),
    [anon_sym_eta_DASHequality] = ACTIONS(1589),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1589),
    [anon_sym_field] = ACTIONS(1589),
    [sym_pragma] = ACTIONS(1589),
    [anon_sym_infix] = ACTIONS(1589),
    [anon_sym_infixl] = ACTIONS(1589),
    [anon_sym_infixr] = ACTIONS(1589),
  },
  [778] = {
    [sym_name] = ACTIONS(1591),
    [sym_comment] = ACTIONS(13),
  },
  [779] = {
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_where] = ACTIONS(1074),
  },
  [780] = {
    [sym__dedent] = ACTIONS(1486),
    [sym_string] = ACTIONS(1488),
    [sym_int] = ACTIONS(1488),
    [sym_qualified_name] = ACTIONS(1488),
    [anon_sym__] = ACTIONS(1488),
    [anon_sym_LBRACE] = ACTIONS(1488),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1488),
    [anon_sym_Prop] = ACTIONS(1488),
    [anon_sym_Set] = ACTIONS(1488),
    [anon_sym_quote] = ACTIONS(1488),
    [anon_sym_quoteTerm] = ACTIONS(1488),
    [anon_sym_unquote] = ACTIONS(1488),
    [anon_sym_record] = ACTIONS(1488),
    [anon_sym_data] = ACTIONS(1488),
    [anon_sym_codata] = ACTIONS(1488),
    [anon_sym_instance] = ACTIONS(1488),
    [anon_sym_field] = ACTIONS(1488),
    [sym_pragma] = ACTIONS(1488),
    [anon_sym_infix] = ACTIONS(1488),
    [anon_sym_infixl] = ACTIONS(1488),
    [anon_sym_infixr] = ACTIONS(1488),
  },
  [781] = {
    [sym__dedent] = ACTIONS(1503),
    [sym_string] = ACTIONS(1505),
    [sym_int] = ACTIONS(1505),
    [sym_qualified_name] = ACTIONS(1505),
    [anon_sym__] = ACTIONS(1505),
    [anon_sym_LBRACE] = ACTIONS(1505),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1505),
    [anon_sym_Prop] = ACTIONS(1505),
    [anon_sym_Set] = ACTIONS(1505),
    [anon_sym_quote] = ACTIONS(1505),
    [anon_sym_quoteTerm] = ACTIONS(1505),
    [anon_sym_unquote] = ACTIONS(1505),
    [anon_sym_record] = ACTIONS(1505),
    [anon_sym_data] = ACTIONS(1505),
    [anon_sym_codata] = ACTIONS(1505),
    [anon_sym_instance] = ACTIONS(1505),
    [anon_sym_field] = ACTIONS(1505),
    [sym_pragma] = ACTIONS(1505),
    [anon_sym_infix] = ACTIONS(1505),
    [anon_sym_infixl] = ACTIONS(1505),
    [anon_sym_infixr] = ACTIONS(1505),
  },
  [782] = {
    [sym__dedent] = ACTIONS(1507),
    [sym_string] = ACTIONS(1509),
    [sym_int] = ACTIONS(1509),
    [sym_qualified_name] = ACTIONS(1509),
    [anon_sym__] = ACTIONS(1509),
    [anon_sym_LBRACE] = ACTIONS(1509),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1509),
    [anon_sym_Prop] = ACTIONS(1509),
    [anon_sym_Set] = ACTIONS(1509),
    [anon_sym_quote] = ACTIONS(1509),
    [anon_sym_quoteTerm] = ACTIONS(1509),
    [anon_sym_unquote] = ACTIONS(1509),
    [anon_sym_record] = ACTIONS(1509),
    [anon_sym_data] = ACTIONS(1509),
    [anon_sym_codata] = ACTIONS(1509),
    [anon_sym_instance] = ACTIONS(1509),
    [anon_sym_field] = ACTIONS(1509),
    [sym_pragma] = ACTIONS(1509),
    [anon_sym_infix] = ACTIONS(1509),
    [anon_sym_infixl] = ACTIONS(1509),
    [anon_sym_infixr] = ACTIONS(1509),
  },
  [783] = {
    [sym__dedent] = ACTIONS(1072),
    [sym__const_right_arrow] = ACTIONS(1074),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_name] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_DOT] = ACTIONS(1074),
    [anon_sym_DOT_DOT] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_instance] = ACTIONS(1074),
    [anon_sym_overlap] = ACTIONS(1074),
  },
  [784] = {
    [sym__dedent] = ACTIONS(710),
    [sym_string] = ACTIONS(712),
    [sym_int] = ACTIONS(712),
    [sym_name] = ACTIONS(712),
    [sym_qualified_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_DOT] = ACTIONS(712),
    [anon_sym_DOT_DOT] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_QMARK] = ACTIONS(712),
    [anon_sym_Prop] = ACTIONS(712),
    [anon_sym_Set] = ACTIONS(712),
    [anon_sym_quote] = ACTIONS(712),
    [anon_sym_quoteTerm] = ACTIONS(712),
    [anon_sym_unquote] = ACTIONS(712),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_instance] = ACTIONS(712),
    [anon_sym_overlap] = ACTIONS(712),
  },
  [785] = {
    [anon_sym_RBRACE] = ACTIONS(1593),
    [sym_comment] = ACTIONS(65),
  },
  [786] = {
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
  },
  [787] = {
    [sym__dedent] = ACTIONS(1595),
    [sym_comment] = ACTIONS(65),
  },
  [788] = {
    [sym__dedent] = ACTIONS(1072),
    [sym_string] = ACTIONS(1074),
    [sym_int] = ACTIONS(1074),
    [sym_name] = ACTIONS(1074),
    [sym_qualified_name] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_DOT] = ACTIONS(1074),
    [anon_sym_DOT_DOT] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1074),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_Prop] = ACTIONS(1074),
    [anon_sym_Set] = ACTIONS(1074),
    [anon_sym_quote] = ACTIONS(1074),
    [anon_sym_quoteTerm] = ACTIONS(1074),
    [anon_sym_unquote] = ACTIONS(1074),
    [anon_sym_record] = ACTIONS(1074),
    [anon_sym_instance] = ACTIONS(1074),
    [anon_sym_overlap] = ACTIONS(1074),
  },
  [789] = {
    [sym_comment] = ACTIONS(65),
    [anon_sym_instance] = ACTIONS(1587),
    [anon_sym_constructor] = ACTIONS(1587),
    [anon_sym_inductive] = ACTIONS(1587),
    [anon_sym_coinductive] = ACTIONS(1587),
    [anon_sym_eta_DASHequality] = ACTIONS(1587),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1587),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(14),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(8),
  [25] = {.count = 1, .reusable = false}, SHIFT(16),
  [27] = {.count = 1, .reusable = false}, SHIFT(9),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_literal, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_literal, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(22),
  [35] = {.count = 1, .reusable = false}, SHIFT(33),
  [37] = {.count = 1, .reusable = false}, SHIFT(23),
  [39] = {.count = 1, .reusable = false}, SHIFT(24),
  [41] = {.count = 1, .reusable = false}, SHIFT(25),
  [43] = {.count = 1, .reusable = false}, SHIFT(26),
  [45] = {.count = 1, .reusable = false}, SHIFT(27),
  [47] = {.count = 1, .reusable = false}, SHIFT(28),
  [49] = {.count = 1, .reusable = false}, SHIFT(38),
  [51] = {.count = 1, .reusable = false}, SHIFT(41),
  [53] = {.count = 1, .reusable = false}, SHIFT(39),
  [55] = {.count = 1, .reusable = false}, SHIFT(40),
  [57] = {.count = 1, .reusable = false}, SHIFT(42),
  [59] = {.count = 1, .reusable = false}, SHIFT(43),
  [61] = {.count = 1, .reusable = true}, SHIFT(45),
  [63] = {.count = 1, .reusable = true}, SHIFT(44),
  [65] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [67] = {.count = 1, .reusable = true}, SHIFT(46),
  [69] = {.count = 1, .reusable = true}, SHIFT(48),
  [71] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(49),
  [77] = {.count = 1, .reusable = true}, SHIFT(50),
  [79] = {.count = 1, .reusable = true}, SHIFT(53),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__expr2, 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym__expr2, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(54),
  [95] = {.count = 1, .reusable = true}, SHIFT(55),
  [97] = {.count = 1, .reusable = true}, SHIFT(56),
  [99] = {.count = 1, .reusable = true}, SHIFT(59),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [107] = {.count = 1, .reusable = false}, SHIFT(60),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__atoms1, 1),
  [111] = {.count = 1, .reusable = false}, SHIFT(65),
  [113] = {.count = 1, .reusable = false}, SHIFT(68),
  [115] = {.count = 1, .reusable = true}, SHIFT(69),
  [117] = {.count = 1, .reusable = true}, SHIFT(70),
  [119] = {.count = 1, .reusable = false}, SHIFT(71),
  [121] = {.count = 1, .reusable = false}, SHIFT(78),
  [123] = {.count = 1, .reusable = false}, SHIFT(72),
  [125] = {.count = 1, .reusable = false}, SHIFT(73),
  [127] = {.count = 1, .reusable = false}, SHIFT(74),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 2),
  [133] = {.count = 1, .reusable = false}, SHIFT(80),
  [135] = {.count = 1, .reusable = false}, SHIFT(85),
  [137] = {.count = 1, .reusable = false}, SHIFT(81),
  [139] = {.count = 1, .reusable = false}, SHIFT(82),
  [141] = {.count = 1, .reusable = false}, SHIFT(87),
  [143] = {.count = 1, .reusable = false}, SHIFT(90),
  [145] = {.count = 1, .reusable = false}, SHIFT(88),
  [147] = {.count = 1, .reusable = false}, SHIFT(89),
  [149] = {.count = 1, .reusable = true}, SHIFT(92),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [153] = {.count = 1, .reusable = true}, SHIFT(93),
  [155] = {.count = 1, .reusable = false}, SHIFT(94),
  [157] = {.count = 1, .reusable = false}, SHIFT(99),
  [159] = {.count = 1, .reusable = false}, SHIFT(95),
  [161] = {.count = 1, .reusable = false}, SHIFT(96),
  [163] = {.count = 1, .reusable = false}, SHIFT(101),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__typed_bindings1, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(23),
  [169] = {.count = 1, .reusable = false}, SHIFT(104),
  [171] = {.count = 1, .reusable = true}, SHIFT(26),
  [173] = {.count = 1, .reusable = true}, SHIFT(28),
  [175] = {.count = 1, .reusable = false}, SHIFT(106),
  [177] = {.count = 1, .reusable = false}, SHIFT(107),
  [179] = {.count = 1, .reusable = false}, SHIFT(111),
  [181] = {.count = 1, .reusable = false}, SHIFT(110),
  [183] = {.count = 1, .reusable = false}, SHIFT(119),
  [185] = {.count = 1, .reusable = false}, SHIFT(112),
  [187] = {.count = 1, .reusable = false}, SHIFT(113),
  [189] = {.count = 1, .reusable = false}, SHIFT(114),
  [191] = {.count = 1, .reusable = false}, SHIFT(115),
  [193] = {.count = 1, .reusable = false}, SHIFT(116),
  [195] = {.count = 1, .reusable = false}, SHIFT(117),
  [197] = {.count = 1, .reusable = false}, SHIFT(118),
  [199] = {.count = 1, .reusable = false}, SHIFT(122),
  [201] = {.count = 1, .reusable = false}, SHIFT(123),
  [203] = {.count = 1, .reusable = false}, SHIFT(124),
  [205] = {.count = 1, .reusable = false}, SHIFT(126),
  [207] = {.count = 1, .reusable = false}, SHIFT(128),
  [209] = {.count = 1, .reusable = false}, SHIFT(129),
  [211] = {.count = 1, .reusable = false}, SHIFT(130),
  [213] = {.count = 1, .reusable = false}, SHIFT(131),
  [215] = {.count = 1, .reusable = false}, SHIFT(132),
  [217] = {.count = 1, .reusable = false}, SHIFT(133),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_instance, 2),
  [223] = {.count = 1, .reusable = false}, SHIFT(142),
  [225] = {.count = 1, .reusable = false}, SHIFT(137),
  [227] = {.count = 1, .reusable = false}, SHIFT(138),
  [229] = {.count = 1, .reusable = false}, SHIFT(139),
  [231] = {.count = 1, .reusable = false}, SHIFT(140),
  [233] = {.count = 1, .reusable = false}, SHIFT(141),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_field, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_field, 2),
  [239] = {.count = 1, .reusable = false}, SHIFT(148),
  [241] = {.count = 1, .reusable = false}, SHIFT(147),
  [243] = {.count = 1, .reusable = false}, SHIFT(149),
  [245] = {.count = 1, .reusable = false}, SHIFT(154),
  [247] = {.count = 1, .reusable = false}, SHIFT(150),
  [249] = {.count = 1, .reusable = false}, SHIFT(151),
  [251] = {.count = 1, .reusable = false}, SHIFT(157),
  [253] = {.count = 1, .reusable = false}, SHIFT(162),
  [255] = {.count = 1, .reusable = false}, SHIFT(158),
  [257] = {.count = 1, .reusable = false}, SHIFT(159),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2),
  [263] = {.count = 1, .reusable = false}, SHIFT(166),
  [265] = {.count = 1, .reusable = false}, SHIFT(173),
  [267] = {.count = 1, .reusable = false}, SHIFT(167),
  [269] = {.count = 1, .reusable = false}, SHIFT(168),
  [271] = {.count = 1, .reusable = false}, SHIFT(177),
  [273] = {.count = 1, .reusable = false}, SHIFT(178),
  [275] = {.count = 1, .reusable = true}, SHIFT(180),
  [277] = {.count = 1, .reusable = true}, SHIFT(179),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [285] = {.count = 1, .reusable = false}, SHIFT(182),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 2),
  [289] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(183),
  [292] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(186),
  [295] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(184),
  [298] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(185),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__application, 2),
  [303] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(183),
  [306] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(186),
  [309] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(184),
  [312] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2),
  [314] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(185),
  [317] = {.count = 1, .reusable = true}, SHIFT(188),
  [319] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(2),
  [322] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(14),
  [325] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(3),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(4),
  [331] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(5),
  [334] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(6),
  [337] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(7),
  [340] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(8),
  [343] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(189),
  [346] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(9),
  [349] = {.count = 1, .reusable = false}, SHIFT(193),
  [351] = {.count = 1, .reusable = false}, SHIFT(196),
  [353] = {.count = 1, .reusable = false}, SHIFT(195),
  [355] = {.count = 1, .reusable = true}, SHIFT(197),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 1),
  [359] = {.count = 1, .reusable = true}, SHIFT(198),
  [361] = {.count = 1, .reusable = false}, SHIFT(199),
  [363] = {.count = 1, .reusable = false}, SHIFT(200),
  [365] = {.count = 1, .reusable = false}, SHIFT(203),
  [367] = {.count = 1, .reusable = false}, SHIFT(202),
  [369] = {.count = 1, .reusable = true}, SHIFT(204),
  [371] = {.count = 1, .reusable = false}, SHIFT(206),
  [373] = {.count = 1, .reusable = false}, SHIFT(209),
  [375] = {.count = 1, .reusable = false}, SHIFT(208),
  [377] = {.count = 1, .reusable = false}, SHIFT(210),
  [379] = {.count = 1, .reusable = true}, SHIFT(211),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 3),
  [385] = {.count = 1, .reusable = false}, SHIFT(213),
  [387] = {.count = 1, .reusable = false}, SHIFT(216),
  [389] = {.count = 1, .reusable = false}, SHIFT(215),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(217),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(220),
  [397] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(218),
  [400] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(219),
  [403] = {.count = 1, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(23),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(23),
  [411] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(104),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(26),
  [417] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(28),
  [420] = {.count = 1, .reusable = false}, SHIFT(222),
  [422] = {.count = 1, .reusable = false}, SHIFT(229),
  [424] = {.count = 1, .reusable = false}, SHIFT(223),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_module_assignment, 1),
  [428] = {.count = 1, .reusable = false}, SHIFT(224),
  [430] = {.count = 1, .reusable = false}, SHIFT(225),
  [432] = {.count = 1, .reusable = false}, SHIFT(226),
  [434] = {.count = 1, .reusable = false}, SHIFT(227),
  [436] = {.count = 1, .reusable = false}, SHIFT(228),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym__atom_no_curly, 3),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym__atom_no_curly, 3),
  [442] = {.count = 1, .reusable = true}, SHIFT(233),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym__record_assignments1, 1),
  [446] = {.count = 1, .reusable = true}, SHIFT(234),
  [448] = {.count = 1, .reusable = false}, SHIFT(236),
  [450] = {.count = 1, .reusable = false}, SHIFT(238),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_name, 1),
  [454] = {.count = 1, .reusable = false}, SHIFT(242),
  [456] = {.count = 1, .reusable = false}, SHIFT(239),
  [458] = {.count = 1, .reusable = false}, SHIFT(240),
  [460] = {.count = 1, .reusable = false}, SHIFT(241),
  [462] = {.count = 1, .reusable = false}, SHIFT(243),
  [464] = {.count = 1, .reusable = false}, SHIFT(233),
  [466] = {.count = 1, .reusable = false}, SHIFT(247),
  [468] = {.count = 1, .reusable = false}, SHIFT(252),
  [470] = {.count = 1, .reusable = false}, SHIFT(248),
  [472] = {.count = 1, .reusable = false}, SHIFT(249),
  [474] = {.count = 1, .reusable = false}, SHIFT(255),
  [476] = {.count = 1, .reusable = false}, SHIFT(262),
  [478] = {.count = 1, .reusable = false}, SHIFT(256),
  [480] = {.count = 1, .reusable = false}, SHIFT(257),
  [482] = {.count = 1, .reusable = true}, SHIFT(266),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_record, 3),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym_record, 3),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 1),
  [490] = {.count = 1, .reusable = true}, SHIFT(268),
  [492] = {.count = 1, .reusable = true}, SHIFT(269),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym__typed_untyped_binding1, 1),
  [496] = {.count = 1, .reusable = true}, SHIFT(272),
  [498] = {.count = 1, .reusable = true}, SHIFT(273),
  [500] = {.count = 1, .reusable = true}, SHIFT(274),
  [502] = {.count = 1, .reusable = false}, SHIFT(275),
  [504] = {.count = 1, .reusable = false}, SHIFT(282),
  [506] = {.count = 1, .reusable = false}, SHIFT(276),
  [508] = {.count = 1, .reusable = false}, SHIFT(277),
  [510] = {.count = 1, .reusable = true}, SHIFT(286),
  [512] = {.count = 1, .reusable = false}, SHIFT(287),
  [514] = {.count = 1, .reusable = false}, SHIFT(288),
  [516] = {.count = 1, .reusable = false}, SHIFT(289),
  [518] = {.count = 1, .reusable = true}, SHIFT(291),
  [520] = {.count = 1, .reusable = true}, SHIFT(290),
  [522] = {.count = 1, .reusable = true}, SHIFT(292),
  [524] = {.count = 1, .reusable = true}, SHIFT(294),
  [526] = {.count = 1, .reusable = true}, SHIFT(295),
  [528] = {.count = 1, .reusable = false}, SHIFT(296),
  [530] = {.count = 1, .reusable = false}, SHIFT(298),
  [532] = {.count = 1, .reusable = false}, SHIFT(299),
  [534] = {.count = 1, .reusable = false}, SHIFT(300),
  [536] = {.count = 1, .reusable = false}, SHIFT(303),
  [538] = {.count = 1, .reusable = false}, SHIFT(301),
  [540] = {.count = 1, .reusable = false}, SHIFT(306),
  [542] = {.count = 1, .reusable = false}, SHIFT(304),
  [544] = {.count = 1, .reusable = true}, SHIFT(307),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 1),
  [548] = {.count = 1, .reusable = true}, SHIFT(310),
  [550] = {.count = 1, .reusable = true}, SHIFT(311),
  [552] = {.count = 1, .reusable = false}, REDUCE(sym__arg_names, 1),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures1, 1),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_name, 1),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_infix, 3),
  [560] = {.count = 1, .reusable = false}, SHIFT(314),
  [562] = {.count = 1, .reusable = false}, SHIFT(315),
  [564] = {.count = 1, .reusable = false}, SHIFT(318),
  [566] = {.count = 1, .reusable = false}, SHIFT(317),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_rewrite_equations, 2),
  [570] = {.count = 1, .reusable = false}, SHIFT(319),
  [572] = {.count = 1, .reusable = false}, SHIFT(322),
  [574] = {.count = 1, .reusable = false}, SHIFT(321),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_with_expressions, 2),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 3),
  [580] = {.count = 1, .reusable = false}, SHIFT(323),
  [582] = {.count = 1, .reusable = false}, SHIFT(326),
  [584] = {.count = 1, .reusable = false}, SHIFT(325),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_rhs, 2),
  [588] = {.count = 1, .reusable = true}, SHIFT(327),
  [590] = {.count = 1, .reusable = false}, SHIFT(328),
  [592] = {.count = 1, .reusable = false}, SHIFT(332),
  [594] = {.count = 1, .reusable = false}, SHIFT(329),
  [596] = {.count = 1, .reusable = false}, SHIFT(330),
  [598] = {.count = 1, .reusable = false}, SHIFT(334),
  [600] = {.count = 1, .reusable = true}, SHIFT(335),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 2),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 3),
  [606] = {.count = 1, .reusable = false}, SHIFT(337),
  [608] = {.count = 1, .reusable = false}, SHIFT(338),
  [610] = {.count = 1, .reusable = false}, SHIFT(341),
  [612] = {.count = 1, .reusable = false}, SHIFT(340),
  [614] = {.count = 1, .reusable = false}, SHIFT(183),
  [616] = {.count = 1, .reusable = false}, SHIFT(186),
  [618] = {.count = 1, .reusable = false}, SHIFT(184),
  [620] = {.count = 1, .reusable = false}, SHIFT(185),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 3),
  [624] = {.count = 1, .reusable = true}, SHIFT(342),
  [626] = {.count = 1, .reusable = true}, SHIFT(343),
  [628] = {.count = 1, .reusable = true}, SHIFT(344),
  [630] = {.count = 1, .reusable = true}, SHIFT(345),
  [632] = {.count = 1, .reusable = true}, SHIFT(346),
  [634] = {.count = 1, .reusable = false}, SHIFT(347),
  [636] = {.count = 1, .reusable = false}, SHIFT(349),
  [638] = {.count = 1, .reusable = true}, SHIFT(351),
  [640] = {.count = 1, .reusable = false}, SHIFT(352),
  [642] = {.count = 1, .reusable = false}, SHIFT(354),
  [644] = {.count = 1, .reusable = false}, SHIFT(355),
  [646] = {.count = 1, .reusable = false}, SHIFT(362),
  [648] = {.count = 1, .reusable = false}, SHIFT(356),
  [650] = {.count = 1, .reusable = false}, SHIFT(357),
  [652] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(366),
  [655] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(369),
  [658] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(367),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(368),
  [664] = {.count = 1, .reusable = true}, SHIFT(370),
  [666] = {.count = 1, .reusable = false}, SHIFT(371),
  [668] = {.count = 1, .reusable = false}, SHIFT(373),
  [670] = {.count = 1, .reusable = false}, SHIFT(374),
  [672] = {.count = 1, .reusable = false}, SHIFT(370),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 3),
  [676] = {.count = 1, .reusable = true}, SHIFT(380),
  [678] = {.count = 1, .reusable = false}, SHIFT(381),
  [680] = {.count = 1, .reusable = false}, SHIFT(383),
  [682] = {.count = 1, .reusable = false}, SHIFT(384),
  [684] = {.count = 1, .reusable = false}, SHIFT(387),
  [686] = {.count = 1, .reusable = false}, SHIFT(386),
  [688] = {.count = 1, .reusable = false}, SHIFT(388),
  [690] = {.count = 1, .reusable = false}, SHIFT(395),
  [692] = {.count = 1, .reusable = false}, SHIFT(394),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym_import_directive, 1),
  [696] = {.count = 1, .reusable = true}, SHIFT(396),
  [698] = {.count = 1, .reusable = true}, SHIFT(397),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_module_assignment, 2),
  [702] = {.count = 1, .reusable = true}, SHIFT(226),
  [704] = {.count = 1, .reusable = true}, SHIFT(227),
  [706] = {.count = 1, .reusable = true}, SHIFT(228),
  [708] = {.count = 1, .reusable = false}, REDUCE(sym__open_args1, 1),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym__atom_no_curly, 4),
  [712] = {.count = 1, .reusable = false}, REDUCE(sym__atom_no_curly, 4),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym__record_assignments1, 2),
  [716] = {.count = 1, .reusable = true}, SHIFT(403),
  [718] = {.count = 1, .reusable = false}, SHIFT(403),
  [720] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 2),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym__atom_no_curly, 1),
  [724] = {.count = 1, .reusable = true}, SHIFT(408),
  [726] = {.count = 1, .reusable = true}, SHIFT(409),
  [728] = {.count = 1, .reusable = true}, SHIFT(410),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym__field_assignments1, 1),
  [732] = {.count = 1, .reusable = true}, SHIFT(411),
  [734] = {.count = 1, .reusable = false}, SHIFT(413),
  [736] = {.count = 1, .reusable = false}, SHIFT(416),
  [738] = {.count = 1, .reusable = false}, SHIFT(415),
  [740] = {.count = 1, .reusable = true}, SHIFT(417),
  [742] = {.count = 1, .reusable = true}, SHIFT(419),
  [744] = {.count = 1, .reusable = false}, SHIFT(420),
  [746] = {.count = 1, .reusable = false}, SHIFT(423),
  [748] = {.count = 1, .reusable = false}, SHIFT(422),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 4),
  [752] = {.count = 1, .reusable = true}, SHIFT(424),
  [754] = {.count = 1, .reusable = true}, SHIFT(425),
  [756] = {.count = 1, .reusable = false}, SHIFT(426),
  [758] = {.count = 1, .reusable = false}, SHIFT(430),
  [760] = {.count = 1, .reusable = false}, SHIFT(427),
  [762] = {.count = 1, .reusable = false}, SHIFT(428),
  [764] = {.count = 1, .reusable = false}, SHIFT(432),
  [766] = {.count = 1, .reusable = true}, SHIFT(433),
  [768] = {.count = 1, .reusable = false}, SHIFT(434),
  [770] = {.count = 1, .reusable = false}, SHIFT(435),
  [772] = {.count = 1, .reusable = false}, SHIFT(436),
  [774] = {.count = 1, .reusable = false}, SHIFT(437),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym_record, 4),
  [778] = {.count = 1, .reusable = false}, REDUCE(sym_record, 4),
  [780] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(119),
  [783] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(112),
  [786] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(113),
  [789] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(122),
  [792] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(115),
  [795] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(116),
  [798] = {.count = 1, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 4),
  [802] = {.count = 1, .reusable = true}, SHIFT(445),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_data, 4),
  [806] = {.count = 1, .reusable = false}, REDUCE(sym_data, 4),
  [808] = {.count = 1, .reusable = true}, SHIFT(447),
  [810] = {.count = 1, .reusable = false}, SHIFT(448),
  [812] = {.count = 1, .reusable = false}, SHIFT(451),
  [814] = {.count = 1, .reusable = false}, SHIFT(450),
  [816] = {.count = 1, .reusable = true}, SHIFT(452),
  [818] = {.count = 1, .reusable = false}, SHIFT(453),
  [820] = {.count = 1, .reusable = false}, SHIFT(457),
  [822] = {.count = 1, .reusable = false}, SHIFT(454),
  [824] = {.count = 1, .reusable = false}, SHIFT(455),
  [826] = {.count = 1, .reusable = false}, SHIFT(459),
  [828] = {.count = 1, .reusable = false}, SHIFT(461),
  [830] = {.count = 1, .reusable = false}, SHIFT(462),
  [832] = {.count = 1, .reusable = false}, SHIFT(464),
  [834] = {.count = 1, .reusable = false}, SHIFT(465),
  [836] = {.count = 1, .reusable = false}, SHIFT(467),
  [838] = {.count = 1, .reusable = true}, REDUCE(sym__declarations0, 3),
  [840] = {.count = 1, .reusable = false}, REDUCE(sym__declarations0, 3),
  [842] = {.count = 1, .reusable = true}, SHIFT(471),
  [844] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_name, 2),
  [846] = {.count = 1, .reusable = false}, SHIFT(472),
  [848] = {.count = 1, .reusable = false}, SHIFT(473),
  [850] = {.count = 1, .reusable = false}, SHIFT(474),
  [852] = {.count = 1, .reusable = true}, SHIFT(475),
  [854] = {.count = 1, .reusable = false}, SHIFT(476),
  [856] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_names1, 1),
  [858] = {.count = 1, .reusable = false}, SHIFT(477),
  [860] = {.count = 1, .reusable = false}, SHIFT(478),
  [862] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 2),
  [864] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 2),
  [866] = {.count = 1, .reusable = true}, SHIFT(480),
  [868] = {.count = 1, .reusable = false}, SHIFT(481),
  [870] = {.count = 1, .reusable = false}, SHIFT(488),
  [872] = {.count = 1, .reusable = false}, SHIFT(482),
  [874] = {.count = 1, .reusable = false}, SHIFT(483),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures_block, 3),
  [878] = {.count = 1, .reusable = false}, REDUCE(sym__arg_type_signatures_block, 3),
  [880] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(142),
  [883] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(137),
  [886] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(138),
  [889] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(139),
  [892] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2),
  [894] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2),
  [896] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(142),
  [899] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(137),
  [902] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(138),
  [905] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(139),
  [908] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(140),
  [911] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(141),
  [914] = {.count = 1, .reusable = true}, REDUCE(aux_sym_infix_repeat1, 2),
  [916] = {.count = 2, .reusable = false}, REDUCE(aux_sym_infix_repeat1, 2), SHIFT_REPEAT(314),
  [919] = {.count = 2, .reusable = false}, REDUCE(aux_sym_infix_repeat1, 2), SHIFT_REPEAT(147),
  [922] = {.count = 1, .reusable = true}, SHIFT(492),
  [924] = {.count = 1, .reusable = false}, SHIFT(493),
  [926] = {.count = 1, .reusable = false}, SHIFT(495),
  [928] = {.count = 1, .reusable = true}, SHIFT(496),
  [930] = {.count = 1, .reusable = false}, SHIFT(497),
  [932] = {.count = 1, .reusable = false}, SHIFT(499),
  [934] = {.count = 1, .reusable = true}, SHIFT(500),
  [936] = {.count = 1, .reusable = false}, SHIFT(501),
  [938] = {.count = 1, .reusable = false}, SHIFT(503),
  [940] = {.count = 1, .reusable = false}, SHIFT(505),
  [942] = {.count = 1, .reusable = false}, SHIFT(508),
  [944] = {.count = 1, .reusable = false}, SHIFT(507),
  [946] = {.count = 1, .reusable = true}, SHIFT(509),
  [948] = {.count = 1, .reusable = true}, SHIFT(510),
  [950] = {.count = 1, .reusable = true}, SHIFT(511),
  [952] = {.count = 1, .reusable = false}, SHIFT(512),
  [954] = {.count = 1, .reusable = false}, SHIFT(514),
  [956] = {.count = 1, .reusable = true}, SHIFT(518),
  [958] = {.count = 1, .reusable = false}, SHIFT(518),
  [960] = {.count = 1, .reusable = true}, SHIFT(520),
  [962] = {.count = 1, .reusable = true}, SHIFT(521),
  [964] = {.count = 1, .reusable = false}, SHIFT(521),
  [966] = {.count = 1, .reusable = false}, SHIFT(523),
  [968] = {.count = 1, .reusable = false}, SHIFT(526),
  [970] = {.count = 1, .reusable = false}, SHIFT(525),
  [972] = {.count = 1, .reusable = true}, SHIFT(527),
  [974] = {.count = 1, .reusable = false}, SHIFT(528),
  [976] = {.count = 1, .reusable = false}, SHIFT(533),
  [978] = {.count = 1, .reusable = false}, SHIFT(529),
  [980] = {.count = 1, .reusable = false}, SHIFT(530),
  [982] = {.count = 1, .reusable = false}, SHIFT(535),
  [984] = {.count = 1, .reusable = false}, SHIFT(536),
  [986] = {.count = 1, .reusable = false}, SHIFT(539),
  [988] = {.count = 1, .reusable = false}, SHIFT(538),
  [990] = {.count = 1, .reusable = true}, SHIFT(540),
  [992] = {.count = 1, .reusable = false}, SHIFT(540),
  [994] = {.count = 1, .reusable = true}, SHIFT(224),
  [996] = {.count = 1, .reusable = true}, SHIFT(542),
  [998] = {.count = 1, .reusable = true}, SHIFT(543),
  [1000] = {.count = 1, .reusable = true}, SHIFT(544),
  [1002] = {.count = 1, .reusable = false}, SHIFT(544),
  [1004] = {.count = 1, .reusable = true}, SHIFT(546),
  [1006] = {.count = 1, .reusable = false}, SHIFT(547),
  [1008] = {.count = 1, .reusable = false}, SHIFT(549),
  [1010] = {.count = 1, .reusable = true}, SHIFT(550),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym_field_assignment, 3),
  [1014] = {.count = 1, .reusable = true}, SHIFT(551),
  [1016] = {.count = 1, .reusable = false}, SHIFT(552),
  [1018] = {.count = 1, .reusable = false}, SHIFT(554),
  [1020] = {.count = 1, .reusable = false}, SHIFT(557),
  [1022] = {.count = 1, .reusable = false}, SHIFT(555),
  [1024] = {.count = 1, .reusable = false}, SHIFT(556),
  [1026] = {.count = 1, .reusable = false}, SHIFT(559),
  [1028] = {.count = 1, .reusable = false}, SHIFT(560),
  [1030] = {.count = 1, .reusable = true}, REDUCE(sym_module_assignment, 3),
  [1032] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(222),
  [1035] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(229),
  [1038] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(223),
  [1041] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(225),
  [1044] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_assignment_repeat1, 2),
  [1046] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_assignment_repeat1, 2), SHIFT_REPEAT(226),
  [1049] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_assignment_repeat1, 2), SHIFT_REPEAT(227),
  [1052] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_assignment_repeat1, 2), SHIFT_REPEAT(228),
  [1055] = {.count = 1, .reusable = true}, REDUCE(aux_sym__record_assignments1_repeat1, 2),
  [1057] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_assignments1_repeat1, 2), SHIFT_REPEAT(234),
  [1060] = {.count = 1, .reusable = true}, SHIFT(562),
  [1062] = {.count = 1, .reusable = true}, SHIFT(563),
  [1064] = {.count = 1, .reusable = true}, SHIFT(564),
  [1066] = {.count = 1, .reusable = true}, SHIFT(565),
  [1068] = {.count = 1, .reusable = true}, SHIFT(566),
  [1070] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 3),
  [1072] = {.count = 1, .reusable = true}, REDUCE(sym__atom_no_curly, 5),
  [1074] = {.count = 1, .reusable = false}, REDUCE(sym__atom_no_curly, 5),
  [1076] = {.count = 1, .reusable = true}, REDUCE(sym__field_assignments1, 2),
  [1078] = {.count = 1, .reusable = true}, SHIFT(570),
  [1080] = {.count = 1, .reusable = false}, SHIFT(571),
  [1082] = {.count = 1, .reusable = false}, SHIFT(573),
  [1084] = {.count = 1, .reusable = true}, SHIFT(576),
  [1086] = {.count = 1, .reusable = false}, SHIFT(577),
  [1088] = {.count = 1, .reusable = false}, SHIFT(579),
  [1090] = {.count = 1, .reusable = true}, REDUCE(sym_record, 5),
  [1092] = {.count = 1, .reusable = false}, REDUCE(sym_record, 5),
  [1094] = {.count = 1, .reusable = false}, SHIFT(581),
  [1096] = {.count = 1, .reusable = false}, SHIFT(584),
  [1098] = {.count = 1, .reusable = false}, SHIFT(583),
  [1100] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 2),
  [1102] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 2),
  [1104] = {.count = 1, .reusable = true}, SHIFT(585),
  [1106] = {.count = 1, .reusable = false}, SHIFT(586),
  [1108] = {.count = 1, .reusable = true}, REDUCE(sym_record_induction, 1),
  [1110] = {.count = 1, .reusable = true}, REDUCE(sym_record_eta, 1),
  [1112] = {.count = 1, .reusable = true}, SHIFT(587),
  [1114] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 1),
  [1116] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 1),
  [1118] = {.count = 2, .reusable = false}, REDUCE(sym__record_directives1, 1), REDUCE(aux_sym__record_directives1_repeat1, 1),
  [1121] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1),
  [1123] = {.count = 1, .reusable = true}, SHIFT(589),
  [1125] = {.count = 1, .reusable = true}, SHIFT(590),
  [1127] = {.count = 1, .reusable = true}, SHIFT(435),
  [1129] = {.count = 1, .reusable = true}, SHIFT(436),
  [1131] = {.count = 1, .reusable = true}, SHIFT(437),
  [1133] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 5),
  [1135] = {.count = 1, .reusable = true}, SHIFT(594),
  [1137] = {.count = 1, .reusable = true}, SHIFT(595),
  [1139] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 5),
  [1141] = {.count = 1, .reusable = true}, SHIFT(596),
  [1143] = {.count = 1, .reusable = true}, REDUCE(sym_data, 5),
  [1145] = {.count = 1, .reusable = false}, REDUCE(sym_data, 5),
  [1147] = {.count = 1, .reusable = true}, SHIFT(597),
  [1149] = {.count = 1, .reusable = false}, SHIFT(598),
  [1151] = {.count = 1, .reusable = false}, SHIFT(600),
  [1153] = {.count = 1, .reusable = false}, SHIFT(601),
  [1155] = {.count = 1, .reusable = false}, SHIFT(604),
  [1157] = {.count = 1, .reusable = false}, SHIFT(603),
  [1159] = {.count = 1, .reusable = true}, SHIFT(606),
  [1161] = {.count = 1, .reusable = true}, SHIFT(608),
  [1163] = {.count = 1, .reusable = true}, SHIFT(609),
  [1165] = {.count = 1, .reusable = true}, SHIFT(611),
  [1167] = {.count = 1, .reusable = true}, SHIFT(612),
  [1169] = {.count = 1, .reusable = true}, SHIFT(613),
  [1171] = {.count = 1, .reusable = true}, SHIFT(615),
  [1173] = {.count = 1, .reusable = true}, SHIFT(616),
  [1175] = {.count = 1, .reusable = true}, SHIFT(617),
  [1177] = {.count = 1, .reusable = false}, SHIFT(619),
  [1179] = {.count = 1, .reusable = false}, SHIFT(618),
  [1181] = {.count = 1, .reusable = false}, SHIFT(620),
  [1183] = {.count = 1, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2),
  [1185] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 3),
  [1187] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(476),
  [1190] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(301),
  [1193] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(478),
  [1196] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(304),
  [1199] = {.count = 1, .reusable = true}, SHIFT(621),
  [1201] = {.count = 1, .reusable = false}, SHIFT(623),
  [1203] = {.count = 1, .reusable = false}, SHIFT(626),
  [1205] = {.count = 1, .reusable = false}, SHIFT(625),
  [1207] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 3),
  [1209] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 3),
  [1211] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [1213] = {.count = 1, .reusable = false}, SHIFT(627),
  [1215] = {.count = 1, .reusable = true}, SHIFT(627),
  [1217] = {.count = 1, .reusable = false}, SHIFT(628),
  [1219] = {.count = 1, .reusable = false}, SHIFT(633),
  [1221] = {.count = 1, .reusable = false}, SHIFT(629),
  [1223] = {.count = 1, .reusable = false}, SHIFT(630),
  [1225] = {.count = 1, .reusable = false}, SHIFT(635),
  [1227] = {.count = 1, .reusable = true}, SHIFT(637),
  [1229] = {.count = 1, .reusable = false}, SHIFT(637),
  [1231] = {.count = 1, .reusable = true}, SHIFT(639),
  [1233] = {.count = 1, .reusable = false}, SHIFT(639),
  [1235] = {.count = 1, .reusable = true}, SHIFT(641),
  [1237] = {.count = 1, .reusable = false}, SHIFT(641),
  [1239] = {.count = 1, .reusable = true}, SHIFT(643),
  [1241] = {.count = 1, .reusable = false}, SHIFT(644),
  [1243] = {.count = 1, .reusable = false}, SHIFT(646),
  [1245] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 4),
  [1247] = {.count = 1, .reusable = true}, SHIFT(647),
  [1249] = {.count = 1, .reusable = false}, SHIFT(647),
  [1251] = {.count = 1, .reusable = true}, SHIFT(649),
  [1253] = {.count = 1, .reusable = true}, SHIFT(650),
  [1255] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 5),
  [1257] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 5),
  [1259] = {.count = 1, .reusable = true}, SHIFT(651),
  [1261] = {.count = 1, .reusable = true}, SHIFT(652),
  [1263] = {.count = 1, .reusable = false}, SHIFT(653),
  [1265] = {.count = 1, .reusable = false}, SHIFT(655),
  [1267] = {.count = 1, .reusable = false}, SHIFT(657),
  [1269] = {.count = 1, .reusable = false}, SHIFT(660),
  [1271] = {.count = 1, .reusable = false}, SHIFT(659),
  [1273] = {.count = 1, .reusable = true}, SHIFT(661),
  [1275] = {.count = 1, .reusable = false}, SHIFT(662),
  [1277] = {.count = 1, .reusable = false}, SHIFT(664),
  [1279] = {.count = 1, .reusable = true}, SHIFT(665),
  [1281] = {.count = 1, .reusable = true}, SHIFT(666),
  [1283] = {.count = 1, .reusable = true}, SHIFT(667),
  [1285] = {.count = 1, .reusable = false}, SHIFT(667),
  [1287] = {.count = 1, .reusable = true}, SHIFT(669),
  [1289] = {.count = 1, .reusable = false}, SHIFT(669),
  [1291] = {.count = 1, .reusable = true}, REDUCE(sym_import_directive, 3),
  [1293] = {.count = 1, .reusable = false}, SHIFT(671),
  [1295] = {.count = 1, .reusable = true}, SHIFT(672),
  [1297] = {.count = 1, .reusable = true}, REDUCE(sym__comma_import_names1, 1),
  [1299] = {.count = 1, .reusable = true}, SHIFT(674),
  [1301] = {.count = 1, .reusable = true}, SHIFT(675),
  [1303] = {.count = 1, .reusable = false}, SHIFT(676),
  [1305] = {.count = 1, .reusable = true}, SHIFT(677),
  [1307] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 4),
  [1309] = {.count = 1, .reusable = true}, SHIFT(682),
  [1311] = {.count = 1, .reusable = true}, REDUCE(aux_sym__field_assignments1_repeat1, 2),
  [1313] = {.count = 2, .reusable = true}, REDUCE(aux_sym__field_assignments1_repeat1, 2), SHIFT_REPEAT(411),
  [1316] = {.count = 1, .reusable = true}, SHIFT(683),
  [1318] = {.count = 1, .reusable = false}, SHIFT(683),
  [1320] = {.count = 1, .reusable = true}, SHIFT(685),
  [1322] = {.count = 1, .reusable = false}, SHIFT(685),
  [1324] = {.count = 1, .reusable = true}, REDUCE(sym_record, 6),
  [1326] = {.count = 1, .reusable = false}, REDUCE(sym_record, 6),
  [1328] = {.count = 1, .reusable = true}, SHIFT(687),
  [1330] = {.count = 1, .reusable = false}, SHIFT(688),
  [1332] = {.count = 1, .reusable = false}, SHIFT(690),
  [1334] = {.count = 1, .reusable = false}, SHIFT(691),
  [1336] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor, 2),
  [1338] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 3),
  [1340] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 3),
  [1342] = {.count = 1, .reusable = true}, SHIFT(692),
  [1344] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 2),
  [1346] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 2),
  [1348] = {.count = 2, .reusable = false}, REDUCE(sym__record_directives1, 2), REDUCE(aux_sym__record_directives1_repeat1, 2),
  [1351] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [1353] = {.count = 1, .reusable = true}, SHIFT(693),
  [1355] = {.count = 2, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1), REDUCE(sym__record_directives1, 2),
  [1358] = {.count = 1, .reusable = true}, SHIFT(694),
  [1360] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(695),
  [1363] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(435),
  [1366] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(436),
  [1369] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(437),
  [1372] = {.count = 1, .reusable = true}, REDUCE(sym_data, 6),
  [1374] = {.count = 1, .reusable = false}, REDUCE(sym_data, 6),
  [1376] = {.count = 1, .reusable = true}, SHIFT(698),
  [1378] = {.count = 1, .reusable = true}, SHIFT(699),
  [1380] = {.count = 1, .reusable = false}, SHIFT(699),
  [1382] = {.count = 1, .reusable = true}, SHIFT(701),
  [1384] = {.count = 1, .reusable = false}, SHIFT(702),
  [1386] = {.count = 1, .reusable = false}, SHIFT(704),
  [1388] = {.count = 1, .reusable = true}, SHIFT(705),
  [1390] = {.count = 1, .reusable = true}, SHIFT(706),
  [1392] = {.count = 1, .reusable = true}, SHIFT(711),
  [1394] = {.count = 1, .reusable = true}, SHIFT(713),
  [1396] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 4),
  [1398] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(619),
  [1401] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2),
  [1403] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(620),
  [1406] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 4),
  [1408] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 4),
  [1410] = {.count = 1, .reusable = true}, SHIFT(715),
  [1412] = {.count = 1, .reusable = false}, SHIFT(716),
  [1414] = {.count = 1, .reusable = false}, SHIFT(718),
  [1416] = {.count = 1, .reusable = false}, SHIFT(720),
  [1418] = {.count = 1, .reusable = false}, SHIFT(723),
  [1420] = {.count = 1, .reusable = false}, SHIFT(722),
  [1422] = {.count = 1, .reusable = false}, REDUCE(sym__expr1, 2),
  [1424] = {.count = 1, .reusable = false}, REDUCE(sym__application, 2),
  [1426] = {.count = 1, .reusable = true}, SHIFT(724),
  [1428] = {.count = 1, .reusable = true}, SHIFT(725),
  [1430] = {.count = 1, .reusable = true}, SHIFT(726),
  [1432] = {.count = 1, .reusable = true}, SHIFT(727),
  [1434] = {.count = 1, .reusable = false}, SHIFT(727),
  [1436] = {.count = 1, .reusable = true}, SHIFT(729),
  [1438] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 6),
  [1440] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 6),
  [1442] = {.count = 1, .reusable = true}, SHIFT(730),
  [1444] = {.count = 1, .reusable = false}, SHIFT(730),
  [1446] = {.count = 1, .reusable = true}, SHIFT(732),
  [1448] = {.count = 1, .reusable = false}, SHIFT(733),
  [1450] = {.count = 1, .reusable = false}, SHIFT(735),
  [1452] = {.count = 1, .reusable = true}, SHIFT(736),
  [1454] = {.count = 1, .reusable = false}, SHIFT(736),
  [1456] = {.count = 1, .reusable = true}, SHIFT(738),
  [1458] = {.count = 1, .reusable = true}, SHIFT(739),
  [1460] = {.count = 1, .reusable = true}, REDUCE(sym__import_name, 2),
  [1462] = {.count = 1, .reusable = false}, SHIFT(740),
  [1464] = {.count = 1, .reusable = true}, REDUCE(sym__comma_import_names1, 2),
  [1466] = {.count = 1, .reusable = true}, REDUCE(sym_import_directive, 4),
  [1468] = {.count = 1, .reusable = false}, SHIFT(742),
  [1470] = {.count = 1, .reusable = true}, SHIFT(743),
  [1472] = {.count = 1, .reusable = true}, SHIFT(745),
  [1474] = {.count = 1, .reusable = true}, SHIFT(747),
  [1476] = {.count = 1, .reusable = true}, SHIFT(748),
  [1478] = {.count = 1, .reusable = true}, SHIFT(749),
  [1480] = {.count = 1, .reusable = true}, SHIFT(750),
  [1482] = {.count = 1, .reusable = false}, SHIFT(750),
  [1484] = {.count = 1, .reusable = false}, SHIFT(752),
  [1486] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 4),
  [1488] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 4),
  [1490] = {.count = 1, .reusable = true}, SHIFT(691),
  [1492] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 3),
  [1494] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 3),
  [1496] = {.count = 2, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2), REDUCE(sym__record_directives1, 3),
  [1499] = {.count = 1, .reusable = true}, SHIFT(753),
  [1501] = {.count = 1, .reusable = true}, SHIFT(754),
  [1503] = {.count = 1, .reusable = true}, REDUCE(sym_record, 7),
  [1505] = {.count = 1, .reusable = false}, REDUCE(sym_record, 7),
  [1507] = {.count = 1, .reusable = true}, REDUCE(sym_data, 7),
  [1509] = {.count = 1, .reusable = false}, REDUCE(sym_data, 7),
  [1511] = {.count = 1, .reusable = true}, SHIFT(755),
  [1513] = {.count = 1, .reusable = true}, SHIFT(756),
  [1515] = {.count = 1, .reusable = false}, SHIFT(756),
  [1517] = {.count = 1, .reusable = true}, SHIFT(759),
  [1519] = {.count = 1, .reusable = true}, SHIFT(761),
  [1521] = {.count = 1, .reusable = true}, SHIFT(762),
  [1523] = {.count = 1, .reusable = true}, SHIFT(763),
  [1525] = {.count = 1, .reusable = true}, SHIFT(764),
  [1527] = {.count = 1, .reusable = false}, SHIFT(764),
  [1529] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 3),
  [1531] = {.count = 1, .reusable = true}, SHIFT(766),
  [1533] = {.count = 1, .reusable = false}, SHIFT(767),
  [1535] = {.count = 1, .reusable = false}, SHIFT(769),
  [1537] = {.count = 1, .reusable = true}, SHIFT(770),
  [1539] = {.count = 1, .reusable = true}, SHIFT(771),
  [1541] = {.count = 1, .reusable = true}, SHIFT(772),
  [1543] = {.count = 1, .reusable = false}, SHIFT(772),
  [1545] = {.count = 1, .reusable = true}, SHIFT(774),
  [1547] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_import_names1_repeat1, 2),
  [1549] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_import_names1_repeat1, 2), SHIFT_REPEAT(672),
  [1552] = {.count = 1, .reusable = true}, REDUCE(sym_renaming, 3),
  [1554] = {.count = 1, .reusable = false}, SHIFT(775),
  [1556] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_directive_repeat1, 2),
  [1558] = {.count = 1, .reusable = true}, REDUCE(sym_import_directive, 5),
  [1560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_directive_repeat1, 2), SHIFT_REPEAT(677),
  [1563] = {.count = 1, .reusable = true}, SHIFT(776),
  [1565] = {.count = 1, .reusable = true}, SHIFT(777),
  [1567] = {.count = 1, .reusable = true}, SHIFT(778),
  [1569] = {.count = 1, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [1571] = {.count = 1, .reusable = true}, SHIFT(779),
  [1573] = {.count = 1, .reusable = true}, SHIFT(780),
  [1575] = {.count = 1, .reusable = true}, SHIFT(782),
  [1577] = {.count = 1, .reusable = true}, SHIFT(783),
  [1579] = {.count = 1, .reusable = true}, SHIFT(784),
  [1581] = {.count = 1, .reusable = false}, SHIFT(784),
  [1583] = {.count = 1, .reusable = true}, SHIFT(786),
  [1585] = {.count = 1, .reusable = true}, REDUCE(sym_renaming, 4),
  [1587] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor_instance, 5),
  [1589] = {.count = 1, .reusable = false}, REDUCE(sym_record_constructor_instance, 5),
  [1591] = {.count = 1, .reusable = false}, SHIFT(787),
  [1593] = {.count = 1, .reusable = true}, SHIFT(788),
  [1595] = {.count = 1, .reusable = true}, SHIFT(789),
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
