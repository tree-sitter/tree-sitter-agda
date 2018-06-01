#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 791
#define SYMBOL_COUNT 128
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
  aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH = 6,
  aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH = 7,
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
  sym_integer = 55,
  sym_literal = 56,
  sym_anonymous_name = 57,
  sym__binding_name = 58,
  sym__maybe_dotted_name = 59,
  sym__maybe_dotted_names1 = 60,
  sym__arg_names = 61,
  sym_arg_name = 62,
  sym_expr = 63,
  sym__expr1 = 64,
  sym__application = 65,
  sym__expr2 = 66,
  sym__atoms1 = 67,
  sym_atom = 68,
  sym__atom_curly = 69,
  sym__atom_no_curly = 70,
  sym__record_assignments1 = 71,
  sym__record_assignment = 72,
  sym_module_assignment = 73,
  sym__field_assignments1 = 74,
  sym_field_assignment = 75,
  sym__typed_bindings1 = 76,
  sym_untyped_binding = 77,
  sym_typed_binding = 78,
  sym__typed_untyped_binding1 = 79,
  sym__open_args1 = 80,
  sym_import_directive = 81,
  sym_renaming = 82,
  sym__import_name = 83,
  sym__comma_import_names1 = 84,
  sym_function_clause = 85,
  sym_lhs = 86,
  sym_rewrite_equations = 87,
  sym_with_expressions = 88,
  sym_rhs = 89,
  sym_where_clause = 90,
  sym_data = 91,
  sym_data_signature_only = 92,
  sym_record = 93,
  sym_record_signature_only = 94,
  sym_record_declarations_block = 95,
  sym__record_directives1 = 96,
  sym_record_constructor_instance = 97,
  sym_record_constructor = 98,
  sym__record_directive = 99,
  sym_record_induction = 100,
  sym_record_eta = 101,
  sym_field = 102,
  sym__arg_type_signatures_block = 103,
  sym__arg_type_signatures1 = 104,
  sym_arg_type_signature = 105,
  sym__declaration = 106,
  sym__declaration_block = 107,
  sym_infix = 108,
  sym_instance = 109,
  sym__declarations0 = 110,
  sym__declarations1 = 111,
  aux_sym__maybe_dotted_names1_repeat1 = 112,
  aux_sym__arg_names_repeat1 = 113,
  aux_sym_arg_name_repeat1 = 114,
  aux_sym__expr1_repeat1 = 115,
  aux_sym__application_repeat1 = 116,
  aux_sym__record_assignments1_repeat1 = 117,
  aux_sym_module_assignment_repeat1 = 118,
  aux_sym__field_assignments1_repeat1 = 119,
  aux_sym__typed_bindings1_repeat1 = 120,
  aux_sym__typed_untyped_binding1_repeat1 = 121,
  aux_sym_import_directive_repeat1 = 122,
  aux_sym__comma_import_names1_repeat1 = 123,
  aux_sym__record_directives1_repeat1 = 124,
  aux_sym__arg_type_signatures1_repeat1 = 125,
  aux_sym_infix_repeat1 = 126,
  aux_sym__declarations1_repeat1 = 127,
};

static const char *ts_symbol_names[] = {
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [ts_builtin_sym_end] = "END",
  [sym__const_forall] = "_const_forall",
  [sym__const_right_arrow] = "_const_right_arrow",
  [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = "/\\-?(0x[0-9a-fA-F]+|[0-9]+)/",
  [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = "/\\\".*\\\"/",
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
  [sym_integer] = "integer",
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
  [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = {
    .visible = false,
    .named = false,
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
  [sym_integer] = {
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
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '?')
        ADVANCE(18);
      if (lookahead == 'P')
        ADVANCE(19);
      if (lookahead == 'S')
        ADVANCE(23);
      if (lookahead == '\\')
        SKIP(26);
      if (lookahead == '_')
        ADVANCE(27);
      if (lookahead == 'c')
        ADVANCE(28);
      if (lookahead == 'd')
        ADVANCE(52);
      if (lookahead == 'e')
        ADVANCE(56);
      if (lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'h')
        ADVANCE(78);
      if (lookahead == 'i')
        ADVANCE(84);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 'o')
        ADVANCE(125);
      if (lookahead == 'p')
        ADVANCE(132);
      if (lookahead == 'q')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(147);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'u')
        ADVANCE(166);
      if (lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '{')
        ADVANCE(185);
      if (lookahead == '|')
        ADVANCE(195);
      if (lookahead == '}')
        ADVANCE(196);
      if (lookahead == 8594)
        ADVANCE(12);
      if (lookahead == 8704)
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
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
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH);
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
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == '>')
        ADVANCE(12);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH);
      if (lookahead == 'x')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__const_right_arrow);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 19:
      if (lookahead == 'r')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'o')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'p')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_Prop);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 't')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 26:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 28:
      if (lookahead == 'o')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'd')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'a')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 't')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'a')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_codata);
      END_STATE();
    case 34:
      if (lookahead == 'n')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'd')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'u')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'c')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 't')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'i')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'v')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_coinductive);
      END_STATE();
    case 43:
      if (lookahead == 's')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 't')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'r')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'u')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'c')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 't')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'o')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'r')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 52:
      if (lookahead == 'a')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'a')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 56:
      if (lookahead == 't')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == '-')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'e')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'q')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'u')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'a')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'l')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'i')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 't')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'y')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_eta_DASHequality);
      END_STATE();
    case 68:
      if (lookahead == 'i')
        ADVANCE(69);
      if (lookahead == 'o')
        ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'e')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'l')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'd')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 73:
      if (lookahead == 'r')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'a')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'l')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'l')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__const_forall);
      END_STATE();
    case 78:
      if (lookahead == 'i')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'd')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'i')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'n')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'g')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 84:
      if (lookahead == 'n')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'f')
        ADVANCE(93);
      if (lookahead == 's')
        ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'c')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 't')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'i')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'v')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_inductive);
      END_STATE();
    case 93:
      if (lookahead == 'i')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'x')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l')
        ADVANCE(96);
      if (lookahead == 'r')
        ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_infixl);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_infixr);
      END_STATE();
    case 98:
      if (lookahead == 't')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'a')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'n')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'c')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'e')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 104:
      if (lookahead == 'o')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'd')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'u')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'l')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 110:
      if (lookahead == 'o')
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
      if (lookahead == 't')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'a')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == '-')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'e')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'q')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'u')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'a')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'l')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'i')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 't')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'y')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_no_DASHeta_DASHequality);
      END_STATE();
    case 125:
      if (lookahead == 'v')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'e')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'r')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'l')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'a')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'p')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_overlap);
      END_STATE();
    case 132:
      if (lookahead == 'u')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'b')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'l')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'i')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'c')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 138:
      if (lookahead == 'u')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'o')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'e')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == 'T')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'e')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'r')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'm')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      END_STATE();
    case 147:
      if (lookahead == 'e')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'c')
        ADVANCE(149);
      if (lookahead == 'n')
        ADVANCE(153);
      if (lookahead == 'w')
        ADVANCE(159);
      END_STATE();
    case 149:
      if (lookahead == 'o')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'r')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'd')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 153:
      if (lookahead == 'a')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'm')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'i')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'n')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'g')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_renaming);
      END_STATE();
    case 159:
      if (lookahead == 'r')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'i')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'e')
        ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 164:
      if (lookahead == 'o')
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 166:
      if (lookahead == 'n')
        ADVANCE(167);
      if (lookahead == 's')
        ADVANCE(173);
      END_STATE();
    case 167:
      if (lookahead == 'q')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'o')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'e')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_unquote);
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
      if (lookahead == 'g')
        ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 177:
      if (lookahead == 'h')
        ADVANCE(178);
      if (lookahead == 'i')
        ADVANCE(182);
      END_STATE();
    case 178:
      if (lookahead == 'e')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'r')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 182:
      if (lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'h')
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(186);
      if (lookahead == '{')
        ADVANCE(194);
      END_STATE();
    case 186:
      if (lookahead == '#')
        ADVANCE(187);
      if (lookahead != 0)
        ADVANCE(191);
      END_STATE();
    case 187:
      if (lookahead == '#')
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == '-')
        ADVANCE(189);
      if (lookahead != 0)
        ADVANCE(187);
      END_STATE();
    case 189:
      if (lookahead == '}')
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(187);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_pragma);
      END_STATE();
    case 191:
      if (lookahead == '-')
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(191);
      END_STATE();
    case 192:
      if (lookahead == '}')
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}')
        ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 198:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(220);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'c')
        ADVANCE(222);
      if (lookahead == 'd')
        ADVANCE(228);
      if (lookahead == 'f')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if ((lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(200);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == '0')
        ADVANCE(208);
      if (('1' <= lookahead && lookahead <= '9'))
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
        ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(201);
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
        ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\')
        ADVANCE(202);
      if (lookahead == '_')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(200);
      END_STATE();
    case 203:
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
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(200);
      END_STATE();
    case 204:
      if (lookahead == '\\')
        ADVANCE(205);
      if (lookahead == '_')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(206);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 207:
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
        ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'x')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9'))
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
        ADVANCE(206);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || lookahead > 'F') &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(206);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '@' || lookahead > 'F') &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(206);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9'))
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
        ADVANCE(206);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
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
        ADVANCE(206);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(215);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'p')
        ADVANCE(216);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(206);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 220:
      if (lookahead == 'n')
        SKIP(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 221:
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(206);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
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
        ADVANCE(206);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
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
        ADVANCE(206);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(226);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
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
        ADVANCE(206);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_codata);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
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
        ADVANCE(206);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(206);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(233);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'l')
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
        ADVANCE(206);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_field);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
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
        ADVANCE(206);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(239);
      if (lookahead == 's')
        ADVANCE(244);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
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
        ADVANCE(206);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'x')
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
        ADVANCE(206);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(242);
      if (lookahead == 'r')
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
        ADVANCE(206);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(206);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
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
        ADVANCE(206);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
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
        ADVANCE(206);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
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
        ADVANCE(206);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(249);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
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
        ADVANCE(206);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
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
        ADVANCE(206);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(253);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'T')
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
        ADVANCE(206);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'm')
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
        ADVANCE(206);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
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
        ADVANCE(206);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
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
        ADVANCE(206);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
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
        ADVANCE(206);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
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
        ADVANCE(206);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
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
        ADVANCE(206);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'q')
        ADVANCE(267);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(268);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(269);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(270);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(271);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(186);
      END_STATE();
    case 273:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ':')
        ADVANCE(274);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(276);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(283);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == 'w')
        ADVANCE(290);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(273);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(206);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 276:
      if (lookahead == 'n')
        SKIP(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
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
        ADVANCE(206);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
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
        ADVANCE(206);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(280);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'l')
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
        ADVANCE(206);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(261);
      if (lookahead == 'w')
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
        ADVANCE(206);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
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
        ADVANCE(206);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(287);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(206);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'h')
        ADVANCE(291);
      if (lookahead == 'i')
        ADVANCE(295);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
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
        ADVANCE(206);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(296);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'h')
        ADVANCE(297);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(191);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 301:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(303);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(301);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 302:
      if (lookahead == 'n')
        SKIP(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '{')
        ADVANCE(194);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 305:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(306);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(305);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 306:
      if (lookahead == 'n')
        SKIP(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 307:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == '_')
        ADVANCE(312);
      if (lookahead == '{')
        ADVANCE(303);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(307);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(309);
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
        ADVANCE(310);
      END_STATE();
    case 309:
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
        ADVANCE(310);
      END_STATE();
    case 311:
      if (lookahead == 'n')
        SKIP(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(310);
      END_STATE();
    case 312:
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 313:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == '\\')
        SKIP(315);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(313);
      END_STATE();
    case 314:
      if (lookahead == '-')
        ADVANCE(7);
      END_STATE();
    case 315:
      if (lookahead == 'n')
        SKIP(313);
      END_STATE();
    case 316:
      if (lookahead == '-')
        ADVANCE(299);
      END_STATE();
    case 317:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(318);
      if (lookahead == 'w')
        ADVANCE(319);
      if (lookahead == '{')
        ADVANCE(303);
      if (lookahead == '|')
        ADVANCE(195);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == 8594)
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(317);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 318:
      if (lookahead == 'n')
        SKIP(317);
      END_STATE();
    case 319:
      if (lookahead == 'h')
        ADVANCE(178);
      END_STATE();
    case 320:
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(321);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == 'r')
        ADVANCE(322);
      if (lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(320);
      END_STATE();
    case 321:
      if (lookahead == 'n')
        SKIP(320);
      END_STATE();
    case 322:
      if (lookahead == 'e')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'w')
        ADVANCE(159);
      END_STATE();
    case 324:
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(325);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == 'w')
        ADVANCE(319);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(324);
      END_STATE();
    case 325:
      if (lookahead == 'n')
        SKIP(324);
      END_STATE();
    case 326:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(327);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(326);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(206);
      END_STATE();
    case 327:
      if (lookahead == 'n')
        SKIP(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 328:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(329);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(331);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == 8594)
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(200);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '>')
        ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9'))
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
        ADVANCE(206);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__const_right_arrow);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 331:
      if (lookahead == 'n')
        SKIP(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 332:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(329);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(333);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == 8594)
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(332);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(206);
      END_STATE();
    case 333:
      if (lookahead == 'n')
        SKIP(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 334:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == ':')
        ADVANCE(335);
      if (lookahead == '\\')
        ADVANCE(336);
      if (lookahead == '_')
        ADVANCE(312);
      if (lookahead == 'w')
        ADVANCE(337);
      if (lookahead == '{')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(334);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_COLON);
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
        ADVANCE(310);
      END_STATE();
    case 336:
      if (lookahead == 'n')
        SKIP(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(310);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(338);
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
        ADVANCE(310);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(341);
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
        ADVANCE(310);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_where);
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
        ADVANCE(310);
      END_STATE();
    case 342:
      if (lookahead == '-')
        ADVANCE(343);
      if (lookahead == '\\')
        ADVANCE(344);
      if (lookahead == '_')
        ADVANCE(207);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(342);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(200);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 344:
      if (lookahead == 'n')
        SKIP(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 345:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(346);
      if (lookahead == '_')
        ADVANCE(347);
      if (lookahead == 'i')
        ADVANCE(348);
      if (lookahead == 'o')
        ADVANCE(356);
      if (lookahead == '{')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(345);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 346:
      if (lookahead == 'n')
        SKIP(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(310);
      END_STATE();
    case 347:
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
        ADVANCE(310);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(350);
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
        ADVANCE(310);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(351);
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
        ADVANCE(310);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(352);
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
        ADVANCE(310);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(353);
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
        ADVANCE(310);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(354);
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
        ADVANCE(310);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
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
        ADVANCE(310);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_instance);
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
        ADVANCE(310);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v')
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
        ADVANCE(310);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
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
        ADVANCE(310);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
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
        ADVANCE(310);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
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
        ADVANCE(310);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
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
        ADVANCE(310);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
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
        ADVANCE(310);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_overlap);
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
        ADVANCE(310);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(364);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == 'w')
        ADVANCE(177);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      END_STATE();
    case 364:
      if (lookahead == 'n')
        SKIP(363);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == '\\')
        SKIP(366);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == 'w')
        ADVANCE(319);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(365);
      END_STATE();
    case 366:
      if (lookahead == 'n')
        SKIP(365);
      END_STATE();
    case 367:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(329);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ':')
        ADVANCE(274);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(368);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == 8594)
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(367);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 368:
      if (lookahead == 'n')
        SKIP(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 369:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ':')
        ADVANCE(274);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(370);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(369);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 370:
      if (lookahead == 'n')
        SKIP(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(372);
      if (lookahead == 'c')
        ADVANCE(373);
      if (lookahead == 'e')
        ADVANCE(56);
      if (lookahead == 'h')
        ADVANCE(78);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 'p')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(377);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'u')
        ADVANCE(379);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(371);
      END_STATE();
    case 372:
      if (lookahead == 'n')
        SKIP(371);
      END_STATE();
    case 373:
      if (lookahead == 'o')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(43);
      END_STATE();
    case 375:
      if (lookahead == 'n')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 's')
        ADVANCE(98);
      END_STATE();
    case 377:
      if (lookahead == 'e')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'n')
        ADVANCE(153);
      END_STATE();
    case 379:
      if (lookahead == 's')
        ADVANCE(173);
      END_STATE();
    case 380:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(381);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(380);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 381:
      if (lookahead == 'n')
        SKIP(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 382:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(383);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'h')
        ADVANCE(384);
      if (lookahead == 'p')
        ADVANCE(390);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(396);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(382);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 383:
      if (lookahead == 'n')
        SKIP(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(206);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(386);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(387);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(388);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'g')
        ADVANCE(389);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(391);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'b')
        ADVANCE(392);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(393);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
        ADVANCE(394);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
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
        ADVANCE(206);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(397);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(261);
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
        ADVANCE(206);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(399);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'm')
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
        ADVANCE(206);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
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
        ADVANCE(206);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
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
        ADVANCE(206);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'g')
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
        ADVANCE(206);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_renaming);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(405);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
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
        ADVANCE(206);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
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
        ADVANCE(206);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'g')
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
        ADVANCE(206);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 409:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == ':')
        ADVANCE(335);
      if (lookahead == '\\')
        ADVANCE(410);
      if (lookahead == '_')
        ADVANCE(347);
      if (lookahead == '{')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(409);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 410:
      if (lookahead == 'n')
        SKIP(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(310);
      END_STATE();
    case 411:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(412);
      if (lookahead == '_')
        ADVANCE(312);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(411);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 412:
      if (lookahead == 'n')
        SKIP(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(310);
      END_STATE();
    case 413:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ':')
        ADVANCE(274);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(414);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == 'w')
        ADVANCE(290);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(413);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(206);
      END_STATE();
    case 414:
      if (lookahead == 'n')
        SKIP(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 415:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ':')
        ADVANCE(274);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(416);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == 'w')
        ADVANCE(417);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(415);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(206);
      END_STATE();
    case 416:
      if (lookahead == 'n')
        SKIP(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'h')
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
        ADVANCE(206);
      END_STATE();
    case 418:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(329);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(419);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == 'w')
        ADVANCE(417);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == 8594)
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(418);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(206);
      END_STATE();
    case 419:
      if (lookahead == 'n')
        SKIP(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 420:
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(421);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == 'w')
        ADVANCE(319);
      if (lookahead == '{')
        ADVANCE(316);
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(423);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'h')
        ADVANCE(384);
      if (lookahead == 'p')
        ADVANCE(390);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(396);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(422);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 423:
      if (lookahead == 'n')
        SKIP(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 424:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ':')
        ADVANCE(274);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(425);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '}')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(424);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 425:
      if (lookahead == 'n')
        SKIP(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 426:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == ':')
        ADVANCE(274);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(427);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '}')
        ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(426);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 427:
      if (lookahead == 'n')
        SKIP(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 428:
      if (lookahead == '}')
        ADVANCE(197);
      END_STATE();
    case 429:
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(430);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '}')
        ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(429);
      END_STATE();
    case 430:
      if (lookahead == 'n')
        SKIP(429);
      END_STATE();
    case 431:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(329);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(432);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == 'w')
        ADVANCE(417);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == 8594)
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(431);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(206);
      END_STATE();
    case 432:
      if (lookahead == 'n')
        SKIP(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 433:
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == '\\')
        SKIP(434);
      if (lookahead == 'w')
        ADVANCE(319);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(433);
      END_STATE();
    case 434:
      if (lookahead == 'n')
        SKIP(433);
      END_STATE();
    case 435:
      if (lookahead == '-')
        ADVANCE(314);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(436);
      if (lookahead == 'w')
        ADVANCE(319);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(435);
      END_STATE();
    case 436:
      if (lookahead == 'n')
        SKIP(435);
      END_STATE();
    case 437:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(438);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'c')
        ADVANCE(439);
      if (lookahead == 'd')
        ADVANCE(228);
      if (lookahead == 'e')
        ADVANCE(459);
      if (lookahead == 'f')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(471);
      if (lookahead == 'n')
        ADVANCE(480);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(206);
      END_STATE();
    case 438:
      if (lookahead == 'n')
        SKIP(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(440);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'i')
        ADVANCE(441);
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
        ADVANCE(206);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(442);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(443);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
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
        ADVANCE(206);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(445);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(446);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
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
        ADVANCE(206);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'v')
        ADVANCE(448);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(449);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_coinductive);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 's')
        ADVANCE(451);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(452);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
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
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(206);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(454);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(455);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(206);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(457);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(458);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(460);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(461);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'q')
        ADVANCE(464);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
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
        ADVANCE(206);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(466);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'l')
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
        ADVANCE(206);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
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
        ADVANCE(206);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(206);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'y')
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
        ADVANCE(206);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_eta_DASHequality);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
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
        ADVANCE(206);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(473);
      if (lookahead == 'f')
        ADVANCE(239);
      if (lookahead == 's')
        ADVANCE(244);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
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
        ADVANCE(206);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
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
        ADVANCE(206);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(206);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
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
        ADVANCE(206);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'v')
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
        ADVANCE(206);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_inductive);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
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
        ADVANCE(206);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(482);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(206);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(484);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
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
        ADVANCE(206);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(486);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(487);
      if (lookahead != 0 &&
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
        ADVANCE(206);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'q')
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
        ADVANCE(206);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
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
        ADVANCE(206);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
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
        ADVANCE(206);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'l')
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
        ADVANCE(206);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'i')
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
        ADVANCE(206);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(206);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'y')
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
        ADVANCE(206);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_no_DASHeta_DASHequality);
      if (lookahead == '.')
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
        ADVANCE(206);
      END_STATE();
    case 495:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(496);
      if (lookahead == '_')
        ADVANCE(347);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '}')
        ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(495);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(310);
      END_STATE();
    case 496:
      if (lookahead == 'n')
        SKIP(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(310);
      END_STATE();
    case 497:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == 'w')
        ADVANCE(417);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(497);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(206);
      END_STATE();
    case 498:
      if (lookahead == 'n')
        SKIP(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 499:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(329);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '}')
        ADVANCE(428);
      if (lookahead == 8594)
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(499);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 500:
      if (lookahead == 'n')
        SKIP(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 501:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == '_')
        ADVANCE(347);
      if (lookahead == 'm')
        ADVANCE(503);
      if (lookahead == '{')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(501);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 502:
      if (lookahead == 'n')
        SKIP(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(310);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(504);
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
        ADVANCE(310);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(505);
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
        ADVANCE(310);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(506);
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
        ADVANCE(310);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(507);
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
        ADVANCE(310);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_module);
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
        ADVANCE(310);
      END_STATE();
    case 509:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(510);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == 'w')
        ADVANCE(417);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(509);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(206);
      END_STATE();
    case 510:
      if (lookahead == 'n')
        SKIP(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 511:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(512);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(514);
      if (lookahead == '=')
        ADVANCE(520);
      if (lookahead == '?')
        ADVANCE(521);
      if (lookahead == 'P')
        ADVANCE(522);
      if (lookahead == 'S')
        ADVANCE(526);
      if (lookahead == '\\')
        ADVANCE(529);
      if (lookahead == '_')
        ADVANCE(530);
      if (lookahead == 'i')
        ADVANCE(531);
      if (lookahead == 'o')
        ADVANCE(539);
      if (lookahead == 'q')
        ADVANCE(546);
      if (lookahead == 'r')
        ADVANCE(555);
      if (lookahead == 'u')
        ADVANCE(561);
      if (lookahead == '{')
        ADVANCE(303);
      if (lookahead == '|')
        ADVANCE(568);
      if (lookahead == 8594)
        ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(511);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(517);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(513);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == '0')
        ADVANCE(514);
      if (lookahead == '>')
        ADVANCE(519);
      if (('1' <= lookahead && lookahead <= '9'))
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
        ADVANCE(517);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(201);
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
        ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'x')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9'))
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
        ADVANCE(517);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
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
          (lookahead < '@' || lookahead > 'F') &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(517);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
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
          (lookahead < '@' || lookahead > 'F') &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH);
      if (lookahead == '.')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9'))
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
        ADVANCE(517);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__const_right_arrow);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(523);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(524);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'p')
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
        ADVANCE(517);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(527);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(517);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 529:
      if (lookahead == 'n')
        SKIP(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(517);
      END_STATE();
    case 530:
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(517);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(532);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 's')
        ADVANCE(533);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(534);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(535);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(537);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(538);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'v')
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
        ADVANCE(517);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(541);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(542);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'l')
        ADVANCE(543);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(544);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'p')
        ADVANCE(545);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_overlap);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(547);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(548);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
        ADVANCE(549);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
        ADVANCE(550);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'T')
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
        ADVANCE(517);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(517);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
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
        ADVANCE(517);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'm')
        ADVANCE(554);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'e')
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
        ADVANCE(517);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'c')
        ADVANCE(557);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
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
        ADVANCE(517);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(559);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(560);
      if (lookahead != 0 &&
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
        ADVANCE(517);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'n')
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
        ADVANCE(517);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'q')
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
        ADVANCE(517);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'u')
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
        ADVANCE(517);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'o')
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
        ADVANCE(517);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 't')
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
        ADVANCE(517);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(204);
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
        ADVANCE(517);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
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
        ADVANCE(517);
      END_STATE();
    case 569:
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(570);
      if (lookahead == '\\')
        ADVANCE(571);
      if (lookahead == '_')
        ADVANCE(347);
      if (lookahead == 'i')
        ADVANCE(348);
      if (lookahead == 'o')
        ADVANCE(356);
      if (lookahead == '{')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(569);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(310);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_EQ);
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
        ADVANCE(310);
      END_STATE();
    case 571:
      if (lookahead == 'n')
        SKIP(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(310);
      END_STATE();
    case 572:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '=')
        ADVANCE(275);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(573);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(298);
      if (lookahead == '|')
        ADVANCE(300);
      if (lookahead == '}')
        ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(572);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(206);
      END_STATE();
    case 573:
      if (lookahead == 'n')
        SKIP(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 574:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '0')
        ADVANCE(208);
      if (lookahead == '?')
        ADVANCE(212);
      if (lookahead == 'P')
        ADVANCE(213);
      if (lookahead == 'S')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(575);
      if (lookahead == '_')
        ADVANCE(221);
      if (lookahead == 'c')
        ADVANCE(576);
      if (lookahead == 'd')
        ADVANCE(228);
      if (lookahead == 'f')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'q')
        ADVANCE(250);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead == 'u')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(574);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(206);
      END_STATE();
    case 575:
      if (lookahead == 'n')
        SKIP(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(206);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
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
        ADVANCE(206);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == 'd')
        ADVANCE(224);
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
        ADVANCE(206);
      END_STATE();
    case 578:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(514);
      if (lookahead == '=')
        ADVANCE(520);
      if (lookahead == '?')
        ADVANCE(521);
      if (lookahead == 'P')
        ADVANCE(522);
      if (lookahead == 'S')
        ADVANCE(526);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == '_')
        ADVANCE(530);
      if (lookahead == 'i')
        ADVANCE(531);
      if (lookahead == 'o')
        ADVANCE(539);
      if (lookahead == 'q')
        ADVANCE(546);
      if (lookahead == 'r')
        ADVANCE(555);
      if (lookahead == 'u')
        ADVANCE(561);
      if (lookahead == '{')
        ADVANCE(303);
      if (lookahead == '|')
        ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(578);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(517);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(513);
      if (lookahead == '.')
        ADVANCE(204);
      if (lookahead == '0')
        ADVANCE(514);
      if (('1' <= lookahead && lookahead <= '9'))
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
        ADVANCE(517);
      END_STATE();
    case 580:
      if (lookahead == 'n')
        SKIP(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || lookahead > 'Z') &&
          (lookahead < 'a' || lookahead > 'z'))
        ADVANCE(517);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 198},
  [2] = {.lex_state = 273, .external_lex_state = 2},
  [3] = {.lex_state = 301},
  [4] = {.lex_state = 305},
  [5] = {.lex_state = 307},
  [6] = {.lex_state = 307},
  [7] = {.lex_state = 313, .external_lex_state = 3},
  [8] = {.lex_state = 313, .external_lex_state = 4},
  [9] = {.lex_state = 317},
  [10] = {.lex_state = 313},
  [11] = {.lex_state = 320, .external_lex_state = 2},
  [12] = {.lex_state = 317},
  [13] = {.lex_state = 273, .external_lex_state = 2},
  [14] = {.lex_state = 273, .external_lex_state = 2},
  [15] = {.lex_state = 324, .external_lex_state = 2},
  [16] = {.lex_state = 313, .external_lex_state = 2},
  [17] = {.lex_state = 198},
  [18] = {.lex_state = 313},
  [19] = {.lex_state = 305},
  [20] = {.lex_state = 326},
  [21] = {.lex_state = 198},
  [22] = {.lex_state = 328},
  [23] = {.lex_state = 317},
  [24] = {.lex_state = 301},
  [25] = {.lex_state = 273, .external_lex_state = 2},
  [26] = {.lex_state = 305},
  [27] = {.lex_state = 305},
  [28] = {.lex_state = 305},
  [29] = {.lex_state = 317},
  [30] = {.lex_state = 317},
  [31] = {.lex_state = 317},
  [32] = {.lex_state = 328},
  [33] = {.lex_state = 328},
  [34] = {.lex_state = 317},
  [35] = {.lex_state = 305},
  [36] = {.lex_state = 332},
  [37] = {.lex_state = 317},
  [38] = {.lex_state = 334},
  [39] = {.lex_state = 342},
  [40] = {.lex_state = 305},
  [41] = {.lex_state = 334},
  [42] = {.lex_state = 334},
  [43] = {.lex_state = 334},
  [44] = {.lex_state = 198},
  [45] = {.lex_state = 198},
  [46] = {.lex_state = 345},
  [47] = {.lex_state = 198},
  [48] = {.lex_state = 307},
  [49] = {.lex_state = 307},
  [50] = {.lex_state = 305},
  [51] = {.lex_state = 305},
  [52] = {.lex_state = 363, .external_lex_state = 2},
  [53] = {.lex_state = 324, .external_lex_state = 2},
  [54] = {.lex_state = 305},
  [55] = {.lex_state = 301},
  [56] = {.lex_state = 307},
  [57] = {.lex_state = 313, .external_lex_state = 3},
  [58] = {.lex_state = 365, .external_lex_state = 2},
  [59] = {.lex_state = 313, .external_lex_state = 2},
  [60] = {.lex_state = 198},
  [61] = {.lex_state = 305},
  [62] = {.lex_state = 320, .external_lex_state = 2},
  [63] = {.lex_state = 305},
  [64] = {.lex_state = 320, .external_lex_state = 2},
  [65] = {.lex_state = 326},
  [66] = {.lex_state = 313, .external_lex_state = 2},
  [67] = {.lex_state = 198},
  [68] = {.lex_state = 198},
  [69] = {.lex_state = 305},
  [70] = {.lex_state = 305},
  [71] = {.lex_state = 305},
  [72] = {.lex_state = 367},
  [73] = {.lex_state = 301},
  [74] = {.lex_state = 328},
  [75] = {.lex_state = 305},
  [76] = {.lex_state = 317},
  [77] = {.lex_state = 317},
  [78] = {.lex_state = 367},
  [79] = {.lex_state = 367},
  [80] = {.lex_state = 332},
  [81] = {.lex_state = 369},
  [82] = {.lex_state = 301},
  [83] = {.lex_state = 305},
  [84] = {.lex_state = 317},
  [85] = {.lex_state = 369},
  [86] = {.lex_state = 369},
  [87] = {.lex_state = 305},
  [88] = {.lex_state = 371},
  [89] = {.lex_state = 342},
  [90] = {.lex_state = 305},
  [91] = {.lex_state = 371},
  [92] = {.lex_state = 317},
  [93] = {.lex_state = 273, .external_lex_state = 2},
  [94] = {.lex_state = 301},
  [95] = {.lex_state = 380},
  [96] = {.lex_state = 301},
  [97] = {.lex_state = 305},
  [98] = {.lex_state = 317},
  [99] = {.lex_state = 380},
  [100] = {.lex_state = 380},
  [101] = {.lex_state = 326},
  [102] = {.lex_state = 301},
  [103] = {.lex_state = 317},
  [104] = {.lex_state = 332},
  [105] = {.lex_state = 305},
  [106] = {.lex_state = 317},
  [107] = {.lex_state = 382},
  [108] = {.lex_state = 273, .external_lex_state = 2},
  [109] = {.lex_state = 317},
  [110] = {.lex_state = 317},
  [111] = {.lex_state = 342},
  [112] = {.lex_state = 371},
  [113] = {.lex_state = 334},
  [114] = {.lex_state = 307},
  [115] = {.lex_state = 305},
  [116] = {.lex_state = 305},
  [117] = {.lex_state = 305},
  [118] = {.lex_state = 301},
  [119] = {.lex_state = 198, .external_lex_state = 4},
  [120] = {.lex_state = 334},
  [121] = {.lex_state = 317},
  [122] = {.lex_state = 334},
  [123] = {.lex_state = 305},
  [124] = {.lex_state = 301},
  [125] = {.lex_state = 313, .external_lex_state = 3},
  [126] = {.lex_state = 317},
  [127] = {.lex_state = 301},
  [128] = {.lex_state = 317},
  [129] = {.lex_state = 305},
  [130] = {.lex_state = 307},
  [131] = {.lex_state = 307},
  [132] = {.lex_state = 313, .external_lex_state = 3},
  [133] = {.lex_state = 313, .external_lex_state = 4},
  [134] = {.lex_state = 313, .external_lex_state = 2},
  [135] = {.lex_state = 198, .external_lex_state = 5},
  [136] = {.lex_state = 313, .external_lex_state = 5},
  [137] = {.lex_state = 198},
  [138] = {.lex_state = 307},
  [139] = {.lex_state = 307},
  [140] = {.lex_state = 307},
  [141] = {.lex_state = 313, .external_lex_state = 4},
  [142] = {.lex_state = 307},
  [143] = {.lex_state = 409},
  [144] = {.lex_state = 317},
  [145] = {.lex_state = 313, .external_lex_state = 5},
  [146] = {.lex_state = 409},
  [147] = {.lex_state = 345, .external_lex_state = 5},
  [148] = {.lex_state = 411, .external_lex_state = 2},
  [149] = {.lex_state = 411, .external_lex_state = 2},
  [150] = {.lex_state = 413, .external_lex_state = 2},
  [151] = {.lex_state = 301},
  [152] = {.lex_state = 305},
  [153] = {.lex_state = 363, .external_lex_state = 2},
  [154] = {.lex_state = 413, .external_lex_state = 2},
  [155] = {.lex_state = 413, .external_lex_state = 2},
  [156] = {.lex_state = 305},
  [157] = {.lex_state = 326},
  [158] = {.lex_state = 415, .external_lex_state = 2},
  [159] = {.lex_state = 301},
  [160] = {.lex_state = 305},
  [161] = {.lex_state = 324, .external_lex_state = 2},
  [162] = {.lex_state = 415, .external_lex_state = 2},
  [163] = {.lex_state = 415, .external_lex_state = 2},
  [164] = {.lex_state = 305},
  [165] = {.lex_state = 326},
  [166] = {.lex_state = 324, .external_lex_state = 2},
  [167] = {.lex_state = 418, .external_lex_state = 2},
  [168] = {.lex_state = 301},
  [169] = {.lex_state = 305},
  [170] = {.lex_state = 365, .external_lex_state = 2},
  [171] = {.lex_state = 420, .external_lex_state = 2},
  [172] = {.lex_state = 317},
  [173] = {.lex_state = 418, .external_lex_state = 2},
  [174] = {.lex_state = 418, .external_lex_state = 2},
  [175] = {.lex_state = 317},
  [176] = {.lex_state = 305},
  [177] = {.lex_state = 332},
  [178] = {.lex_state = 317},
  [179] = {.lex_state = 317},
  [180] = {.lex_state = 198},
  [181] = {.lex_state = 313, .external_lex_state = 2},
  [182] = {.lex_state = 313, .external_lex_state = 2},
  [183] = {.lex_state = 371},
  [184] = {.lex_state = 326},
  [185] = {.lex_state = 301},
  [186] = {.lex_state = 305},
  [187] = {.lex_state = 326},
  [188] = {.lex_state = 326},
  [189] = {.lex_state = 198},
  [190] = {.lex_state = 313, .external_lex_state = 2},
  [191] = {.lex_state = 317},
  [192] = {.lex_state = 317},
  [193] = {.lex_state = 317},
  [194] = {.lex_state = 367},
  [195] = {.lex_state = 317},
  [196] = {.lex_state = 342},
  [197] = {.lex_state = 371},
  [198] = {.lex_state = 328},
  [199] = {.lex_state = 301},
  [200] = {.lex_state = 301},
  [201] = {.lex_state = 369},
  [202] = {.lex_state = 317},
  [203] = {.lex_state = 342},
  [204] = {.lex_state = 371},
  [205] = {.lex_state = 301},
  [206] = {.lex_state = 305},
  [207] = {.lex_state = 328},
  [208] = {.lex_state = 317},
  [209] = {.lex_state = 342},
  [210] = {.lex_state = 371},
  [211] = {.lex_state = 342},
  [212] = {.lex_state = 301},
  [213] = {.lex_state = 317},
  [214] = {.lex_state = 380},
  [215] = {.lex_state = 317},
  [216] = {.lex_state = 342},
  [217] = {.lex_state = 371},
  [218] = {.lex_state = 332},
  [219] = {.lex_state = 301},
  [220] = {.lex_state = 305},
  [221] = {.lex_state = 332},
  [222] = {.lex_state = 317},
  [223] = {.lex_state = 422},
  [224] = {.lex_state = 301},
  [225] = {.lex_state = 301},
  [226] = {.lex_state = 305},
  [227] = {.lex_state = 371},
  [228] = {.lex_state = 317},
  [229] = {.lex_state = 317},
  [230] = {.lex_state = 422},
  [231] = {.lex_state = 371},
  [232] = {.lex_state = 422},
  [233] = {.lex_state = 371},
  [234] = {.lex_state = 273, .external_lex_state = 2},
  [235] = {.lex_state = 342},
  [236] = {.lex_state = 317},
  [237] = {.lex_state = 334},
  [238] = {.lex_state = 317},
  [239] = {.lex_state = 342},
  [240] = {.lex_state = 305},
  [241] = {.lex_state = 305},
  [242] = {.lex_state = 305},
  [243] = {.lex_state = 334},
  [244] = {.lex_state = 424},
  [245] = {.lex_state = 317},
  [246] = {.lex_state = 317},
  [247] = {.lex_state = 317},
  [248] = {.lex_state = 426},
  [249] = {.lex_state = 301},
  [250] = {.lex_state = 305},
  [251] = {.lex_state = 429},
  [252] = {.lex_state = 426},
  [253] = {.lex_state = 426},
  [254] = {.lex_state = 305},
  [255] = {.lex_state = 317},
  [256] = {.lex_state = 431, .external_lex_state = 2},
  [257] = {.lex_state = 301},
  [258] = {.lex_state = 305},
  [259] = {.lex_state = 433, .external_lex_state = 2},
  [260] = {.lex_state = 435, .external_lex_state = 2},
  [261] = {.lex_state = 317},
  [262] = {.lex_state = 431, .external_lex_state = 2},
  [263] = {.lex_state = 431, .external_lex_state = 2},
  [264] = {.lex_state = 317},
  [265] = {.lex_state = 305},
  [266] = {.lex_state = 332},
  [267] = {.lex_state = 437, .external_lex_state = 5},
  [268] = {.lex_state = 198},
  [269] = {.lex_state = 301},
  [270] = {.lex_state = 198, .external_lex_state = 4},
  [271] = {.lex_state = 334},
  [272] = {.lex_state = 433, .external_lex_state = 2},
  [273] = {.lex_state = 198},
  [274] = {.lex_state = 301},
  [275] = {.lex_state = 313, .external_lex_state = 3},
  [276] = {.lex_state = 431},
  [277] = {.lex_state = 301},
  [278] = {.lex_state = 305},
  [279] = {.lex_state = 317},
  [280] = {.lex_state = 317},
  [281] = {.lex_state = 317},
  [282] = {.lex_state = 431},
  [283] = {.lex_state = 431},
  [284] = {.lex_state = 317},
  [285] = {.lex_state = 305},
  [286] = {.lex_state = 332},
  [287] = {.lex_state = 301},
  [288] = {.lex_state = 334},
  [289] = {.lex_state = 334},
  [290] = {.lex_state = 334},
  [291] = {.lex_state = 198},
  [292] = {.lex_state = 198, .external_lex_state = 5},
  [293] = {.lex_state = 345},
  [294] = {.lex_state = 198, .external_lex_state = 5},
  [295] = {.lex_state = 198, .external_lex_state = 5},
  [296] = {.lex_state = 198},
  [297] = {.lex_state = 313, .external_lex_state = 2},
  [298] = {.lex_state = 198, .external_lex_state = 5},
  [299] = {.lex_state = 409},
  [300] = {.lex_state = 307},
  [301] = {.lex_state = 307},
  [302] = {.lex_state = 307},
  [303] = {.lex_state = 317},
  [304] = {.lex_state = 307},
  [305] = {.lex_state = 307},
  [306] = {.lex_state = 429},
  [307] = {.lex_state = 495},
  [308] = {.lex_state = 345},
  [309] = {.lex_state = 345, .external_lex_state = 5},
  [310] = {.lex_state = 317},
  [311] = {.lex_state = 301},
  [312] = {.lex_state = 198},
  [313] = {.lex_state = 409},
  [314] = {.lex_state = 345, .external_lex_state = 5},
  [315] = {.lex_state = 411, .external_lex_state = 2},
  [316] = {.lex_state = 413, .external_lex_state = 2},
  [317] = {.lex_state = 317},
  [318] = {.lex_state = 342},
  [319] = {.lex_state = 371},
  [320] = {.lex_state = 415, .external_lex_state = 2},
  [321] = {.lex_state = 317},
  [322] = {.lex_state = 342},
  [323] = {.lex_state = 371},
  [324] = {.lex_state = 418, .external_lex_state = 2},
  [325] = {.lex_state = 317},
  [326] = {.lex_state = 342},
  [327] = {.lex_state = 371},
  [328] = {.lex_state = 301},
  [329] = {.lex_state = 497, .external_lex_state = 2},
  [330] = {.lex_state = 301},
  [331] = {.lex_state = 305},
  [332] = {.lex_state = 497, .external_lex_state = 2},
  [333] = {.lex_state = 497, .external_lex_state = 2},
  [334] = {.lex_state = 326},
  [335] = {.lex_state = 301},
  [336] = {.lex_state = 313, .external_lex_state = 3},
  [337] = {.lex_state = 313, .external_lex_state = 5},
  [338] = {.lex_state = 342},
  [339] = {.lex_state = 326},
  [340] = {.lex_state = 317},
  [341] = {.lex_state = 342},
  [342] = {.lex_state = 371},
  [343] = {.lex_state = 198},
  [344] = {.lex_state = 301},
  [345] = {.lex_state = 301},
  [346] = {.lex_state = 301},
  [347] = {.lex_state = 367},
  [348] = {.lex_state = 367},
  [349] = {.lex_state = 317},
  [350] = {.lex_state = 342},
  [351] = {.lex_state = 317},
  [352] = {.lex_state = 369},
  [353] = {.lex_state = 369},
  [354] = {.lex_state = 317},
  [355] = {.lex_state = 342},
  [356] = {.lex_state = 499},
  [357] = {.lex_state = 301},
  [358] = {.lex_state = 305},
  [359] = {.lex_state = 429},
  [360] = {.lex_state = 429},
  [361] = {.lex_state = 317},
  [362] = {.lex_state = 499},
  [363] = {.lex_state = 499},
  [364] = {.lex_state = 317},
  [365] = {.lex_state = 305},
  [366] = {.lex_state = 332},
  [367] = {.lex_state = 305},
  [368] = {.lex_state = 301},
  [369] = {.lex_state = 305},
  [370] = {.lex_state = 305},
  [371] = {.lex_state = 328},
  [372] = {.lex_state = 371},
  [373] = {.lex_state = 317},
  [374] = {.lex_state = 342},
  [375] = {.lex_state = 317},
  [376] = {.lex_state = 317},
  [377] = {.lex_state = 317},
  [378] = {.lex_state = 317},
  [379] = {.lex_state = 317},
  [380] = {.lex_state = 317},
  [381] = {.lex_state = 380},
  [382] = {.lex_state = 380},
  [383] = {.lex_state = 317},
  [384] = {.lex_state = 342},
  [385] = {.lex_state = 332},
  [386] = {.lex_state = 317},
  [387] = {.lex_state = 342},
  [388] = {.lex_state = 371},
  [389] = {.lex_state = 422},
  [390] = {.lex_state = 317},
  [391] = {.lex_state = 317},
  [392] = {.lex_state = 317},
  [393] = {.lex_state = 317},
  [394] = {.lex_state = 317},
  [395] = {.lex_state = 342},
  [396] = {.lex_state = 371},
  [397] = {.lex_state = 501},
  [398] = {.lex_state = 501},
  [399] = {.lex_state = 371},
  [400] = {.lex_state = 422},
  [401] = {.lex_state = 371},
  [402] = {.lex_state = 317},
  [403] = {.lex_state = 317},
  [404] = {.lex_state = 334},
  [405] = {.lex_state = 317},
  [406] = {.lex_state = 317},
  [407] = {.lex_state = 429},
  [408] = {.lex_state = 317},
  [409] = {.lex_state = 334},
  [410] = {.lex_state = 301},
  [411] = {.lex_state = 273, .external_lex_state = 2},
  [412] = {.lex_state = 342},
  [413] = {.lex_state = 317},
  [414] = {.lex_state = 426},
  [415] = {.lex_state = 317},
  [416] = {.lex_state = 342},
  [417] = {.lex_state = 371},
  [418] = {.lex_state = 301},
  [419] = {.lex_state = 429},
  [420] = {.lex_state = 301},
  [421] = {.lex_state = 431, .external_lex_state = 2},
  [422] = {.lex_state = 317},
  [423] = {.lex_state = 342},
  [424] = {.lex_state = 371},
  [425] = {.lex_state = 198, .external_lex_state = 4},
  [426] = {.lex_state = 301},
  [427] = {.lex_state = 509, .external_lex_state = 2},
  [428] = {.lex_state = 301},
  [429] = {.lex_state = 305},
  [430] = {.lex_state = 509, .external_lex_state = 2},
  [431] = {.lex_state = 509, .external_lex_state = 2},
  [432] = {.lex_state = 326},
  [433] = {.lex_state = 301},
  [434] = {.lex_state = 198},
  [435] = {.lex_state = 313, .external_lex_state = 3},
  [436] = {.lex_state = 307},
  [437] = {.lex_state = 313, .external_lex_state = 2},
  [438] = {.lex_state = 313, .external_lex_state = 2},
  [439] = {.lex_state = 198, .external_lex_state = 5},
  [440] = {.lex_state = 437, .external_lex_state = 5},
  [441] = {.lex_state = 313, .external_lex_state = 2},
  [442] = {.lex_state = 313, .external_lex_state = 5},
  [443] = {.lex_state = 371},
  [444] = {.lex_state = 433, .external_lex_state = 2},
  [445] = {.lex_state = 198},
  [446] = {.lex_state = 313, .external_lex_state = 3},
  [447] = {.lex_state = 433, .external_lex_state = 2},
  [448] = {.lex_state = 198},
  [449] = {.lex_state = 431},
  [450] = {.lex_state = 317},
  [451] = {.lex_state = 342},
  [452] = {.lex_state = 371},
  [453] = {.lex_state = 301},
  [454] = {.lex_state = 509},
  [455] = {.lex_state = 301},
  [456] = {.lex_state = 305},
  [457] = {.lex_state = 509},
  [458] = {.lex_state = 509},
  [459] = {.lex_state = 326},
  [460] = {.lex_state = 301},
  [461] = {.lex_state = 317},
  [462] = {.lex_state = 301},
  [463] = {.lex_state = 198, .external_lex_state = 6},
  [464] = {.lex_state = 317},
  [465] = {.lex_state = 301},
  [466] = {.lex_state = 313, .external_lex_state = 3},
  [467] = {.lex_state = 317},
  [468] = {.lex_state = 301},
  [469] = {.lex_state = 317},
  [470] = {.lex_state = 313, .external_lex_state = 5},
  [471] = {.lex_state = 313, .external_lex_state = 5},
  [472] = {.lex_state = 198, .external_lex_state = 5},
  [473] = {.lex_state = 307},
  [474] = {.lex_state = 495},
  [475] = {.lex_state = 307},
  [476] = {.lex_state = 409},
  [477] = {.lex_state = 307},
  [478] = {.lex_state = 495},
  [479] = {.lex_state = 495},
  [480] = {.lex_state = 313, .external_lex_state = 5},
  [481] = {.lex_state = 301},
  [482] = {.lex_state = 511, .external_lex_state = 5},
  [483] = {.lex_state = 301},
  [484] = {.lex_state = 305},
  [485] = {.lex_state = 345, .external_lex_state = 5},
  [486] = {.lex_state = 569, .external_lex_state = 5},
  [487] = {.lex_state = 317},
  [488] = {.lex_state = 511, .external_lex_state = 5},
  [489] = {.lex_state = 511, .external_lex_state = 5},
  [490] = {.lex_state = 317},
  [491] = {.lex_state = 305},
  [492] = {.lex_state = 332},
  [493] = {.lex_state = 413, .external_lex_state = 2},
  [494] = {.lex_state = 413, .external_lex_state = 2},
  [495] = {.lex_state = 317},
  [496] = {.lex_state = 342},
  [497] = {.lex_state = 415, .external_lex_state = 2},
  [498] = {.lex_state = 415, .external_lex_state = 2},
  [499] = {.lex_state = 317},
  [500] = {.lex_state = 342},
  [501] = {.lex_state = 418, .external_lex_state = 2},
  [502] = {.lex_state = 418, .external_lex_state = 2},
  [503] = {.lex_state = 317},
  [504] = {.lex_state = 342},
  [505] = {.lex_state = 365, .external_lex_state = 2},
  [506] = {.lex_state = 497, .external_lex_state = 2},
  [507] = {.lex_state = 317},
  [508] = {.lex_state = 342},
  [509] = {.lex_state = 371},
  [510] = {.lex_state = 313, .external_lex_state = 2},
  [511] = {.lex_state = 313, .external_lex_state = 2},
  [512] = {.lex_state = 326},
  [513] = {.lex_state = 326},
  [514] = {.lex_state = 317},
  [515] = {.lex_state = 342},
  [516] = {.lex_state = 317},
  [517] = {.lex_state = 429},
  [518] = {.lex_state = 317},
  [519] = {.lex_state = 367},
  [520] = {.lex_state = 317},
  [521] = {.lex_state = 317},
  [522] = {.lex_state = 369},
  [523] = {.lex_state = 317},
  [524] = {.lex_state = 499},
  [525] = {.lex_state = 317},
  [526] = {.lex_state = 342},
  [527] = {.lex_state = 371},
  [528] = {.lex_state = 301},
  [529] = {.lex_state = 572},
  [530] = {.lex_state = 301},
  [531] = {.lex_state = 305},
  [532] = {.lex_state = 429},
  [533] = {.lex_state = 572},
  [534] = {.lex_state = 572},
  [535] = {.lex_state = 326},
  [536] = {.lex_state = 301},
  [537] = {.lex_state = 305},
  [538] = {.lex_state = 317},
  [539] = {.lex_state = 342},
  [540] = {.lex_state = 371},
  [541] = {.lex_state = 371},
  [542] = {.lex_state = 317},
  [543] = {.lex_state = 328},
  [544] = {.lex_state = 301},
  [545] = {.lex_state = 380},
  [546] = {.lex_state = 317},
  [547] = {.lex_state = 332},
  [548] = {.lex_state = 332},
  [549] = {.lex_state = 317},
  [550] = {.lex_state = 342},
  [551] = {.lex_state = 422},
  [552] = {.lex_state = 301},
  [553] = {.lex_state = 422},
  [554] = {.lex_state = 317},
  [555] = {.lex_state = 342},
  [556] = {.lex_state = 371},
  [557] = {.lex_state = 307},
  [558] = {.lex_state = 317},
  [559] = {.lex_state = 317},
  [560] = {.lex_state = 371},
  [561] = {.lex_state = 307},
  [562] = {.lex_state = 317},
  [563] = {.lex_state = 334},
  [564] = {.lex_state = 334},
  [565] = {.lex_state = 301},
  [566] = {.lex_state = 301},
  [567] = {.lex_state = 301},
  [568] = {.lex_state = 317},
  [569] = {.lex_state = 317},
  [570] = {.lex_state = 317},
  [571] = {.lex_state = 426},
  [572] = {.lex_state = 426},
  [573] = {.lex_state = 317},
  [574] = {.lex_state = 342},
  [575] = {.lex_state = 429},
  [576] = {.lex_state = 317},
  [577] = {.lex_state = 431, .external_lex_state = 2},
  [578] = {.lex_state = 431, .external_lex_state = 2},
  [579] = {.lex_state = 317},
  [580] = {.lex_state = 342},
  [581] = {.lex_state = 198},
  [582] = {.lex_state = 509, .external_lex_state = 2},
  [583] = {.lex_state = 317},
  [584] = {.lex_state = 342},
  [585] = {.lex_state = 371},
  [586] = {.lex_state = 574},
  [587] = {.lex_state = 313, .external_lex_state = 2},
  [588] = {.lex_state = 198},
  [589] = {.lex_state = 313, .external_lex_state = 5},
  [590] = {.lex_state = 437, .external_lex_state = 5},
  [591] = {.lex_state = 313, .external_lex_state = 4},
  [592] = {.lex_state = 437, .external_lex_state = 5},
  [593] = {.lex_state = 313, .external_lex_state = 2},
  [594] = {.lex_state = 371},
  [595] = {.lex_state = 198, .external_lex_state = 4},
  [596] = {.lex_state = 198},
  [597] = {.lex_state = 313, .external_lex_state = 3},
  [598] = {.lex_state = 431},
  [599] = {.lex_state = 431},
  [600] = {.lex_state = 317},
  [601] = {.lex_state = 342},
  [602] = {.lex_state = 509},
  [603] = {.lex_state = 317},
  [604] = {.lex_state = 342},
  [605] = {.lex_state = 371},
  [606] = {.lex_state = 433, .external_lex_state = 2},
  [607] = {.lex_state = 437, .external_lex_state = 5},
  [608] = {.lex_state = 198, .external_lex_state = 5},
  [609] = {.lex_state = 301},
  [610] = {.lex_state = 198, .external_lex_state = 6},
  [611] = {.lex_state = 433, .external_lex_state = 2},
  [612] = {.lex_state = 198, .external_lex_state = 5},
  [613] = {.lex_state = 301},
  [614] = {.lex_state = 313, .external_lex_state = 3},
  [615] = {.lex_state = 317},
  [616] = {.lex_state = 301},
  [617] = {.lex_state = 198, .external_lex_state = 5},
  [618] = {.lex_state = 198, .external_lex_state = 5},
  [619] = {.lex_state = 409},
  [620] = {.lex_state = 307},
  [621] = {.lex_state = 495},
  [622] = {.lex_state = 345, .external_lex_state = 5},
  [623] = {.lex_state = 345, .external_lex_state = 5},
  [624] = {.lex_state = 511, .external_lex_state = 5},
  [625] = {.lex_state = 317},
  [626] = {.lex_state = 342},
  [627] = {.lex_state = 371},
  [628] = {.lex_state = 301},
  [629] = {.lex_state = 578, .external_lex_state = 5},
  [630] = {.lex_state = 301},
  [631] = {.lex_state = 305},
  [632] = {.lex_state = 569, .external_lex_state = 5},
  [633] = {.lex_state = 578, .external_lex_state = 5},
  [634] = {.lex_state = 578, .external_lex_state = 5},
  [635] = {.lex_state = 326},
  [636] = {.lex_state = 301},
  [637] = {.lex_state = 569, .external_lex_state = 5},
  [638] = {.lex_state = 413, .external_lex_state = 2},
  [639] = {.lex_state = 317},
  [640] = {.lex_state = 415, .external_lex_state = 2},
  [641] = {.lex_state = 317},
  [642] = {.lex_state = 418, .external_lex_state = 2},
  [643] = {.lex_state = 317},
  [644] = {.lex_state = 497, .external_lex_state = 2},
  [645] = {.lex_state = 497, .external_lex_state = 2},
  [646] = {.lex_state = 317},
  [647] = {.lex_state = 342},
  [648] = {.lex_state = 326},
  [649] = {.lex_state = 317},
  [650] = {.lex_state = 317},
  [651] = {.lex_state = 367},
  [652] = {.lex_state = 369},
  [653] = {.lex_state = 499},
  [654] = {.lex_state = 499},
  [655] = {.lex_state = 317},
  [656] = {.lex_state = 342},
  [657] = {.lex_state = 429},
  [658] = {.lex_state = 572},
  [659] = {.lex_state = 317},
  [660] = {.lex_state = 342},
  [661] = {.lex_state = 371},
  [662] = {.lex_state = 305},
  [663] = {.lex_state = 305},
  [664] = {.lex_state = 317},
  [665] = {.lex_state = 342},
  [666] = {.lex_state = 371},
  [667] = {.lex_state = 380},
  [668] = {.lex_state = 332},
  [669] = {.lex_state = 317},
  [670] = {.lex_state = 422},
  [671] = {.lex_state = 317},
  [672] = {.lex_state = 317},
  [673] = {.lex_state = 501},
  [674] = {.lex_state = 317},
  [675] = {.lex_state = 371},
  [676] = {.lex_state = 307},
  [677] = {.lex_state = 371},
  [678] = {.lex_state = 501},
  [679] = {.lex_state = 317},
  [680] = {.lex_state = 317},
  [681] = {.lex_state = 429},
  [682] = {.lex_state = 317},
  [683] = {.lex_state = 334},
  [684] = {.lex_state = 426},
  [685] = {.lex_state = 317},
  [686] = {.lex_state = 431, .external_lex_state = 2},
  [687] = {.lex_state = 317},
  [688] = {.lex_state = 509, .external_lex_state = 2},
  [689] = {.lex_state = 509, .external_lex_state = 2},
  [690] = {.lex_state = 317},
  [691] = {.lex_state = 342},
  [692] = {.lex_state = 307},
  [693] = {.lex_state = 198},
  [694] = {.lex_state = 371},
  [695] = {.lex_state = 437, .external_lex_state = 5},
  [696] = {.lex_state = 313, .external_lex_state = 4},
  [697] = {.lex_state = 313, .external_lex_state = 2},
  [698] = {.lex_state = 198},
  [699] = {.lex_state = 198},
  [700] = {.lex_state = 431},
  [701] = {.lex_state = 317},
  [702] = {.lex_state = 509},
  [703] = {.lex_state = 509},
  [704] = {.lex_state = 317},
  [705] = {.lex_state = 342},
  [706] = {.lex_state = 198, .external_lex_state = 6},
  [707] = {.lex_state = 198, .external_lex_state = 5},
  [708] = {.lex_state = 198, .external_lex_state = 5},
  [709] = {.lex_state = 313, .external_lex_state = 5},
  [710] = {.lex_state = 433, .external_lex_state = 2},
  [711] = {.lex_state = 198, .external_lex_state = 5},
  [712] = {.lex_state = 313, .external_lex_state = 3},
  [713] = {.lex_state = 433, .external_lex_state = 2},
  [714] = {.lex_state = 198, .external_lex_state = 5},
  [715] = {.lex_state = 317},
  [716] = {.lex_state = 511, .external_lex_state = 5},
  [717] = {.lex_state = 511, .external_lex_state = 5},
  [718] = {.lex_state = 317},
  [719] = {.lex_state = 342},
  [720] = {.lex_state = 345, .external_lex_state = 5},
  [721] = {.lex_state = 578, .external_lex_state = 5},
  [722] = {.lex_state = 317},
  [723] = {.lex_state = 342},
  [724] = {.lex_state = 371},
  [725] = {.lex_state = 413, .external_lex_state = 2},
  [726] = {.lex_state = 415, .external_lex_state = 2},
  [727] = {.lex_state = 418, .external_lex_state = 2},
  [728] = {.lex_state = 497, .external_lex_state = 2},
  [729] = {.lex_state = 317},
  [730] = {.lex_state = 326},
  [731] = {.lex_state = 499},
  [732] = {.lex_state = 317},
  [733] = {.lex_state = 572},
  [734] = {.lex_state = 572},
  [735] = {.lex_state = 317},
  [736] = {.lex_state = 342},
  [737] = {.lex_state = 305},
  [738] = {.lex_state = 317},
  [739] = {.lex_state = 332},
  [740] = {.lex_state = 422},
  [741] = {.lex_state = 317},
  [742] = {.lex_state = 317},
  [743] = {.lex_state = 317},
  [744] = {.lex_state = 307},
  [745] = {.lex_state = 317},
  [746] = {.lex_state = 371},
  [747] = {.lex_state = 317},
  [748] = {.lex_state = 334},
  [749] = {.lex_state = 426},
  [750] = {.lex_state = 431, .external_lex_state = 2},
  [751] = {.lex_state = 509, .external_lex_state = 2},
  [752] = {.lex_state = 317},
  [753] = {.lex_state = 313, .external_lex_state = 5},
  [754] = {.lex_state = 371},
  [755] = {.lex_state = 371},
  [756] = {.lex_state = 431},
  [757] = {.lex_state = 509},
  [758] = {.lex_state = 317},
  [759] = {.lex_state = 198, .external_lex_state = 5},
  [760] = {.lex_state = 198, .external_lex_state = 5},
  [761] = {.lex_state = 313, .external_lex_state = 5},
  [762] = {.lex_state = 198, .external_lex_state = 6},
  [763] = {.lex_state = 198, .external_lex_state = 5},
  [764] = {.lex_state = 313, .external_lex_state = 3},
  [765] = {.lex_state = 511, .external_lex_state = 5},
  [766] = {.lex_state = 317},
  [767] = {.lex_state = 578, .external_lex_state = 5},
  [768] = {.lex_state = 578, .external_lex_state = 5},
  [769] = {.lex_state = 317},
  [770] = {.lex_state = 342},
  [771] = {.lex_state = 497, .external_lex_state = 2},
  [772] = {.lex_state = 499},
  [773] = {.lex_state = 572},
  [774] = {.lex_state = 317},
  [775] = {.lex_state = 305},
  [776] = {.lex_state = 317},
  [777] = {.lex_state = 509, .external_lex_state = 2},
  [778] = {.lex_state = 437, .external_lex_state = 5},
  [779] = {.lex_state = 307},
  [780] = {.lex_state = 509},
  [781] = {.lex_state = 198, .external_lex_state = 5},
  [782] = {.lex_state = 198, .external_lex_state = 5},
  [783] = {.lex_state = 198, .external_lex_state = 5},
  [784] = {.lex_state = 511, .external_lex_state = 5},
  [785] = {.lex_state = 578, .external_lex_state = 5},
  [786] = {.lex_state = 317},
  [787] = {.lex_state = 572},
  [788] = {.lex_state = 313, .external_lex_state = 5},
  [789] = {.lex_state = 578, .external_lex_state = 5},
  [790] = {.lex_state = 371},
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(17),
    [anon_sym_data] = ACTIONS(19),
    [anon_sym_codata] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_field] = ACTIONS(25),
    [sym_pragma] = ACTIONS(27),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [2] = {
    [sym__newline] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_rewrite] = ACTIONS(33),
    [anon_sym_with] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [4] = {
    [sym_literal] = STATE(41),
    [sym__atom_no_curly] = STATE(41),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(57),
    [sym_qualified_name] = ACTIONS(59),
    [anon_sym__] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_Prop] = ACTIONS(59),
    [anon_sym_Set] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_quoteTerm] = ACTIONS(59),
    [anon_sym_unquote] = ACTIONS(59),
    [anon_sym_record] = ACTIONS(63),
  },
  [5] = {
    [sym_name] = ACTIONS(65),
    [sym_comment] = ACTIONS(15),
  },
  [6] = {
    [sym_name] = ACTIONS(67),
    [sym_comment] = ACTIONS(15),
  },
  [7] = {
    [sym__declarations0] = STATE(45),
    [sym__newline] = ACTIONS(69),
    [sym__indent] = ACTIONS(71),
    [sym_comment] = ACTIONS(73),
  },
  [8] = {
    [sym__arg_type_signatures_block] = STATE(47),
    [sym__indent] = ACTIONS(75),
    [sym_comment] = ACTIONS(73),
  },
  [9] = {
    [sym_integer] = STATE(49),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(77),
    [sym_comment] = ACTIONS(73),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(73),
  },
  [11] = {
    [sym_rewrite_equations] = STATE(52),
    [sym_with_expressions] = STATE(53),
    [sym__newline] = ACTIONS(81),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_module] = ACTIONS(81),
    [anon_sym_rewrite] = ACTIONS(83),
    [anon_sym_with] = ACTIONS(85),
    [anon_sym_where] = ACTIONS(81),
  },
  [12] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [13] = {
    [sym__newline] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_rewrite] = ACTIONS(95),
    [anon_sym_with] = ACTIONS(95),
    [anon_sym_where] = ACTIONS(95),
  },
  [14] = {
    [sym__newline] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [anon_sym_rewrite] = ACTIONS(99),
    [anon_sym_with] = ACTIONS(99),
    [anon_sym_where] = ACTIONS(99),
  },
  [15] = {
    [sym_rhs] = STATE(58),
    [sym_where_clause] = STATE(59),
    [sym__newline] = ACTIONS(101),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_module] = ACTIONS(105),
    [anon_sym_where] = ACTIONS(107),
  },
  [16] = {
    [sym__newline] = ACTIONS(109),
    [sym_comment] = ACTIONS(73),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_record] = ACTIONS(113),
    [anon_sym_data] = ACTIONS(113),
    [anon_sym_codata] = ACTIONS(113),
    [anon_sym_instance] = ACTIONS(113),
    [anon_sym_field] = ACTIONS(113),
    [sym_pragma] = ACTIONS(115),
    [anon_sym_infix] = ACTIONS(113),
    [anon_sym_infixl] = ACTIONS(113),
    [anon_sym_infixr] = ACTIONS(113),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(73),
  },
  [19] = {
    [sym_literal] = STATE(14),
    [sym__application] = STATE(62),
    [sym__expr2] = STATE(62),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(119),
  },
  [20] = {
    [sym_literal] = STATE(14),
    [sym__expr2] = STATE(64),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(119),
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
    [sym_function_clause] = STATE(66),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(67),
    [sym_data_signature_only] = STATE(66),
    [sym_record] = STATE(67),
    [sym_record_signature_only] = STATE(66),
    [sym_field] = STATE(67),
    [sym__declaration] = STATE(66),
    [sym__declaration_block] = STATE(67),
    [sym_infix] = STATE(66),
    [sym_instance] = STATE(67),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(68),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(17),
    [anon_sym_data] = ACTIONS(19),
    [anon_sym_codata] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_field] = ACTIONS(25),
    [sym_pragma] = ACTIONS(123),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [22] = {
    [sym__const_right_arrow] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [23] = {
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(127),
    [sym_comment] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(129),
  },
  [24] = {
    [sym_literal] = STATE(79),
    [sym_expr] = STATE(76),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(77),
    [sym__expr2] = STATE(77),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(80),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [25] = {
    [sym__newline] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_module] = ACTIONS(145),
    [anon_sym_rewrite] = ACTIONS(145),
    [anon_sym_with] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
  },
  [26] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(84),
    [sym__expr2] = STATE(84),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [27] = {
    [sym_literal] = STATE(91),
    [sym__atom_no_curly] = STATE(91),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(161),
    [anon_sym__] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(161),
    [anon_sym_Prop] = ACTIONS(161),
    [anon_sym_Set] = ACTIONS(161),
    [anon_sym_quote] = ACTIONS(161),
    [anon_sym_quoteTerm] = ACTIONS(161),
    [anon_sym_unquote] = ACTIONS(161),
    [anon_sym_record] = ACTIONS(165),
  },
  [28] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(92),
    [sym__expr2] = STATE(92),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(73),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(169),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(171),
  },
  [31] = {
    [sym__const_right_arrow] = ACTIONS(171),
    [sym_comment] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [32] = {
    [sym__const_right_arrow] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [33] = {
    [sym__const_right_arrow] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
  },
  [34] = {
    [sym__const_right_arrow] = ACTIONS(171),
    [sym_comment] = ACTIONS(73),
  },
  [35] = {
    [sym_literal] = STATE(100),
    [sym__application] = STATE(98),
    [sym__expr2] = STATE(98),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(99),
    [sym__atom_curly] = STATE(100),
    [sym__atom_no_curly] = STATE(100),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(101),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(175),
    [sym_qualified_name] = ACTIONS(177),
    [anon_sym__] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(177),
    [anon_sym_Prop] = ACTIONS(177),
    [anon_sym_Set] = ACTIONS(177),
    [anon_sym_quote] = ACTIONS(177),
    [anon_sym_quoteTerm] = ACTIONS(177),
    [anon_sym_unquote] = ACTIONS(177),
    [anon_sym_record] = ACTIONS(181),
  },
  [36] = {
    [sym_literal] = STATE(33),
    [sym__expr2] = STATE(103),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [aux_sym__application_repeat1] = STATE(104),
    [sym__const_right_arrow] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
  },
  [37] = {
    [sym_typed_binding] = STATE(106),
    [aux_sym__typed_bindings1_repeat1] = STATE(106),
    [sym__const_right_arrow] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [38] = {
    [sym_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
  },
  [39] = {
    [sym__record_assignments1] = STATE(109),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(15),
  },
  [40] = {
    [sym_literal] = STATE(112),
    [sym__atom_no_curly] = STATE(112),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(193),
    [anon_sym__] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(193),
    [anon_sym_Prop] = ACTIONS(193),
    [anon_sym_Set] = ACTIONS(193),
    [anon_sym_quote] = ACTIONS(193),
    [anon_sym_quoteTerm] = ACTIONS(193),
    [anon_sym_unquote] = ACTIONS(193),
    [anon_sym_record] = ACTIONS(165),
  },
  [41] = {
    [sym_anonymous_name] = STATE(120),
    [sym__binding_name] = STATE(120),
    [sym_untyped_binding] = STATE(122),
    [sym_typed_binding] = STATE(122),
    [sym__typed_untyped_binding1] = STATE(121),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(122),
    [sym_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_where] = ACTIONS(213),
  },
  [42] = {
    [sym_anonymous_name] = STATE(120),
    [sym__binding_name] = STATE(120),
    [sym_untyped_binding] = STATE(122),
    [sym_typed_binding] = STATE(122),
    [sym__typed_untyped_binding1] = STATE(126),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(122),
    [sym_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_where] = ACTIONS(219),
  },
  [43] = {
    [sym_anonymous_name] = STATE(120),
    [sym__binding_name] = STATE(120),
    [sym_untyped_binding] = STATE(122),
    [sym_typed_binding] = STATE(122),
    [sym__typed_untyped_binding1] = STATE(128),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(122),
    [sym_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_where] = ACTIONS(219),
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
    [sym_function_clause] = STATE(134),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(135),
    [sym_data_signature_only] = STATE(134),
    [sym_record] = STATE(135),
    [sym_record_signature_only] = STATE(134),
    [sym_field] = STATE(135),
    [sym__declaration] = STATE(134),
    [sym__declaration_block] = STATE(135),
    [sym_infix] = STATE(134),
    [sym_instance] = STATE(135),
    [sym__declarations1] = STATE(136),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(223),
    [anon_sym_data] = ACTIONS(225),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(229),
    [anon_sym_field] = ACTIONS(231),
    [sym_pragma] = ACTIONS(233),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(235),
    [sym_qualified_name] = ACTIONS(237),
    [anon_sym__] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(15),
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
    [sym_pragma] = ACTIONS(235),
    [anon_sym_infix] = ACTIONS(237),
    [anon_sym_infixl] = ACTIONS(237),
    [anon_sym_infixr] = ACTIONS(237),
  },
  [46] = {
    [sym__maybe_dotted_name] = STATE(143),
    [sym__arg_names] = STATE(144),
    [sym_arg_name] = STATE(146),
    [sym__arg_type_signatures1] = STATE(145),
    [sym_arg_type_signature] = STATE(147),
    [aux_sym__arg_names_repeat1] = STATE(146),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(147),
    [sym_name] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(249),
    [anon_sym_overlap] = ACTIONS(251),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(253),
    [sym_qualified_name] = ACTIONS(255),
    [anon_sym__] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(255),
    [anon_sym_Prop] = ACTIONS(255),
    [anon_sym_Set] = ACTIONS(255),
    [anon_sym_quote] = ACTIONS(255),
    [anon_sym_quoteTerm] = ACTIONS(255),
    [anon_sym_unquote] = ACTIONS(255),
    [anon_sym_record] = ACTIONS(255),
    [anon_sym_data] = ACTIONS(255),
    [anon_sym_codata] = ACTIONS(255),
    [anon_sym_instance] = ACTIONS(255),
    [anon_sym_field] = ACTIONS(255),
    [sym_pragma] = ACTIONS(253),
    [anon_sym_infix] = ACTIONS(255),
    [anon_sym_infixl] = ACTIONS(255),
    [anon_sym_infixr] = ACTIONS(255),
  },
  [48] = {
    [sym_name] = ACTIONS(257),
    [anon_sym__] = ACTIONS(257),
    [sym_comment] = ACTIONS(15),
  },
  [49] = {
    [sym_anonymous_name] = STATE(149),
    [sym__binding_name] = STATE(149),
    [aux_sym_infix_repeat1] = STATE(149),
    [sym_name] = ACTIONS(259),
    [anon_sym__] = ACTIONS(261),
    [sym_comment] = ACTIONS(15),
  },
  [50] = {
    [sym_literal] = STATE(155),
    [sym__expr1] = STATE(153),
    [sym__application] = STATE(153),
    [sym__expr2] = STATE(153),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(154),
    [sym__atom_curly] = STATE(155),
    [sym__atom_no_curly] = STATE(155),
    [aux_sym__expr1_repeat1] = STATE(156),
    [aux_sym__application_repeat1] = STATE(157),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(263),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(265),
    [sym_qualified_name] = ACTIONS(267),
    [anon_sym__] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(269),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(267),
    [anon_sym_Prop] = ACTIONS(267),
    [anon_sym_Set] = ACTIONS(267),
    [anon_sym_quote] = ACTIONS(267),
    [anon_sym_quoteTerm] = ACTIONS(267),
    [anon_sym_unquote] = ACTIONS(267),
    [anon_sym_record] = ACTIONS(271),
  },
  [51] = {
    [sym_literal] = STATE(163),
    [sym__expr1] = STATE(161),
    [sym__application] = STATE(161),
    [sym__expr2] = STATE(161),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(162),
    [sym__atom_curly] = STATE(163),
    [sym__atom_no_curly] = STATE(163),
    [aux_sym__expr1_repeat1] = STATE(164),
    [aux_sym__application_repeat1] = STATE(165),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(275),
    [sym_qualified_name] = ACTIONS(277),
    [anon_sym__] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(277),
    [anon_sym_Prop] = ACTIONS(277),
    [anon_sym_Set] = ACTIONS(277),
    [anon_sym_quote] = ACTIONS(277),
    [anon_sym_quoteTerm] = ACTIONS(277),
    [anon_sym_unquote] = ACTIONS(277),
    [anon_sym_record] = ACTIONS(281),
  },
  [52] = {
    [sym_with_expressions] = STATE(166),
    [sym__newline] = ACTIONS(283),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_module] = ACTIONS(283),
    [anon_sym_with] = ACTIONS(85),
    [anon_sym_where] = ACTIONS(283),
  },
  [53] = {
    [sym__newline] = ACTIONS(283),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_module] = ACTIONS(283),
    [anon_sym_where] = ACTIONS(283),
  },
  [54] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(287),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
  },
  [55] = {
    [sym_literal] = STATE(174),
    [sym_expr] = STATE(170),
    [sym__expr1] = STATE(171),
    [sym__application] = STATE(171),
    [sym__expr2] = STATE(171),
    [sym__atoms1] = STATE(172),
    [sym_atom] = STATE(173),
    [sym__atom_curly] = STATE(174),
    [sym__atom_no_curly] = STATE(174),
    [sym__typed_bindings1] = STATE(175),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(176),
    [aux_sym__application_repeat1] = STATE(177),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(291),
    [sym_qualified_name] = ACTIONS(293),
    [anon_sym__] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_Prop] = ACTIONS(293),
    [anon_sym_Set] = ACTIONS(293),
    [anon_sym_quote] = ACTIONS(293),
    [anon_sym_quoteTerm] = ACTIONS(293),
    [anon_sym_unquote] = ACTIONS(293),
    [anon_sym_record] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [56] = {
    [sym_anonymous_name] = STATE(178),
    [sym_name] = ACTIONS(299),
    [anon_sym__] = ACTIONS(301),
    [sym_comment] = ACTIONS(15),
  },
  [57] = {
    [sym__declarations0] = STATE(181),
    [sym__newline] = ACTIONS(303),
    [sym__indent] = ACTIONS(305),
    [sym_comment] = ACTIONS(73),
  },
  [58] = {
    [sym_where_clause] = STATE(182),
    [sym__newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(105),
    [anon_sym_where] = ACTIONS(107),
  },
  [59] = {
    [sym__newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(73),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(313),
    [sym_qualified_name] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(311),
    [anon_sym_Prop] = ACTIONS(311),
    [anon_sym_Set] = ACTIONS(311),
    [anon_sym_quote] = ACTIONS(311),
    [anon_sym_quoteTerm] = ACTIONS(311),
    [anon_sym_unquote] = ACTIONS(311),
    [anon_sym_record] = ACTIONS(311),
    [anon_sym_data] = ACTIONS(311),
    [anon_sym_codata] = ACTIONS(311),
    [anon_sym_instance] = ACTIONS(311),
    [anon_sym_field] = ACTIONS(311),
    [sym_pragma] = ACTIONS(313),
    [anon_sym_infix] = ACTIONS(311),
    [anon_sym_infixl] = ACTIONS(311),
    [anon_sym_infixr] = ACTIONS(311),
  },
  [61] = {
    [sym_literal] = STATE(183),
    [sym__atom_no_curly] = STATE(183),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(315),
    [anon_sym__] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_Prop] = ACTIONS(315),
    [anon_sym_Set] = ACTIONS(315),
    [anon_sym_quote] = ACTIONS(315),
    [anon_sym_quoteTerm] = ACTIONS(315),
    [anon_sym_unquote] = ACTIONS(315),
    [anon_sym_record] = ACTIONS(165),
  },
  [62] = {
    [sym__newline] = ACTIONS(317),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_module] = ACTIONS(317),
    [anon_sym_rewrite] = ACTIONS(317),
    [anon_sym_with] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
  },
  [63] = {
    [sym_literal] = STATE(187),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(188),
    [sym__atom_curly] = STATE(187),
    [sym__atom_no_curly] = STATE(187),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(322),
    [sym_qualified_name] = ACTIONS(325),
    [anon_sym__] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(328),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(325),
    [anon_sym_Prop] = ACTIONS(325),
    [anon_sym_Set] = ACTIONS(325),
    [anon_sym_quote] = ACTIONS(325),
    [anon_sym_quoteTerm] = ACTIONS(325),
    [anon_sym_unquote] = ACTIONS(325),
    [anon_sym_record] = ACTIONS(331),
  },
  [64] = {
    [sym__newline] = ACTIONS(334),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(334),
    [anon_sym_module] = ACTIONS(334),
    [anon_sym_rewrite] = ACTIONS(334),
    [anon_sym_with] = ACTIONS(334),
    [anon_sym_where] = ACTIONS(334),
  },
  [65] = {
    [sym_literal] = STATE(187),
    [sym_atom] = STATE(65),
    [sym__atom_curly] = STATE(187),
    [sym__atom_no_curly] = STATE(187),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(339),
    [sym_qualified_name] = ACTIONS(342),
    [anon_sym__] = ACTIONS(342),
    [anon_sym_LBRACE] = ACTIONS(345),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(342),
    [anon_sym_Prop] = ACTIONS(342),
    [anon_sym_Set] = ACTIONS(342),
    [anon_sym_quote] = ACTIONS(342),
    [anon_sym_quoteTerm] = ACTIONS(342),
    [anon_sym_unquote] = ACTIONS(342),
    [anon_sym_record] = ACTIONS(350),
  },
  [66] = {
    [sym__newline] = ACTIONS(353),
    [sym_comment] = ACTIONS(73),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_record] = ACTIONS(113),
    [anon_sym_data] = ACTIONS(113),
    [anon_sym_codata] = ACTIONS(113),
    [anon_sym_instance] = ACTIONS(113),
    [anon_sym_field] = ACTIONS(113),
    [sym_pragma] = ACTIONS(115),
    [anon_sym_infix] = ACTIONS(113),
    [anon_sym_infixl] = ACTIONS(113),
    [anon_sym_infixr] = ACTIONS(113),
  },
  [68] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(190),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(68),
    [sym_data_signature_only] = STATE(190),
    [sym_record] = STATE(68),
    [sym_record_signature_only] = STATE(190),
    [sym_field] = STATE(68),
    [sym__declaration] = STATE(190),
    [sym__declaration_block] = STATE(68),
    [sym_infix] = STATE(190),
    [sym_instance] = STATE(68),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(68),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(358),
    [sym_qualified_name] = ACTIONS(361),
    [anon_sym__] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(364),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(361),
    [anon_sym_Prop] = ACTIONS(361),
    [anon_sym_Set] = ACTIONS(361),
    [anon_sym_quote] = ACTIONS(361),
    [anon_sym_quoteTerm] = ACTIONS(361),
    [anon_sym_unquote] = ACTIONS(361),
    [anon_sym_record] = ACTIONS(367),
    [anon_sym_data] = ACTIONS(370),
    [anon_sym_codata] = ACTIONS(373),
    [anon_sym_instance] = ACTIONS(376),
    [anon_sym_field] = ACTIONS(379),
    [sym_pragma] = ACTIONS(382),
    [anon_sym_infix] = ACTIONS(385),
    [anon_sym_infixl] = ACTIONS(385),
    [anon_sym_infixr] = ACTIONS(385),
  },
  [69] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(191),
    [sym__expr2] = STATE(191),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [70] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(192),
    [sym__expr2] = STATE(192),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [71] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(193),
    [sym__expr2] = STATE(193),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [72] = {
    [sym__const_right_arrow] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
  },
  [73] = {
    [sym_literal] = STATE(79),
    [sym_expr] = STATE(195),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(77),
    [sym__expr2] = STATE(77),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(80),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [74] = {
    [sym__const_right_arrow] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
  },
  [75] = {
    [sym_literal] = STATE(197),
    [sym__atom_no_curly] = STATE(197),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_LBRACE] = ACTIONS(392),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
    [anon_sym_record] = ACTIONS(165),
  },
  [76] = {
    [anon_sym_RBRACE] = ACTIONS(394),
    [sym_comment] = ACTIONS(73),
  },
  [77] = {
    [anon_sym_RBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(398),
  },
  [78] = {
    [sym__const_right_arrow] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(95),
  },
  [79] = {
    [sym__const_right_arrow] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
  },
  [80] = {
    [sym_literal] = STATE(79),
    [sym__expr2] = STATE(103),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(104),
    [sym__const_right_arrow] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(400),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(141),
  },
  [81] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
  },
  [82] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(202),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(402),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [83] = {
    [sym_literal] = STATE(204),
    [sym__atom_no_curly] = STATE(204),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(404),
    [anon_sym__] = ACTIONS(404),
    [anon_sym_LBRACE] = ACTIONS(406),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(404),
    [anon_sym_Prop] = ACTIONS(404),
    [anon_sym_Set] = ACTIONS(404),
    [anon_sym_quote] = ACTIONS(404),
    [anon_sym_quoteTerm] = ACTIONS(404),
    [anon_sym_unquote] = ACTIONS(404),
    [anon_sym_record] = ACTIONS(165),
  },
  [84] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(408),
  },
  [85] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(95),
  },
  [86] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
  },
  [87] = {
    [sym_literal] = STATE(86),
    [sym__expr2] = STATE(103),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(206),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [88] = {
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(73),
  },
  [89] = {
    [sym__record_assignments1] = STATE(208),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(15),
  },
  [90] = {
    [sym_literal] = STATE(210),
    [sym__atom_no_curly] = STATE(210),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(412),
    [anon_sym__] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(414),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(412),
    [anon_sym_Prop] = ACTIONS(412),
    [anon_sym_Set] = ACTIONS(412),
    [anon_sym_quote] = ACTIONS(412),
    [anon_sym_quoteTerm] = ACTIONS(412),
    [anon_sym_unquote] = ACTIONS(412),
    [anon_sym_record] = ACTIONS(165),
  },
  [91] = {
    [anon_sym_LBRACE] = ACTIONS(416),
    [sym_comment] = ACTIONS(73),
  },
  [92] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(418),
  },
  [93] = {
    [sym__newline] = ACTIONS(420),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(422),
    [anon_sym_module] = ACTIONS(422),
    [anon_sym_rewrite] = ACTIONS(422),
    [anon_sym_with] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
  },
  [94] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(213),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [95] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [96] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(215),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(424),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [97] = {
    [sym_literal] = STATE(217),
    [sym__atom_no_curly] = STATE(217),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(426),
    [anon_sym__] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(426),
    [anon_sym_Prop] = ACTIONS(426),
    [anon_sym_Set] = ACTIONS(426),
    [anon_sym_quote] = ACTIONS(426),
    [anon_sym_quoteTerm] = ACTIONS(426),
    [anon_sym_unquote] = ACTIONS(426),
    [anon_sym_record] = ACTIONS(165),
  },
  [98] = {
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
  },
  [99] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [100] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
  },
  [101] = {
    [sym_literal] = STATE(100),
    [sym__expr2] = STATE(103),
    [sym_atom] = STATE(99),
    [sym__atom_curly] = STATE(100),
    [sym__atom_no_curly] = STATE(100),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(175),
    [sym_qualified_name] = ACTIONS(177),
    [anon_sym__] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(179),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(177),
    [anon_sym_Prop] = ACTIONS(177),
    [anon_sym_Set] = ACTIONS(177),
    [anon_sym_quote] = ACTIONS(177),
    [anon_sym_quoteTerm] = ACTIONS(177),
    [anon_sym_unquote] = ACTIONS(177),
    [anon_sym_record] = ACTIONS(181),
  },
  [102] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(76),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [103] = {
    [anon_sym_RBRACE] = ACTIONS(334),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(334),
    [anon_sym_where] = ACTIONS(334),
  },
  [104] = {
    [sym_literal] = STATE(221),
    [sym_atom] = STATE(104),
    [sym__atom_curly] = STATE(221),
    [sym__atom_no_curly] = STATE(221),
    [aux_sym__application_repeat1] = STATE(104),
    [sym__const_right_arrow] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(433),
    [sym_qualified_name] = ACTIONS(436),
    [anon_sym__] = ACTIONS(436),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(436),
    [anon_sym_Prop] = ACTIONS(436),
    [anon_sym_Set] = ACTIONS(436),
    [anon_sym_quote] = ACTIONS(436),
    [anon_sym_quoteTerm] = ACTIONS(436),
    [anon_sym_unquote] = ACTIONS(436),
    [anon_sym_record] = ACTIONS(442),
  },
  [105] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(222),
    [sym__expr2] = STATE(222),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [106] = {
    [sym_typed_binding] = STATE(106),
    [aux_sym__typed_bindings1_repeat1] = STATE(106),
    [sym__const_right_arrow] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_DOT_DOT] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(456),
    [sym_comment] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(459),
  },
  [107] = {
    [sym_literal] = STATE(230),
    [sym_atom] = STATE(232),
    [sym__atom_curly] = STATE(230),
    [sym__atom_no_curly] = STATE(230),
    [sym__open_args1] = STATE(231),
    [sym_import_directive] = STATE(233),
    [aux_sym__application_repeat1] = STATE(232),
    [aux_sym_module_assignment_repeat1] = STATE(233),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(464),
    [sym_qualified_name] = ACTIONS(466),
    [anon_sym__] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(466),
    [anon_sym_Prop] = ACTIONS(466),
    [anon_sym_Set] = ACTIONS(466),
    [anon_sym_quote] = ACTIONS(466),
    [anon_sym_quoteTerm] = ACTIONS(466),
    [anon_sym_unquote] = ACTIONS(466),
    [anon_sym_record] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_public] = ACTIONS(476),
    [anon_sym_using] = ACTIONS(478),
    [anon_sym_hiding] = ACTIONS(478),
    [anon_sym_renaming] = ACTIONS(480),
  },
  [108] = {
    [sym__newline] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_COLON] = ACTIONS(484),
    [anon_sym_module] = ACTIONS(484),
    [anon_sym_rewrite] = ACTIONS(484),
    [anon_sym_with] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [109] = {
    [anon_sym_RBRACE] = ACTIONS(486),
    [sym_comment] = ACTIONS(73),
  },
  [110] = {
    [aux_sym__record_assignments1_repeat1] = STATE(236),
    [anon_sym_RBRACE] = ACTIONS(488),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(490),
  },
  [111] = {
    [sym__record_assignments1] = STATE(238),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(492),
    [sym_comment] = ACTIONS(15),
  },
  [112] = {
    [anon_sym_LBRACE] = ACTIONS(494),
    [sym_comment] = ACTIONS(73),
  },
  [113] = {
    [sym_name] = ACTIONS(496),
    [anon_sym__] = ACTIONS(496),
    [anon_sym_DOT] = ACTIONS(496),
    [anon_sym_DOT_DOT] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(496),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(496),
    [anon_sym_where] = ACTIONS(496),
  },
  [114] = {
    [sym_anonymous_name] = STATE(243),
    [sym__binding_name] = STATE(243),
    [sym_name] = ACTIONS(500),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(504),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(506),
  },
  [115] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(245),
    [sym__expr2] = STATE(245),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [sym__field_assignments1] = STATE(246),
    [sym_field_assignment] = STATE(247),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(508),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(486),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [116] = {
    [sym_literal] = STATE(253),
    [sym__application] = STATE(251),
    [sym__expr2] = STATE(251),
    [sym_atom] = STATE(252),
    [sym__atom_curly] = STATE(253),
    [sym__atom_no_curly] = STATE(253),
    [aux_sym__application_repeat1] = STATE(254),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(512),
    [sym_qualified_name] = ACTIONS(514),
    [anon_sym__] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(514),
    [anon_sym_Prop] = ACTIONS(514),
    [anon_sym_Set] = ACTIONS(514),
    [anon_sym_quote] = ACTIONS(514),
    [anon_sym_quoteTerm] = ACTIONS(514),
    [anon_sym_unquote] = ACTIONS(514),
    [anon_sym_record] = ACTIONS(518),
  },
  [117] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(255),
    [sym__expr2] = STATE(255),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [118] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(259),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [119] = {
    [sym_record_declarations_block] = STATE(268),
    [sym__indent] = ACTIONS(530),
    [ts_builtin_sym_end] = ACTIONS(532),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(532),
    [sym_qualified_name] = ACTIONS(534),
    [anon_sym__] = ACTIONS(534),
    [anon_sym_LBRACE] = ACTIONS(534),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(534),
    [anon_sym_Prop] = ACTIONS(534),
    [anon_sym_Set] = ACTIONS(534),
    [anon_sym_quote] = ACTIONS(534),
    [anon_sym_quoteTerm] = ACTIONS(534),
    [anon_sym_unquote] = ACTIONS(534),
    [anon_sym_record] = ACTIONS(534),
    [anon_sym_data] = ACTIONS(534),
    [anon_sym_codata] = ACTIONS(534),
    [anon_sym_instance] = ACTIONS(534),
    [anon_sym_field] = ACTIONS(534),
    [sym_pragma] = ACTIONS(532),
    [anon_sym_infix] = ACTIONS(534),
    [anon_sym_infixl] = ACTIONS(534),
    [anon_sym_infixr] = ACTIONS(534),
  },
  [120] = {
    [sym_name] = ACTIONS(536),
    [anon_sym__] = ACTIONS(536),
    [anon_sym_DOT] = ACTIONS(536),
    [anon_sym_DOT_DOT] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(536),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(538),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(538),
    [anon_sym_COLON] = ACTIONS(536),
    [anon_sym_where] = ACTIONS(536),
  },
  [121] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(540),
    [anon_sym_where] = ACTIONS(542),
  },
  [122] = {
    [sym_anonymous_name] = STATE(120),
    [sym__binding_name] = STATE(120),
    [sym_untyped_binding] = STATE(271),
    [sym_typed_binding] = STATE(271),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(271),
    [sym_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(544),
    [anon_sym_where] = ACTIONS(544),
  },
  [123] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(245),
    [sym__expr2] = STATE(245),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [124] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(272),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [125] = {
    [sym__declarations0] = STATE(273),
    [sym__newline] = ACTIONS(546),
    [sym__indent] = ACTIONS(71),
    [sym_comment] = ACTIONS(73),
  },
  [126] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_where] = ACTIONS(550),
  },
  [127] = {
    [sym_literal] = STATE(283),
    [sym_expr] = STATE(279),
    [sym__expr1] = STATE(280),
    [sym__application] = STATE(280),
    [sym__expr2] = STATE(280),
    [sym__atoms1] = STATE(281),
    [sym_atom] = STATE(282),
    [sym__atom_curly] = STATE(283),
    [sym__atom_no_curly] = STATE(283),
    [sym__typed_bindings1] = STATE(284),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(285),
    [aux_sym__application_repeat1] = STATE(286),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(554),
    [sym_qualified_name] = ACTIONS(556),
    [anon_sym__] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(556),
    [anon_sym_Prop] = ACTIONS(556),
    [anon_sym_Set] = ACTIONS(556),
    [anon_sym_quote] = ACTIONS(556),
    [anon_sym_quoteTerm] = ACTIONS(556),
    [anon_sym_unquote] = ACTIONS(556),
    [anon_sym_record] = ACTIONS(560),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [128] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(562),
    [anon_sym_where] = ACTIONS(550),
  },
  [129] = {
    [sym_literal] = STATE(288),
    [sym__atom_no_curly] = STATE(288),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(57),
    [sym_qualified_name] = ACTIONS(564),
    [anon_sym__] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(564),
    [anon_sym_Prop] = ACTIONS(564),
    [anon_sym_Set] = ACTIONS(564),
    [anon_sym_quote] = ACTIONS(564),
    [anon_sym_quoteTerm] = ACTIONS(564),
    [anon_sym_unquote] = ACTIONS(564),
    [anon_sym_record] = ACTIONS(63),
  },
  [130] = {
    [sym_name] = ACTIONS(566),
    [sym_comment] = ACTIONS(15),
  },
  [131] = {
    [sym_name] = ACTIONS(568),
    [sym_comment] = ACTIONS(15),
  },
  [132] = {
    [sym__declarations0] = STATE(292),
    [sym__newline] = ACTIONS(570),
    [sym__indent] = ACTIONS(572),
    [sym_comment] = ACTIONS(73),
  },
  [133] = {
    [sym__arg_type_signatures_block] = STATE(294),
    [sym__indent] = ACTIONS(574),
    [sym_comment] = ACTIONS(73),
  },
  [134] = {
    [sym__newline] = ACTIONS(576),
    [sym_comment] = ACTIONS(73),
  },
  [135] = {
    [sym__dedent] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_record] = ACTIONS(113),
    [anon_sym_data] = ACTIONS(113),
    [anon_sym_codata] = ACTIONS(113),
    [anon_sym_instance] = ACTIONS(113),
    [anon_sym_field] = ACTIONS(113),
    [sym_pragma] = ACTIONS(115),
    [anon_sym_infix] = ACTIONS(113),
    [anon_sym_infixl] = ACTIONS(113),
    [anon_sym_infixr] = ACTIONS(113),
  },
  [136] = {
    [sym__dedent] = ACTIONS(578),
    [sym_comment] = ACTIONS(73),
  },
  [137] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(297),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(298),
    [sym_data_signature_only] = STATE(297),
    [sym_record] = STATE(298),
    [sym_record_signature_only] = STATE(297),
    [sym_field] = STATE(298),
    [sym__declaration] = STATE(297),
    [sym__declaration_block] = STATE(298),
    [sym_infix] = STATE(297),
    [sym_instance] = STATE(298),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(68),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(223),
    [anon_sym_data] = ACTIONS(225),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(229),
    [anon_sym_field] = ACTIONS(231),
    [sym_pragma] = ACTIONS(580),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [138] = {
    [sym_name] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(584),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(586),
    [sym_comment] = ACTIONS(15),
  },
  [139] = {
    [sym__maybe_dotted_names1] = STATE(303),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(304),
    [sym_name] = ACTIONS(588),
    [anon_sym_DOT] = ACTIONS(590),
    [anon_sym_DOT_DOT] = ACTIONS(592),
    [sym_comment] = ACTIONS(15),
  },
  [140] = {
    [sym__maybe_dotted_names1] = STATE(306),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(307),
    [sym_name] = ACTIONS(594),
    [anon_sym_DOT] = ACTIONS(596),
    [anon_sym_DOT_DOT] = ACTIONS(598),
    [sym_comment] = ACTIONS(15),
  },
  [141] = {
    [sym__arg_type_signatures_block] = STATE(309),
    [sym__indent] = ACTIONS(600),
    [sym_comment] = ACTIONS(73),
  },
  [142] = {
    [sym__maybe_dotted_name] = STATE(143),
    [sym__arg_names] = STATE(310),
    [sym_arg_name] = STATE(146),
    [aux_sym__arg_names_repeat1] = STATE(146),
    [sym_name] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(15),
  },
  [143] = {
    [sym_name] = ACTIONS(602),
    [anon_sym_DOT] = ACTIONS(602),
    [anon_sym_DOT_DOT] = ACTIONS(604),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(604),
    [sym_comment] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(602),
  },
  [144] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(606),
  },
  [145] = {
    [sym__dedent] = ACTIONS(608),
    [sym_comment] = ACTIONS(73),
  },
  [146] = {
    [sym__maybe_dotted_name] = STATE(143),
    [sym_arg_name] = STATE(313),
    [aux_sym__arg_names_repeat1] = STATE(313),
    [sym_name] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(610),
  },
  [147] = {
    [sym__maybe_dotted_name] = STATE(143),
    [sym__arg_names] = STATE(144),
    [sym_arg_name] = STATE(146),
    [sym_arg_type_signature] = STATE(314),
    [aux_sym__arg_names_repeat1] = STATE(146),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(314),
    [sym__dedent] = ACTIONS(612),
    [sym_name] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(249),
    [anon_sym_overlap] = ACTIONS(251),
  },
  [148] = {
    [sym__newline] = ACTIONS(498),
    [sym_name] = ACTIONS(496),
    [anon_sym__] = ACTIONS(496),
    [sym_comment] = ACTIONS(15),
  },
  [149] = {
    [sym_anonymous_name] = STATE(315),
    [sym__binding_name] = STATE(315),
    [aux_sym_infix_repeat1] = STATE(315),
    [sym__newline] = ACTIONS(614),
    [sym_name] = ACTIONS(616),
    [anon_sym__] = ACTIONS(261),
    [sym_comment] = ACTIONS(15),
  },
  [150] = {
    [sym__newline] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_with] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
  },
  [151] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(317),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(618),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [152] = {
    [sym_literal] = STATE(319),
    [sym__atom_no_curly] = STATE(319),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(620),
    [anon_sym__] = ACTIONS(620),
    [anon_sym_LBRACE] = ACTIONS(622),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(620),
    [anon_sym_Prop] = ACTIONS(620),
    [anon_sym_Set] = ACTIONS(620),
    [anon_sym_quote] = ACTIONS(620),
    [anon_sym_quoteTerm] = ACTIONS(620),
    [anon_sym_unquote] = ACTIONS(620),
    [anon_sym_record] = ACTIONS(165),
  },
  [153] = {
    [sym__newline] = ACTIONS(624),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(624),
    [anon_sym_COLON] = ACTIONS(624),
    [anon_sym_module] = ACTIONS(624),
    [anon_sym_with] = ACTIONS(624),
    [anon_sym_where] = ACTIONS(624),
  },
  [154] = {
    [sym__newline] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_with] = ACTIONS(95),
    [anon_sym_where] = ACTIONS(95),
  },
  [155] = {
    [sym__newline] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [anon_sym_with] = ACTIONS(99),
    [anon_sym_where] = ACTIONS(99),
  },
  [156] = {
    [sym_literal] = STATE(155),
    [sym__application] = STATE(62),
    [sym__expr2] = STATE(62),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(154),
    [sym__atom_curly] = STATE(155),
    [sym__atom_no_curly] = STATE(155),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(157),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(263),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(265),
    [sym_qualified_name] = ACTIONS(267),
    [anon_sym__] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(269),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(267),
    [anon_sym_Prop] = ACTIONS(267),
    [anon_sym_Set] = ACTIONS(267),
    [anon_sym_quote] = ACTIONS(267),
    [anon_sym_quoteTerm] = ACTIONS(267),
    [anon_sym_unquote] = ACTIONS(267),
    [anon_sym_record] = ACTIONS(271),
  },
  [157] = {
    [sym_literal] = STATE(155),
    [sym__expr2] = STATE(64),
    [sym_atom] = STATE(154),
    [sym__atom_curly] = STATE(155),
    [sym__atom_no_curly] = STATE(155),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(263),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(265),
    [sym_qualified_name] = ACTIONS(267),
    [anon_sym__] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(269),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(267),
    [anon_sym_Prop] = ACTIONS(267),
    [anon_sym_Set] = ACTIONS(267),
    [anon_sym_quote] = ACTIONS(267),
    [anon_sym_quoteTerm] = ACTIONS(267),
    [anon_sym_unquote] = ACTIONS(267),
    [anon_sym_record] = ACTIONS(271),
  },
  [158] = {
    [sym__newline] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
  },
  [159] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(321),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(626),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [160] = {
    [sym_literal] = STATE(323),
    [sym__atom_no_curly] = STATE(323),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(628),
    [anon_sym__] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(630),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(628),
    [anon_sym_Prop] = ACTIONS(628),
    [anon_sym_Set] = ACTIONS(628),
    [anon_sym_quote] = ACTIONS(628),
    [anon_sym_quoteTerm] = ACTIONS(628),
    [anon_sym_unquote] = ACTIONS(628),
    [anon_sym_record] = ACTIONS(165),
  },
  [161] = {
    [sym__newline] = ACTIONS(632),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(632),
    [anon_sym_module] = ACTIONS(632),
    [anon_sym_where] = ACTIONS(632),
  },
  [162] = {
    [sym__newline] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_where] = ACTIONS(95),
  },
  [163] = {
    [sym__newline] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [anon_sym_where] = ACTIONS(99),
  },
  [164] = {
    [sym_literal] = STATE(163),
    [sym__application] = STATE(62),
    [sym__expr2] = STATE(62),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(162),
    [sym__atom_curly] = STATE(163),
    [sym__atom_no_curly] = STATE(163),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(165),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(275),
    [sym_qualified_name] = ACTIONS(277),
    [anon_sym__] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(277),
    [anon_sym_Prop] = ACTIONS(277),
    [anon_sym_Set] = ACTIONS(277),
    [anon_sym_quote] = ACTIONS(277),
    [anon_sym_quoteTerm] = ACTIONS(277),
    [anon_sym_unquote] = ACTIONS(277),
    [anon_sym_record] = ACTIONS(281),
  },
  [165] = {
    [sym_literal] = STATE(163),
    [sym__expr2] = STATE(64),
    [sym_atom] = STATE(162),
    [sym__atom_curly] = STATE(163),
    [sym__atom_no_curly] = STATE(163),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(275),
    [sym_qualified_name] = ACTIONS(277),
    [anon_sym__] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(279),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(277),
    [anon_sym_Prop] = ACTIONS(277),
    [anon_sym_Set] = ACTIONS(277),
    [anon_sym_quote] = ACTIONS(277),
    [anon_sym_quoteTerm] = ACTIONS(277),
    [anon_sym_unquote] = ACTIONS(277),
    [anon_sym_record] = ACTIONS(281),
  },
  [166] = {
    [sym__newline] = ACTIONS(634),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(634),
    [anon_sym_COLON] = ACTIONS(634),
    [anon_sym_module] = ACTIONS(634),
    [anon_sym_where] = ACTIONS(634),
  },
  [167] = {
    [sym__newline] = ACTIONS(31),
    [sym__const_right_arrow] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
  },
  [168] = {
    [sym_literal] = STATE(79),
    [sym_expr] = STATE(325),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(77),
    [sym__expr2] = STATE(77),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(80),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(636),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [169] = {
    [sym_literal] = STATE(327),
    [sym__atom_no_curly] = STATE(327),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(638),
    [anon_sym__] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(640),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(638),
    [anon_sym_Prop] = ACTIONS(638),
    [anon_sym_Set] = ACTIONS(638),
    [anon_sym_quote] = ACTIONS(638),
    [anon_sym_quoteTerm] = ACTIONS(638),
    [anon_sym_unquote] = ACTIONS(638),
    [anon_sym_record] = ACTIONS(165),
  },
  [170] = {
    [sym__newline] = ACTIONS(642),
    [sym_comment] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(642),
    [anon_sym_where] = ACTIONS(642),
  },
  [171] = {
    [sym__newline] = ACTIONS(169),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(644),
    [anon_sym_module] = ACTIONS(169),
    [anon_sym_where] = ACTIONS(169),
  },
  [172] = {
    [sym__const_right_arrow] = ACTIONS(644),
    [sym_comment] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [173] = {
    [sym__newline] = ACTIONS(89),
    [sym__const_right_arrow] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_where] = ACTIONS(95),
  },
  [174] = {
    [sym__newline] = ACTIONS(97),
    [sym__const_right_arrow] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [anon_sym_where] = ACTIONS(99),
  },
  [175] = {
    [sym__const_right_arrow] = ACTIONS(644),
    [sym_comment] = ACTIONS(73),
  },
  [176] = {
    [sym_literal] = STATE(333),
    [sym__application] = STATE(62),
    [sym__expr2] = STATE(62),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(332),
    [sym__atom_curly] = STATE(333),
    [sym__atom_no_curly] = STATE(333),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(334),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(648),
    [sym_qualified_name] = ACTIONS(650),
    [anon_sym__] = ACTIONS(650),
    [anon_sym_LBRACE] = ACTIONS(652),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(650),
    [anon_sym_Prop] = ACTIONS(650),
    [anon_sym_Set] = ACTIONS(650),
    [anon_sym_quote] = ACTIONS(650),
    [anon_sym_quoteTerm] = ACTIONS(650),
    [anon_sym_unquote] = ACTIONS(650),
    [anon_sym_record] = ACTIONS(654),
  },
  [177] = {
    [sym_literal] = STATE(174),
    [sym__expr2] = STATE(64),
    [sym_atom] = STATE(173),
    [sym__atom_curly] = STATE(174),
    [sym__atom_no_curly] = STATE(174),
    [aux_sym__application_repeat1] = STATE(104),
    [sym__const_right_arrow] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(291),
    [sym_qualified_name] = ACTIONS(293),
    [anon_sym__] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(656),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_Prop] = ACTIONS(293),
    [anon_sym_Set] = ACTIONS(293),
    [anon_sym_quote] = ACTIONS(293),
    [anon_sym_quoteTerm] = ACTIONS(293),
    [anon_sym_unquote] = ACTIONS(293),
    [anon_sym_record] = ACTIONS(297),
  },
  [178] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(658),
  },
  [179] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(498),
  },
  [180] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(134),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(135),
    [sym_data_signature_only] = STATE(134),
    [sym_record] = STATE(135),
    [sym_record_signature_only] = STATE(134),
    [sym_field] = STATE(135),
    [sym__declaration] = STATE(134),
    [sym__declaration_block] = STATE(135),
    [sym_infix] = STATE(134),
    [sym_instance] = STATE(135),
    [sym__declarations1] = STATE(337),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(223),
    [anon_sym_data] = ACTIONS(225),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(229),
    [anon_sym_field] = ACTIONS(231),
    [sym_pragma] = ACTIONS(233),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [181] = {
    [sym__newline] = ACTIONS(660),
    [sym_comment] = ACTIONS(73),
  },
  [182] = {
    [sym__newline] = ACTIONS(662),
    [sym_comment] = ACTIONS(73),
  },
  [183] = {
    [anon_sym_LBRACE] = ACTIONS(664),
    [sym_comment] = ACTIONS(73),
  },
  [184] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
  },
  [185] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(340),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(666),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [186] = {
    [sym_literal] = STATE(342),
    [sym__atom_no_curly] = STATE(342),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(668),
    [anon_sym__] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(670),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(668),
    [anon_sym_Prop] = ACTIONS(668),
    [anon_sym_Set] = ACTIONS(668),
    [anon_sym_quote] = ACTIONS(668),
    [anon_sym_quoteTerm] = ACTIONS(668),
    [anon_sym_unquote] = ACTIONS(668),
    [anon_sym_record] = ACTIONS(165),
  },
  [187] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
  },
  [188] = {
    [sym_literal] = STATE(187),
    [sym_atom] = STATE(65),
    [sym__atom_curly] = STATE(187),
    [sym__atom_no_curly] = STATE(187),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(672),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(674),
    [sym_qualified_name] = ACTIONS(676),
    [anon_sym__] = ACTIONS(676),
    [anon_sym_LBRACE] = ACTIONS(678),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(676),
    [anon_sym_Prop] = ACTIONS(676),
    [anon_sym_Set] = ACTIONS(676),
    [anon_sym_quote] = ACTIONS(676),
    [anon_sym_quoteTerm] = ACTIONS(676),
    [anon_sym_unquote] = ACTIONS(676),
    [anon_sym_record] = ACTIONS(680),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(682),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(313),
    [sym_qualified_name] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(311),
    [anon_sym_Prop] = ACTIONS(311),
    [anon_sym_Set] = ACTIONS(311),
    [anon_sym_quote] = ACTIONS(311),
    [anon_sym_quoteTerm] = ACTIONS(311),
    [anon_sym_unquote] = ACTIONS(311),
    [anon_sym_record] = ACTIONS(311),
    [anon_sym_data] = ACTIONS(311),
    [anon_sym_codata] = ACTIONS(311),
    [anon_sym_instance] = ACTIONS(311),
    [anon_sym_field] = ACTIONS(311),
    [sym_pragma] = ACTIONS(313),
    [anon_sym_infix] = ACTIONS(311),
    [anon_sym_infixl] = ACTIONS(311),
    [anon_sym_infixr] = ACTIONS(311),
  },
  [190] = {
    [sym__newline] = ACTIONS(684),
    [sym_comment] = ACTIONS(73),
  },
  [191] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(686),
  },
  [192] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(688),
  },
  [193] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(690),
  },
  [194] = {
    [sym__const_right_arrow] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
  },
  [195] = {
    [anon_sym_RBRACE] = ACTIONS(692),
    [sym_comment] = ACTIONS(73),
  },
  [196] = {
    [sym__record_assignments1] = STATE(349),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(694),
    [sym_comment] = ACTIONS(15),
  },
  [197] = {
    [anon_sym_LBRACE] = ACTIONS(696),
    [sym_comment] = ACTIONS(73),
  },
  [198] = {
    [sym__const_right_arrow] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
  },
  [199] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(351),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [200] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(195),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [201] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
  },
  [202] = {
    [anon_sym_RBRACE] = ACTIONS(698),
    [sym_comment] = ACTIONS(73),
  },
  [203] = {
    [sym__record_assignments1] = STATE(354),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(700),
    [sym_comment] = ACTIONS(15),
  },
  [204] = {
    [anon_sym_LBRACE] = ACTIONS(702),
    [sym_comment] = ACTIONS(73),
  },
  [205] = {
    [sym_literal] = STATE(363),
    [sym_expr] = STATE(359),
    [sym__expr1] = STATE(360),
    [sym__application] = STATE(360),
    [sym__expr2] = STATE(360),
    [sym__atoms1] = STATE(361),
    [sym_atom] = STATE(362),
    [sym__atom_curly] = STATE(363),
    [sym__atom_no_curly] = STATE(363),
    [sym__typed_bindings1] = STATE(364),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(365),
    [aux_sym__application_repeat1] = STATE(366),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(706),
    [sym_qualified_name] = ACTIONS(708),
    [anon_sym__] = ACTIONS(708),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(710),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(708),
    [anon_sym_Prop] = ACTIONS(708),
    [anon_sym_Set] = ACTIONS(708),
    [anon_sym_quote] = ACTIONS(708),
    [anon_sym_quoteTerm] = ACTIONS(708),
    [anon_sym_unquote] = ACTIONS(708),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [206] = {
    [sym_literal] = STATE(370),
    [sym_atom] = STATE(206),
    [sym__atom_curly] = STATE(370),
    [sym__atom_no_curly] = STATE(370),
    [aux_sym__application_repeat1] = STATE(206),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(714),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(717),
    [sym_qualified_name] = ACTIONS(720),
    [anon_sym__] = ACTIONS(720),
    [anon_sym_LBRACE] = ACTIONS(723),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(720),
    [anon_sym_Prop] = ACTIONS(720),
    [anon_sym_Set] = ACTIONS(720),
    [anon_sym_quote] = ACTIONS(720),
    [anon_sym_quoteTerm] = ACTIONS(720),
    [anon_sym_unquote] = ACTIONS(720),
    [anon_sym_record] = ACTIONS(726),
  },
  [207] = {
    [sym__const_right_arrow] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_RPAREN] = ACTIONS(482),
  },
  [208] = {
    [anon_sym_RBRACE] = ACTIONS(729),
    [sym_comment] = ACTIONS(73),
  },
  [209] = {
    [sym__record_assignments1] = STATE(373),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(731),
    [sym_comment] = ACTIONS(15),
  },
  [210] = {
    [anon_sym_LBRACE] = ACTIONS(733),
    [sym_comment] = ACTIONS(73),
  },
  [211] = {
    [sym__field_assignments1] = STATE(376),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(729),
    [sym_comment] = ACTIONS(15),
  },
  [212] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(377),
    [sym__expr1] = STATE(378),
    [sym__application] = STATE(378),
    [sym__expr2] = STATE(378),
    [sym__atoms1] = STATE(379),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(380),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [213] = {
    [anon_sym_RBRACE] = ACTIONS(737),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(737),
    [anon_sym_RPAREN] = ACTIONS(737),
    [anon_sym_where] = ACTIONS(737),
  },
  [214] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
  },
  [215] = {
    [anon_sym_RBRACE] = ACTIONS(739),
    [sym_comment] = ACTIONS(73),
  },
  [216] = {
    [sym__record_assignments1] = STATE(383),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(741),
    [sym_comment] = ACTIONS(15),
  },
  [217] = {
    [anon_sym_LBRACE] = ACTIONS(743),
    [sym_comment] = ACTIONS(73),
  },
  [218] = {
    [sym__const_right_arrow] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
  },
  [219] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(386),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(745),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [220] = {
    [sym_literal] = STATE(388),
    [sym__atom_no_curly] = STATE(388),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(747),
    [anon_sym__] = ACTIONS(747),
    [anon_sym_LBRACE] = ACTIONS(749),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(747),
    [anon_sym_Prop] = ACTIONS(747),
    [anon_sym_Set] = ACTIONS(747),
    [anon_sym_quote] = ACTIONS(747),
    [anon_sym_quoteTerm] = ACTIONS(747),
    [anon_sym_unquote] = ACTIONS(747),
    [anon_sym_record] = ACTIONS(165),
  },
  [221] = {
    [sym__const_right_arrow] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
  },
  [222] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(398),
  },
  [223] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_public] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_hiding] = ACTIONS(33),
    [anon_sym_renaming] = ACTIONS(33),
  },
  [224] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(390),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(751),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [225] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(391),
    [sym__expr1] = STATE(392),
    [sym__application] = STATE(392),
    [sym__expr2] = STATE(392),
    [sym__atoms1] = STATE(393),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(394),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [226] = {
    [sym_literal] = STATE(396),
    [sym__atom_no_curly] = STATE(396),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(753),
    [anon_sym__] = ACTIONS(753),
    [anon_sym_LBRACE] = ACTIONS(755),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_Prop] = ACTIONS(753),
    [anon_sym_Set] = ACTIONS(753),
    [anon_sym_quote] = ACTIONS(753),
    [anon_sym_quoteTerm] = ACTIONS(753),
    [anon_sym_unquote] = ACTIONS(753),
    [anon_sym_record] = ACTIONS(165),
  },
  [227] = {
    [anon_sym_RBRACE] = ACTIONS(757),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_public] = ACTIONS(757),
    [anon_sym_using] = ACTIONS(757),
    [anon_sym_hiding] = ACTIONS(757),
    [anon_sym_renaming] = ACTIONS(757),
  },
  [228] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(759),
  },
  [229] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(761),
  },
  [230] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_public] = ACTIONS(99),
    [anon_sym_using] = ACTIONS(99),
    [anon_sym_hiding] = ACTIONS(99),
    [anon_sym_renaming] = ACTIONS(99),
  },
  [231] = {
    [sym_import_directive] = STATE(399),
    [aux_sym_module_assignment_repeat1] = STATE(399),
    [anon_sym_RBRACE] = ACTIONS(763),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_public] = ACTIONS(765),
    [anon_sym_using] = ACTIONS(767),
    [anon_sym_hiding] = ACTIONS(767),
    [anon_sym_renaming] = ACTIONS(769),
  },
  [232] = {
    [sym_literal] = STATE(230),
    [sym_atom] = STATE(400),
    [sym__atom_curly] = STATE(230),
    [sym__atom_no_curly] = STATE(230),
    [aux_sym__application_repeat1] = STATE(400),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(464),
    [sym_qualified_name] = ACTIONS(466),
    [anon_sym__] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(466),
    [anon_sym_Prop] = ACTIONS(466),
    [anon_sym_Set] = ACTIONS(466),
    [anon_sym_quote] = ACTIONS(466),
    [anon_sym_quoteTerm] = ACTIONS(466),
    [anon_sym_unquote] = ACTIONS(466),
    [anon_sym_record] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(771),
    [anon_sym_public] = ACTIONS(773),
    [anon_sym_using] = ACTIONS(773),
    [anon_sym_hiding] = ACTIONS(773),
    [anon_sym_renaming] = ACTIONS(773),
  },
  [233] = {
    [sym_import_directive] = STATE(401),
    [aux_sym_module_assignment_repeat1] = STATE(401),
    [anon_sym_RBRACE] = ACTIONS(763),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_public] = ACTIONS(765),
    [anon_sym_using] = ACTIONS(767),
    [anon_sym_hiding] = ACTIONS(767),
    [anon_sym_renaming] = ACTIONS(769),
  },
  [234] = {
    [sym__newline] = ACTIONS(775),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_module] = ACTIONS(777),
    [anon_sym_rewrite] = ACTIONS(777),
    [anon_sym_with] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [235] = {
    [sym__record_assignment] = STATE(402),
    [sym_module_assignment] = STATE(402),
    [sym_field_assignment] = STATE(402),
    [sym_qualified_name] = ACTIONS(189),
    [sym_comment] = ACTIONS(15),
  },
  [236] = {
    [aux_sym__record_assignments1_repeat1] = STATE(403),
    [anon_sym_RBRACE] = ACTIONS(779),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(490),
  },
  [237] = {
    [sym_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT] = ACTIONS(482),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [238] = {
    [anon_sym_RBRACE] = ACTIONS(781),
    [sym_comment] = ACTIONS(73),
  },
  [239] = {
    [sym__field_assignments1] = STATE(405),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(781),
    [sym_comment] = ACTIONS(15),
  },
  [240] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(406),
    [sym__expr2] = STATE(406),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [241] = {
    [sym_literal] = STATE(253),
    [sym__application] = STATE(407),
    [sym__expr2] = STATE(407),
    [sym_atom] = STATE(252),
    [sym__atom_curly] = STATE(253),
    [sym__atom_no_curly] = STATE(253),
    [aux_sym__application_repeat1] = STATE(254),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(512),
    [sym_qualified_name] = ACTIONS(514),
    [anon_sym__] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(514),
    [anon_sym_Prop] = ACTIONS(514),
    [anon_sym_Set] = ACTIONS(514),
    [anon_sym_quote] = ACTIONS(514),
    [anon_sym_quoteTerm] = ACTIONS(514),
    [anon_sym_unquote] = ACTIONS(514),
    [anon_sym_record] = ACTIONS(518),
  },
  [242] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(408),
    [sym__expr2] = STATE(408),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(149),
    [sym_qualified_name] = ACTIONS(151),
    [anon_sym__] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_Prop] = ACTIONS(151),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_quoteTerm] = ACTIONS(151),
    [anon_sym_unquote] = ACTIONS(151),
    [anon_sym_record] = ACTIONS(155),
  },
  [243] = {
    [sym_name] = ACTIONS(783),
    [anon_sym__] = ACTIONS(783),
    [anon_sym_DOT] = ACTIONS(783),
    [anon_sym_DOT_DOT] = ACTIONS(785),
    [anon_sym_LBRACE] = ACTIONS(783),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(785),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_COLON] = ACTIONS(783),
    [anon_sym_where] = ACTIONS(783),
  },
  [244] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(789),
    [sym_qualified_name] = ACTIONS(787),
    [anon_sym__] = ACTIONS(787),
    [anon_sym_LBRACE] = ACTIONS(787),
    [anon_sym_RBRACE] = ACTIONS(789),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(787),
    [anon_sym_Prop] = ACTIONS(787),
    [anon_sym_Set] = ACTIONS(787),
    [anon_sym_quote] = ACTIONS(787),
    [anon_sym_quoteTerm] = ACTIONS(787),
    [anon_sym_unquote] = ACTIONS(787),
    [anon_sym_record] = ACTIONS(787),
    [anon_sym_COLON] = ACTIONS(787),
  },
  [245] = {
    [anon_sym_RBRACE] = ACTIONS(791),
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(793),
  },
  [246] = {
    [anon_sym_RBRACE] = ACTIONS(795),
    [sym_comment] = ACTIONS(73),
  },
  [247] = {
    [aux_sym__field_assignments1_repeat1] = STATE(413),
    [anon_sym_RBRACE] = ACTIONS(797),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(799),
  },
  [248] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
  },
  [249] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(415),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(801),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [250] = {
    [sym_literal] = STATE(417),
    [sym__atom_no_curly] = STATE(417),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(803),
    [anon_sym__] = ACTIONS(803),
    [anon_sym_LBRACE] = ACTIONS(805),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(803),
    [anon_sym_Prop] = ACTIONS(803),
    [anon_sym_Set] = ACTIONS(803),
    [anon_sym_quote] = ACTIONS(803),
    [anon_sym_quoteTerm] = ACTIONS(803),
    [anon_sym_unquote] = ACTIONS(803),
    [anon_sym_record] = ACTIONS(165),
  },
  [251] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(791),
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(807),
  },
  [252] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(95),
  },
  [253] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
  },
  [254] = {
    [sym_literal] = STATE(253),
    [sym__expr2] = STATE(419),
    [sym_atom] = STATE(252),
    [sym__atom_curly] = STATE(253),
    [sym__atom_no_curly] = STATE(253),
    [aux_sym__application_repeat1] = STATE(206),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(512),
    [sym_qualified_name] = ACTIONS(514),
    [anon_sym__] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(514),
    [anon_sym_Prop] = ACTIONS(514),
    [anon_sym_Set] = ACTIONS(514),
    [anon_sym_quote] = ACTIONS(514),
    [anon_sym_quoteTerm] = ACTIONS(514),
    [anon_sym_unquote] = ACTIONS(514),
    [anon_sym_record] = ACTIONS(518),
  },
  [255] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(809),
  },
  [256] = {
    [sym__newline] = ACTIONS(31),
    [sym__const_right_arrow] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
  },
  [257] = {
    [sym_literal] = STATE(79),
    [sym_expr] = STATE(422),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(77),
    [sym__expr2] = STATE(77),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(80),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(811),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [258] = {
    [sym_literal] = STATE(424),
    [sym__atom_no_curly] = STATE(424),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(813),
    [anon_sym__] = ACTIONS(813),
    [anon_sym_LBRACE] = ACTIONS(815),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(813),
    [anon_sym_Prop] = ACTIONS(813),
    [anon_sym_Set] = ACTIONS(813),
    [anon_sym_quote] = ACTIONS(813),
    [anon_sym_quoteTerm] = ACTIONS(813),
    [anon_sym_unquote] = ACTIONS(813),
    [anon_sym_record] = ACTIONS(165),
  },
  [259] = {
    [sym__newline] = ACTIONS(817),
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(819),
  },
  [260] = {
    [sym__newline] = ACTIONS(169),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(821),
    [anon_sym_where] = ACTIONS(169),
  },
  [261] = {
    [sym__const_right_arrow] = ACTIONS(821),
    [sym_comment] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [262] = {
    [sym__newline] = ACTIONS(89),
    [sym__const_right_arrow] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_where] = ACTIONS(95),
  },
  [263] = {
    [sym__newline] = ACTIONS(97),
    [sym__const_right_arrow] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_where] = ACTIONS(99),
  },
  [264] = {
    [sym__const_right_arrow] = ACTIONS(821),
    [sym_comment] = ACTIONS(73),
  },
  [265] = {
    [sym_literal] = STATE(431),
    [sym__application] = STATE(62),
    [sym__expr2] = STATE(62),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(430),
    [sym__atom_curly] = STATE(431),
    [sym__atom_no_curly] = STATE(431),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(432),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(825),
    [sym_qualified_name] = ACTIONS(827),
    [anon_sym__] = ACTIONS(827),
    [anon_sym_LBRACE] = ACTIONS(829),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(827),
    [anon_sym_Prop] = ACTIONS(827),
    [anon_sym_Set] = ACTIONS(827),
    [anon_sym_quote] = ACTIONS(827),
    [anon_sym_quoteTerm] = ACTIONS(827),
    [anon_sym_unquote] = ACTIONS(827),
    [anon_sym_record] = ACTIONS(831),
  },
  [266] = {
    [sym_literal] = STATE(263),
    [sym__expr2] = STATE(64),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [aux_sym__application_repeat1] = STATE(104),
    [sym__const_right_arrow] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_LBRACE] = ACTIONS(833),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
  },
  [267] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(134),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(135),
    [sym_data_signature_only] = STATE(134),
    [sym_record] = STATE(135),
    [sym_record_signature_only] = STATE(134),
    [sym__record_directives1] = STATE(439),
    [sym_record_constructor_instance] = STATE(440),
    [sym_record_constructor] = STATE(441),
    [sym__record_directive] = STATE(441),
    [sym_record_induction] = STATE(441),
    [sym_record_eta] = STATE(441),
    [sym_field] = STATE(135),
    [sym__declaration] = STATE(134),
    [sym__declaration_block] = STATE(135),
    [sym_infix] = STATE(134),
    [sym_instance] = STATE(135),
    [sym__declarations1] = STATE(442),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__record_directives1_repeat1] = STATE(443),
    [aux_sym__declarations1_repeat1] = STATE(137),
    [sym__dedent] = ACTIONS(835),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(223),
    [anon_sym_data] = ACTIONS(225),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(837),
    [anon_sym_constructor] = ACTIONS(839),
    [anon_sym_inductive] = ACTIONS(841),
    [anon_sym_coinductive] = ACTIONS(841),
    [anon_sym_eta_DASHequality] = ACTIONS(843),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(843),
    [anon_sym_field] = ACTIONS(231),
    [sym_pragma] = ACTIONS(233),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(845),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(845),
    [sym_qualified_name] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_Prop] = ACTIONS(847),
    [anon_sym_Set] = ACTIONS(847),
    [anon_sym_quote] = ACTIONS(847),
    [anon_sym_quoteTerm] = ACTIONS(847),
    [anon_sym_unquote] = ACTIONS(847),
    [anon_sym_record] = ACTIONS(847),
    [anon_sym_data] = ACTIONS(847),
    [anon_sym_codata] = ACTIONS(847),
    [anon_sym_instance] = ACTIONS(847),
    [anon_sym_field] = ACTIONS(847),
    [sym_pragma] = ACTIONS(845),
    [anon_sym_infix] = ACTIONS(847),
    [anon_sym_infixl] = ACTIONS(847),
    [anon_sym_infixr] = ACTIONS(847),
  },
  [269] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(444),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [270] = {
    [sym_record_declarations_block] = STATE(445),
    [sym__indent] = ACTIONS(530),
    [ts_builtin_sym_end] = ACTIONS(845),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(845),
    [sym_qualified_name] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_Prop] = ACTIONS(847),
    [anon_sym_Set] = ACTIONS(847),
    [anon_sym_quote] = ACTIONS(847),
    [anon_sym_quoteTerm] = ACTIONS(847),
    [anon_sym_unquote] = ACTIONS(847),
    [anon_sym_record] = ACTIONS(847),
    [anon_sym_data] = ACTIONS(847),
    [anon_sym_codata] = ACTIONS(847),
    [anon_sym_instance] = ACTIONS(847),
    [anon_sym_field] = ACTIONS(847),
    [sym_pragma] = ACTIONS(845),
    [anon_sym_infix] = ACTIONS(847),
    [anon_sym_infixl] = ACTIONS(847),
    [anon_sym_infixr] = ACTIONS(847),
  },
  [271] = {
    [sym_anonymous_name] = STATE(120),
    [sym__binding_name] = STATE(120),
    [sym_untyped_binding] = STATE(271),
    [sym_typed_binding] = STATE(271),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(271),
    [sym_name] = ACTIONS(849),
    [anon_sym__] = ACTIONS(852),
    [anon_sym_DOT] = ACTIONS(855),
    [anon_sym_DOT_DOT] = ACTIONS(858),
    [anon_sym_LBRACE] = ACTIONS(861),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(864),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(867),
    [anon_sym_COLON] = ACTIONS(870),
    [anon_sym_where] = ACTIONS(870),
  },
  [272] = {
    [sym__newline] = ACTIONS(872),
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(874),
  },
  [273] = {
    [ts_builtin_sym_end] = ACTIONS(876),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(878),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(876),
    [sym_qualified_name] = ACTIONS(878),
    [anon_sym__] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [sym_comment] = ACTIONS(15),
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
    [sym_pragma] = ACTIONS(876),
    [anon_sym_infix] = ACTIONS(878),
    [anon_sym_infixl] = ACTIONS(878),
    [anon_sym_infixr] = ACTIONS(878),
  },
  [274] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(447),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [275] = {
    [sym__declarations0] = STATE(448),
    [sym__newline] = ACTIONS(880),
    [sym__indent] = ACTIONS(71),
    [sym_comment] = ACTIONS(73),
  },
  [276] = {
    [sym__const_right_arrow] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
  },
  [277] = {
    [sym_literal] = STATE(79),
    [sym_expr] = STATE(450),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(77),
    [sym__expr2] = STATE(77),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(80),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(882),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [278] = {
    [sym_literal] = STATE(452),
    [sym__atom_no_curly] = STATE(452),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(884),
    [anon_sym__] = ACTIONS(884),
    [anon_sym_LBRACE] = ACTIONS(886),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(884),
    [anon_sym_Prop] = ACTIONS(884),
    [anon_sym_Set] = ACTIONS(884),
    [anon_sym_quote] = ACTIONS(884),
    [anon_sym_quoteTerm] = ACTIONS(884),
    [anon_sym_unquote] = ACTIONS(884),
    [anon_sym_record] = ACTIONS(165),
  },
  [279] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(874),
  },
  [280] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(888),
    [anon_sym_where] = ACTIONS(169),
  },
  [281] = {
    [sym__const_right_arrow] = ACTIONS(888),
    [sym_comment] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [282] = {
    [sym__const_right_arrow] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_where] = ACTIONS(95),
  },
  [283] = {
    [sym__const_right_arrow] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_where] = ACTIONS(99),
  },
  [284] = {
    [sym__const_right_arrow] = ACTIONS(888),
    [sym_comment] = ACTIONS(73),
  },
  [285] = {
    [sym_literal] = STATE(458),
    [sym__application] = STATE(98),
    [sym__expr2] = STATE(98),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(457),
    [sym__atom_curly] = STATE(458),
    [sym__atom_no_curly] = STATE(458),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(459),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(890),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(892),
    [sym_qualified_name] = ACTIONS(894),
    [anon_sym__] = ACTIONS(894),
    [anon_sym_LBRACE] = ACTIONS(896),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(894),
    [anon_sym_Prop] = ACTIONS(894),
    [anon_sym_Set] = ACTIONS(894),
    [anon_sym_quote] = ACTIONS(894),
    [anon_sym_quoteTerm] = ACTIONS(894),
    [anon_sym_unquote] = ACTIONS(894),
    [anon_sym_record] = ACTIONS(898),
  },
  [286] = {
    [sym_literal] = STATE(283),
    [sym__expr2] = STATE(103),
    [sym_atom] = STATE(282),
    [sym__atom_curly] = STATE(283),
    [sym__atom_no_curly] = STATE(283),
    [aux_sym__application_repeat1] = STATE(104),
    [sym__const_right_arrow] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(554),
    [sym_qualified_name] = ACTIONS(556),
    [anon_sym__] = ACTIONS(556),
    [anon_sym_LBRACE] = ACTIONS(900),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(556),
    [anon_sym_Prop] = ACTIONS(556),
    [anon_sym_Set] = ACTIONS(556),
    [anon_sym_quote] = ACTIONS(556),
    [anon_sym_quoteTerm] = ACTIONS(556),
    [anon_sym_unquote] = ACTIONS(556),
    [anon_sym_record] = ACTIONS(560),
  },
  [287] = {
    [sym_literal] = STATE(283),
    [sym_expr] = STATE(461),
    [sym__expr1] = STATE(280),
    [sym__application] = STATE(280),
    [sym__expr2] = STATE(280),
    [sym__atoms1] = STATE(281),
    [sym_atom] = STATE(282),
    [sym__atom_curly] = STATE(283),
    [sym__atom_no_curly] = STATE(283),
    [sym__typed_bindings1] = STATE(284),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(285),
    [aux_sym__application_repeat1] = STATE(286),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(554),
    [sym_qualified_name] = ACTIONS(556),
    [anon_sym__] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(556),
    [anon_sym_Prop] = ACTIONS(556),
    [anon_sym_Set] = ACTIONS(556),
    [anon_sym_quote] = ACTIONS(556),
    [anon_sym_quoteTerm] = ACTIONS(556),
    [anon_sym_unquote] = ACTIONS(556),
    [anon_sym_record] = ACTIONS(560),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [288] = {
    [sym_anonymous_name] = STATE(120),
    [sym__binding_name] = STATE(120),
    [sym_untyped_binding] = STATE(122),
    [sym_typed_binding] = STATE(122),
    [sym__typed_untyped_binding1] = STATE(464),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(122),
    [sym_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(902),
    [anon_sym_where] = ACTIONS(904),
  },
  [289] = {
    [sym_anonymous_name] = STATE(120),
    [sym__binding_name] = STATE(120),
    [sym_untyped_binding] = STATE(122),
    [sym_typed_binding] = STATE(122),
    [sym__typed_untyped_binding1] = STATE(467),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(122),
    [sym_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(906),
    [anon_sym_where] = ACTIONS(908),
  },
  [290] = {
    [sym_anonymous_name] = STATE(120),
    [sym__binding_name] = STATE(120),
    [sym_untyped_binding] = STATE(122),
    [sym_typed_binding] = STATE(122),
    [sym__typed_untyped_binding1] = STATE(469),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(122),
    [sym_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(910),
    [anon_sym_where] = ACTIONS(908),
  },
  [291] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(134),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(135),
    [sym_data_signature_only] = STATE(134),
    [sym_record] = STATE(135),
    [sym_record_signature_only] = STATE(134),
    [sym_field] = STATE(135),
    [sym__declaration] = STATE(134),
    [sym__declaration_block] = STATE(135),
    [sym_infix] = STATE(134),
    [sym_instance] = STATE(135),
    [sym__declarations1] = STATE(470),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(223),
    [anon_sym_data] = ACTIONS(225),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(229),
    [anon_sym_field] = ACTIONS(231),
    [sym_pragma] = ACTIONS(233),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [292] = {
    [sym__dedent] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(235),
    [sym_qualified_name] = ACTIONS(237),
    [anon_sym__] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(15),
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
    [sym_pragma] = ACTIONS(235),
    [anon_sym_infix] = ACTIONS(237),
    [anon_sym_infixl] = ACTIONS(237),
    [anon_sym_infixr] = ACTIONS(237),
  },
  [293] = {
    [sym__maybe_dotted_name] = STATE(143),
    [sym__arg_names] = STATE(144),
    [sym_arg_name] = STATE(146),
    [sym__arg_type_signatures1] = STATE(471),
    [sym_arg_type_signature] = STATE(147),
    [aux_sym__arg_names_repeat1] = STATE(146),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(147),
    [sym_name] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(249),
    [anon_sym_overlap] = ACTIONS(251),
  },
  [294] = {
    [sym__dedent] = ACTIONS(253),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(253),
    [sym_qualified_name] = ACTIONS(255),
    [anon_sym__] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(255),
    [anon_sym_Prop] = ACTIONS(255),
    [anon_sym_Set] = ACTIONS(255),
    [anon_sym_quote] = ACTIONS(255),
    [anon_sym_quoteTerm] = ACTIONS(255),
    [anon_sym_unquote] = ACTIONS(255),
    [anon_sym_record] = ACTIONS(255),
    [anon_sym_data] = ACTIONS(255),
    [anon_sym_codata] = ACTIONS(255),
    [anon_sym_instance] = ACTIONS(255),
    [anon_sym_field] = ACTIONS(255),
    [sym_pragma] = ACTIONS(253),
    [anon_sym_infix] = ACTIONS(255),
    [anon_sym_infixl] = ACTIONS(255),
    [anon_sym_infixr] = ACTIONS(255),
  },
  [295] = {
    [sym__dedent] = ACTIONS(309),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(313),
    [sym_qualified_name] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(311),
    [anon_sym_Prop] = ACTIONS(311),
    [anon_sym_Set] = ACTIONS(311),
    [anon_sym_quote] = ACTIONS(311),
    [anon_sym_quoteTerm] = ACTIONS(311),
    [anon_sym_unquote] = ACTIONS(311),
    [anon_sym_record] = ACTIONS(311),
    [anon_sym_data] = ACTIONS(311),
    [anon_sym_codata] = ACTIONS(311),
    [anon_sym_instance] = ACTIONS(311),
    [anon_sym_field] = ACTIONS(311),
    [sym_pragma] = ACTIONS(313),
    [anon_sym_infix] = ACTIONS(311),
    [anon_sym_infixl] = ACTIONS(311),
    [anon_sym_infixr] = ACTIONS(311),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(912),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(912),
    [sym_qualified_name] = ACTIONS(914),
    [anon_sym__] = ACTIONS(914),
    [anon_sym_LBRACE] = ACTIONS(914),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(914),
    [anon_sym_Prop] = ACTIONS(914),
    [anon_sym_Set] = ACTIONS(914),
    [anon_sym_quote] = ACTIONS(914),
    [anon_sym_quoteTerm] = ACTIONS(914),
    [anon_sym_unquote] = ACTIONS(914),
    [anon_sym_record] = ACTIONS(914),
    [anon_sym_data] = ACTIONS(914),
    [anon_sym_codata] = ACTIONS(914),
    [anon_sym_instance] = ACTIONS(914),
    [anon_sym_field] = ACTIONS(914),
    [sym_pragma] = ACTIONS(912),
    [anon_sym_infix] = ACTIONS(914),
    [anon_sym_infixl] = ACTIONS(914),
    [anon_sym_infixr] = ACTIONS(914),
  },
  [297] = {
    [sym__newline] = ACTIONS(916),
    [sym_comment] = ACTIONS(73),
  },
  [298] = {
    [sym__dedent] = ACTIONS(309),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(115),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_record] = ACTIONS(113),
    [anon_sym_data] = ACTIONS(113),
    [anon_sym_codata] = ACTIONS(113),
    [anon_sym_instance] = ACTIONS(113),
    [anon_sym_field] = ACTIONS(113),
    [sym_pragma] = ACTIONS(115),
    [anon_sym_infix] = ACTIONS(113),
    [anon_sym_infixl] = ACTIONS(113),
    [anon_sym_infixr] = ACTIONS(113),
  },
  [299] = {
    [sym_name] = ACTIONS(918),
    [anon_sym_DOT] = ACTIONS(918),
    [anon_sym_DOT_DOT] = ACTIONS(920),
    [anon_sym_LBRACE] = ACTIONS(918),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(920),
    [sym_comment] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(918),
  },
  [300] = {
    [aux_sym_arg_name_repeat1] = STATE(473),
    [sym_name] = ACTIONS(922),
    [sym_comment] = ACTIONS(15),
  },
  [301] = {
    [aux_sym_arg_name_repeat1] = STATE(474),
    [sym_name] = ACTIONS(924),
    [sym_comment] = ACTIONS(15),
  },
  [302] = {
    [sym_name] = ACTIONS(926),
    [sym_comment] = ACTIONS(15),
  },
  [303] = {
    [anon_sym_RBRACE] = ACTIONS(928),
    [sym_comment] = ACTIONS(73),
  },
  [304] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(477),
    [sym_name] = ACTIONS(930),
    [anon_sym_DOT] = ACTIONS(590),
    [anon_sym_DOT_DOT] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(932),
    [sym_comment] = ACTIONS(15),
  },
  [305] = {
    [sym_name] = ACTIONS(934),
    [sym_comment] = ACTIONS(15),
  },
  [306] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(928),
    [sym_comment] = ACTIONS(73),
  },
  [307] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(479),
    [sym_name] = ACTIONS(936),
    [anon_sym_DOT] = ACTIONS(596),
    [anon_sym_DOT_DOT] = ACTIONS(598),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(932),
    [sym_comment] = ACTIONS(15),
  },
  [308] = {
    [sym__maybe_dotted_name] = STATE(143),
    [sym__arg_names] = STATE(144),
    [sym_arg_name] = STATE(146),
    [sym__arg_type_signatures1] = STATE(480),
    [sym_arg_type_signature] = STATE(147),
    [aux_sym__arg_names_repeat1] = STATE(146),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(147),
    [sym_name] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(249),
    [anon_sym_overlap] = ACTIONS(251),
  },
  [309] = {
    [sym__dedent] = ACTIONS(938),
    [sym_name] = ACTIONS(940),
    [anon_sym_DOT] = ACTIONS(940),
    [anon_sym_DOT_DOT] = ACTIONS(938),
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(938),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(940),
    [anon_sym_overlap] = ACTIONS(940),
  },
  [310] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(942),
  },
  [311] = {
    [sym_literal] = STATE(489),
    [sym_expr] = STATE(485),
    [sym__expr1] = STATE(486),
    [sym__application] = STATE(486),
    [sym__expr2] = STATE(486),
    [sym__atoms1] = STATE(487),
    [sym_atom] = STATE(488),
    [sym__atom_curly] = STATE(489),
    [sym__atom_no_curly] = STATE(489),
    [sym__typed_bindings1] = STATE(490),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(491),
    [aux_sym__application_repeat1] = STATE(492),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(946),
    [sym_qualified_name] = ACTIONS(948),
    [anon_sym__] = ACTIONS(948),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(950),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(948),
    [anon_sym_Prop] = ACTIONS(948),
    [anon_sym_Set] = ACTIONS(948),
    [anon_sym_quote] = ACTIONS(948),
    [anon_sym_quoteTerm] = ACTIONS(948),
    [anon_sym_unquote] = ACTIONS(948),
    [anon_sym_record] = ACTIONS(952),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(954),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(956),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(954),
    [sym_qualified_name] = ACTIONS(956),
    [anon_sym__] = ACTIONS(956),
    [anon_sym_LBRACE] = ACTIONS(956),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(956),
    [anon_sym_Prop] = ACTIONS(956),
    [anon_sym_Set] = ACTIONS(956),
    [anon_sym_quote] = ACTIONS(956),
    [anon_sym_quoteTerm] = ACTIONS(956),
    [anon_sym_unquote] = ACTIONS(956),
    [anon_sym_record] = ACTIONS(956),
    [anon_sym_data] = ACTIONS(956),
    [anon_sym_codata] = ACTIONS(956),
    [anon_sym_instance] = ACTIONS(956),
    [anon_sym_field] = ACTIONS(956),
    [sym_pragma] = ACTIONS(954),
    [anon_sym_infix] = ACTIONS(956),
    [anon_sym_infixl] = ACTIONS(956),
    [anon_sym_infixr] = ACTIONS(956),
  },
  [313] = {
    [sym__maybe_dotted_name] = STATE(143),
    [sym_arg_name] = STATE(313),
    [aux_sym__arg_names_repeat1] = STATE(313),
    [sym_name] = ACTIONS(958),
    [anon_sym_DOT] = ACTIONS(961),
    [anon_sym_DOT_DOT] = ACTIONS(964),
    [anon_sym_LBRACE] = ACTIONS(967),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(970),
    [sym_comment] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(973),
  },
  [314] = {
    [sym__maybe_dotted_name] = STATE(143),
    [sym__arg_names] = STATE(144),
    [sym_arg_name] = STATE(146),
    [sym_arg_type_signature] = STATE(314),
    [aux_sym__arg_names_repeat1] = STATE(146),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(314),
    [sym__dedent] = ACTIONS(975),
    [sym_name] = ACTIONS(977),
    [anon_sym_DOT] = ACTIONS(980),
    [anon_sym_DOT_DOT] = ACTIONS(983),
    [anon_sym_LBRACE] = ACTIONS(986),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(989),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(992),
    [anon_sym_overlap] = ACTIONS(995),
  },
  [315] = {
    [sym_anonymous_name] = STATE(315),
    [sym__binding_name] = STATE(315),
    [aux_sym_infix_repeat1] = STATE(315),
    [sym__newline] = ACTIONS(998),
    [sym_name] = ACTIONS(1000),
    [anon_sym__] = ACTIONS(1003),
    [sym_comment] = ACTIONS(15),
  },
  [316] = {
    [sym__newline] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_module] = ACTIONS(145),
    [anon_sym_with] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(1006),
    [sym_comment] = ACTIONS(73),
  },
  [318] = {
    [sym__record_assignments1] = STATE(495),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1008),
    [sym_comment] = ACTIONS(15),
  },
  [319] = {
    [anon_sym_LBRACE] = ACTIONS(1010),
    [sym_comment] = ACTIONS(73),
  },
  [320] = {
    [sym__newline] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_module] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
  },
  [321] = {
    [anon_sym_RBRACE] = ACTIONS(1012),
    [sym_comment] = ACTIONS(73),
  },
  [322] = {
    [sym__record_assignments1] = STATE(499),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1014),
    [sym_comment] = ACTIONS(15),
  },
  [323] = {
    [anon_sym_LBRACE] = ACTIONS(1016),
    [sym_comment] = ACTIONS(73),
  },
  [324] = {
    [sym__newline] = ACTIONS(143),
    [sym__const_right_arrow] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_module] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
  },
  [325] = {
    [anon_sym_RBRACE] = ACTIONS(1018),
    [sym_comment] = ACTIONS(73),
  },
  [326] = {
    [sym__record_assignments1] = STATE(503),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1020),
    [sym_comment] = ACTIONS(15),
  },
  [327] = {
    [anon_sym_LBRACE] = ACTIONS(1022),
    [sym_comment] = ACTIONS(73),
  },
  [328] = {
    [sym_literal] = STATE(174),
    [sym_expr] = STATE(505),
    [sym__expr1] = STATE(171),
    [sym__application] = STATE(171),
    [sym__expr2] = STATE(171),
    [sym__atoms1] = STATE(172),
    [sym_atom] = STATE(173),
    [sym__atom_curly] = STATE(174),
    [sym__atom_no_curly] = STATE(174),
    [sym__typed_bindings1] = STATE(175),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(176),
    [aux_sym__application_repeat1] = STATE(177),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(291),
    [sym_qualified_name] = ACTIONS(293),
    [anon_sym__] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_Prop] = ACTIONS(293),
    [anon_sym_Set] = ACTIONS(293),
    [anon_sym_quote] = ACTIONS(293),
    [anon_sym_quoteTerm] = ACTIONS(293),
    [anon_sym_unquote] = ACTIONS(293),
    [anon_sym_record] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [329] = {
    [sym__newline] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
  },
  [330] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(507),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(1024),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [331] = {
    [sym_literal] = STATE(509),
    [sym__atom_no_curly] = STATE(509),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(1026),
    [anon_sym__] = ACTIONS(1026),
    [anon_sym_LBRACE] = ACTIONS(1028),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1026),
    [anon_sym_Prop] = ACTIONS(1026),
    [anon_sym_Set] = ACTIONS(1026),
    [anon_sym_quote] = ACTIONS(1026),
    [anon_sym_quoteTerm] = ACTIONS(1026),
    [anon_sym_unquote] = ACTIONS(1026),
    [anon_sym_record] = ACTIONS(165),
  },
  [332] = {
    [sym__newline] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_where] = ACTIONS(95),
  },
  [333] = {
    [sym__newline] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [anon_sym_where] = ACTIONS(99),
  },
  [334] = {
    [sym_literal] = STATE(333),
    [sym__expr2] = STATE(64),
    [sym_atom] = STATE(332),
    [sym__atom_curly] = STATE(333),
    [sym__atom_no_curly] = STATE(333),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(648),
    [sym_qualified_name] = ACTIONS(650),
    [anon_sym__] = ACTIONS(650),
    [anon_sym_LBRACE] = ACTIONS(652),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(650),
    [anon_sym_Prop] = ACTIONS(650),
    [anon_sym_Set] = ACTIONS(650),
    [anon_sym_quote] = ACTIONS(650),
    [anon_sym_quoteTerm] = ACTIONS(650),
    [anon_sym_unquote] = ACTIONS(650),
    [anon_sym_record] = ACTIONS(654),
  },
  [335] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(325),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(636),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [336] = {
    [sym__declarations0] = STATE(510),
    [sym__newline] = ACTIONS(1030),
    [sym__indent] = ACTIONS(305),
    [sym_comment] = ACTIONS(73),
  },
  [337] = {
    [sym__dedent] = ACTIONS(1032),
    [sym_comment] = ACTIONS(73),
  },
  [338] = {
    [sym__field_assignments1] = STATE(246),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(486),
    [sym_comment] = ACTIONS(15),
  },
  [339] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
  },
  [340] = {
    [anon_sym_RBRACE] = ACTIONS(1034),
    [sym_comment] = ACTIONS(73),
  },
  [341] = {
    [sym__record_assignments1] = STATE(514),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1036),
    [sym_comment] = ACTIONS(15),
  },
  [342] = {
    [anon_sym_LBRACE] = ACTIONS(1038),
    [sym_comment] = ACTIONS(73),
  },
  [343] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(313),
    [sym_qualified_name] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(311),
    [anon_sym_Prop] = ACTIONS(311),
    [anon_sym_Set] = ACTIONS(311),
    [anon_sym_quote] = ACTIONS(311),
    [anon_sym_quoteTerm] = ACTIONS(311),
    [anon_sym_unquote] = ACTIONS(311),
    [anon_sym_record] = ACTIONS(311),
    [anon_sym_data] = ACTIONS(311),
    [anon_sym_codata] = ACTIONS(311),
    [anon_sym_instance] = ACTIONS(311),
    [anon_sym_field] = ACTIONS(311),
    [sym_pragma] = ACTIONS(313),
    [anon_sym_infix] = ACTIONS(311),
    [anon_sym_infixl] = ACTIONS(311),
    [anon_sym_infixr] = ACTIONS(311),
  },
  [344] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(516),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [345] = {
    [sym_literal] = STATE(363),
    [sym_expr] = STATE(517),
    [sym__expr1] = STATE(360),
    [sym__application] = STATE(360),
    [sym__expr2] = STATE(360),
    [sym__atoms1] = STATE(361),
    [sym_atom] = STATE(362),
    [sym__atom_curly] = STATE(363),
    [sym__atom_no_curly] = STATE(363),
    [sym__typed_bindings1] = STATE(364),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(365),
    [aux_sym__application_repeat1] = STATE(366),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(706),
    [sym_qualified_name] = ACTIONS(708),
    [anon_sym__] = ACTIONS(708),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(710),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(708),
    [anon_sym_Prop] = ACTIONS(708),
    [anon_sym_Set] = ACTIONS(708),
    [anon_sym_quote] = ACTIONS(708),
    [anon_sym_quoteTerm] = ACTIONS(708),
    [anon_sym_unquote] = ACTIONS(708),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [346] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(518),
    [sym__expr1] = STATE(378),
    [sym__application] = STATE(378),
    [sym__expr2] = STATE(378),
    [sym__atoms1] = STATE(379),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(380),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [347] = {
    [sym__const_right_arrow] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(422),
  },
  [348] = {
    [sym__const_right_arrow] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_COLON] = ACTIONS(484),
  },
  [349] = {
    [anon_sym_RBRACE] = ACTIONS(1040),
    [sym_comment] = ACTIONS(73),
  },
  [350] = {
    [sym__field_assignments1] = STATE(520),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1040),
    [sym_comment] = ACTIONS(15),
  },
  [351] = {
    [anon_sym_RBRACE] = ACTIONS(1042),
    [sym_comment] = ACTIONS(73),
  },
  [352] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(422),
  },
  [353] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_COLON] = ACTIONS(484),
  },
  [354] = {
    [anon_sym_RBRACE] = ACTIONS(1044),
    [sym_comment] = ACTIONS(73),
  },
  [355] = {
    [sym__field_assignments1] = STATE(523),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [sym_comment] = ACTIONS(15),
  },
  [356] = {
    [sym__const_right_arrow] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
  },
  [357] = {
    [sym_literal] = STATE(79),
    [sym_expr] = STATE(525),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(77),
    [sym__expr2] = STATE(77),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(80),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(1046),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [358] = {
    [sym_literal] = STATE(527),
    [sym__atom_no_curly] = STATE(527),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(1048),
    [anon_sym__] = ACTIONS(1048),
    [anon_sym_LBRACE] = ACTIONS(1050),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1048),
    [anon_sym_Prop] = ACTIONS(1048),
    [anon_sym_Set] = ACTIONS(1048),
    [anon_sym_quote] = ACTIONS(1048),
    [anon_sym_quoteTerm] = ACTIONS(1048),
    [anon_sym_unquote] = ACTIONS(1048),
    [anon_sym_record] = ACTIONS(165),
  },
  [359] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1042),
    [sym_comment] = ACTIONS(73),
  },
  [360] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(169),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(1052),
  },
  [361] = {
    [sym__const_right_arrow] = ACTIONS(1052),
    [sym_comment] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [362] = {
    [sym__const_right_arrow] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
  },
  [363] = {
    [sym__const_right_arrow] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
  },
  [364] = {
    [sym__const_right_arrow] = ACTIONS(1052),
    [sym_comment] = ACTIONS(73),
  },
  [365] = {
    [sym_literal] = STATE(534),
    [sym__application] = STATE(532),
    [sym__expr2] = STATE(532),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(533),
    [sym__atom_curly] = STATE(534),
    [sym__atom_no_curly] = STATE(534),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(535),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1054),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1056),
    [sym_qualified_name] = ACTIONS(1058),
    [anon_sym__] = ACTIONS(1058),
    [anon_sym_LBRACE] = ACTIONS(1060),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1058),
    [anon_sym_Prop] = ACTIONS(1058),
    [anon_sym_Set] = ACTIONS(1058),
    [anon_sym_quote] = ACTIONS(1058),
    [anon_sym_quoteTerm] = ACTIONS(1058),
    [anon_sym_unquote] = ACTIONS(1058),
    [anon_sym_record] = ACTIONS(1062),
  },
  [366] = {
    [sym_literal] = STATE(363),
    [sym__expr2] = STATE(419),
    [sym_atom] = STATE(362),
    [sym__atom_curly] = STATE(363),
    [sym__atom_no_curly] = STATE(363),
    [aux_sym__application_repeat1] = STATE(104),
    [sym__const_right_arrow] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(706),
    [sym_qualified_name] = ACTIONS(708),
    [anon_sym__] = ACTIONS(708),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(708),
    [anon_sym_Prop] = ACTIONS(708),
    [anon_sym_Set] = ACTIONS(708),
    [anon_sym_quote] = ACTIONS(708),
    [anon_sym_quoteTerm] = ACTIONS(708),
    [anon_sym_unquote] = ACTIONS(708),
    [anon_sym_record] = ACTIONS(712),
  },
  [367] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
  },
  [368] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(538),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(1066),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [369] = {
    [sym_literal] = STATE(540),
    [sym__atom_no_curly] = STATE(540),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(1068),
    [anon_sym__] = ACTIONS(1068),
    [anon_sym_LBRACE] = ACTIONS(1070),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1068),
    [anon_sym_Prop] = ACTIONS(1068),
    [anon_sym_Set] = ACTIONS(1068),
    [anon_sym_quote] = ACTIONS(1068),
    [anon_sym_quoteTerm] = ACTIONS(1068),
    [anon_sym_unquote] = ACTIONS(1068),
    [anon_sym_record] = ACTIONS(165),
  },
  [370] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
  },
  [371] = {
    [sym__const_right_arrow] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_RPAREN] = ACTIONS(775),
  },
  [372] = {
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(73),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(1072),
    [sym_comment] = ACTIONS(73),
  },
  [374] = {
    [sym__field_assignments1] = STATE(542),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1072),
    [sym_comment] = ACTIONS(15),
  },
  [375] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(1074),
  },
  [376] = {
    [anon_sym_RBRACE] = ACTIONS(1076),
    [sym_comment] = ACTIONS(73),
  },
  [377] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(1042),
  },
  [378] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(1078),
    [anon_sym_RPAREN] = ACTIONS(169),
  },
  [379] = {
    [sym__const_right_arrow] = ACTIONS(1078),
    [sym_comment] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [380] = {
    [sym__const_right_arrow] = ACTIONS(1078),
    [sym_comment] = ACTIONS(73),
  },
  [381] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
  },
  [382] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_RPAREN] = ACTIONS(482),
  },
  [383] = {
    [anon_sym_RBRACE] = ACTIONS(1080),
    [sym_comment] = ACTIONS(73),
  },
  [384] = {
    [sym__field_assignments1] = STATE(546),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1080),
    [sym_comment] = ACTIONS(15),
  },
  [385] = {
    [sym__const_right_arrow] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
  },
  [386] = {
    [anon_sym_RBRACE] = ACTIONS(1082),
    [sym_comment] = ACTIONS(73),
  },
  [387] = {
    [sym__record_assignments1] = STATE(549),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1084),
    [sym_comment] = ACTIONS(15),
  },
  [388] = {
    [anon_sym_LBRACE] = ACTIONS(1086),
    [sym_comment] = ACTIONS(73),
  },
  [389] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_public] = ACTIONS(145),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_hiding] = ACTIONS(145),
    [anon_sym_renaming] = ACTIONS(145),
  },
  [390] = {
    [anon_sym_RBRACE] = ACTIONS(1088),
    [sym_comment] = ACTIONS(73),
  },
  [391] = {
    [anon_sym_RBRACE] = ACTIONS(1090),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1090),
  },
  [392] = {
    [anon_sym_RBRACE] = ACTIONS(169),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(1092),
    [anon_sym_SEMI] = ACTIONS(169),
  },
  [393] = {
    [sym__const_right_arrow] = ACTIONS(1092),
    [sym_comment] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [394] = {
    [sym__const_right_arrow] = ACTIONS(1092),
    [sym_comment] = ACTIONS(73),
  },
  [395] = {
    [sym__record_assignments1] = STATE(554),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1094),
    [sym_comment] = ACTIONS(15),
  },
  [396] = {
    [anon_sym_LBRACE] = ACTIONS(1096),
    [sym_comment] = ACTIONS(73),
  },
  [397] = {
    [sym__import_name] = STATE(558),
    [sym__comma_import_names1] = STATE(559),
    [sym_name] = ACTIONS(1098),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(1100),
    [anon_sym_module] = ACTIONS(1102),
  },
  [398] = {
    [sym_renaming] = STATE(562),
    [sym_name] = ACTIONS(1104),
    [sym_comment] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(1100),
    [anon_sym_module] = ACTIONS(1106),
  },
  [399] = {
    [sym_import_directive] = STATE(401),
    [aux_sym_module_assignment_repeat1] = STATE(401),
    [anon_sym_RBRACE] = ACTIONS(1108),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1108),
    [anon_sym_public] = ACTIONS(765),
    [anon_sym_using] = ACTIONS(767),
    [anon_sym_hiding] = ACTIONS(767),
    [anon_sym_renaming] = ACTIONS(769),
  },
  [400] = {
    [sym_literal] = STATE(230),
    [sym_atom] = STATE(400),
    [sym__atom_curly] = STATE(230),
    [sym__atom_no_curly] = STATE(230),
    [aux_sym__application_repeat1] = STATE(400),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1110),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1113),
    [sym_qualified_name] = ACTIONS(1116),
    [anon_sym__] = ACTIONS(1116),
    [anon_sym_LBRACE] = ACTIONS(1119),
    [anon_sym_RBRACE] = ACTIONS(1122),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1116),
    [anon_sym_Prop] = ACTIONS(1116),
    [anon_sym_Set] = ACTIONS(1116),
    [anon_sym_quote] = ACTIONS(1116),
    [anon_sym_quoteTerm] = ACTIONS(1116),
    [anon_sym_unquote] = ACTIONS(1116),
    [anon_sym_record] = ACTIONS(1124),
    [anon_sym_SEMI] = ACTIONS(1122),
    [anon_sym_public] = ACTIONS(348),
    [anon_sym_using] = ACTIONS(348),
    [anon_sym_hiding] = ACTIONS(348),
    [anon_sym_renaming] = ACTIONS(348),
  },
  [401] = {
    [sym_import_directive] = STATE(401),
    [aux_sym_module_assignment_repeat1] = STATE(401),
    [anon_sym_RBRACE] = ACTIONS(1127),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1127),
    [anon_sym_public] = ACTIONS(1129),
    [anon_sym_using] = ACTIONS(1132),
    [anon_sym_hiding] = ACTIONS(1132),
    [anon_sym_renaming] = ACTIONS(1135),
  },
  [402] = {
    [anon_sym_RBRACE] = ACTIONS(1138),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1138),
  },
  [403] = {
    [aux_sym__record_assignments1_repeat1] = STATE(403),
    [anon_sym_RBRACE] = ACTIONS(1138),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1140),
  },
  [404] = {
    [sym_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_DOT] = ACTIONS(777),
    [anon_sym_DOT_DOT] = ACTIONS(775),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(775),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [405] = {
    [anon_sym_RBRACE] = ACTIONS(1143),
    [sym_comment] = ACTIONS(73),
  },
  [406] = {
    [anon_sym_RBRACE] = ACTIONS(1145),
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(1147),
  },
  [407] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1145),
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(1149),
  },
  [408] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(1151),
  },
  [409] = {
    [sym_name] = ACTIONS(1153),
    [anon_sym__] = ACTIONS(1153),
    [anon_sym_DOT] = ACTIONS(1153),
    [anon_sym_DOT_DOT] = ACTIONS(1155),
    [anon_sym_LBRACE] = ACTIONS(1153),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1155),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(1155),
    [anon_sym_COLON] = ACTIONS(1153),
    [anon_sym_where] = ACTIONS(1153),
  },
  [410] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(568),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [411] = {
    [sym__newline] = ACTIONS(1157),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_COLON] = ACTIONS(1159),
    [anon_sym_module] = ACTIONS(1159),
    [anon_sym_rewrite] = ACTIONS(1159),
    [anon_sym_with] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [412] = {
    [sym_field_assignment] = STATE(569),
    [sym_qualified_name] = ACTIONS(735),
    [sym_comment] = ACTIONS(15),
  },
  [413] = {
    [aux_sym__field_assignments1_repeat1] = STATE(570),
    [anon_sym_RBRACE] = ACTIONS(1161),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(799),
  },
  [414] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
  },
  [415] = {
    [anon_sym_RBRACE] = ACTIONS(1163),
    [sym_comment] = ACTIONS(73),
  },
  [416] = {
    [sym__record_assignments1] = STATE(573),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1165),
    [sym_comment] = ACTIONS(15),
  },
  [417] = {
    [anon_sym_LBRACE] = ACTIONS(1167),
    [sym_comment] = ACTIONS(73),
  },
  [418] = {
    [sym_literal] = STATE(363),
    [sym_expr] = STATE(575),
    [sym__expr1] = STATE(360),
    [sym__application] = STATE(360),
    [sym__expr2] = STATE(360),
    [sym__atoms1] = STATE(361),
    [sym_atom] = STATE(362),
    [sym__atom_curly] = STATE(363),
    [sym__atom_no_curly] = STATE(363),
    [sym__typed_bindings1] = STATE(364),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(365),
    [aux_sym__application_repeat1] = STATE(366),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(706),
    [sym_qualified_name] = ACTIONS(708),
    [anon_sym__] = ACTIONS(708),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(710),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(708),
    [anon_sym_Prop] = ACTIONS(708),
    [anon_sym_Set] = ACTIONS(708),
    [anon_sym_quote] = ACTIONS(708),
    [anon_sym_quoteTerm] = ACTIONS(708),
    [anon_sym_unquote] = ACTIONS(708),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [419] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(334),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(334),
  },
  [420] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(576),
    [sym__expr1] = STATE(378),
    [sym__application] = STATE(378),
    [sym__expr2] = STATE(378),
    [sym__atoms1] = STATE(379),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(380),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [421] = {
    [sym__newline] = ACTIONS(143),
    [sym__const_right_arrow] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
  },
  [422] = {
    [anon_sym_RBRACE] = ACTIONS(1169),
    [sym_comment] = ACTIONS(73),
  },
  [423] = {
    [sym__record_assignments1] = STATE(579),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1171),
    [sym_comment] = ACTIONS(15),
  },
  [424] = {
    [anon_sym_LBRACE] = ACTIONS(1173),
    [sym_comment] = ACTIONS(73),
  },
  [425] = {
    [sym_record_declarations_block] = STATE(581),
    [sym__indent] = ACTIONS(530),
    [ts_builtin_sym_end] = ACTIONS(1175),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1177),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1175),
    [sym_qualified_name] = ACTIONS(1177),
    [anon_sym__] = ACTIONS(1177),
    [anon_sym_LBRACE] = ACTIONS(1177),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1177),
    [anon_sym_Prop] = ACTIONS(1177),
    [anon_sym_Set] = ACTIONS(1177),
    [anon_sym_quote] = ACTIONS(1177),
    [anon_sym_quoteTerm] = ACTIONS(1177),
    [anon_sym_unquote] = ACTIONS(1177),
    [anon_sym_record] = ACTIONS(1177),
    [anon_sym_data] = ACTIONS(1177),
    [anon_sym_codata] = ACTIONS(1177),
    [anon_sym_instance] = ACTIONS(1177),
    [anon_sym_field] = ACTIONS(1177),
    [sym_pragma] = ACTIONS(1175),
    [anon_sym_infix] = ACTIONS(1177),
    [anon_sym_infixl] = ACTIONS(1177),
    [anon_sym_infixr] = ACTIONS(1177),
  },
  [426] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(505),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [427] = {
    [sym__newline] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
  },
  [428] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(583),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(1179),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [429] = {
    [sym_literal] = STATE(585),
    [sym__atom_no_curly] = STATE(585),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(1181),
    [anon_sym__] = ACTIONS(1181),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1181),
    [anon_sym_Prop] = ACTIONS(1181),
    [anon_sym_Set] = ACTIONS(1181),
    [anon_sym_quote] = ACTIONS(1181),
    [anon_sym_quoteTerm] = ACTIONS(1181),
    [anon_sym_unquote] = ACTIONS(1181),
    [anon_sym_record] = ACTIONS(165),
  },
  [430] = {
    [sym__newline] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_where] = ACTIONS(95),
  },
  [431] = {
    [sym__newline] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_where] = ACTIONS(99),
  },
  [432] = {
    [sym_literal] = STATE(431),
    [sym__expr2] = STATE(64),
    [sym_atom] = STATE(430),
    [sym__atom_curly] = STATE(431),
    [sym__atom_no_curly] = STATE(431),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(825),
    [sym_qualified_name] = ACTIONS(827),
    [anon_sym__] = ACTIONS(827),
    [anon_sym_LBRACE] = ACTIONS(829),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(827),
    [anon_sym_Prop] = ACTIONS(827),
    [anon_sym_Set] = ACTIONS(827),
    [anon_sym_quote] = ACTIONS(827),
    [anon_sym_quoteTerm] = ACTIONS(827),
    [anon_sym_unquote] = ACTIONS(827),
    [anon_sym_record] = ACTIONS(831),
  },
  [433] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(422),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(811),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [434] = {
    [ts_builtin_sym_end] = ACTIONS(1185),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1187),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1185),
    [sym_qualified_name] = ACTIONS(1187),
    [anon_sym__] = ACTIONS(1187),
    [anon_sym_LBRACE] = ACTIONS(1187),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1187),
    [anon_sym_Prop] = ACTIONS(1187),
    [anon_sym_Set] = ACTIONS(1187),
    [anon_sym_quote] = ACTIONS(1187),
    [anon_sym_quoteTerm] = ACTIONS(1187),
    [anon_sym_unquote] = ACTIONS(1187),
    [anon_sym_record] = ACTIONS(1187),
    [anon_sym_data] = ACTIONS(1187),
    [anon_sym_codata] = ACTIONS(1187),
    [anon_sym_instance] = ACTIONS(1187),
    [anon_sym_field] = ACTIONS(1187),
    [sym_pragma] = ACTIONS(1185),
    [anon_sym_infix] = ACTIONS(1187),
    [anon_sym_infixl] = ACTIONS(1187),
    [anon_sym_infixr] = ACTIONS(1187),
  },
  [435] = {
    [sym__declarations0] = STATE(292),
    [sym__newline] = ACTIONS(570),
    [sym__indent] = ACTIONS(1189),
    [sym_comment] = ACTIONS(73),
  },
  [436] = {
    [sym_name] = ACTIONS(1191),
    [sym_comment] = ACTIONS(15),
  },
  [437] = {
    [sym__newline] = ACTIONS(1193),
    [sym_comment] = ACTIONS(73),
  },
  [438] = {
    [sym__newline] = ACTIONS(1195),
    [sym_comment] = ACTIONS(73),
  },
  [439] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(134),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(135),
    [sym_data_signature_only] = STATE(134),
    [sym_record] = STATE(135),
    [sym_record_signature_only] = STATE(134),
    [sym_field] = STATE(135),
    [sym__declaration] = STATE(134),
    [sym__declaration_block] = STATE(135),
    [sym_infix] = STATE(134),
    [sym_instance] = STATE(135),
    [sym__declarations1] = STATE(589),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(137),
    [sym__dedent] = ACTIONS(1197),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(223),
    [anon_sym_data] = ACTIONS(225),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(229),
    [anon_sym_field] = ACTIONS(231),
    [sym_pragma] = ACTIONS(233),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [440] = {
    [sym__dedent] = ACTIONS(1199),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1201),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1199),
    [sym_qualified_name] = ACTIONS(1201),
    [anon_sym__] = ACTIONS(1201),
    [anon_sym_LBRACE] = ACTIONS(1201),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1201),
    [anon_sym_Prop] = ACTIONS(1201),
    [anon_sym_Set] = ACTIONS(1201),
    [anon_sym_quote] = ACTIONS(1201),
    [anon_sym_quoteTerm] = ACTIONS(1201),
    [anon_sym_unquote] = ACTIONS(1201),
    [anon_sym_record] = ACTIONS(1201),
    [anon_sym_data] = ACTIONS(1201),
    [anon_sym_codata] = ACTIONS(1201),
    [anon_sym_instance] = ACTIONS(1203),
    [anon_sym_constructor] = ACTIONS(1206),
    [anon_sym_inductive] = ACTIONS(1206),
    [anon_sym_coinductive] = ACTIONS(1206),
    [anon_sym_eta_DASHequality] = ACTIONS(1206),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1206),
    [anon_sym_field] = ACTIONS(1201),
    [sym_pragma] = ACTIONS(1199),
    [anon_sym_infix] = ACTIONS(1201),
    [anon_sym_infixl] = ACTIONS(1201),
    [anon_sym_infixr] = ACTIONS(1201),
  },
  [441] = {
    [sym__newline] = ACTIONS(1208),
    [sym_comment] = ACTIONS(73),
  },
  [442] = {
    [sym__dedent] = ACTIONS(1197),
    [sym_comment] = ACTIONS(73),
  },
  [443] = {
    [sym_record_constructor_instance] = STATE(592),
    [sym_record_constructor] = STATE(593),
    [sym__record_directive] = STATE(593),
    [sym_record_induction] = STATE(593),
    [sym_record_eta] = STATE(593),
    [aux_sym__record_directives1_repeat1] = STATE(594),
    [sym_comment] = ACTIONS(73),
    [anon_sym_instance] = ACTIONS(1210),
    [anon_sym_constructor] = ACTIONS(1212),
    [anon_sym_inductive] = ACTIONS(1214),
    [anon_sym_coinductive] = ACTIONS(1214),
    [anon_sym_eta_DASHequality] = ACTIONS(1216),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1216),
  },
  [444] = {
    [sym__newline] = ACTIONS(1218),
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(1220),
  },
  [445] = {
    [ts_builtin_sym_end] = ACTIONS(1175),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1177),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1175),
    [sym_qualified_name] = ACTIONS(1177),
    [anon_sym__] = ACTIONS(1177),
    [anon_sym_LBRACE] = ACTIONS(1177),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1177),
    [anon_sym_Prop] = ACTIONS(1177),
    [anon_sym_Set] = ACTIONS(1177),
    [anon_sym_quote] = ACTIONS(1177),
    [anon_sym_quoteTerm] = ACTIONS(1177),
    [anon_sym_unquote] = ACTIONS(1177),
    [anon_sym_record] = ACTIONS(1177),
    [anon_sym_data] = ACTIONS(1177),
    [anon_sym_codata] = ACTIONS(1177),
    [anon_sym_instance] = ACTIONS(1177),
    [anon_sym_field] = ACTIONS(1177),
    [sym_pragma] = ACTIONS(1175),
    [anon_sym_infix] = ACTIONS(1177),
    [anon_sym_infixl] = ACTIONS(1177),
    [anon_sym_infixr] = ACTIONS(1177),
  },
  [446] = {
    [sym__declarations0] = STATE(596),
    [sym__newline] = ACTIONS(1222),
    [sym__indent] = ACTIONS(71),
    [sym_comment] = ACTIONS(73),
  },
  [447] = {
    [sym__newline] = ACTIONS(1224),
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(1226),
  },
  [448] = {
    [ts_builtin_sym_end] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1230),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1228),
    [sym_qualified_name] = ACTIONS(1230),
    [anon_sym__] = ACTIONS(1230),
    [anon_sym_LBRACE] = ACTIONS(1230),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1230),
    [anon_sym_Prop] = ACTIONS(1230),
    [anon_sym_Set] = ACTIONS(1230),
    [anon_sym_quote] = ACTIONS(1230),
    [anon_sym_quoteTerm] = ACTIONS(1230),
    [anon_sym_unquote] = ACTIONS(1230),
    [anon_sym_record] = ACTIONS(1230),
    [anon_sym_data] = ACTIONS(1230),
    [anon_sym_codata] = ACTIONS(1230),
    [anon_sym_instance] = ACTIONS(1230),
    [anon_sym_field] = ACTIONS(1230),
    [sym_pragma] = ACTIONS(1228),
    [anon_sym_infix] = ACTIONS(1230),
    [anon_sym_infixl] = ACTIONS(1230),
    [anon_sym_infixr] = ACTIONS(1230),
  },
  [449] = {
    [sym__const_right_arrow] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
  },
  [450] = {
    [anon_sym_RBRACE] = ACTIONS(1232),
    [sym_comment] = ACTIONS(73),
  },
  [451] = {
    [sym__record_assignments1] = STATE(600),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1234),
    [sym_comment] = ACTIONS(15),
  },
  [452] = {
    [anon_sym_LBRACE] = ACTIONS(1236),
    [sym_comment] = ACTIONS(73),
  },
  [453] = {
    [sym_literal] = STATE(283),
    [sym_expr] = STATE(213),
    [sym__expr1] = STATE(280),
    [sym__application] = STATE(280),
    [sym__expr2] = STATE(280),
    [sym__atoms1] = STATE(281),
    [sym_atom] = STATE(282),
    [sym__atom_curly] = STATE(283),
    [sym__atom_no_curly] = STATE(283),
    [sym__typed_bindings1] = STATE(284),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(285),
    [aux_sym__application_repeat1] = STATE(286),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(554),
    [sym_qualified_name] = ACTIONS(556),
    [anon_sym__] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(556),
    [anon_sym_Prop] = ACTIONS(556),
    [anon_sym_Set] = ACTIONS(556),
    [anon_sym_quote] = ACTIONS(556),
    [anon_sym_quoteTerm] = ACTIONS(556),
    [anon_sym_unquote] = ACTIONS(556),
    [anon_sym_record] = ACTIONS(560),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [454] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_where] = ACTIONS(33),
  },
  [455] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(603),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(1238),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [456] = {
    [sym_literal] = STATE(605),
    [sym__atom_no_curly] = STATE(605),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(1240),
    [anon_sym__] = ACTIONS(1240),
    [anon_sym_LBRACE] = ACTIONS(1242),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1240),
    [anon_sym_Prop] = ACTIONS(1240),
    [anon_sym_Set] = ACTIONS(1240),
    [anon_sym_quote] = ACTIONS(1240),
    [anon_sym_quoteTerm] = ACTIONS(1240),
    [anon_sym_unquote] = ACTIONS(1240),
    [anon_sym_record] = ACTIONS(165),
  },
  [457] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_where] = ACTIONS(95),
  },
  [458] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_where] = ACTIONS(99),
  },
  [459] = {
    [sym_literal] = STATE(458),
    [sym__expr2] = STATE(103),
    [sym_atom] = STATE(457),
    [sym__atom_curly] = STATE(458),
    [sym__atom_no_curly] = STATE(458),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(890),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(892),
    [sym_qualified_name] = ACTIONS(894),
    [anon_sym__] = ACTIONS(894),
    [anon_sym_LBRACE] = ACTIONS(896),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(894),
    [anon_sym_Prop] = ACTIONS(894),
    [anon_sym_Set] = ACTIONS(894),
    [anon_sym_quote] = ACTIONS(894),
    [anon_sym_quoteTerm] = ACTIONS(894),
    [anon_sym_unquote] = ACTIONS(894),
    [anon_sym_record] = ACTIONS(898),
  },
  [460] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(450),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(882),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [461] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(1226),
  },
  [462] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(606),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [463] = {
    [sym_record_declarations_block] = STATE(608),
    [sym__indent] = ACTIONS(1244),
    [sym__dedent] = ACTIONS(532),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(532),
    [sym_qualified_name] = ACTIONS(534),
    [anon_sym__] = ACTIONS(534),
    [anon_sym_LBRACE] = ACTIONS(534),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(534),
    [anon_sym_Prop] = ACTIONS(534),
    [anon_sym_Set] = ACTIONS(534),
    [anon_sym_quote] = ACTIONS(534),
    [anon_sym_quoteTerm] = ACTIONS(534),
    [anon_sym_unquote] = ACTIONS(534),
    [anon_sym_record] = ACTIONS(534),
    [anon_sym_data] = ACTIONS(534),
    [anon_sym_codata] = ACTIONS(534),
    [anon_sym_instance] = ACTIONS(534),
    [anon_sym_field] = ACTIONS(534),
    [sym_pragma] = ACTIONS(532),
    [anon_sym_infix] = ACTIONS(534),
    [anon_sym_infixl] = ACTIONS(534),
    [anon_sym_infixr] = ACTIONS(534),
  },
  [464] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(1246),
    [anon_sym_where] = ACTIONS(1248),
  },
  [465] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(611),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [466] = {
    [sym__declarations0] = STATE(612),
    [sym__newline] = ACTIONS(1250),
    [sym__indent] = ACTIONS(572),
    [sym_comment] = ACTIONS(73),
  },
  [467] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(1252),
    [anon_sym_where] = ACTIONS(1254),
  },
  [468] = {
    [sym_literal] = STATE(283),
    [sym_expr] = STATE(615),
    [sym__expr1] = STATE(280),
    [sym__application] = STATE(280),
    [sym__expr2] = STATE(280),
    [sym__atoms1] = STATE(281),
    [sym_atom] = STATE(282),
    [sym__atom_curly] = STATE(283),
    [sym__atom_no_curly] = STATE(283),
    [sym__typed_bindings1] = STATE(284),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(285),
    [aux_sym__application_repeat1] = STATE(286),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(554),
    [sym_qualified_name] = ACTIONS(556),
    [anon_sym__] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(556),
    [anon_sym_Prop] = ACTIONS(556),
    [anon_sym_Set] = ACTIONS(556),
    [anon_sym_quote] = ACTIONS(556),
    [anon_sym_quoteTerm] = ACTIONS(556),
    [anon_sym_unquote] = ACTIONS(556),
    [anon_sym_record] = ACTIONS(560),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [469] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(1256),
    [anon_sym_where] = ACTIONS(1254),
  },
  [470] = {
    [sym__dedent] = ACTIONS(1258),
    [sym_comment] = ACTIONS(73),
  },
  [471] = {
    [sym__dedent] = ACTIONS(1260),
    [sym_comment] = ACTIONS(73),
  },
  [472] = {
    [sym__dedent] = ACTIONS(682),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(313),
    [sym_qualified_name] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(311),
    [anon_sym_Prop] = ACTIONS(311),
    [anon_sym_Set] = ACTIONS(311),
    [anon_sym_quote] = ACTIONS(311),
    [anon_sym_quoteTerm] = ACTIONS(311),
    [anon_sym_unquote] = ACTIONS(311),
    [anon_sym_record] = ACTIONS(311),
    [anon_sym_data] = ACTIONS(311),
    [anon_sym_codata] = ACTIONS(311),
    [anon_sym_instance] = ACTIONS(311),
    [anon_sym_field] = ACTIONS(311),
    [sym_pragma] = ACTIONS(313),
    [anon_sym_infix] = ACTIONS(311),
    [anon_sym_infixl] = ACTIONS(311),
    [anon_sym_infixr] = ACTIONS(311),
  },
  [473] = {
    [aux_sym_arg_name_repeat1] = STATE(620),
    [sym_name] = ACTIONS(1262),
    [anon_sym_RBRACE] = ACTIONS(1264),
    [sym_comment] = ACTIONS(15),
  },
  [474] = {
    [aux_sym_arg_name_repeat1] = STATE(621),
    [sym_name] = ACTIONS(1266),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1264),
    [sym_comment] = ACTIONS(15),
  },
  [475] = {
    [sym_name] = ACTIONS(1268),
    [anon_sym_DOT] = ACTIONS(1268),
    [anon_sym_DOT_DOT] = ACTIONS(1270),
    [anon_sym_RBRACE] = ACTIONS(1270),
    [sym_comment] = ACTIONS(15),
  },
  [476] = {
    [sym_name] = ACTIONS(1272),
    [anon_sym_DOT] = ACTIONS(1272),
    [anon_sym_DOT_DOT] = ACTIONS(1274),
    [anon_sym_LBRACE] = ACTIONS(1272),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1274),
    [sym_comment] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(1272),
  },
  [477] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(477),
    [sym_name] = ACTIONS(1276),
    [anon_sym_DOT] = ACTIONS(1279),
    [anon_sym_DOT_DOT] = ACTIONS(1282),
    [anon_sym_RBRACE] = ACTIONS(1270),
    [sym_comment] = ACTIONS(15),
  },
  [478] = {
    [sym_name] = ACTIONS(1268),
    [anon_sym_DOT] = ACTIONS(1268),
    [anon_sym_DOT_DOT] = ACTIONS(1270),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1270),
    [sym_comment] = ACTIONS(15),
  },
  [479] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(479),
    [sym_name] = ACTIONS(1285),
    [anon_sym_DOT] = ACTIONS(1288),
    [anon_sym_DOT_DOT] = ACTIONS(1291),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1270),
    [sym_comment] = ACTIONS(15),
  },
  [480] = {
    [sym__dedent] = ACTIONS(1294),
    [sym_comment] = ACTIONS(73),
  },
  [481] = {
    [sym_literal] = STATE(489),
    [sym_expr] = STATE(623),
    [sym__expr1] = STATE(486),
    [sym__application] = STATE(486),
    [sym__expr2] = STATE(486),
    [sym__atoms1] = STATE(487),
    [sym_atom] = STATE(488),
    [sym__atom_curly] = STATE(489),
    [sym__atom_no_curly] = STATE(489),
    [sym__typed_bindings1] = STATE(490),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(491),
    [aux_sym__application_repeat1] = STATE(492),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(946),
    [sym_qualified_name] = ACTIONS(948),
    [anon_sym__] = ACTIONS(948),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(950),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(948),
    [anon_sym_Prop] = ACTIONS(948),
    [anon_sym_Set] = ACTIONS(948),
    [anon_sym_quote] = ACTIONS(948),
    [anon_sym_quoteTerm] = ACTIONS(948),
    [anon_sym_unquote] = ACTIONS(948),
    [anon_sym_record] = ACTIONS(952),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [482] = {
    [sym__dedent] = ACTIONS(31),
    [sym__const_right_arrow] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_name] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_instance] = ACTIONS(33),
    [anon_sym_overlap] = ACTIONS(33),
  },
  [483] = {
    [sym_literal] = STATE(79),
    [sym_expr] = STATE(625),
    [sym__expr1] = STATE(30),
    [sym__application] = STATE(77),
    [sym__expr2] = STATE(77),
    [sym__atoms1] = STATE(31),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [sym__typed_bindings1] = STATE(34),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(80),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(133),
    [sym_qualified_name] = ACTIONS(135),
    [anon_sym__] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(1296),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_Prop] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_quoteTerm] = ACTIONS(135),
    [anon_sym_unquote] = ACTIONS(135),
    [anon_sym_record] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [484] = {
    [sym_literal] = STATE(627),
    [sym__atom_no_curly] = STATE(627),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(1298),
    [anon_sym__] = ACTIONS(1298),
    [anon_sym_LBRACE] = ACTIONS(1300),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1298),
    [anon_sym_Prop] = ACTIONS(1298),
    [anon_sym_Set] = ACTIONS(1298),
    [anon_sym_quote] = ACTIONS(1298),
    [anon_sym_quoteTerm] = ACTIONS(1298),
    [anon_sym_unquote] = ACTIONS(1298),
    [anon_sym_record] = ACTIONS(165),
  },
  [485] = {
    [sym__dedent] = ACTIONS(1302),
    [sym_name] = ACTIONS(1304),
    [anon_sym_DOT] = ACTIONS(1304),
    [anon_sym_DOT_DOT] = ACTIONS(1302),
    [anon_sym_LBRACE] = ACTIONS(1304),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1302),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(1304),
    [anon_sym_overlap] = ACTIONS(1304),
  },
  [486] = {
    [sym__dedent] = ACTIONS(169),
    [sym_name] = ACTIONS(1306),
    [anon_sym_DOT] = ACTIONS(1306),
    [anon_sym_DOT_DOT] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(1306),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(169),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1308),
    [anon_sym_instance] = ACTIONS(1306),
    [anon_sym_overlap] = ACTIONS(1306),
  },
  [487] = {
    [sym__const_right_arrow] = ACTIONS(1310),
    [sym_comment] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(87),
  },
  [488] = {
    [sym__dedent] = ACTIONS(89),
    [sym__const_right_arrow] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_name] = ACTIONS(95),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_instance] = ACTIONS(95),
    [anon_sym_overlap] = ACTIONS(95),
  },
  [489] = {
    [sym__dedent] = ACTIONS(97),
    [sym__const_right_arrow] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_name] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_instance] = ACTIONS(99),
    [anon_sym_overlap] = ACTIONS(99),
  },
  [490] = {
    [sym__const_right_arrow] = ACTIONS(1310),
    [sym_comment] = ACTIONS(73),
  },
  [491] = {
    [sym_literal] = STATE(634),
    [sym__application] = STATE(632),
    [sym__expr2] = STATE(632),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(633),
    [sym__atom_curly] = STATE(634),
    [sym__atom_no_curly] = STATE(634),
    [aux_sym__expr1_repeat1] = STATE(63),
    [aux_sym__application_repeat1] = STATE(635),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1312),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1314),
    [sym_qualified_name] = ACTIONS(1316),
    [anon_sym__] = ACTIONS(1316),
    [anon_sym_LBRACE] = ACTIONS(1318),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1316),
    [anon_sym_Prop] = ACTIONS(1316),
    [anon_sym_Set] = ACTIONS(1316),
    [anon_sym_quote] = ACTIONS(1316),
    [anon_sym_quoteTerm] = ACTIONS(1316),
    [anon_sym_unquote] = ACTIONS(1316),
    [anon_sym_record] = ACTIONS(1320),
  },
  [492] = {
    [sym_literal] = STATE(489),
    [sym__expr2] = STATE(637),
    [sym_atom] = STATE(488),
    [sym__atom_curly] = STATE(489),
    [sym__atom_no_curly] = STATE(489),
    [aux_sym__application_repeat1] = STATE(104),
    [sym__const_right_arrow] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(946),
    [sym_qualified_name] = ACTIONS(948),
    [anon_sym__] = ACTIONS(948),
    [anon_sym_LBRACE] = ACTIONS(1322),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(948),
    [anon_sym_Prop] = ACTIONS(948),
    [anon_sym_Set] = ACTIONS(948),
    [anon_sym_quote] = ACTIONS(948),
    [anon_sym_quoteTerm] = ACTIONS(948),
    [anon_sym_unquote] = ACTIONS(948),
    [anon_sym_record] = ACTIONS(952),
  },
  [493] = {
    [sym__newline] = ACTIONS(420),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(422),
    [anon_sym_module] = ACTIONS(422),
    [anon_sym_with] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
  },
  [494] = {
    [sym__newline] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_COLON] = ACTIONS(484),
    [anon_sym_module] = ACTIONS(484),
    [anon_sym_with] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [495] = {
    [anon_sym_RBRACE] = ACTIONS(1324),
    [sym_comment] = ACTIONS(73),
  },
  [496] = {
    [sym__field_assignments1] = STATE(639),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1324),
    [sym_comment] = ACTIONS(15),
  },
  [497] = {
    [sym__newline] = ACTIONS(420),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(422),
    [anon_sym_module] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
  },
  [498] = {
    [sym__newline] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_COLON] = ACTIONS(484),
    [anon_sym_module] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [499] = {
    [anon_sym_RBRACE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(73),
  },
  [500] = {
    [sym__field_assignments1] = STATE(641),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(15),
  },
  [501] = {
    [sym__newline] = ACTIONS(420),
    [sym__const_right_arrow] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_module] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
  },
  [502] = {
    [sym__newline] = ACTIONS(482),
    [sym__const_right_arrow] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_module] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [503] = {
    [anon_sym_RBRACE] = ACTIONS(1328),
    [sym_comment] = ACTIONS(73),
  },
  [504] = {
    [sym__field_assignments1] = STATE(643),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1328),
    [sym_comment] = ACTIONS(15),
  },
  [505] = {
    [sym__newline] = ACTIONS(737),
    [sym_comment] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(737),
    [anon_sym_where] = ACTIONS(737),
  },
  [506] = {
    [sym__newline] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_module] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
  },
  [507] = {
    [anon_sym_RBRACE] = ACTIONS(1330),
    [sym_comment] = ACTIONS(73),
  },
  [508] = {
    [sym__record_assignments1] = STATE(646),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1332),
    [sym_comment] = ACTIONS(15),
  },
  [509] = {
    [anon_sym_LBRACE] = ACTIONS(1334),
    [sym_comment] = ACTIONS(73),
  },
  [510] = {
    [sym__newline] = ACTIONS(1336),
    [sym_comment] = ACTIONS(73),
  },
  [511] = {
    [sym__newline] = ACTIONS(912),
    [sym_comment] = ACTIONS(73),
  },
  [512] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
  },
  [513] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
  },
  [514] = {
    [anon_sym_RBRACE] = ACTIONS(1338),
    [sym_comment] = ACTIONS(73),
  },
  [515] = {
    [sym__field_assignments1] = STATE(649),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1338),
    [sym_comment] = ACTIONS(15),
  },
  [516] = {
    [anon_sym_RBRACE] = ACTIONS(1340),
    [sym_comment] = ACTIONS(73),
  },
  [517] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1340),
    [sym_comment] = ACTIONS(73),
  },
  [518] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(1340),
  },
  [519] = {
    [sym__const_right_arrow] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(73),
  },
  [521] = {
    [sym__const_right_arrow] = ACTIONS(1344),
    [anon_sym_DOT] = ACTIONS(1346),
    [anon_sym_DOT_DOT] = ACTIONS(1344),
    [anon_sym_LBRACE] = ACTIONS(1346),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1344),
    [sym_comment] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(1344),
  },
  [522] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
  },
  [523] = {
    [anon_sym_RBRACE] = ACTIONS(1348),
    [sym_comment] = ACTIONS(73),
  },
  [524] = {
    [sym__const_right_arrow] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
  },
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1350),
    [sym_comment] = ACTIONS(73),
  },
  [526] = {
    [sym__record_assignments1] = STATE(655),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1352),
    [sym_comment] = ACTIONS(15),
  },
  [527] = {
    [anon_sym_LBRACE] = ACTIONS(1354),
    [sym_comment] = ACTIONS(73),
  },
  [528] = {
    [sym_literal] = STATE(363),
    [sym_expr] = STATE(657),
    [sym__expr1] = STATE(360),
    [sym__application] = STATE(360),
    [sym__expr2] = STATE(360),
    [sym__atoms1] = STATE(361),
    [sym_atom] = STATE(362),
    [sym__atom_curly] = STATE(363),
    [sym__atom_no_curly] = STATE(363),
    [sym__typed_bindings1] = STATE(364),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(365),
    [aux_sym__application_repeat1] = STATE(366),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(706),
    [sym_qualified_name] = ACTIONS(708),
    [anon_sym__] = ACTIONS(708),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(710),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(708),
    [anon_sym_Prop] = ACTIONS(708),
    [anon_sym_Set] = ACTIONS(708),
    [anon_sym_quote] = ACTIONS(708),
    [anon_sym_quoteTerm] = ACTIONS(708),
    [anon_sym_unquote] = ACTIONS(708),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [529] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
  },
  [530] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(659),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(1356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [531] = {
    [sym_literal] = STATE(661),
    [sym__atom_no_curly] = STATE(661),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(1358),
    [anon_sym__] = ACTIONS(1358),
    [anon_sym_LBRACE] = ACTIONS(1360),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1358),
    [anon_sym_Prop] = ACTIONS(1358),
    [anon_sym_Set] = ACTIONS(1358),
    [anon_sym_quote] = ACTIONS(1358),
    [anon_sym_quoteTerm] = ACTIONS(1358),
    [anon_sym_unquote] = ACTIONS(1358),
    [anon_sym_record] = ACTIONS(165),
  },
  [532] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(317),
  },
  [533] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
  },
  [534] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
  },
  [535] = {
    [sym_literal] = STATE(534),
    [sym__expr2] = STATE(419),
    [sym_atom] = STATE(533),
    [sym__atom_curly] = STATE(534),
    [sym__atom_no_curly] = STATE(534),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1054),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1056),
    [sym_qualified_name] = ACTIONS(1058),
    [anon_sym__] = ACTIONS(1058),
    [anon_sym_LBRACE] = ACTIONS(1060),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(1058),
    [anon_sym_Prop] = ACTIONS(1058),
    [anon_sym_Set] = ACTIONS(1058),
    [anon_sym_quote] = ACTIONS(1058),
    [anon_sym_quoteTerm] = ACTIONS(1058),
    [anon_sym_unquote] = ACTIONS(1058),
    [anon_sym_record] = ACTIONS(1062),
  },
  [536] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(525),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(1046),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [537] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
  },
  [538] = {
    [anon_sym_RBRACE] = ACTIONS(1362),
    [sym_comment] = ACTIONS(73),
  },
  [539] = {
    [sym__record_assignments1] = STATE(664),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1364),
    [sym_comment] = ACTIONS(15),
  },
  [540] = {
    [anon_sym_LBRACE] = ACTIONS(1366),
    [sym_comment] = ACTIONS(73),
  },
  [541] = {
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(73),
  },
  [542] = {
    [anon_sym_RBRACE] = ACTIONS(1368),
    [sym_comment] = ACTIONS(73),
  },
  [543] = {
    [sym__const_right_arrow] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_RBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_SEMI] = ACTIONS(1157),
    [anon_sym_RPAREN] = ACTIONS(1157),
  },
  [544] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(213),
    [sym__expr1] = STATE(378),
    [sym__application] = STATE(378),
    [sym__expr2] = STATE(378),
    [sym__atoms1] = STATE(379),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(380),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [545] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_RPAREN] = ACTIONS(775),
  },
  [546] = {
    [anon_sym_RBRACE] = ACTIONS(1370),
    [sym_comment] = ACTIONS(73),
  },
  [547] = {
    [sym__const_right_arrow] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
  },
  [548] = {
    [sym__const_right_arrow] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
  },
  [549] = {
    [anon_sym_RBRACE] = ACTIONS(1372),
    [sym_comment] = ACTIONS(73),
  },
  [550] = {
    [sym__field_assignments1] = STATE(669),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1372),
    [sym_comment] = ACTIONS(15),
  },
  [551] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_public] = ACTIONS(422),
    [anon_sym_using] = ACTIONS(422),
    [anon_sym_hiding] = ACTIONS(422),
    [anon_sym_renaming] = ACTIONS(422),
  },
  [552] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(213),
    [sym__expr1] = STATE(392),
    [sym__application] = STATE(392),
    [sym__expr2] = STATE(392),
    [sym__atoms1] = STATE(393),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(394),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [553] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_public] = ACTIONS(484),
    [anon_sym_using] = ACTIONS(484),
    [anon_sym_hiding] = ACTIONS(484),
    [anon_sym_renaming] = ACTIONS(484),
  },
  [554] = {
    [anon_sym_RBRACE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(73),
  },
  [555] = {
    [sym__field_assignments1] = STATE(671),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(15),
  },
  [556] = {
    [anon_sym_RBRACE] = ACTIONS(1376),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1376),
    [anon_sym_public] = ACTIONS(1376),
    [anon_sym_using] = ACTIONS(1376),
    [anon_sym_hiding] = ACTIONS(1376),
    [anon_sym_renaming] = ACTIONS(1376),
  },
  [557] = {
    [sym_name] = ACTIONS(1378),
    [sym_comment] = ACTIONS(15),
  },
  [558] = {
    [aux_sym__comma_import_names1_repeat1] = STATE(674),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1380),
    [anon_sym_RPAREN] = ACTIONS(1382),
  },
  [559] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(1384),
  },
  [560] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_to] = ACTIONS(1386),
  },
  [561] = {
    [sym_name] = ACTIONS(1388),
    [sym_comment] = ACTIONS(15),
  },
  [562] = {
    [aux_sym_import_directive_repeat1] = STATE(679),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1390),
    [anon_sym_RPAREN] = ACTIONS(1384),
  },
  [563] = {
    [sym_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_DOT] = ACTIONS(1159),
    [anon_sym_DOT_DOT] = ACTIONS(1157),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(1157),
    [anon_sym_COLON] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [564] = {
    [sym_name] = ACTIONS(1392),
    [anon_sym__] = ACTIONS(1392),
    [anon_sym_DOT] = ACTIONS(1392),
    [anon_sym_DOT_DOT] = ACTIONS(1394),
    [anon_sym_LBRACE] = ACTIONS(1392),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1394),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(1394),
    [anon_sym_COLON] = ACTIONS(1392),
    [anon_sym_where] = ACTIONS(1392),
  },
  [565] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(680),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [566] = {
    [sym_literal] = STATE(363),
    [sym_expr] = STATE(681),
    [sym__expr1] = STATE(360),
    [sym__application] = STATE(360),
    [sym__expr2] = STATE(360),
    [sym__atoms1] = STATE(361),
    [sym_atom] = STATE(362),
    [sym__atom_curly] = STATE(363),
    [sym__atom_no_curly] = STATE(363),
    [sym__typed_bindings1] = STATE(364),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(365),
    [aux_sym__application_repeat1] = STATE(366),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(704),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(706),
    [sym_qualified_name] = ACTIONS(708),
    [anon_sym__] = ACTIONS(708),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(710),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(708),
    [anon_sym_Prop] = ACTIONS(708),
    [anon_sym_Set] = ACTIONS(708),
    [anon_sym_quote] = ACTIONS(708),
    [anon_sym_quoteTerm] = ACTIONS(708),
    [anon_sym_unquote] = ACTIONS(708),
    [anon_sym_record] = ACTIONS(712),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [567] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(682),
    [sym__expr1] = STATE(378),
    [sym__application] = STATE(378),
    [sym__expr2] = STATE(378),
    [sym__atoms1] = STATE(379),
    [sym_atom] = STATE(32),
    [sym__atom_curly] = STATE(33),
    [sym__atom_no_curly] = STATE(33),
    [sym__typed_bindings1] = STATE(380),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(35),
    [aux_sym__application_repeat1] = STATE(36),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [568] = {
    [anon_sym_RBRACE] = ACTIONS(1396),
    [sym_comment] = ACTIONS(73),
  },
  [569] = {
    [anon_sym_RBRACE] = ACTIONS(1398),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1398),
  },
  [570] = {
    [aux_sym__field_assignments1_repeat1] = STATE(570),
    [anon_sym_RBRACE] = ACTIONS(1398),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1400),
  },
  [571] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(422),
  },
  [572] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_COLON] = ACTIONS(484),
  },
  [573] = {
    [anon_sym_RBRACE] = ACTIONS(1403),
    [sym_comment] = ACTIONS(73),
  },
  [574] = {
    [sym__field_assignments1] = STATE(685),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1403),
    [sym_comment] = ACTIONS(15),
  },
  [575] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1396),
    [sym_comment] = ACTIONS(73),
  },
  [576] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(1396),
  },
  [577] = {
    [sym__newline] = ACTIONS(420),
    [sym__const_right_arrow] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
  },
  [578] = {
    [sym__newline] = ACTIONS(482),
    [sym__const_right_arrow] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [579] = {
    [anon_sym_RBRACE] = ACTIONS(1405),
    [sym_comment] = ACTIONS(73),
  },
  [580] = {
    [sym__field_assignments1] = STATE(687),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1405),
    [sym_comment] = ACTIONS(15),
  },
  [581] = {
    [ts_builtin_sym_end] = ACTIONS(1407),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1409),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1407),
    [sym_qualified_name] = ACTIONS(1409),
    [anon_sym__] = ACTIONS(1409),
    [anon_sym_LBRACE] = ACTIONS(1409),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1409),
    [anon_sym_Prop] = ACTIONS(1409),
    [anon_sym_Set] = ACTIONS(1409),
    [anon_sym_quote] = ACTIONS(1409),
    [anon_sym_quoteTerm] = ACTIONS(1409),
    [anon_sym_unquote] = ACTIONS(1409),
    [anon_sym_record] = ACTIONS(1409),
    [anon_sym_data] = ACTIONS(1409),
    [anon_sym_codata] = ACTIONS(1409),
    [anon_sym_instance] = ACTIONS(1409),
    [anon_sym_field] = ACTIONS(1409),
    [sym_pragma] = ACTIONS(1407),
    [anon_sym_infix] = ACTIONS(1409),
    [anon_sym_infixl] = ACTIONS(1409),
    [anon_sym_infixr] = ACTIONS(1409),
  },
  [582] = {
    [sym__newline] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
  },
  [583] = {
    [anon_sym_RBRACE] = ACTIONS(1411),
    [sym_comment] = ACTIONS(73),
  },
  [584] = {
    [sym__record_assignments1] = STATE(690),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1413),
    [sym_comment] = ACTIONS(15),
  },
  [585] = {
    [anon_sym_LBRACE] = ACTIONS(1415),
    [sym_comment] = ACTIONS(73),
  },
  [586] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(134),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(135),
    [sym_data_signature_only] = STATE(134),
    [sym_record] = STATE(135),
    [sym_record_signature_only] = STATE(134),
    [sym_field] = STATE(135),
    [sym__declaration] = STATE(134),
    [sym__declaration_block] = STATE(135),
    [sym_infix] = STATE(134),
    [sym_instance] = STATE(135),
    [sym__declarations1] = STATE(470),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(223),
    [anon_sym_data] = ACTIONS(225),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(229),
    [anon_sym_constructor] = ACTIONS(1417),
    [anon_sym_field] = ACTIONS(231),
    [sym_pragma] = ACTIONS(233),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [587] = {
    [sym__newline] = ACTIONS(1419),
    [sym_comment] = ACTIONS(73),
  },
  [588] = {
    [ts_builtin_sym_end] = ACTIONS(1421),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1423),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1421),
    [sym_qualified_name] = ACTIONS(1423),
    [anon_sym__] = ACTIONS(1423),
    [anon_sym_LBRACE] = ACTIONS(1423),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1423),
    [anon_sym_Prop] = ACTIONS(1423),
    [anon_sym_Set] = ACTIONS(1423),
    [anon_sym_quote] = ACTIONS(1423),
    [anon_sym_quoteTerm] = ACTIONS(1423),
    [anon_sym_unquote] = ACTIONS(1423),
    [anon_sym_record] = ACTIONS(1423),
    [anon_sym_data] = ACTIONS(1423),
    [anon_sym_codata] = ACTIONS(1423),
    [anon_sym_instance] = ACTIONS(1423),
    [anon_sym_field] = ACTIONS(1423),
    [sym_pragma] = ACTIONS(1421),
    [anon_sym_infix] = ACTIONS(1423),
    [anon_sym_infixl] = ACTIONS(1423),
    [anon_sym_infixr] = ACTIONS(1423),
  },
  [589] = {
    [sym__dedent] = ACTIONS(1425),
    [sym_comment] = ACTIONS(73),
  },
  [590] = {
    [sym__dedent] = ACTIONS(1427),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1429),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1427),
    [sym_qualified_name] = ACTIONS(1429),
    [anon_sym__] = ACTIONS(1429),
    [anon_sym_LBRACE] = ACTIONS(1429),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1429),
    [anon_sym_Prop] = ACTIONS(1429),
    [anon_sym_Set] = ACTIONS(1429),
    [anon_sym_quote] = ACTIONS(1429),
    [anon_sym_quoteTerm] = ACTIONS(1429),
    [anon_sym_unquote] = ACTIONS(1429),
    [anon_sym_record] = ACTIONS(1429),
    [anon_sym_data] = ACTIONS(1429),
    [anon_sym_codata] = ACTIONS(1429),
    [anon_sym_instance] = ACTIONS(1431),
    [anon_sym_constructor] = ACTIONS(1434),
    [anon_sym_inductive] = ACTIONS(1434),
    [anon_sym_coinductive] = ACTIONS(1434),
    [anon_sym_eta_DASHequality] = ACTIONS(1434),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1434),
    [anon_sym_field] = ACTIONS(1429),
    [sym_pragma] = ACTIONS(1427),
    [anon_sym_infix] = ACTIONS(1429),
    [anon_sym_infixl] = ACTIONS(1429),
    [anon_sym_infixr] = ACTIONS(1429),
  },
  [591] = {
    [sym__indent] = ACTIONS(1436),
    [sym_comment] = ACTIONS(73),
  },
  [592] = {
    [sym__dedent] = ACTIONS(1427),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1429),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1427),
    [sym_qualified_name] = ACTIONS(1429),
    [anon_sym__] = ACTIONS(1429),
    [anon_sym_LBRACE] = ACTIONS(1429),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1429),
    [anon_sym_Prop] = ACTIONS(1429),
    [anon_sym_Set] = ACTIONS(1429),
    [anon_sym_quote] = ACTIONS(1429),
    [anon_sym_quoteTerm] = ACTIONS(1429),
    [anon_sym_unquote] = ACTIONS(1429),
    [anon_sym_record] = ACTIONS(1429),
    [anon_sym_data] = ACTIONS(1429),
    [anon_sym_codata] = ACTIONS(1429),
    [anon_sym_instance] = ACTIONS(1438),
    [anon_sym_constructor] = ACTIONS(1206),
    [anon_sym_inductive] = ACTIONS(1206),
    [anon_sym_coinductive] = ACTIONS(1206),
    [anon_sym_eta_DASHequality] = ACTIONS(1206),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1206),
    [anon_sym_field] = ACTIONS(1429),
    [sym_pragma] = ACTIONS(1427),
    [anon_sym_infix] = ACTIONS(1429),
    [anon_sym_infixl] = ACTIONS(1429),
    [anon_sym_infixr] = ACTIONS(1429),
  },
  [593] = {
    [sym__newline] = ACTIONS(1441),
    [sym_comment] = ACTIONS(73),
  },
  [594] = {
    [sym_record_constructor_instance] = STATE(594),
    [sym_record_constructor] = STATE(697),
    [sym__record_directive] = STATE(697),
    [sym_record_induction] = STATE(697),
    [sym_record_eta] = STATE(697),
    [aux_sym__record_directives1_repeat1] = STATE(594),
    [sym_comment] = ACTIONS(73),
    [anon_sym_instance] = ACTIONS(1443),
    [anon_sym_constructor] = ACTIONS(1446),
    [anon_sym_inductive] = ACTIONS(1449),
    [anon_sym_coinductive] = ACTIONS(1449),
    [anon_sym_eta_DASHequality] = ACTIONS(1452),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1452),
  },
  [595] = {
    [sym_record_declarations_block] = STATE(698),
    [sym__indent] = ACTIONS(530),
    [ts_builtin_sym_end] = ACTIONS(1407),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1409),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1407),
    [sym_qualified_name] = ACTIONS(1409),
    [anon_sym__] = ACTIONS(1409),
    [anon_sym_LBRACE] = ACTIONS(1409),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1409),
    [anon_sym_Prop] = ACTIONS(1409),
    [anon_sym_Set] = ACTIONS(1409),
    [anon_sym_quote] = ACTIONS(1409),
    [anon_sym_quoteTerm] = ACTIONS(1409),
    [anon_sym_unquote] = ACTIONS(1409),
    [anon_sym_record] = ACTIONS(1409),
    [anon_sym_data] = ACTIONS(1409),
    [anon_sym_codata] = ACTIONS(1409),
    [anon_sym_instance] = ACTIONS(1409),
    [anon_sym_field] = ACTIONS(1409),
    [sym_pragma] = ACTIONS(1407),
    [anon_sym_infix] = ACTIONS(1409),
    [anon_sym_infixl] = ACTIONS(1409),
    [anon_sym_infixr] = ACTIONS(1409),
  },
  [596] = {
    [ts_builtin_sym_end] = ACTIONS(1455),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1457),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1455),
    [sym_qualified_name] = ACTIONS(1457),
    [anon_sym__] = ACTIONS(1457),
    [anon_sym_LBRACE] = ACTIONS(1457),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1457),
    [anon_sym_Prop] = ACTIONS(1457),
    [anon_sym_Set] = ACTIONS(1457),
    [anon_sym_quote] = ACTIONS(1457),
    [anon_sym_quoteTerm] = ACTIONS(1457),
    [anon_sym_unquote] = ACTIONS(1457),
    [anon_sym_record] = ACTIONS(1457),
    [anon_sym_data] = ACTIONS(1457),
    [anon_sym_codata] = ACTIONS(1457),
    [anon_sym_instance] = ACTIONS(1457),
    [anon_sym_field] = ACTIONS(1457),
    [sym_pragma] = ACTIONS(1455),
    [anon_sym_infix] = ACTIONS(1457),
    [anon_sym_infixl] = ACTIONS(1457),
    [anon_sym_infixr] = ACTIONS(1457),
  },
  [597] = {
    [sym__declarations0] = STATE(699),
    [sym__newline] = ACTIONS(1459),
    [sym__indent] = ACTIONS(71),
    [sym_comment] = ACTIONS(73),
  },
  [598] = {
    [sym__const_right_arrow] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
  },
  [599] = {
    [sym__const_right_arrow] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [600] = {
    [anon_sym_RBRACE] = ACTIONS(1461),
    [sym_comment] = ACTIONS(73),
  },
  [601] = {
    [sym__field_assignments1] = STATE(701),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1461),
    [sym_comment] = ACTIONS(15),
  },
  [602] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
  },
  [603] = {
    [anon_sym_RBRACE] = ACTIONS(1463),
    [sym_comment] = ACTIONS(73),
  },
  [604] = {
    [sym__record_assignments1] = STATE(704),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1465),
    [sym_comment] = ACTIONS(15),
  },
  [605] = {
    [anon_sym_LBRACE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(73),
  },
  [606] = {
    [sym__newline] = ACTIONS(817),
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(1469),
  },
  [607] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(134),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(135),
    [sym_data_signature_only] = STATE(134),
    [sym_record] = STATE(135),
    [sym_record_signature_only] = STATE(134),
    [sym__record_directives1] = STATE(708),
    [sym_record_constructor_instance] = STATE(440),
    [sym_record_constructor] = STATE(441),
    [sym__record_directive] = STATE(441),
    [sym_record_induction] = STATE(441),
    [sym_record_eta] = STATE(441),
    [sym_field] = STATE(135),
    [sym__declaration] = STATE(134),
    [sym__declaration_block] = STATE(135),
    [sym_infix] = STATE(134),
    [sym_instance] = STATE(135),
    [sym__declarations1] = STATE(709),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__record_directives1_repeat1] = STATE(443),
    [aux_sym__declarations1_repeat1] = STATE(137),
    [sym__dedent] = ACTIONS(1471),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(223),
    [anon_sym_data] = ACTIONS(225),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(837),
    [anon_sym_constructor] = ACTIONS(839),
    [anon_sym_inductive] = ACTIONS(841),
    [anon_sym_coinductive] = ACTIONS(841),
    [anon_sym_eta_DASHequality] = ACTIONS(843),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(843),
    [anon_sym_field] = ACTIONS(231),
    [sym_pragma] = ACTIONS(233),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [608] = {
    [sym__dedent] = ACTIONS(845),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(845),
    [sym_qualified_name] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_Prop] = ACTIONS(847),
    [anon_sym_Set] = ACTIONS(847),
    [anon_sym_quote] = ACTIONS(847),
    [anon_sym_quoteTerm] = ACTIONS(847),
    [anon_sym_unquote] = ACTIONS(847),
    [anon_sym_record] = ACTIONS(847),
    [anon_sym_data] = ACTIONS(847),
    [anon_sym_codata] = ACTIONS(847),
    [anon_sym_instance] = ACTIONS(847),
    [anon_sym_field] = ACTIONS(847),
    [sym_pragma] = ACTIONS(845),
    [anon_sym_infix] = ACTIONS(847),
    [anon_sym_infixl] = ACTIONS(847),
    [anon_sym_infixr] = ACTIONS(847),
  },
  [609] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(710),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [610] = {
    [sym_record_declarations_block] = STATE(711),
    [sym__indent] = ACTIONS(1244),
    [sym__dedent] = ACTIONS(845),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(845),
    [sym_qualified_name] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_Prop] = ACTIONS(847),
    [anon_sym_Set] = ACTIONS(847),
    [anon_sym_quote] = ACTIONS(847),
    [anon_sym_quoteTerm] = ACTIONS(847),
    [anon_sym_unquote] = ACTIONS(847),
    [anon_sym_record] = ACTIONS(847),
    [anon_sym_data] = ACTIONS(847),
    [anon_sym_codata] = ACTIONS(847),
    [anon_sym_instance] = ACTIONS(847),
    [anon_sym_field] = ACTIONS(847),
    [sym_pragma] = ACTIONS(845),
    [anon_sym_infix] = ACTIONS(847),
    [anon_sym_infixl] = ACTIONS(847),
    [anon_sym_infixr] = ACTIONS(847),
  },
  [611] = {
    [sym__newline] = ACTIONS(872),
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(1473),
  },
  [612] = {
    [sym__dedent] = ACTIONS(876),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(878),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(876),
    [sym_qualified_name] = ACTIONS(878),
    [anon_sym__] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [sym_comment] = ACTIONS(15),
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
    [sym_pragma] = ACTIONS(876),
    [anon_sym_infix] = ACTIONS(878),
    [anon_sym_infixl] = ACTIONS(878),
    [anon_sym_infixr] = ACTIONS(878),
  },
  [613] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(713),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(522),
    [sym_qualified_name] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_Prop] = ACTIONS(524),
    [anon_sym_Set] = ACTIONS(524),
    [anon_sym_quote] = ACTIONS(524),
    [anon_sym_quoteTerm] = ACTIONS(524),
    [anon_sym_unquote] = ACTIONS(524),
    [anon_sym_record] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [614] = {
    [sym__declarations0] = STATE(714),
    [sym__newline] = ACTIONS(1475),
    [sym__indent] = ACTIONS(572),
    [sym_comment] = ACTIONS(73),
  },
  [615] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(1473),
  },
  [616] = {
    [sym_literal] = STATE(283),
    [sym_expr] = STATE(715),
    [sym__expr1] = STATE(280),
    [sym__application] = STATE(280),
    [sym__expr2] = STATE(280),
    [sym__atoms1] = STATE(281),
    [sym_atom] = STATE(282),
    [sym__atom_curly] = STATE(283),
    [sym__atom_no_curly] = STATE(283),
    [sym__typed_bindings1] = STATE(284),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(285),
    [aux_sym__application_repeat1] = STATE(286),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(554),
    [sym_qualified_name] = ACTIONS(556),
    [anon_sym__] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(556),
    [anon_sym_Prop] = ACTIONS(556),
    [anon_sym_Set] = ACTIONS(556),
    [anon_sym_quote] = ACTIONS(556),
    [anon_sym_quoteTerm] = ACTIONS(556),
    [anon_sym_unquote] = ACTIONS(556),
    [anon_sym_record] = ACTIONS(560),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [617] = {
    [sym__dedent] = ACTIONS(912),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(914),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(912),
    [sym_qualified_name] = ACTIONS(914),
    [anon_sym__] = ACTIONS(914),
    [anon_sym_LBRACE] = ACTIONS(914),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(914),
    [anon_sym_Prop] = ACTIONS(914),
    [anon_sym_Set] = ACTIONS(914),
    [anon_sym_quote] = ACTIONS(914),
    [anon_sym_quoteTerm] = ACTIONS(914),
    [anon_sym_unquote] = ACTIONS(914),
    [anon_sym_record] = ACTIONS(914),
    [anon_sym_data] = ACTIONS(914),
    [anon_sym_codata] = ACTIONS(914),
    [anon_sym_instance] = ACTIONS(914),
    [anon_sym_field] = ACTIONS(914),
    [sym_pragma] = ACTIONS(912),
    [anon_sym_infix] = ACTIONS(914),
    [anon_sym_infixl] = ACTIONS(914),
    [anon_sym_infixr] = ACTIONS(914),
  },
  [618] = {
    [sym__dedent] = ACTIONS(954),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(956),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(954),
    [sym_qualified_name] = ACTIONS(956),
    [anon_sym__] = ACTIONS(956),
    [anon_sym_LBRACE] = ACTIONS(956),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(956),
    [anon_sym_Prop] = ACTIONS(956),
    [anon_sym_Set] = ACTIONS(956),
    [anon_sym_quote] = ACTIONS(956),
    [anon_sym_quoteTerm] = ACTIONS(956),
    [anon_sym_unquote] = ACTIONS(956),
    [anon_sym_record] = ACTIONS(956),
    [anon_sym_data] = ACTIONS(956),
    [anon_sym_codata] = ACTIONS(956),
    [anon_sym_instance] = ACTIONS(956),
    [anon_sym_field] = ACTIONS(956),
    [sym_pragma] = ACTIONS(954),
    [anon_sym_infix] = ACTIONS(956),
    [anon_sym_infixl] = ACTIONS(956),
    [anon_sym_infixr] = ACTIONS(956),
  },
  [619] = {
    [sym_name] = ACTIONS(1477),
    [anon_sym_DOT] = ACTIONS(1477),
    [anon_sym_DOT_DOT] = ACTIONS(1479),
    [anon_sym_LBRACE] = ACTIONS(1477),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1479),
    [sym_comment] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(1477),
  },
  [620] = {
    [aux_sym_arg_name_repeat1] = STATE(620),
    [sym_name] = ACTIONS(1481),
    [anon_sym_RBRACE] = ACTIONS(1484),
    [sym_comment] = ACTIONS(15),
  },
  [621] = {
    [aux_sym_arg_name_repeat1] = STATE(621),
    [sym_name] = ACTIONS(1486),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1484),
    [sym_comment] = ACTIONS(15),
  },
  [622] = {
    [sym__dedent] = ACTIONS(954),
    [sym_name] = ACTIONS(956),
    [anon_sym_DOT] = ACTIONS(956),
    [anon_sym_DOT_DOT] = ACTIONS(954),
    [anon_sym_LBRACE] = ACTIONS(956),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(954),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(956),
    [anon_sym_overlap] = ACTIONS(956),
  },
  [623] = {
    [sym__dedent] = ACTIONS(1489),
    [sym_name] = ACTIONS(1491),
    [anon_sym_DOT] = ACTIONS(1491),
    [anon_sym_DOT_DOT] = ACTIONS(1489),
    [anon_sym_LBRACE] = ACTIONS(1491),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1489),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(1491),
    [anon_sym_overlap] = ACTIONS(1491),
  },
  [624] = {
    [sym__dedent] = ACTIONS(143),
    [sym__const_right_arrow] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_name] = ACTIONS(145),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_instance] = ACTIONS(145),
    [anon_sym_overlap] = ACTIONS(145),
  },
  [625] = {
    [anon_sym_RBRACE] = ACTIONS(1493),
    [sym_comment] = ACTIONS(73),
  },
  [626] = {
    [sym__record_assignments1] = STATE(718),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1495),
    [sym_comment] = ACTIONS(15),
  },
  [627] = {
    [anon_sym_LBRACE] = ACTIONS(1497),
    [sym_comment] = ACTIONS(73),
  },
  [628] = {
    [sym_literal] = STATE(489),
    [sym_expr] = STATE(720),
    [sym__expr1] = STATE(486),
    [sym__application] = STATE(486),
    [sym__expr2] = STATE(486),
    [sym__atoms1] = STATE(487),
    [sym_atom] = STATE(488),
    [sym__atom_curly] = STATE(489),
    [sym__atom_no_curly] = STATE(489),
    [sym__typed_bindings1] = STATE(490),
    [sym_typed_binding] = STATE(37),
    [aux_sym__expr1_repeat1] = STATE(491),
    [aux_sym__application_repeat1] = STATE(492),
    [aux_sym__typed_bindings1_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(946),
    [sym_qualified_name] = ACTIONS(948),
    [anon_sym__] = ACTIONS(948),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(950),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(948),
    [anon_sym_Prop] = ACTIONS(948),
    [anon_sym_Set] = ACTIONS(948),
    [anon_sym_quote] = ACTIONS(948),
    [anon_sym_quoteTerm] = ACTIONS(948),
    [anon_sym_unquote] = ACTIONS(948),
    [anon_sym_record] = ACTIONS(952),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [629] = {
    [sym__dedent] = ACTIONS(31),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(31),
    [sym_name] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_instance] = ACTIONS(33),
    [anon_sym_overlap] = ACTIONS(33),
  },
  [630] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(722),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(1499),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [631] = {
    [sym_literal] = STATE(724),
    [sym__atom_no_curly] = STATE(724),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(159),
    [sym_qualified_name] = ACTIONS(1501),
    [anon_sym__] = ACTIONS(1501),
    [anon_sym_LBRACE] = ACTIONS(1503),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1501),
    [anon_sym_Prop] = ACTIONS(1501),
    [anon_sym_Set] = ACTIONS(1501),
    [anon_sym_quote] = ACTIONS(1501),
    [anon_sym_quoteTerm] = ACTIONS(1501),
    [anon_sym_unquote] = ACTIONS(1501),
    [anon_sym_record] = ACTIONS(165),
  },
  [632] = {
    [sym__dedent] = ACTIONS(317),
    [sym_name] = ACTIONS(1505),
    [anon_sym_DOT] = ACTIONS(1505),
    [anon_sym_DOT_DOT] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(1505),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1505),
    [anon_sym_instance] = ACTIONS(1505),
    [anon_sym_overlap] = ACTIONS(1505),
  },
  [633] = {
    [sym__dedent] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(93),
    [sym_name] = ACTIONS(95),
    [sym_qualified_name] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(89),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_Prop] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_quote] = ACTIONS(91),
    [anon_sym_quoteTerm] = ACTIONS(91),
    [anon_sym_unquote] = ACTIONS(91),
    [anon_sym_record] = ACTIONS(91),
    [anon_sym_instance] = ACTIONS(95),
    [anon_sym_overlap] = ACTIONS(95),
  },
  [634] = {
    [sym__dedent] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(97),
    [sym_name] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_Prop] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_quote] = ACTIONS(99),
    [anon_sym_quoteTerm] = ACTIONS(99),
    [anon_sym_unquote] = ACTIONS(99),
    [anon_sym_record] = ACTIONS(99),
    [anon_sym_instance] = ACTIONS(99),
    [anon_sym_overlap] = ACTIONS(99),
  },
  [635] = {
    [sym_literal] = STATE(634),
    [sym__expr2] = STATE(637),
    [sym_atom] = STATE(633),
    [sym__atom_curly] = STATE(634),
    [sym__atom_no_curly] = STATE(634),
    [aux_sym__application_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1312),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1314),
    [sym_qualified_name] = ACTIONS(1316),
    [anon_sym__] = ACTIONS(1316),
    [anon_sym_LBRACE] = ACTIONS(1318),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(1316),
    [anon_sym_Prop] = ACTIONS(1316),
    [anon_sym_Set] = ACTIONS(1316),
    [anon_sym_quote] = ACTIONS(1316),
    [anon_sym_quoteTerm] = ACTIONS(1316),
    [anon_sym_unquote] = ACTIONS(1316),
    [anon_sym_record] = ACTIONS(1320),
  },
  [636] = {
    [sym_literal] = STATE(33),
    [sym_expr] = STATE(625),
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
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(37),
    [sym_qualified_name] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(1296),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(49),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_Prop] = ACTIONS(39),
    [anon_sym_Set] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_quoteTerm] = ACTIONS(39),
    [anon_sym_unquote] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [637] = {
    [sym__dedent] = ACTIONS(334),
    [sym_name] = ACTIONS(1507),
    [anon_sym_DOT] = ACTIONS(1507),
    [anon_sym_DOT_DOT] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(1507),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(334),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1507),
    [anon_sym_instance] = ACTIONS(1507),
    [anon_sym_overlap] = ACTIONS(1507),
  },
  [638] = {
    [sym__newline] = ACTIONS(775),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_module] = ACTIONS(777),
    [anon_sym_with] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [639] = {
    [anon_sym_RBRACE] = ACTIONS(1509),
    [sym_comment] = ACTIONS(73),
  },
  [640] = {
    [sym__newline] = ACTIONS(775),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_module] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [641] = {
    [anon_sym_RBRACE] = ACTIONS(1511),
    [sym_comment] = ACTIONS(73),
  },
  [642] = {
    [sym__newline] = ACTIONS(775),
    [sym__const_right_arrow] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_module] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [643] = {
    [anon_sym_RBRACE] = ACTIONS(1513),
    [sym_comment] = ACTIONS(73),
  },
  [644] = {
    [sym__newline] = ACTIONS(420),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_module] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
  },
  [645] = {
    [sym__newline] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_module] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [646] = {
    [anon_sym_RBRACE] = ACTIONS(1515),
    [sym_comment] = ACTIONS(73),
  },
  [647] = {
    [sym__field_assignments1] = STATE(729),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1515),
    [sym_comment] = ACTIONS(15),
  },
  [648] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
  },
  [649] = {
    [anon_sym_RBRACE] = ACTIONS(1517),
    [sym_comment] = ACTIONS(73),
  },
  [650] = {
    [sym__const_right_arrow] = ACTIONS(1519),
    [anon_sym_DOT] = ACTIONS(1521),
    [anon_sym_DOT_DOT] = ACTIONS(1519),
    [anon_sym_LBRACE] = ACTIONS(1521),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1519),
    [sym_comment] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(1519),
  },
  [651] = {
    [sym__const_right_arrow] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_RBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_COLON] = ACTIONS(1159),
  },
  [652] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_RBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_COLON] = ACTIONS(1159),
  },
  [653] = {
    [sym__const_right_arrow] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
  },
  [654] = {
    [sym__const_right_arrow] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
  },
  [655] = {
    [anon_sym_RBRACE] = ACTIONS(1523),
    [sym_comment] = ACTIONS(73),
  },
  [656] = {
    [sym__field_assignments1] = STATE(732),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1523),
    [sym_comment] = ACTIONS(15),
  },
  [657] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(737),
    [sym_comment] = ACTIONS(73),
  },
  [658] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
  },
  [659] = {
    [anon_sym_RBRACE] = ACTIONS(1525),
    [sym_comment] = ACTIONS(73),
  },
  [660] = {
    [sym__record_assignments1] = STATE(735),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1527),
    [sym_comment] = ACTIONS(15),
  },
  [661] = {
    [anon_sym_LBRACE] = ACTIONS(1529),
    [sym_comment] = ACTIONS(73),
  },
  [662] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
  },
  [663] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
  },
  [664] = {
    [anon_sym_RBRACE] = ACTIONS(1531),
    [sym_comment] = ACTIONS(73),
  },
  [665] = {
    [sym__field_assignments1] = STATE(738),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1531),
    [sym_comment] = ACTIONS(15),
  },
  [666] = {
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(73),
  },
  [667] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_RBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_SEMI] = ACTIONS(1157),
    [anon_sym_RPAREN] = ACTIONS(1157),
  },
  [668] = {
    [sym__const_right_arrow] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
  },
  [669] = {
    [anon_sym_RBRACE] = ACTIONS(1533),
    [sym_comment] = ACTIONS(73),
  },
  [670] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_public] = ACTIONS(777),
    [anon_sym_using] = ACTIONS(777),
    [anon_sym_hiding] = ACTIONS(777),
    [anon_sym_renaming] = ACTIONS(777),
  },
  [671] = {
    [anon_sym_RBRACE] = ACTIONS(1535),
    [sym_comment] = ACTIONS(73),
  },
  [672] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1537),
    [anon_sym_RPAREN] = ACTIONS(1537),
  },
  [673] = {
    [sym__import_name] = STATE(741),
    [sym_name] = ACTIONS(1539),
    [sym_comment] = ACTIONS(15),
    [anon_sym_module] = ACTIONS(1102),
  },
  [674] = {
    [aux_sym__comma_import_names1_repeat1] = STATE(742),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1380),
    [anon_sym_RPAREN] = ACTIONS(1541),
  },
  [675] = {
    [anon_sym_RBRACE] = ACTIONS(1543),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1543),
    [anon_sym_public] = ACTIONS(1543),
    [anon_sym_using] = ACTIONS(1543),
    [anon_sym_hiding] = ACTIONS(1543),
    [anon_sym_renaming] = ACTIONS(1543),
  },
  [676] = {
    [sym_name] = ACTIONS(1545),
    [sym_comment] = ACTIONS(15),
  },
  [677] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_to] = ACTIONS(1547),
  },
  [678] = {
    [sym_renaming] = STATE(745),
    [sym_name] = ACTIONS(1104),
    [sym_comment] = ACTIONS(15),
    [anon_sym_module] = ACTIONS(1106),
  },
  [679] = {
    [aux_sym_import_directive_repeat1] = STATE(747),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1390),
    [anon_sym_RPAREN] = ACTIONS(1549),
  },
  [680] = {
    [anon_sym_RBRACE] = ACTIONS(1551),
    [sym_comment] = ACTIONS(73),
  },
  [681] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1551),
    [sym_comment] = ACTIONS(73),
  },
  [682] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(1551),
  },
  [683] = {
    [sym_name] = ACTIONS(1346),
    [anon_sym__] = ACTIONS(1346),
    [anon_sym_DOT] = ACTIONS(1346),
    [anon_sym_DOT_DOT] = ACTIONS(1344),
    [anon_sym_LBRACE] = ACTIONS(1346),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1344),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(1344),
    [anon_sym_COLON] = ACTIONS(1346),
    [anon_sym_where] = ACTIONS(1346),
  },
  [684] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
  },
  [685] = {
    [anon_sym_RBRACE] = ACTIONS(1553),
    [sym_comment] = ACTIONS(73),
  },
  [686] = {
    [sym__newline] = ACTIONS(775),
    [sym__const_right_arrow] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [687] = {
    [anon_sym_RBRACE] = ACTIONS(1555),
    [sym_comment] = ACTIONS(73),
  },
  [688] = {
    [sym__newline] = ACTIONS(420),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
  },
  [689] = {
    [sym__newline] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [690] = {
    [anon_sym_RBRACE] = ACTIONS(1557),
    [sym_comment] = ACTIONS(73),
  },
  [691] = {
    [sym__field_assignments1] = STATE(752),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1557),
    [sym_comment] = ACTIONS(15),
  },
  [692] = {
    [sym_name] = ACTIONS(1559),
    [sym_comment] = ACTIONS(15),
  },
  [693] = {
    [ts_builtin_sym_end] = ACTIONS(1561),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1563),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1561),
    [sym_qualified_name] = ACTIONS(1563),
    [anon_sym__] = ACTIONS(1563),
    [anon_sym_LBRACE] = ACTIONS(1563),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1563),
    [anon_sym_Prop] = ACTIONS(1563),
    [anon_sym_Set] = ACTIONS(1563),
    [anon_sym_quote] = ACTIONS(1563),
    [anon_sym_quoteTerm] = ACTIONS(1563),
    [anon_sym_unquote] = ACTIONS(1563),
    [anon_sym_record] = ACTIONS(1563),
    [anon_sym_data] = ACTIONS(1563),
    [anon_sym_codata] = ACTIONS(1563),
    [anon_sym_instance] = ACTIONS(1563),
    [anon_sym_field] = ACTIONS(1563),
    [sym_pragma] = ACTIONS(1561),
    [anon_sym_infix] = ACTIONS(1563),
    [anon_sym_infixl] = ACTIONS(1563),
    [anon_sym_infixr] = ACTIONS(1563),
  },
  [694] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_constructor] = ACTIONS(1565),
  },
  [695] = {
    [sym__dedent] = ACTIONS(1567),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1569),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1567),
    [sym_qualified_name] = ACTIONS(1569),
    [anon_sym__] = ACTIONS(1569),
    [anon_sym_LBRACE] = ACTIONS(1569),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1569),
    [anon_sym_Prop] = ACTIONS(1569),
    [anon_sym_Set] = ACTIONS(1569),
    [anon_sym_quote] = ACTIONS(1569),
    [anon_sym_quoteTerm] = ACTIONS(1569),
    [anon_sym_unquote] = ACTIONS(1569),
    [anon_sym_record] = ACTIONS(1569),
    [anon_sym_data] = ACTIONS(1569),
    [anon_sym_codata] = ACTIONS(1569),
    [anon_sym_instance] = ACTIONS(1571),
    [anon_sym_constructor] = ACTIONS(1434),
    [anon_sym_inductive] = ACTIONS(1434),
    [anon_sym_coinductive] = ACTIONS(1434),
    [anon_sym_eta_DASHequality] = ACTIONS(1434),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1434),
    [anon_sym_field] = ACTIONS(1569),
    [sym_pragma] = ACTIONS(1567),
    [anon_sym_infix] = ACTIONS(1569),
    [anon_sym_infixl] = ACTIONS(1569),
    [anon_sym_infixr] = ACTIONS(1569),
  },
  [696] = {
    [sym__indent] = ACTIONS(1574),
    [sym_comment] = ACTIONS(73),
  },
  [697] = {
    [sym__newline] = ACTIONS(1576),
    [sym_comment] = ACTIONS(73),
  },
  [698] = {
    [ts_builtin_sym_end] = ACTIONS(1578),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1580),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1578),
    [sym_qualified_name] = ACTIONS(1580),
    [anon_sym__] = ACTIONS(1580),
    [anon_sym_LBRACE] = ACTIONS(1580),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1580),
    [anon_sym_Prop] = ACTIONS(1580),
    [anon_sym_Set] = ACTIONS(1580),
    [anon_sym_quote] = ACTIONS(1580),
    [anon_sym_quoteTerm] = ACTIONS(1580),
    [anon_sym_unquote] = ACTIONS(1580),
    [anon_sym_record] = ACTIONS(1580),
    [anon_sym_data] = ACTIONS(1580),
    [anon_sym_codata] = ACTIONS(1580),
    [anon_sym_instance] = ACTIONS(1580),
    [anon_sym_field] = ACTIONS(1580),
    [sym_pragma] = ACTIONS(1578),
    [anon_sym_infix] = ACTIONS(1580),
    [anon_sym_infixl] = ACTIONS(1580),
    [anon_sym_infixr] = ACTIONS(1580),
  },
  [699] = {
    [ts_builtin_sym_end] = ACTIONS(1582),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1584),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1582),
    [sym_qualified_name] = ACTIONS(1584),
    [anon_sym__] = ACTIONS(1584),
    [anon_sym_LBRACE] = ACTIONS(1584),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1584),
    [anon_sym_Prop] = ACTIONS(1584),
    [anon_sym_Set] = ACTIONS(1584),
    [anon_sym_quote] = ACTIONS(1584),
    [anon_sym_quoteTerm] = ACTIONS(1584),
    [anon_sym_unquote] = ACTIONS(1584),
    [anon_sym_record] = ACTIONS(1584),
    [anon_sym_data] = ACTIONS(1584),
    [anon_sym_codata] = ACTIONS(1584),
    [anon_sym_instance] = ACTIONS(1584),
    [anon_sym_field] = ACTIONS(1584),
    [sym_pragma] = ACTIONS(1582),
    [anon_sym_infix] = ACTIONS(1584),
    [anon_sym_infixl] = ACTIONS(1584),
    [anon_sym_infixr] = ACTIONS(1584),
  },
  [700] = {
    [sym__const_right_arrow] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [701] = {
    [anon_sym_RBRACE] = ACTIONS(1586),
    [sym_comment] = ACTIONS(73),
  },
  [702] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
  },
  [703] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
  },
  [704] = {
    [anon_sym_RBRACE] = ACTIONS(1588),
    [sym_comment] = ACTIONS(73),
  },
  [705] = {
    [sym__field_assignments1] = STATE(758),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1588),
    [sym_comment] = ACTIONS(15),
  },
  [706] = {
    [sym_record_declarations_block] = STATE(759),
    [sym__indent] = ACTIONS(1244),
    [sym__dedent] = ACTIONS(1175),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1177),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1175),
    [sym_qualified_name] = ACTIONS(1177),
    [anon_sym__] = ACTIONS(1177),
    [anon_sym_LBRACE] = ACTIONS(1177),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1177),
    [anon_sym_Prop] = ACTIONS(1177),
    [anon_sym_Set] = ACTIONS(1177),
    [anon_sym_quote] = ACTIONS(1177),
    [anon_sym_quoteTerm] = ACTIONS(1177),
    [anon_sym_unquote] = ACTIONS(1177),
    [anon_sym_record] = ACTIONS(1177),
    [anon_sym_data] = ACTIONS(1177),
    [anon_sym_codata] = ACTIONS(1177),
    [anon_sym_instance] = ACTIONS(1177),
    [anon_sym_field] = ACTIONS(1177),
    [sym_pragma] = ACTIONS(1175),
    [anon_sym_infix] = ACTIONS(1177),
    [anon_sym_infixl] = ACTIONS(1177),
    [anon_sym_infixr] = ACTIONS(1177),
  },
  [707] = {
    [sym__dedent] = ACTIONS(1185),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1187),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1185),
    [sym_qualified_name] = ACTIONS(1187),
    [anon_sym__] = ACTIONS(1187),
    [anon_sym_LBRACE] = ACTIONS(1187),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1187),
    [anon_sym_Prop] = ACTIONS(1187),
    [anon_sym_Set] = ACTIONS(1187),
    [anon_sym_quote] = ACTIONS(1187),
    [anon_sym_quoteTerm] = ACTIONS(1187),
    [anon_sym_unquote] = ACTIONS(1187),
    [anon_sym_record] = ACTIONS(1187),
    [anon_sym_data] = ACTIONS(1187),
    [anon_sym_codata] = ACTIONS(1187),
    [anon_sym_instance] = ACTIONS(1187),
    [anon_sym_field] = ACTIONS(1187),
    [sym_pragma] = ACTIONS(1185),
    [anon_sym_infix] = ACTIONS(1187),
    [anon_sym_infixl] = ACTIONS(1187),
    [anon_sym_infixr] = ACTIONS(1187),
  },
  [708] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(134),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(135),
    [sym_data_signature_only] = STATE(134),
    [sym_record] = STATE(135),
    [sym_record_signature_only] = STATE(134),
    [sym_field] = STATE(135),
    [sym__declaration] = STATE(134),
    [sym__declaration_block] = STATE(135),
    [sym_infix] = STATE(134),
    [sym_instance] = STATE(135),
    [sym__declarations1] = STATE(761),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(137),
    [sym__dedent] = ACTIONS(1590),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(9),
    [sym_qualified_name] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_Prop] = ACTIONS(11),
    [anon_sym_Set] = ACTIONS(11),
    [anon_sym_quote] = ACTIONS(11),
    [anon_sym_quoteTerm] = ACTIONS(11),
    [anon_sym_unquote] = ACTIONS(11),
    [anon_sym_record] = ACTIONS(223),
    [anon_sym_data] = ACTIONS(225),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_instance] = ACTIONS(229),
    [anon_sym_field] = ACTIONS(231),
    [sym_pragma] = ACTIONS(233),
    [anon_sym_infix] = ACTIONS(29),
    [anon_sym_infixl] = ACTIONS(29),
    [anon_sym_infixr] = ACTIONS(29),
  },
  [709] = {
    [sym__dedent] = ACTIONS(1590),
    [sym_comment] = ACTIONS(73),
  },
  [710] = {
    [sym__newline] = ACTIONS(1218),
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(1592),
  },
  [711] = {
    [sym__dedent] = ACTIONS(1175),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1177),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1175),
    [sym_qualified_name] = ACTIONS(1177),
    [anon_sym__] = ACTIONS(1177),
    [anon_sym_LBRACE] = ACTIONS(1177),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1177),
    [anon_sym_Prop] = ACTIONS(1177),
    [anon_sym_Set] = ACTIONS(1177),
    [anon_sym_quote] = ACTIONS(1177),
    [anon_sym_quoteTerm] = ACTIONS(1177),
    [anon_sym_unquote] = ACTIONS(1177),
    [anon_sym_record] = ACTIONS(1177),
    [anon_sym_data] = ACTIONS(1177),
    [anon_sym_codata] = ACTIONS(1177),
    [anon_sym_instance] = ACTIONS(1177),
    [anon_sym_field] = ACTIONS(1177),
    [sym_pragma] = ACTIONS(1175),
    [anon_sym_infix] = ACTIONS(1177),
    [anon_sym_infixl] = ACTIONS(1177),
    [anon_sym_infixr] = ACTIONS(1177),
  },
  [712] = {
    [sym__declarations0] = STATE(763),
    [sym__newline] = ACTIONS(1594),
    [sym__indent] = ACTIONS(572),
    [sym_comment] = ACTIONS(73),
  },
  [713] = {
    [sym__newline] = ACTIONS(1224),
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(1596),
  },
  [714] = {
    [sym__dedent] = ACTIONS(1228),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1230),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1228),
    [sym_qualified_name] = ACTIONS(1230),
    [anon_sym__] = ACTIONS(1230),
    [anon_sym_LBRACE] = ACTIONS(1230),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1230),
    [anon_sym_Prop] = ACTIONS(1230),
    [anon_sym_Set] = ACTIONS(1230),
    [anon_sym_quote] = ACTIONS(1230),
    [anon_sym_quoteTerm] = ACTIONS(1230),
    [anon_sym_unquote] = ACTIONS(1230),
    [anon_sym_record] = ACTIONS(1230),
    [anon_sym_data] = ACTIONS(1230),
    [anon_sym_codata] = ACTIONS(1230),
    [anon_sym_instance] = ACTIONS(1230),
    [anon_sym_field] = ACTIONS(1230),
    [sym_pragma] = ACTIONS(1228),
    [anon_sym_infix] = ACTIONS(1230),
    [anon_sym_infixl] = ACTIONS(1230),
    [anon_sym_infixr] = ACTIONS(1230),
  },
  [715] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(1596),
  },
  [716] = {
    [sym__dedent] = ACTIONS(420),
    [sym__const_right_arrow] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_name] = ACTIONS(422),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_DOT] = ACTIONS(422),
    [anon_sym_DOT_DOT] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_instance] = ACTIONS(422),
    [anon_sym_overlap] = ACTIONS(422),
  },
  [717] = {
    [sym__dedent] = ACTIONS(482),
    [sym__const_right_arrow] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_name] = ACTIONS(484),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT] = ACTIONS(482),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_instance] = ACTIONS(484),
    [anon_sym_overlap] = ACTIONS(484),
  },
  [718] = {
    [anon_sym_RBRACE] = ACTIONS(1598),
    [sym_comment] = ACTIONS(73),
  },
  [719] = {
    [sym__field_assignments1] = STATE(766),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1598),
    [sym_comment] = ACTIONS(15),
  },
  [720] = {
    [sym__dedent] = ACTIONS(737),
    [sym_name] = ACTIONS(1600),
    [anon_sym_DOT] = ACTIONS(1600),
    [anon_sym_DOT_DOT] = ACTIONS(737),
    [anon_sym_LBRACE] = ACTIONS(1600),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(737),
    [sym_comment] = ACTIONS(15),
    [anon_sym_instance] = ACTIONS(1600),
    [anon_sym_overlap] = ACTIONS(1600),
  },
  [721] = {
    [sym__dedent] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(145),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(143),
    [sym_name] = ACTIONS(145),
    [sym_qualified_name] = ACTIONS(145),
    [anon_sym__] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_Prop] = ACTIONS(145),
    [anon_sym_Set] = ACTIONS(145),
    [anon_sym_quote] = ACTIONS(145),
    [anon_sym_quoteTerm] = ACTIONS(145),
    [anon_sym_unquote] = ACTIONS(145),
    [anon_sym_record] = ACTIONS(145),
    [anon_sym_instance] = ACTIONS(145),
    [anon_sym_overlap] = ACTIONS(145),
  },
  [722] = {
    [anon_sym_RBRACE] = ACTIONS(1602),
    [sym_comment] = ACTIONS(73),
  },
  [723] = {
    [sym__record_assignments1] = STATE(769),
    [sym__record_assignment] = STATE(110),
    [sym_module_assignment] = STATE(110),
    [sym_field_assignment] = STATE(110),
    [sym_qualified_name] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(1604),
    [sym_comment] = ACTIONS(15),
  },
  [724] = {
    [anon_sym_LBRACE] = ACTIONS(1606),
    [sym_comment] = ACTIONS(73),
  },
  [725] = {
    [sym__newline] = ACTIONS(1157),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_COLON] = ACTIONS(1159),
    [anon_sym_module] = ACTIONS(1159),
    [anon_sym_with] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [726] = {
    [sym__newline] = ACTIONS(1157),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_COLON] = ACTIONS(1159),
    [anon_sym_module] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [727] = {
    [sym__newline] = ACTIONS(1157),
    [sym__const_right_arrow] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_module] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [728] = {
    [sym__newline] = ACTIONS(775),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_module] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [729] = {
    [anon_sym_RBRACE] = ACTIONS(1608),
    [sym_comment] = ACTIONS(73),
  },
  [730] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
  },
  [731] = {
    [sym__const_right_arrow] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
  },
  [732] = {
    [anon_sym_RBRACE] = ACTIONS(1610),
    [sym_comment] = ACTIONS(73),
  },
  [733] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
  },
  [734] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
  },
  [735] = {
    [anon_sym_RBRACE] = ACTIONS(1612),
    [sym_comment] = ACTIONS(73),
  },
  [736] = {
    [sym__field_assignments1] = STATE(774),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1612),
    [sym_comment] = ACTIONS(15),
  },
  [737] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
  },
  [738] = {
    [anon_sym_RBRACE] = ACTIONS(1614),
    [sym_comment] = ACTIONS(73),
  },
  [739] = {
    [sym__const_right_arrow] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
  },
  [740] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_RBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_SEMI] = ACTIONS(1157),
    [anon_sym_public] = ACTIONS(1159),
    [anon_sym_using] = ACTIONS(1159),
    [anon_sym_hiding] = ACTIONS(1159),
    [anon_sym_renaming] = ACTIONS(1159),
  },
  [741] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1616),
    [anon_sym_RPAREN] = ACTIONS(1616),
  },
  [742] = {
    [aux_sym__comma_import_names1_repeat1] = STATE(742),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1618),
    [anon_sym_RPAREN] = ACTIONS(1616),
  },
  [743] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1621),
    [anon_sym_RPAREN] = ACTIONS(1621),
  },
  [744] = {
    [sym_name] = ACTIONS(1623),
    [sym_comment] = ACTIONS(15),
  },
  [745] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1625),
    [anon_sym_RPAREN] = ACTIONS(1625),
  },
  [746] = {
    [anon_sym_RBRACE] = ACTIONS(1627),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1627),
    [anon_sym_public] = ACTIONS(1627),
    [anon_sym_using] = ACTIONS(1627),
    [anon_sym_hiding] = ACTIONS(1627),
    [anon_sym_renaming] = ACTIONS(1627),
  },
  [747] = {
    [aux_sym_import_directive_repeat1] = STATE(747),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1629),
    [anon_sym_RPAREN] = ACTIONS(1625),
  },
  [748] = {
    [sym_name] = ACTIONS(1521),
    [anon_sym__] = ACTIONS(1521),
    [anon_sym_DOT] = ACTIONS(1521),
    [anon_sym_DOT_DOT] = ACTIONS(1519),
    [anon_sym_LBRACE] = ACTIONS(1521),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1519),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(1519),
    [anon_sym_COLON] = ACTIONS(1521),
    [anon_sym_where] = ACTIONS(1521),
  },
  [749] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_COLON] = ACTIONS(1159),
  },
  [750] = {
    [sym__newline] = ACTIONS(1157),
    [sym__const_right_arrow] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [751] = {
    [sym__newline] = ACTIONS(775),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [752] = {
    [anon_sym_RBRACE] = ACTIONS(1632),
    [sym_comment] = ACTIONS(73),
  },
  [753] = {
    [sym__dedent] = ACTIONS(1634),
    [sym_comment] = ACTIONS(73),
  },
  [754] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_constructor] = ACTIONS(1636),
  },
  [755] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_instance] = ACTIONS(1638),
    [anon_sym_constructor] = ACTIONS(1638),
    [anon_sym_inductive] = ACTIONS(1638),
    [anon_sym_coinductive] = ACTIONS(1638),
    [anon_sym_eta_DASHequality] = ACTIONS(1638),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1638),
  },
  [756] = {
    [sym__const_right_arrow] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [757] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [758] = {
    [anon_sym_RBRACE] = ACTIONS(1640),
    [sym_comment] = ACTIONS(73),
  },
  [759] = {
    [sym__dedent] = ACTIONS(1407),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1409),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1407),
    [sym_qualified_name] = ACTIONS(1409),
    [anon_sym__] = ACTIONS(1409),
    [anon_sym_LBRACE] = ACTIONS(1409),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1409),
    [anon_sym_Prop] = ACTIONS(1409),
    [anon_sym_Set] = ACTIONS(1409),
    [anon_sym_quote] = ACTIONS(1409),
    [anon_sym_quoteTerm] = ACTIONS(1409),
    [anon_sym_unquote] = ACTIONS(1409),
    [anon_sym_record] = ACTIONS(1409),
    [anon_sym_data] = ACTIONS(1409),
    [anon_sym_codata] = ACTIONS(1409),
    [anon_sym_instance] = ACTIONS(1409),
    [anon_sym_field] = ACTIONS(1409),
    [sym_pragma] = ACTIONS(1407),
    [anon_sym_infix] = ACTIONS(1409),
    [anon_sym_infixl] = ACTIONS(1409),
    [anon_sym_infixr] = ACTIONS(1409),
  },
  [760] = {
    [sym__dedent] = ACTIONS(1421),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1423),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1421),
    [sym_qualified_name] = ACTIONS(1423),
    [anon_sym__] = ACTIONS(1423),
    [anon_sym_LBRACE] = ACTIONS(1423),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1423),
    [anon_sym_Prop] = ACTIONS(1423),
    [anon_sym_Set] = ACTIONS(1423),
    [anon_sym_quote] = ACTIONS(1423),
    [anon_sym_quoteTerm] = ACTIONS(1423),
    [anon_sym_unquote] = ACTIONS(1423),
    [anon_sym_record] = ACTIONS(1423),
    [anon_sym_data] = ACTIONS(1423),
    [anon_sym_codata] = ACTIONS(1423),
    [anon_sym_instance] = ACTIONS(1423),
    [anon_sym_field] = ACTIONS(1423),
    [sym_pragma] = ACTIONS(1421),
    [anon_sym_infix] = ACTIONS(1423),
    [anon_sym_infixl] = ACTIONS(1423),
    [anon_sym_infixr] = ACTIONS(1423),
  },
  [761] = {
    [sym__dedent] = ACTIONS(1642),
    [sym_comment] = ACTIONS(73),
  },
  [762] = {
    [sym_record_declarations_block] = STATE(782),
    [sym__indent] = ACTIONS(1244),
    [sym__dedent] = ACTIONS(1407),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1409),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1407),
    [sym_qualified_name] = ACTIONS(1409),
    [anon_sym__] = ACTIONS(1409),
    [anon_sym_LBRACE] = ACTIONS(1409),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1409),
    [anon_sym_Prop] = ACTIONS(1409),
    [anon_sym_Set] = ACTIONS(1409),
    [anon_sym_quote] = ACTIONS(1409),
    [anon_sym_quoteTerm] = ACTIONS(1409),
    [anon_sym_unquote] = ACTIONS(1409),
    [anon_sym_record] = ACTIONS(1409),
    [anon_sym_data] = ACTIONS(1409),
    [anon_sym_codata] = ACTIONS(1409),
    [anon_sym_instance] = ACTIONS(1409),
    [anon_sym_field] = ACTIONS(1409),
    [sym_pragma] = ACTIONS(1407),
    [anon_sym_infix] = ACTIONS(1409),
    [anon_sym_infixl] = ACTIONS(1409),
    [anon_sym_infixr] = ACTIONS(1409),
  },
  [763] = {
    [sym__dedent] = ACTIONS(1455),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1457),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1455),
    [sym_qualified_name] = ACTIONS(1457),
    [anon_sym__] = ACTIONS(1457),
    [anon_sym_LBRACE] = ACTIONS(1457),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1457),
    [anon_sym_Prop] = ACTIONS(1457),
    [anon_sym_Set] = ACTIONS(1457),
    [anon_sym_quote] = ACTIONS(1457),
    [anon_sym_quoteTerm] = ACTIONS(1457),
    [anon_sym_unquote] = ACTIONS(1457),
    [anon_sym_record] = ACTIONS(1457),
    [anon_sym_data] = ACTIONS(1457),
    [anon_sym_codata] = ACTIONS(1457),
    [anon_sym_instance] = ACTIONS(1457),
    [anon_sym_field] = ACTIONS(1457),
    [sym_pragma] = ACTIONS(1455),
    [anon_sym_infix] = ACTIONS(1457),
    [anon_sym_infixl] = ACTIONS(1457),
    [anon_sym_infixr] = ACTIONS(1457),
  },
  [764] = {
    [sym__declarations0] = STATE(783),
    [sym__newline] = ACTIONS(1644),
    [sym__indent] = ACTIONS(572),
    [sym_comment] = ACTIONS(73),
  },
  [765] = {
    [sym__dedent] = ACTIONS(775),
    [sym__const_right_arrow] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_name] = ACTIONS(777),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_DOT] = ACTIONS(777),
    [anon_sym_DOT_DOT] = ACTIONS(775),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_instance] = ACTIONS(777),
    [anon_sym_overlap] = ACTIONS(777),
  },
  [766] = {
    [anon_sym_RBRACE] = ACTIONS(1646),
    [sym_comment] = ACTIONS(73),
  },
  [767] = {
    [sym__dedent] = ACTIONS(420),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(420),
    [sym_name] = ACTIONS(422),
    [sym_qualified_name] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_DOT] = ACTIONS(422),
    [anon_sym_DOT_DOT] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_QMARK] = ACTIONS(422),
    [anon_sym_Prop] = ACTIONS(422),
    [anon_sym_Set] = ACTIONS(422),
    [anon_sym_quote] = ACTIONS(422),
    [anon_sym_quoteTerm] = ACTIONS(422),
    [anon_sym_unquote] = ACTIONS(422),
    [anon_sym_record] = ACTIONS(422),
    [anon_sym_instance] = ACTIONS(422),
    [anon_sym_overlap] = ACTIONS(422),
  },
  [768] = {
    [sym__dedent] = ACTIONS(482),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(482),
    [sym_name] = ACTIONS(484),
    [sym_qualified_name] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_DOT_DOT] = ACTIONS(482),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_Prop] = ACTIONS(484),
    [anon_sym_Set] = ACTIONS(484),
    [anon_sym_quote] = ACTIONS(484),
    [anon_sym_quoteTerm] = ACTIONS(484),
    [anon_sym_unquote] = ACTIONS(484),
    [anon_sym_record] = ACTIONS(484),
    [anon_sym_instance] = ACTIONS(484),
    [anon_sym_overlap] = ACTIONS(484),
  },
  [769] = {
    [anon_sym_RBRACE] = ACTIONS(1648),
    [sym_comment] = ACTIONS(73),
  },
  [770] = {
    [sym__field_assignments1] = STATE(786),
    [sym_field_assignment] = STATE(247),
    [sym_qualified_name] = ACTIONS(735),
    [anon_sym_RBRACE] = ACTIONS(1648),
    [sym_comment] = ACTIONS(15),
  },
  [771] = {
    [sym__newline] = ACTIONS(1157),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_module] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [772] = {
    [sym__const_right_arrow] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
  },
  [773] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
  },
  [774] = {
    [anon_sym_RBRACE] = ACTIONS(1650),
    [sym_comment] = ACTIONS(73),
  },
  [775] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
  },
  [776] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(1652),
    [anon_sym_RPAREN] = ACTIONS(1652),
  },
  [777] = {
    [sym__newline] = ACTIONS(1157),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [778] = {
    [sym__dedent] = ACTIONS(1654),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1656),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1654),
    [sym_qualified_name] = ACTIONS(1656),
    [anon_sym__] = ACTIONS(1656),
    [anon_sym_LBRACE] = ACTIONS(1656),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1656),
    [anon_sym_Prop] = ACTIONS(1656),
    [anon_sym_Set] = ACTIONS(1656),
    [anon_sym_quote] = ACTIONS(1656),
    [anon_sym_quoteTerm] = ACTIONS(1656),
    [anon_sym_unquote] = ACTIONS(1656),
    [anon_sym_record] = ACTIONS(1656),
    [anon_sym_data] = ACTIONS(1656),
    [anon_sym_codata] = ACTIONS(1656),
    [anon_sym_instance] = ACTIONS(1656),
    [anon_sym_constructor] = ACTIONS(1656),
    [anon_sym_inductive] = ACTIONS(1656),
    [anon_sym_coinductive] = ACTIONS(1656),
    [anon_sym_eta_DASHequality] = ACTIONS(1656),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1656),
    [anon_sym_field] = ACTIONS(1656),
    [sym_pragma] = ACTIONS(1654),
    [anon_sym_infix] = ACTIONS(1656),
    [anon_sym_infixl] = ACTIONS(1656),
    [anon_sym_infixr] = ACTIONS(1656),
  },
  [779] = {
    [sym_name] = ACTIONS(1658),
    [sym_comment] = ACTIONS(15),
  },
  [780] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_where] = ACTIONS(1159),
  },
  [781] = {
    [sym__dedent] = ACTIONS(1561),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1563),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1561),
    [sym_qualified_name] = ACTIONS(1563),
    [anon_sym__] = ACTIONS(1563),
    [anon_sym_LBRACE] = ACTIONS(1563),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1563),
    [anon_sym_Prop] = ACTIONS(1563),
    [anon_sym_Set] = ACTIONS(1563),
    [anon_sym_quote] = ACTIONS(1563),
    [anon_sym_quoteTerm] = ACTIONS(1563),
    [anon_sym_unquote] = ACTIONS(1563),
    [anon_sym_record] = ACTIONS(1563),
    [anon_sym_data] = ACTIONS(1563),
    [anon_sym_codata] = ACTIONS(1563),
    [anon_sym_instance] = ACTIONS(1563),
    [anon_sym_field] = ACTIONS(1563),
    [sym_pragma] = ACTIONS(1561),
    [anon_sym_infix] = ACTIONS(1563),
    [anon_sym_infixl] = ACTIONS(1563),
    [anon_sym_infixr] = ACTIONS(1563),
  },
  [782] = {
    [sym__dedent] = ACTIONS(1578),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1580),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1578),
    [sym_qualified_name] = ACTIONS(1580),
    [anon_sym__] = ACTIONS(1580),
    [anon_sym_LBRACE] = ACTIONS(1580),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1580),
    [anon_sym_Prop] = ACTIONS(1580),
    [anon_sym_Set] = ACTIONS(1580),
    [anon_sym_quote] = ACTIONS(1580),
    [anon_sym_quoteTerm] = ACTIONS(1580),
    [anon_sym_unquote] = ACTIONS(1580),
    [anon_sym_record] = ACTIONS(1580),
    [anon_sym_data] = ACTIONS(1580),
    [anon_sym_codata] = ACTIONS(1580),
    [anon_sym_instance] = ACTIONS(1580),
    [anon_sym_field] = ACTIONS(1580),
    [sym_pragma] = ACTIONS(1578),
    [anon_sym_infix] = ACTIONS(1580),
    [anon_sym_infixl] = ACTIONS(1580),
    [anon_sym_infixr] = ACTIONS(1580),
  },
  [783] = {
    [sym__dedent] = ACTIONS(1582),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1584),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1582),
    [sym_qualified_name] = ACTIONS(1584),
    [anon_sym__] = ACTIONS(1584),
    [anon_sym_LBRACE] = ACTIONS(1584),
    [sym_comment] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(1584),
    [anon_sym_Prop] = ACTIONS(1584),
    [anon_sym_Set] = ACTIONS(1584),
    [anon_sym_quote] = ACTIONS(1584),
    [anon_sym_quoteTerm] = ACTIONS(1584),
    [anon_sym_unquote] = ACTIONS(1584),
    [anon_sym_record] = ACTIONS(1584),
    [anon_sym_data] = ACTIONS(1584),
    [anon_sym_codata] = ACTIONS(1584),
    [anon_sym_instance] = ACTIONS(1584),
    [anon_sym_field] = ACTIONS(1584),
    [sym_pragma] = ACTIONS(1582),
    [anon_sym_infix] = ACTIONS(1584),
    [anon_sym_infixl] = ACTIONS(1584),
    [anon_sym_infixr] = ACTIONS(1584),
  },
  [784] = {
    [sym__dedent] = ACTIONS(1157),
    [sym__const_right_arrow] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_name] = ACTIONS(1159),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_DOT] = ACTIONS(1159),
    [anon_sym_DOT_DOT] = ACTIONS(1157),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_instance] = ACTIONS(1159),
    [anon_sym_overlap] = ACTIONS(1159),
  },
  [785] = {
    [sym__dedent] = ACTIONS(775),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(777),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(775),
    [sym_name] = ACTIONS(777),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_DOT] = ACTIONS(777),
    [anon_sym_DOT_DOT] = ACTIONS(775),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_instance] = ACTIONS(777),
    [anon_sym_overlap] = ACTIONS(777),
  },
  [786] = {
    [anon_sym_RBRACE] = ACTIONS(1660),
    [sym_comment] = ACTIONS(73),
  },
  [787] = {
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
  },
  [788] = {
    [sym__dedent] = ACTIONS(1662),
    [sym_comment] = ACTIONS(73),
  },
  [789] = {
    [sym__dedent] = ACTIONS(1157),
    [aux_sym_SLASH_BSLASH_DASH_QMARK_LPAREN0x_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_PLUS_PIPE_LBRACK0_DASH9_RBRACK_PLUS_RPAREN_SLASH] = ACTIONS(1159),
    [aux_sym_SLASH_BSLASH_DQUOTE_DOT_STAR_BSLASH_DQUOTE_SLASH] = ACTIONS(1157),
    [sym_name] = ACTIONS(1159),
    [sym_qualified_name] = ACTIONS(1159),
    [anon_sym__] = ACTIONS(1159),
    [anon_sym_DOT] = ACTIONS(1159),
    [anon_sym_DOT_DOT] = ACTIONS(1157),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1157),
    [sym_comment] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(1159),
    [anon_sym_PIPE] = ACTIONS(1159),
    [anon_sym_QMARK] = ACTIONS(1159),
    [anon_sym_Prop] = ACTIONS(1159),
    [anon_sym_Set] = ACTIONS(1159),
    [anon_sym_quote] = ACTIONS(1159),
    [anon_sym_quoteTerm] = ACTIONS(1159),
    [anon_sym_unquote] = ACTIONS(1159),
    [anon_sym_record] = ACTIONS(1159),
    [anon_sym_instance] = ACTIONS(1159),
    [anon_sym_overlap] = ACTIONS(1159),
  },
  [790] = {
    [sym_comment] = ACTIONS(73),
    [anon_sym_instance] = ACTIONS(1654),
    [anon_sym_constructor] = ACTIONS(1654),
    [anon_sym_inductive] = ACTIONS(1654),
    [anon_sym_coinductive] = ACTIONS(1654),
    [anon_sym_eta_DASHequality] = ACTIONS(1654),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1654),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(14),
  [13] = {.count = 1, .reusable = false}, SHIFT(3),
  [15] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [17] = {.count = 1, .reusable = false}, SHIFT(4),
  [19] = {.count = 1, .reusable = false}, SHIFT(5),
  [21] = {.count = 1, .reusable = false}, SHIFT(6),
  [23] = {.count = 1, .reusable = false}, SHIFT(7),
  [25] = {.count = 1, .reusable = false}, SHIFT(8),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = false}, SHIFT(9),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_literal, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_literal, 1),
  [35] = {.count = 1, .reusable = false}, SHIFT(22),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = false}, SHIFT(33),
  [41] = {.count = 1, .reusable = false}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, SHIFT(23),
  [45] = {.count = 1, .reusable = false}, SHIFT(24),
  [47] = {.count = 1, .reusable = true}, SHIFT(25),
  [49] = {.count = 1, .reusable = true}, SHIFT(26),
  [51] = {.count = 1, .reusable = false}, SHIFT(27),
  [53] = {.count = 1, .reusable = true}, SHIFT(28),
  [55] = {.count = 1, .reusable = false}, SHIFT(38),
  [57] = {.count = 1, .reusable = true}, SHIFT(38),
  [59] = {.count = 1, .reusable = false}, SHIFT(41),
  [61] = {.count = 1, .reusable = false}, SHIFT(39),
  [63] = {.count = 1, .reusable = false}, SHIFT(40),
  [65] = {.count = 1, .reusable = false}, SHIFT(42),
  [67] = {.count = 1, .reusable = false}, SHIFT(43),
  [69] = {.count = 1, .reusable = true}, SHIFT(45),
  [71] = {.count = 1, .reusable = true}, SHIFT(44),
  [73] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [75] = {.count = 1, .reusable = true}, SHIFT(46),
  [77] = {.count = 1, .reusable = true}, SHIFT(48),
  [79] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(50),
  [85] = {.count = 1, .reusable = true}, SHIFT(51),
  [87] = {.count = 1, .reusable = true}, SHIFT(54),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__expr2, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym__application_repeat1, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym__expr2, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(55),
  [105] = {.count = 1, .reusable = true}, SHIFT(56),
  [107] = {.count = 1, .reusable = true}, SHIFT(57),
  [109] = {.count = 1, .reusable = true}, SHIFT(60),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 1),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym__declarations1_repeat1, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(61),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__atoms1, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(66),
  [125] = {.count = 1, .reusable = false}, SHIFT(69),
  [127] = {.count = 1, .reusable = true}, SHIFT(70),
  [129] = {.count = 1, .reusable = true}, SHIFT(71),
  [131] = {.count = 1, .reusable = false}, SHIFT(72),
  [133] = {.count = 1, .reusable = true}, SHIFT(72),
  [135] = {.count = 1, .reusable = false}, SHIFT(79),
  [137] = {.count = 1, .reusable = false}, SHIFT(73),
  [139] = {.count = 1, .reusable = true}, SHIFT(74),
  [141] = {.count = 1, .reusable = false}, SHIFT(75),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 2),
  [147] = {.count = 1, .reusable = false}, SHIFT(81),
  [149] = {.count = 1, .reusable = true}, SHIFT(81),
  [151] = {.count = 1, .reusable = false}, SHIFT(86),
  [153] = {.count = 1, .reusable = false}, SHIFT(82),
  [155] = {.count = 1, .reusable = false}, SHIFT(83),
  [157] = {.count = 1, .reusable = false}, SHIFT(88),
  [159] = {.count = 1, .reusable = true}, SHIFT(88),
  [161] = {.count = 1, .reusable = false}, SHIFT(91),
  [163] = {.count = 1, .reusable = false}, SHIFT(89),
  [165] = {.count = 1, .reusable = false}, SHIFT(90),
  [167] = {.count = 1, .reusable = true}, SHIFT(93),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [171] = {.count = 1, .reusable = true}, SHIFT(94),
  [173] = {.count = 1, .reusable = false}, SHIFT(95),
  [175] = {.count = 1, .reusable = true}, SHIFT(95),
  [177] = {.count = 1, .reusable = false}, SHIFT(100),
  [179] = {.count = 1, .reusable = false}, SHIFT(96),
  [181] = {.count = 1, .reusable = false}, SHIFT(97),
  [183] = {.count = 1, .reusable = false}, SHIFT(102),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__typed_bindings1, 1),
  [187] = {.count = 1, .reusable = false}, SHIFT(105),
  [189] = {.count = 1, .reusable = false}, SHIFT(107),
  [191] = {.count = 1, .reusable = true}, SHIFT(108),
  [193] = {.count = 1, .reusable = false}, SHIFT(112),
  [195] = {.count = 1, .reusable = false}, SHIFT(111),
  [197] = {.count = 1, .reusable = false}, SHIFT(120),
  [199] = {.count = 1, .reusable = false}, SHIFT(113),
  [201] = {.count = 1, .reusable = false}, SHIFT(114),
  [203] = {.count = 1, .reusable = true}, SHIFT(114),
  [205] = {.count = 1, .reusable = false}, SHIFT(115),
  [207] = {.count = 1, .reusable = true}, SHIFT(116),
  [209] = {.count = 1, .reusable = true}, SHIFT(117),
  [211] = {.count = 1, .reusable = false}, SHIFT(118),
  [213] = {.count = 1, .reusable = false}, SHIFT(119),
  [215] = {.count = 1, .reusable = false}, SHIFT(123),
  [217] = {.count = 1, .reusable = false}, SHIFT(124),
  [219] = {.count = 1, .reusable = false}, SHIFT(125),
  [221] = {.count = 1, .reusable = false}, SHIFT(127),
  [223] = {.count = 1, .reusable = false}, SHIFT(129),
  [225] = {.count = 1, .reusable = false}, SHIFT(130),
  [227] = {.count = 1, .reusable = false}, SHIFT(131),
  [229] = {.count = 1, .reusable = false}, SHIFT(132),
  [231] = {.count = 1, .reusable = false}, SHIFT(133),
  [233] = {.count = 1, .reusable = true}, SHIFT(134),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_instance, 2),
  [239] = {.count = 1, .reusable = false}, SHIFT(143),
  [241] = {.count = 1, .reusable = false}, SHIFT(138),
  [243] = {.count = 1, .reusable = true}, SHIFT(138),
  [245] = {.count = 1, .reusable = false}, SHIFT(139),
  [247] = {.count = 1, .reusable = true}, SHIFT(140),
  [249] = {.count = 1, .reusable = false}, SHIFT(141),
  [251] = {.count = 1, .reusable = false}, SHIFT(142),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_field, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_field, 2),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [259] = {.count = 1, .reusable = false}, SHIFT(149),
  [261] = {.count = 1, .reusable = false}, SHIFT(148),
  [263] = {.count = 1, .reusable = false}, SHIFT(150),
  [265] = {.count = 1, .reusable = true}, SHIFT(150),
  [267] = {.count = 1, .reusable = false}, SHIFT(155),
  [269] = {.count = 1, .reusable = false}, SHIFT(151),
  [271] = {.count = 1, .reusable = false}, SHIFT(152),
  [273] = {.count = 1, .reusable = false}, SHIFT(158),
  [275] = {.count = 1, .reusable = true}, SHIFT(158),
  [277] = {.count = 1, .reusable = false}, SHIFT(163),
  [279] = {.count = 1, .reusable = false}, SHIFT(159),
  [281] = {.count = 1, .reusable = false}, SHIFT(160),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 2),
  [285] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(aux_sym__expr1_repeat1, 2),
  [289] = {.count = 1, .reusable = false}, SHIFT(167),
  [291] = {.count = 1, .reusable = true}, SHIFT(167),
  [293] = {.count = 1, .reusable = false}, SHIFT(174),
  [295] = {.count = 1, .reusable = false}, SHIFT(168),
  [297] = {.count = 1, .reusable = false}, SHIFT(169),
  [299] = {.count = 1, .reusable = false}, SHIFT(178),
  [301] = {.count = 1, .reusable = false}, SHIFT(179),
  [303] = {.count = 1, .reusable = true}, SHIFT(181),
  [305] = {.count = 1, .reusable = true}, SHIFT(180),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [315] = {.count = 1, .reusable = false}, SHIFT(183),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 2),
  [319] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(184),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(184),
  [325] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(187),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(185),
  [331] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(186),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__application, 2),
  [336] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(184),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(184),
  [342] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(187),
  [345] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(185),
  [348] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2),
  [350] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(186),
  [353] = {.count = 1, .reusable = true}, SHIFT(189),
  [355] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(2),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(2),
  [361] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(14),
  [364] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(3),
  [367] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(4),
  [370] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(5),
  [373] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(6),
  [376] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(7),
  [379] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(8),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(190),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(9),
  [388] = {.count = 1, .reusable = true}, SHIFT(194),
  [390] = {.count = 1, .reusable = false}, SHIFT(197),
  [392] = {.count = 1, .reusable = false}, SHIFT(196),
  [394] = {.count = 1, .reusable = true}, SHIFT(198),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 1),
  [398] = {.count = 1, .reusable = true}, SHIFT(199),
  [400] = {.count = 1, .reusable = false}, SHIFT(200),
  [402] = {.count = 1, .reusable = true}, SHIFT(201),
  [404] = {.count = 1, .reusable = false}, SHIFT(204),
  [406] = {.count = 1, .reusable = false}, SHIFT(203),
  [408] = {.count = 1, .reusable = true}, SHIFT(205),
  [410] = {.count = 1, .reusable = true}, SHIFT(207),
  [412] = {.count = 1, .reusable = false}, SHIFT(210),
  [414] = {.count = 1, .reusable = false}, SHIFT(209),
  [416] = {.count = 1, .reusable = false}, SHIFT(211),
  [418] = {.count = 1, .reusable = true}, SHIFT(212),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 3),
  [424] = {.count = 1, .reusable = true}, SHIFT(214),
  [426] = {.count = 1, .reusable = false}, SHIFT(217),
  [428] = {.count = 1, .reusable = false}, SHIFT(216),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(218),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(218),
  [436] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(221),
  [439] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(219),
  [442] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(220),
  [445] = {.count = 1, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2),
  [447] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(23),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(23),
  [453] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(105),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(26),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(28),
  [462] = {.count = 1, .reusable = false}, SHIFT(223),
  [464] = {.count = 1, .reusable = true}, SHIFT(223),
  [466] = {.count = 1, .reusable = false}, SHIFT(230),
  [468] = {.count = 1, .reusable = false}, SHIFT(224),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_module_assignment, 1),
  [472] = {.count = 1, .reusable = false}, SHIFT(225),
  [474] = {.count = 1, .reusable = false}, SHIFT(226),
  [476] = {.count = 1, .reusable = false}, SHIFT(227),
  [478] = {.count = 1, .reusable = false}, SHIFT(228),
  [480] = {.count = 1, .reusable = false}, SHIFT(229),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym__atom_no_curly, 3),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym__atom_no_curly, 3),
  [486] = {.count = 1, .reusable = true}, SHIFT(234),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym__record_assignments1, 1),
  [490] = {.count = 1, .reusable = true}, SHIFT(235),
  [492] = {.count = 1, .reusable = true}, SHIFT(237),
  [494] = {.count = 1, .reusable = false}, SHIFT(239),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_name, 1),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_name, 1),
  [500] = {.count = 1, .reusable = false}, SHIFT(243),
  [502] = {.count = 1, .reusable = false}, SHIFT(240),
  [504] = {.count = 1, .reusable = true}, SHIFT(241),
  [506] = {.count = 1, .reusable = true}, SHIFT(242),
  [508] = {.count = 1, .reusable = false}, SHIFT(244),
  [510] = {.count = 1, .reusable = false}, SHIFT(248),
  [512] = {.count = 1, .reusable = true}, SHIFT(248),
  [514] = {.count = 1, .reusable = false}, SHIFT(253),
  [516] = {.count = 1, .reusable = false}, SHIFT(249),
  [518] = {.count = 1, .reusable = false}, SHIFT(250),
  [520] = {.count = 1, .reusable = false}, SHIFT(256),
  [522] = {.count = 1, .reusable = true}, SHIFT(256),
  [524] = {.count = 1, .reusable = false}, SHIFT(263),
  [526] = {.count = 1, .reusable = false}, SHIFT(257),
  [528] = {.count = 1, .reusable = false}, SHIFT(258),
  [530] = {.count = 1, .reusable = true}, SHIFT(267),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_record, 3),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_record, 3),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 1),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_untyped_binding, 1),
  [540] = {.count = 1, .reusable = true}, SHIFT(269),
  [542] = {.count = 1, .reusable = true}, SHIFT(270),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym__typed_untyped_binding1, 1),
  [546] = {.count = 1, .reusable = true}, SHIFT(273),
  [548] = {.count = 1, .reusable = true}, SHIFT(274),
  [550] = {.count = 1, .reusable = true}, SHIFT(275),
  [552] = {.count = 1, .reusable = false}, SHIFT(276),
  [554] = {.count = 1, .reusable = true}, SHIFT(276),
  [556] = {.count = 1, .reusable = false}, SHIFT(283),
  [558] = {.count = 1, .reusable = false}, SHIFT(277),
  [560] = {.count = 1, .reusable = false}, SHIFT(278),
  [562] = {.count = 1, .reusable = true}, SHIFT(287),
  [564] = {.count = 1, .reusable = false}, SHIFT(288),
  [566] = {.count = 1, .reusable = false}, SHIFT(289),
  [568] = {.count = 1, .reusable = false}, SHIFT(290),
  [570] = {.count = 1, .reusable = true}, SHIFT(292),
  [572] = {.count = 1, .reusable = true}, SHIFT(291),
  [574] = {.count = 1, .reusable = true}, SHIFT(293),
  [576] = {.count = 1, .reusable = true}, SHIFT(295),
  [578] = {.count = 1, .reusable = true}, SHIFT(296),
  [580] = {.count = 1, .reusable = true}, SHIFT(297),
  [582] = {.count = 1, .reusable = false}, SHIFT(299),
  [584] = {.count = 1, .reusable = false}, SHIFT(300),
  [586] = {.count = 1, .reusable = true}, SHIFT(301),
  [588] = {.count = 1, .reusable = false}, SHIFT(304),
  [590] = {.count = 1, .reusable = false}, SHIFT(302),
  [592] = {.count = 1, .reusable = true}, SHIFT(302),
  [594] = {.count = 1, .reusable = false}, SHIFT(307),
  [596] = {.count = 1, .reusable = false}, SHIFT(305),
  [598] = {.count = 1, .reusable = true}, SHIFT(305),
  [600] = {.count = 1, .reusable = true}, SHIFT(308),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 1),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_arg_name, 1),
  [606] = {.count = 1, .reusable = true}, SHIFT(311),
  [608] = {.count = 1, .reusable = true}, SHIFT(312),
  [610] = {.count = 1, .reusable = false}, REDUCE(sym__arg_names, 1),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures1, 1),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_infix, 3),
  [616] = {.count = 1, .reusable = false}, SHIFT(315),
  [618] = {.count = 1, .reusable = true}, SHIFT(316),
  [620] = {.count = 1, .reusable = false}, SHIFT(319),
  [622] = {.count = 1, .reusable = false}, SHIFT(318),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_rewrite_equations, 2),
  [626] = {.count = 1, .reusable = true}, SHIFT(320),
  [628] = {.count = 1, .reusable = false}, SHIFT(323),
  [630] = {.count = 1, .reusable = false}, SHIFT(322),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_with_expressions, 2),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 3),
  [636] = {.count = 1, .reusable = true}, SHIFT(324),
  [638] = {.count = 1, .reusable = false}, SHIFT(327),
  [640] = {.count = 1, .reusable = false}, SHIFT(326),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_rhs, 2),
  [644] = {.count = 1, .reusable = true}, SHIFT(328),
  [646] = {.count = 1, .reusable = false}, SHIFT(329),
  [648] = {.count = 1, .reusable = true}, SHIFT(329),
  [650] = {.count = 1, .reusable = false}, SHIFT(333),
  [652] = {.count = 1, .reusable = false}, SHIFT(330),
  [654] = {.count = 1, .reusable = false}, SHIFT(331),
  [656] = {.count = 1, .reusable = false}, SHIFT(335),
  [658] = {.count = 1, .reusable = true}, SHIFT(336),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 2),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 3),
  [664] = {.count = 1, .reusable = false}, SHIFT(338),
  [666] = {.count = 1, .reusable = true}, SHIFT(339),
  [668] = {.count = 1, .reusable = false}, SHIFT(342),
  [670] = {.count = 1, .reusable = false}, SHIFT(341),
  [672] = {.count = 1, .reusable = false}, SHIFT(184),
  [674] = {.count = 1, .reusable = true}, SHIFT(184),
  [676] = {.count = 1, .reusable = false}, SHIFT(187),
  [678] = {.count = 1, .reusable = false}, SHIFT(185),
  [680] = {.count = 1, .reusable = false}, SHIFT(186),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 3),
  [684] = {.count = 1, .reusable = true}, SHIFT(343),
  [686] = {.count = 1, .reusable = true}, SHIFT(344),
  [688] = {.count = 1, .reusable = true}, SHIFT(345),
  [690] = {.count = 1, .reusable = true}, SHIFT(346),
  [692] = {.count = 1, .reusable = true}, SHIFT(347),
  [694] = {.count = 1, .reusable = true}, SHIFT(348),
  [696] = {.count = 1, .reusable = false}, SHIFT(350),
  [698] = {.count = 1, .reusable = true}, SHIFT(352),
  [700] = {.count = 1, .reusable = true}, SHIFT(353),
  [702] = {.count = 1, .reusable = false}, SHIFT(355),
  [704] = {.count = 1, .reusable = false}, SHIFT(356),
  [706] = {.count = 1, .reusable = true}, SHIFT(356),
  [708] = {.count = 1, .reusable = false}, SHIFT(363),
  [710] = {.count = 1, .reusable = false}, SHIFT(357),
  [712] = {.count = 1, .reusable = false}, SHIFT(358),
  [714] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(367),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(367),
  [720] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(370),
  [723] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(368),
  [726] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(369),
  [729] = {.count = 1, .reusable = true}, SHIFT(371),
  [731] = {.count = 1, .reusable = true}, SHIFT(372),
  [733] = {.count = 1, .reusable = false}, SHIFT(374),
  [735] = {.count = 1, .reusable = false}, SHIFT(375),
  [737] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 3),
  [739] = {.count = 1, .reusable = true}, SHIFT(381),
  [741] = {.count = 1, .reusable = true}, SHIFT(382),
  [743] = {.count = 1, .reusable = false}, SHIFT(384),
  [745] = {.count = 1, .reusable = true}, SHIFT(385),
  [747] = {.count = 1, .reusable = false}, SHIFT(388),
  [749] = {.count = 1, .reusable = false}, SHIFT(387),
  [751] = {.count = 1, .reusable = true}, SHIFT(389),
  [753] = {.count = 1, .reusable = false}, SHIFT(396),
  [755] = {.count = 1, .reusable = false}, SHIFT(395),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym_import_directive, 1),
  [759] = {.count = 1, .reusable = true}, SHIFT(397),
  [761] = {.count = 1, .reusable = true}, SHIFT(398),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym_module_assignment, 2),
  [765] = {.count = 1, .reusable = true}, SHIFT(227),
  [767] = {.count = 1, .reusable = true}, SHIFT(228),
  [769] = {.count = 1, .reusable = true}, SHIFT(229),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym__open_args1, 1),
  [773] = {.count = 1, .reusable = false}, REDUCE(sym__open_args1, 1),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym__atom_no_curly, 4),
  [777] = {.count = 1, .reusable = false}, REDUCE(sym__atom_no_curly, 4),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym__record_assignments1, 2),
  [781] = {.count = 1, .reusable = true}, SHIFT(404),
  [783] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 2),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym_untyped_binding, 2),
  [787] = {.count = 1, .reusable = false}, REDUCE(sym__atom_no_curly, 1),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym__atom_no_curly, 1),
  [791] = {.count = 1, .reusable = true}, SHIFT(409),
  [793] = {.count = 1, .reusable = true}, SHIFT(410),
  [795] = {.count = 1, .reusable = true}, SHIFT(411),
  [797] = {.count = 1, .reusable = true}, REDUCE(sym__field_assignments1, 1),
  [799] = {.count = 1, .reusable = true}, SHIFT(412),
  [801] = {.count = 1, .reusable = true}, SHIFT(414),
  [803] = {.count = 1, .reusable = false}, SHIFT(417),
  [805] = {.count = 1, .reusable = false}, SHIFT(416),
  [807] = {.count = 1, .reusable = true}, SHIFT(418),
  [809] = {.count = 1, .reusable = true}, SHIFT(420),
  [811] = {.count = 1, .reusable = true}, SHIFT(421),
  [813] = {.count = 1, .reusable = false}, SHIFT(424),
  [815] = {.count = 1, .reusable = false}, SHIFT(423),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 4),
  [819] = {.count = 1, .reusable = true}, SHIFT(425),
  [821] = {.count = 1, .reusable = true}, SHIFT(426),
  [823] = {.count = 1, .reusable = false}, SHIFT(427),
  [825] = {.count = 1, .reusable = true}, SHIFT(427),
  [827] = {.count = 1, .reusable = false}, SHIFT(431),
  [829] = {.count = 1, .reusable = false}, SHIFT(428),
  [831] = {.count = 1, .reusable = false}, SHIFT(429),
  [833] = {.count = 1, .reusable = false}, SHIFT(433),
  [835] = {.count = 1, .reusable = true}, SHIFT(434),
  [837] = {.count = 1, .reusable = false}, SHIFT(435),
  [839] = {.count = 1, .reusable = false}, SHIFT(436),
  [841] = {.count = 1, .reusable = false}, SHIFT(437),
  [843] = {.count = 1, .reusable = false}, SHIFT(438),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_record, 4),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_record, 4),
  [849] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(120),
  [852] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(113),
  [855] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(114),
  [858] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(114),
  [861] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(123),
  [864] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(116),
  [867] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(117),
  [870] = {.count = 1, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 4),
  [874] = {.count = 1, .reusable = true}, SHIFT(446),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym_data, 4),
  [878] = {.count = 1, .reusable = false}, REDUCE(sym_data, 4),
  [880] = {.count = 1, .reusable = true}, SHIFT(448),
  [882] = {.count = 1, .reusable = true}, SHIFT(449),
  [884] = {.count = 1, .reusable = false}, SHIFT(452),
  [886] = {.count = 1, .reusable = false}, SHIFT(451),
  [888] = {.count = 1, .reusable = true}, SHIFT(453),
  [890] = {.count = 1, .reusable = false}, SHIFT(454),
  [892] = {.count = 1, .reusable = true}, SHIFT(454),
  [894] = {.count = 1, .reusable = false}, SHIFT(458),
  [896] = {.count = 1, .reusable = false}, SHIFT(455),
  [898] = {.count = 1, .reusable = false}, SHIFT(456),
  [900] = {.count = 1, .reusable = false}, SHIFT(460),
  [902] = {.count = 1, .reusable = false}, SHIFT(462),
  [904] = {.count = 1, .reusable = false}, SHIFT(463),
  [906] = {.count = 1, .reusable = false}, SHIFT(465),
  [908] = {.count = 1, .reusable = false}, SHIFT(466),
  [910] = {.count = 1, .reusable = false}, SHIFT(468),
  [912] = {.count = 1, .reusable = true}, REDUCE(sym__declarations0, 3),
  [914] = {.count = 1, .reusable = false}, REDUCE(sym__declarations0, 3),
  [916] = {.count = 1, .reusable = true}, SHIFT(472),
  [918] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_name, 2),
  [920] = {.count = 1, .reusable = true}, REDUCE(sym__maybe_dotted_name, 2),
  [922] = {.count = 1, .reusable = false}, SHIFT(473),
  [924] = {.count = 1, .reusable = false}, SHIFT(474),
  [926] = {.count = 1, .reusable = false}, SHIFT(475),
  [928] = {.count = 1, .reusable = true}, SHIFT(476),
  [930] = {.count = 1, .reusable = false}, SHIFT(477),
  [932] = {.count = 1, .reusable = true}, REDUCE(sym__maybe_dotted_names1, 1),
  [934] = {.count = 1, .reusable = false}, SHIFT(478),
  [936] = {.count = 1, .reusable = false}, SHIFT(479),
  [938] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 2),
  [940] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 2),
  [942] = {.count = 1, .reusable = true}, SHIFT(481),
  [944] = {.count = 1, .reusable = false}, SHIFT(482),
  [946] = {.count = 1, .reusable = true}, SHIFT(482),
  [948] = {.count = 1, .reusable = false}, SHIFT(489),
  [950] = {.count = 1, .reusable = false}, SHIFT(483),
  [952] = {.count = 1, .reusable = false}, SHIFT(484),
  [954] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures_block, 3),
  [956] = {.count = 1, .reusable = false}, REDUCE(sym__arg_type_signatures_block, 3),
  [958] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(143),
  [961] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(138),
  [964] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(138),
  [967] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(139),
  [970] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(140),
  [973] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2),
  [975] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2),
  [977] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(143),
  [980] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(138),
  [983] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(138),
  [986] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(139),
  [989] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(140),
  [992] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(141),
  [995] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(142),
  [998] = {.count = 1, .reusable = true}, REDUCE(aux_sym_infix_repeat1, 2),
  [1000] = {.count = 2, .reusable = false}, REDUCE(aux_sym_infix_repeat1, 2), SHIFT_REPEAT(315),
  [1003] = {.count = 2, .reusable = false}, REDUCE(aux_sym_infix_repeat1, 2), SHIFT_REPEAT(148),
  [1006] = {.count = 1, .reusable = true}, SHIFT(493),
  [1008] = {.count = 1, .reusable = true}, SHIFT(494),
  [1010] = {.count = 1, .reusable = false}, SHIFT(496),
  [1012] = {.count = 1, .reusable = true}, SHIFT(497),
  [1014] = {.count = 1, .reusable = true}, SHIFT(498),
  [1016] = {.count = 1, .reusable = false}, SHIFT(500),
  [1018] = {.count = 1, .reusable = true}, SHIFT(501),
  [1020] = {.count = 1, .reusable = true}, SHIFT(502),
  [1022] = {.count = 1, .reusable = false}, SHIFT(504),
  [1024] = {.count = 1, .reusable = true}, SHIFT(506),
  [1026] = {.count = 1, .reusable = false}, SHIFT(509),
  [1028] = {.count = 1, .reusable = false}, SHIFT(508),
  [1030] = {.count = 1, .reusable = true}, SHIFT(510),
  [1032] = {.count = 1, .reusable = true}, SHIFT(511),
  [1034] = {.count = 1, .reusable = true}, SHIFT(512),
  [1036] = {.count = 1, .reusable = true}, SHIFT(513),
  [1038] = {.count = 1, .reusable = false}, SHIFT(515),
  [1040] = {.count = 1, .reusable = true}, SHIFT(519),
  [1042] = {.count = 1, .reusable = true}, SHIFT(521),
  [1044] = {.count = 1, .reusable = true}, SHIFT(522),
  [1046] = {.count = 1, .reusable = true}, SHIFT(524),
  [1048] = {.count = 1, .reusable = false}, SHIFT(527),
  [1050] = {.count = 1, .reusable = false}, SHIFT(526),
  [1052] = {.count = 1, .reusable = true}, SHIFT(528),
  [1054] = {.count = 1, .reusable = false}, SHIFT(529),
  [1056] = {.count = 1, .reusable = true}, SHIFT(529),
  [1058] = {.count = 1, .reusable = false}, SHIFT(534),
  [1060] = {.count = 1, .reusable = false}, SHIFT(530),
  [1062] = {.count = 1, .reusable = false}, SHIFT(531),
  [1064] = {.count = 1, .reusable = false}, SHIFT(536),
  [1066] = {.count = 1, .reusable = true}, SHIFT(537),
  [1068] = {.count = 1, .reusable = false}, SHIFT(540),
  [1070] = {.count = 1, .reusable = false}, SHIFT(539),
  [1072] = {.count = 1, .reusable = true}, SHIFT(541),
  [1074] = {.count = 1, .reusable = true}, SHIFT(225),
  [1076] = {.count = 1, .reusable = true}, SHIFT(543),
  [1078] = {.count = 1, .reusable = true}, SHIFT(544),
  [1080] = {.count = 1, .reusable = true}, SHIFT(545),
  [1082] = {.count = 1, .reusable = true}, SHIFT(547),
  [1084] = {.count = 1, .reusable = true}, SHIFT(548),
  [1086] = {.count = 1, .reusable = false}, SHIFT(550),
  [1088] = {.count = 1, .reusable = true}, SHIFT(551),
  [1090] = {.count = 1, .reusable = true}, REDUCE(sym_field_assignment, 3),
  [1092] = {.count = 1, .reusable = true}, SHIFT(552),
  [1094] = {.count = 1, .reusable = true}, SHIFT(553),
  [1096] = {.count = 1, .reusable = false}, SHIFT(555),
  [1098] = {.count = 1, .reusable = false}, SHIFT(558),
  [1100] = {.count = 1, .reusable = true}, SHIFT(556),
  [1102] = {.count = 1, .reusable = false}, SHIFT(557),
  [1104] = {.count = 1, .reusable = false}, SHIFT(560),
  [1106] = {.count = 1, .reusable = false}, SHIFT(561),
  [1108] = {.count = 1, .reusable = true}, REDUCE(sym_module_assignment, 3),
  [1110] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(223),
  [1113] = {.count = 2, .reusable = true}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(223),
  [1116] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(230),
  [1119] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(224),
  [1122] = {.count = 1, .reusable = true}, REDUCE(aux_sym__application_repeat1, 2),
  [1124] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(226),
  [1127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_assignment_repeat1, 2),
  [1129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_assignment_repeat1, 2), SHIFT_REPEAT(227),
  [1132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_assignment_repeat1, 2), SHIFT_REPEAT(228),
  [1135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_assignment_repeat1, 2), SHIFT_REPEAT(229),
  [1138] = {.count = 1, .reusable = true}, REDUCE(aux_sym__record_assignments1_repeat1, 2),
  [1140] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_assignments1_repeat1, 2), SHIFT_REPEAT(235),
  [1143] = {.count = 1, .reusable = true}, SHIFT(563),
  [1145] = {.count = 1, .reusable = true}, SHIFT(564),
  [1147] = {.count = 1, .reusable = true}, SHIFT(565),
  [1149] = {.count = 1, .reusable = true}, SHIFT(566),
  [1151] = {.count = 1, .reusable = true}, SHIFT(567),
  [1153] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 3),
  [1155] = {.count = 1, .reusable = true}, REDUCE(sym_untyped_binding, 3),
  [1157] = {.count = 1, .reusable = true}, REDUCE(sym__atom_no_curly, 5),
  [1159] = {.count = 1, .reusable = false}, REDUCE(sym__atom_no_curly, 5),
  [1161] = {.count = 1, .reusable = true}, REDUCE(sym__field_assignments1, 2),
  [1163] = {.count = 1, .reusable = true}, SHIFT(571),
  [1165] = {.count = 1, .reusable = true}, SHIFT(572),
  [1167] = {.count = 1, .reusable = false}, SHIFT(574),
  [1169] = {.count = 1, .reusable = true}, SHIFT(577),
  [1171] = {.count = 1, .reusable = true}, SHIFT(578),
  [1173] = {.count = 1, .reusable = false}, SHIFT(580),
  [1175] = {.count = 1, .reusable = true}, REDUCE(sym_record, 5),
  [1177] = {.count = 1, .reusable = false}, REDUCE(sym_record, 5),
  [1179] = {.count = 1, .reusable = true}, SHIFT(582),
  [1181] = {.count = 1, .reusable = false}, SHIFT(585),
  [1183] = {.count = 1, .reusable = false}, SHIFT(584),
  [1185] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 2),
  [1187] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 2),
  [1189] = {.count = 1, .reusable = true}, SHIFT(586),
  [1191] = {.count = 1, .reusable = false}, SHIFT(587),
  [1193] = {.count = 1, .reusable = true}, REDUCE(sym_record_induction, 1),
  [1195] = {.count = 1, .reusable = true}, REDUCE(sym_record_eta, 1),
  [1197] = {.count = 1, .reusable = true}, SHIFT(588),
  [1199] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 1),
  [1201] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 1),
  [1203] = {.count = 2, .reusable = false}, REDUCE(sym__record_directives1, 1), REDUCE(aux_sym__record_directives1_repeat1, 1),
  [1206] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1),
  [1208] = {.count = 1, .reusable = true}, SHIFT(590),
  [1210] = {.count = 1, .reusable = true}, SHIFT(591),
  [1212] = {.count = 1, .reusable = true}, SHIFT(436),
  [1214] = {.count = 1, .reusable = true}, SHIFT(437),
  [1216] = {.count = 1, .reusable = true}, SHIFT(438),
  [1218] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 5),
  [1220] = {.count = 1, .reusable = true}, SHIFT(595),
  [1222] = {.count = 1, .reusable = true}, SHIFT(596),
  [1224] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 5),
  [1226] = {.count = 1, .reusable = true}, SHIFT(597),
  [1228] = {.count = 1, .reusable = true}, REDUCE(sym_data, 5),
  [1230] = {.count = 1, .reusable = false}, REDUCE(sym_data, 5),
  [1232] = {.count = 1, .reusable = true}, SHIFT(598),
  [1234] = {.count = 1, .reusable = true}, SHIFT(599),
  [1236] = {.count = 1, .reusable = false}, SHIFT(601),
  [1238] = {.count = 1, .reusable = true}, SHIFT(602),
  [1240] = {.count = 1, .reusable = false}, SHIFT(605),
  [1242] = {.count = 1, .reusable = false}, SHIFT(604),
  [1244] = {.count = 1, .reusable = true}, SHIFT(607),
  [1246] = {.count = 1, .reusable = true}, SHIFT(609),
  [1248] = {.count = 1, .reusable = true}, SHIFT(610),
  [1250] = {.count = 1, .reusable = true}, SHIFT(612),
  [1252] = {.count = 1, .reusable = true}, SHIFT(613),
  [1254] = {.count = 1, .reusable = true}, SHIFT(614),
  [1256] = {.count = 1, .reusable = true}, SHIFT(616),
  [1258] = {.count = 1, .reusable = true}, SHIFT(617),
  [1260] = {.count = 1, .reusable = true}, SHIFT(618),
  [1262] = {.count = 1, .reusable = false}, SHIFT(620),
  [1264] = {.count = 1, .reusable = true}, SHIFT(619),
  [1266] = {.count = 1, .reusable = false}, SHIFT(621),
  [1268] = {.count = 1, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2),
  [1270] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2),
  [1272] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 3),
  [1274] = {.count = 1, .reusable = true}, REDUCE(sym_arg_name, 3),
  [1276] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(477),
  [1279] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(302),
  [1282] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(302),
  [1285] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(479),
  [1288] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(305),
  [1291] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(305),
  [1294] = {.count = 1, .reusable = true}, SHIFT(622),
  [1296] = {.count = 1, .reusable = true}, SHIFT(624),
  [1298] = {.count = 1, .reusable = false}, SHIFT(627),
  [1300] = {.count = 1, .reusable = false}, SHIFT(626),
  [1302] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 3),
  [1304] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 3),
  [1306] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [1308] = {.count = 1, .reusable = false}, SHIFT(628),
  [1310] = {.count = 1, .reusable = true}, SHIFT(628),
  [1312] = {.count = 1, .reusable = false}, SHIFT(629),
  [1314] = {.count = 1, .reusable = true}, SHIFT(629),
  [1316] = {.count = 1, .reusable = false}, SHIFT(634),
  [1318] = {.count = 1, .reusable = false}, SHIFT(630),
  [1320] = {.count = 1, .reusable = false}, SHIFT(631),
  [1322] = {.count = 1, .reusable = false}, SHIFT(636),
  [1324] = {.count = 1, .reusable = true}, SHIFT(638),
  [1326] = {.count = 1, .reusable = true}, SHIFT(640),
  [1328] = {.count = 1, .reusable = true}, SHIFT(642),
  [1330] = {.count = 1, .reusable = true}, SHIFT(644),
  [1332] = {.count = 1, .reusable = true}, SHIFT(645),
  [1334] = {.count = 1, .reusable = false}, SHIFT(647),
  [1336] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 4),
  [1338] = {.count = 1, .reusable = true}, SHIFT(648),
  [1340] = {.count = 1, .reusable = true}, SHIFT(650),
  [1342] = {.count = 1, .reusable = true}, SHIFT(651),
  [1344] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 5),
  [1346] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 5),
  [1348] = {.count = 1, .reusable = true}, SHIFT(652),
  [1350] = {.count = 1, .reusable = true}, SHIFT(653),
  [1352] = {.count = 1, .reusable = true}, SHIFT(654),
  [1354] = {.count = 1, .reusable = false}, SHIFT(656),
  [1356] = {.count = 1, .reusable = true}, SHIFT(658),
  [1358] = {.count = 1, .reusable = false}, SHIFT(661),
  [1360] = {.count = 1, .reusable = false}, SHIFT(660),
  [1362] = {.count = 1, .reusable = true}, SHIFT(662),
  [1364] = {.count = 1, .reusable = true}, SHIFT(663),
  [1366] = {.count = 1, .reusable = false}, SHIFT(665),
  [1368] = {.count = 1, .reusable = true}, SHIFT(666),
  [1370] = {.count = 1, .reusable = true}, SHIFT(667),
  [1372] = {.count = 1, .reusable = true}, SHIFT(668),
  [1374] = {.count = 1, .reusable = true}, SHIFT(670),
  [1376] = {.count = 1, .reusable = true}, REDUCE(sym_import_directive, 3),
  [1378] = {.count = 1, .reusable = false}, SHIFT(672),
  [1380] = {.count = 1, .reusable = true}, SHIFT(673),
  [1382] = {.count = 1, .reusable = true}, REDUCE(sym__comma_import_names1, 1),
  [1384] = {.count = 1, .reusable = true}, SHIFT(675),
  [1386] = {.count = 1, .reusable = true}, SHIFT(676),
  [1388] = {.count = 1, .reusable = false}, SHIFT(677),
  [1390] = {.count = 1, .reusable = true}, SHIFT(678),
  [1392] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 4),
  [1394] = {.count = 1, .reusable = true}, REDUCE(sym_untyped_binding, 4),
  [1396] = {.count = 1, .reusable = true}, SHIFT(683),
  [1398] = {.count = 1, .reusable = true}, REDUCE(aux_sym__field_assignments1_repeat1, 2),
  [1400] = {.count = 2, .reusable = true}, REDUCE(aux_sym__field_assignments1_repeat1, 2), SHIFT_REPEAT(412),
  [1403] = {.count = 1, .reusable = true}, SHIFT(684),
  [1405] = {.count = 1, .reusable = true}, SHIFT(686),
  [1407] = {.count = 1, .reusable = true}, REDUCE(sym_record, 6),
  [1409] = {.count = 1, .reusable = false}, REDUCE(sym_record, 6),
  [1411] = {.count = 1, .reusable = true}, SHIFT(688),
  [1413] = {.count = 1, .reusable = true}, SHIFT(689),
  [1415] = {.count = 1, .reusable = false}, SHIFT(691),
  [1417] = {.count = 1, .reusable = false}, SHIFT(692),
  [1419] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor, 2),
  [1421] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 3),
  [1423] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 3),
  [1425] = {.count = 1, .reusable = true}, SHIFT(693),
  [1427] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 2),
  [1429] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 2),
  [1431] = {.count = 2, .reusable = false}, REDUCE(sym__record_directives1, 2), REDUCE(aux_sym__record_directives1_repeat1, 2),
  [1434] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [1436] = {.count = 1, .reusable = true}, SHIFT(694),
  [1438] = {.count = 2, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1), REDUCE(sym__record_directives1, 2),
  [1441] = {.count = 1, .reusable = true}, SHIFT(695),
  [1443] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(696),
  [1446] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(436),
  [1449] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(437),
  [1452] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(438),
  [1455] = {.count = 1, .reusable = true}, REDUCE(sym_data, 6),
  [1457] = {.count = 1, .reusable = false}, REDUCE(sym_data, 6),
  [1459] = {.count = 1, .reusable = true}, SHIFT(699),
  [1461] = {.count = 1, .reusable = true}, SHIFT(700),
  [1463] = {.count = 1, .reusable = true}, SHIFT(702),
  [1465] = {.count = 1, .reusable = true}, SHIFT(703),
  [1467] = {.count = 1, .reusable = false}, SHIFT(705),
  [1469] = {.count = 1, .reusable = true}, SHIFT(706),
  [1471] = {.count = 1, .reusable = true}, SHIFT(707),
  [1473] = {.count = 1, .reusable = true}, SHIFT(712),
  [1475] = {.count = 1, .reusable = true}, SHIFT(714),
  [1477] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 4),
  [1479] = {.count = 1, .reusable = true}, REDUCE(sym_arg_name, 4),
  [1481] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(620),
  [1484] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_name_repeat1, 2),
  [1486] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(621),
  [1489] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 4),
  [1491] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 4),
  [1493] = {.count = 1, .reusable = true}, SHIFT(716),
  [1495] = {.count = 1, .reusable = true}, SHIFT(717),
  [1497] = {.count = 1, .reusable = false}, SHIFT(719),
  [1499] = {.count = 1, .reusable = true}, SHIFT(721),
  [1501] = {.count = 1, .reusable = false}, SHIFT(724),
  [1503] = {.count = 1, .reusable = false}, SHIFT(723),
  [1505] = {.count = 1, .reusable = false}, REDUCE(sym__expr1, 2),
  [1507] = {.count = 1, .reusable = false}, REDUCE(sym__application, 2),
  [1509] = {.count = 1, .reusable = true}, SHIFT(725),
  [1511] = {.count = 1, .reusable = true}, SHIFT(726),
  [1513] = {.count = 1, .reusable = true}, SHIFT(727),
  [1515] = {.count = 1, .reusable = true}, SHIFT(728),
  [1517] = {.count = 1, .reusable = true}, SHIFT(730),
  [1519] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 6),
  [1521] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 6),
  [1523] = {.count = 1, .reusable = true}, SHIFT(731),
  [1525] = {.count = 1, .reusable = true}, SHIFT(733),
  [1527] = {.count = 1, .reusable = true}, SHIFT(734),
  [1529] = {.count = 1, .reusable = false}, SHIFT(736),
  [1531] = {.count = 1, .reusable = true}, SHIFT(737),
  [1533] = {.count = 1, .reusable = true}, SHIFT(739),
  [1535] = {.count = 1, .reusable = true}, SHIFT(740),
  [1537] = {.count = 1, .reusable = true}, REDUCE(sym__import_name, 2),
  [1539] = {.count = 1, .reusable = false}, SHIFT(741),
  [1541] = {.count = 1, .reusable = true}, REDUCE(sym__comma_import_names1, 2),
  [1543] = {.count = 1, .reusable = true}, REDUCE(sym_import_directive, 4),
  [1545] = {.count = 1, .reusable = false}, SHIFT(743),
  [1547] = {.count = 1, .reusable = true}, SHIFT(744),
  [1549] = {.count = 1, .reusable = true}, SHIFT(746),
  [1551] = {.count = 1, .reusable = true}, SHIFT(748),
  [1553] = {.count = 1, .reusable = true}, SHIFT(749),
  [1555] = {.count = 1, .reusable = true}, SHIFT(750),
  [1557] = {.count = 1, .reusable = true}, SHIFT(751),
  [1559] = {.count = 1, .reusable = false}, SHIFT(753),
  [1561] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 4),
  [1563] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 4),
  [1565] = {.count = 1, .reusable = true}, SHIFT(692),
  [1567] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 3),
  [1569] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 3),
  [1571] = {.count = 2, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2), REDUCE(sym__record_directives1, 3),
  [1574] = {.count = 1, .reusable = true}, SHIFT(754),
  [1576] = {.count = 1, .reusable = true}, SHIFT(755),
  [1578] = {.count = 1, .reusable = true}, REDUCE(sym_record, 7),
  [1580] = {.count = 1, .reusable = false}, REDUCE(sym_record, 7),
  [1582] = {.count = 1, .reusable = true}, REDUCE(sym_data, 7),
  [1584] = {.count = 1, .reusable = false}, REDUCE(sym_data, 7),
  [1586] = {.count = 1, .reusable = true}, SHIFT(756),
  [1588] = {.count = 1, .reusable = true}, SHIFT(757),
  [1590] = {.count = 1, .reusable = true}, SHIFT(760),
  [1592] = {.count = 1, .reusable = true}, SHIFT(762),
  [1594] = {.count = 1, .reusable = true}, SHIFT(763),
  [1596] = {.count = 1, .reusable = true}, SHIFT(764),
  [1598] = {.count = 1, .reusable = true}, SHIFT(765),
  [1600] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 3),
  [1602] = {.count = 1, .reusable = true}, SHIFT(767),
  [1604] = {.count = 1, .reusable = true}, SHIFT(768),
  [1606] = {.count = 1, .reusable = false}, SHIFT(770),
  [1608] = {.count = 1, .reusable = true}, SHIFT(771),
  [1610] = {.count = 1, .reusable = true}, SHIFT(772),
  [1612] = {.count = 1, .reusable = true}, SHIFT(773),
  [1614] = {.count = 1, .reusable = true}, SHIFT(775),
  [1616] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_import_names1_repeat1, 2),
  [1618] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_import_names1_repeat1, 2), SHIFT_REPEAT(673),
  [1621] = {.count = 1, .reusable = true}, REDUCE(sym_renaming, 3),
  [1623] = {.count = 1, .reusable = false}, SHIFT(776),
  [1625] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_directive_repeat1, 2),
  [1627] = {.count = 1, .reusable = true}, REDUCE(sym_import_directive, 5),
  [1629] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_directive_repeat1, 2), SHIFT_REPEAT(678),
  [1632] = {.count = 1, .reusable = true}, SHIFT(777),
  [1634] = {.count = 1, .reusable = true}, SHIFT(778),
  [1636] = {.count = 1, .reusable = true}, SHIFT(779),
  [1638] = {.count = 1, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [1640] = {.count = 1, .reusable = true}, SHIFT(780),
  [1642] = {.count = 1, .reusable = true}, SHIFT(781),
  [1644] = {.count = 1, .reusable = true}, SHIFT(783),
  [1646] = {.count = 1, .reusable = true}, SHIFT(784),
  [1648] = {.count = 1, .reusable = true}, SHIFT(785),
  [1650] = {.count = 1, .reusable = true}, SHIFT(787),
  [1652] = {.count = 1, .reusable = true}, REDUCE(sym_renaming, 4),
  [1654] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor_instance, 5),
  [1656] = {.count = 1, .reusable = false}, REDUCE(sym_record_constructor_instance, 5),
  [1658] = {.count = 1, .reusable = false}, SHIFT(788),
  [1660] = {.count = 1, .reusable = true}, SHIFT(789),
  [1662] = {.count = 1, .reusable = true}, SHIFT(790),
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
