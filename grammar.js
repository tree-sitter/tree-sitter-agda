const
      digit = /[0-9]/,
      decimalLiteral = seq(digit, repeat(digit));

module.exports = grammar({
    name: 'agda',

    extras: $ => [
        $.comment,
        /\s|\\n/
    ],

    externals: $ => [
        $._layout_semicolon,
        $._layout_open_brace,
        $._layout_close_brace,
        '->'
    ],

    rules: {
        // source_file: $ => $.function_clause,
        source_file: $ => repeat($._declaration),
        // source_file: $ => $.expr,

        int: $ => token(decimalLiteral),
        literal: $ => 'literal: undefined',
        set_n: $ => 'set_n: undefined',
        begin_import_dir: $ => 'begin_import_dir: undefined',


        ////////////////////////////////////////////////////////////////////////
        // Special lexemes
        ////////////////////////////////////////////////////////////////////////

        semi: $ => choice(
            $._layout_semicolon,
            ';'
        ),

        vopen: $ => $._layout_open_brace,
        vclose: $ => $._layout_close_brace,


        ////////////////////////////////////////////////////////////////////////
        // Name
        // http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
        ////////////////////////////////////////////////////////////////////////


        name: $ => /[^\s\_\;\.\"\(\)\{\}\@]+(\_[^\s\_\;\.\"\(\)\{\}\@]+)*/,
        // for var1@var2
        name_at: $ => /[^\s\_\;\.\"\(\)\{\}\@]+(\_[^\s\_\;\.\"\(\)\{\}\@]+)*\@/,
        qualified_name: $ => /[^\s\_\;\.\"\(\)\{\}\@]+(\.[^\s\_\;\.\"\(\)\{\}\@]+)*/,

        // A binding variable, can be '_'
        binding_name: $ => choice(
            '_',
            $.name
        ),
        anonymous_name: $ => '_',

        _maybe_dotted_name: $ => maybeDotted($.name),
        _maybe_dotted_names1: $ => repeat1(maybeDotted($.name)),

        // identifiers which may be surrounded by braces or dotted.
        arg_names: $ => repeat1($.arg_name),
        arg_name: $ => choice(
            $._maybe_dotted_name,
            seq('{' , $._maybe_dotted_names1, '}'),
            seq('{{', $._maybe_dotted_names1, '}}'),
            seq('.' , '{',  repeat1($.name), '}'),
            seq('..', '{',  repeat1($.name), '}'),
            seq('.' , '{{', repeat1($.name), '}}'),
            seq('..', '{{', repeat1($.name), '}}'),
        ),

        ////////////////////////////////////////////////////////////////////////
        // Comment
        ////////////////////////////////////////////////////////////////////////

        comment: $ => token(choice(
            seq('--', /.*/),
            seq(
                '{-',
                /[^#].*\r?\n?/,
                repeat(choice(
                    /[^-]/,
                    /-[^}]/
                )),
                /-}\r?\n/
            )
        )),

        ////////////////////////////////////////////////////////////////////////
        // Pragma
        // http://agda.readthedocs.io/en/latest/language/pragmas.html
        ////////////////////////////////////////////////////////////////////////

        pragma: $ => seq(
            '{-#',
            $.pragma_name,
            repeat($._pragma_argument),
            '#-}'
        ),
        pragma_name: $ => choice(
            'BUILTIN',
            'CATCHALL',
            'COMPILE',
            'FOREIGN',
            'NO_POSITIVITY_CHECK',
            'NO_TERMINATION_CHECK',
            'TERMINATING',
            'NON_TERMINATING',
            'POLARITY',
            'STATIC',
            /\S+/
        ),
        _pragma_argument: $ => /\S+/,

        ////////////////////////////////////////////////////////////////////////
        // TODO: Undefined
        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // Expressions
        ////////////////////////////////////////////////////////////////////////

        expr: $ => choice(
            prec(2, seq($.tele_arrow, $.expr)),
            prec(2, seq($._atomic_exprs1, '->', $.expr)),
            prec(2, seq($._expr1, '=', $.expr)),
            $._expr1 // lowest precedence
        ),

        // Level 1 Expressions: Application
        _expr1: $ => seq(
            repeat(seq($._atomic_exprs1, '|')),
            $._application
        ),

        _application: $ => seq(
            repeat($.atomic_expr),
            $._expr2
        ),

        // Level 2 Expressions: Lambdas and lets
        _expr2: $ => choice(
            // lambda bindings
            seq('\\', $.lambda_bindings, '->', $.expr),
            seq('\\',     '{', $.lambda_clauses, '}'),
            seq('\\', 'where', $.vopen, $.lambda_where_clauses, $.vclose),
            seq('\\',          $.lambda_bindings),
            // forall
            seq('forall', $.forall_bindings, $.expr),
            // let ... in
            prec.left(seq('let', repeat1($._declaration), optional(seq('in', $.expr)))),

            // TODO: do notation
            // seq('do', $.vopen, repeat1($.do_stmt), $.vclose),

            // seq('quoteGoal', $.name, 'in', $.expr),
            // seq('tactic', $._atomic_exprs1),
            // seq('tactic', $._atomic_exprs1, '|', $._expr1),

            prec(-1, $.atomic_expr),
        ),


        // Level 3 Expressions: Atoms
        _atomic_exprs1: $ => repeat1($.atomic_expr),
        atomic_expr: $ => choice(
            $._atomic_expr_curly,
            $._atomic_expr_no_curly
        ),

        _atomic_expr_curly: $ => seq('{', optional($.expr), '}'),
        _atomic_expr_no_curly: $ => choice(
            $.qualified_name,
            $.literal,
            '?',
            "_",
            'Prop',
            'Set',
            'quote',
            'quoteTerm',
            'unquote',
            $.set_n,
            seq('{{', $.expr, '}}'),
            seq('(', $.expr, ')'),
            seq('(|', $.expr, '|)'),
            seq('(', ')'),
            seq('{{', '}}'),
            seq($.name_at, $.atomic_expr),
            seq('.', $.atomic_expr),
            // seq('record', '{', optional($.record_assignments1), '}'),
            // seq('record', $._atomic_expr_no_curly, '{', optional($.field_assignments1), '}'),
            '...'
        ),

        // record_assignments1: $ => sepBy1(';', $.record_assignment),
        // record_assignment: $ => choice(
        //     $.field_assignment,
        //     $.module_assignment,
        // ),
        //
        // module_assignment: $ => seq($.qualified_name, optional($.open_args1), optional($.import_directives1)),
        //
        //
        // field_assignments1: $ => sepBy1(';', $.field_assignment),
        // field_assignment: $ => seq($.name, '=', $.expr),

        // ////////////////////////////////////////////////////////////////////////
        // // Bindings
        // ////////////////////////////////////////////////////////////////////////

        tele_arrow: $ => seq(
            repeat1($.typed_bindings),
            '->'
        ),

        // "LamBinds"
        lambda_bindings: $ => prec.right(choice(
            seq($.untyped_bindings, $.lambda_bindings),
            seq($.typed_bindings, $.lambda_bindings),
            $.untyped_bindings,
            $.typed_bindings,
            seq('(', ')'),
            seq('{', '}'),
            seq('{{', '}}')
        )),

        catchall_pragma: $ => "CatchallPragma: undefined",

        non_absurd_lambda_clause: $ => seq(
            optional($.catchall_pragma),
            repeat($.atomic_expr),
            '->',
            $.expr
        ),

        absurd_lambda_clause: $ => seq(
            optional($.catchall_pragma),
            $._application
        ),

        lambda_clause: $ => choice(
            $.non_absurd_lambda_clause,
            $.absurd_lambda_clause
        ),

        // Parses all extended lambda clauses except for a single absurd clause,
        // which is taken care of in absurd_lambda_clause
        lambda_clauses: $ => choice(
            seq($.lambda_clauses, $.semi, $.lambda_clause),
            seq($.absurd_lambda_clause, $.semi, $.lambda_clause),
            seq($.non_absurd_lambda_clause),
        ),

        // Parses all extended lambda clauses including a single absurd clause.
        // For λ where this is not taken care of in AbsurdLambda
        lambda_where_clauses: $ => prec.right(sepBy1($.semi, $.lambda_clause)),

        forall_bindings: $ => seq(
            $.typed_untyped_bindings1,
            '->'
        ),

        // "DomainFreeBinding"
        untyped_bindings: $ => maybeDotted(choice(
                seq('(', $.binding_name, ')'),
                seq('{', $._application, '}'),
                seq('{{', $._application, '}}')
        )),

        // "TypedBindings"
        typed_bindings: $ => choice(
            maybeDotted(bracketed(seq(
                $._application, ':', $.expr
            ))),
            // seq('(', $.open, ')'),
            // seq('(', 'let', repeat1($.declaration), ')')
        ),

        typed_untyped_bindings1: $ => repeat1(choice(
            $.untyped_bindings,
            $.typed_bindings
        )),

        // ////////////////////////////////////////////////////////////////////////
        // // Do-notation
        // ////////////////////////////////////////////////////////////////////////

        // do_stmt: $ => seq(
        //     $.expr,
        //     optional($.do_where)
        // ),
        //
        // do_where: $ => seq(
        //     'where',
        //     $.vopen,
        //     $.lambda_where_clauses
        // ),

        ////////////////////////////////////////////////////////////////////////
        // Module and Imports
        // http://agda.readthedocs.io/en/v2.5.3/language/module-system.html
        ////////////////////////////////////////////////////////////////////////

        import_directives1: $ => repeat1(choice(
            'public',
            seq('using', '(', $.comma_import_names1 ,')'),
            seq('hiding', '(', $.comma_import_names1 ,')'),
            seq('renaming', '(', repeat1($.renaming) ,')'),
            seq('using', '(' ,')'),
            seq('hiding', '(' ,')'),
            seq('renaming', '(' ,')')
        )),

        renaming: $ => seq(
            optional('module'),
            $.name,
            'to',
            $.name
        ),
        import_name: $ => seq(
            optional('module'), $.name
        ),

        comma_import_names1: $ => sepBy1(';', $.import_name),

        ////////////////////////////////////////////////////////////////////////
        // Function clauses
        ////////////////////////////////////////////////////////////////////////

        lhs: $ => prec.left(seq(
            $._expr1,
            optional($.rewrite_equations),
            optional($.with_expressions)
        )),

        rewrite_equations: $ => seq('rewrite', $._expr1),
        with_expressions: $ => seq('with', $._expr1),

        // hole_content: $ => choice(
        //     $.expr,
        //     optional($.rewrite_equations)
        // ),
        //
        where_clause: $ => choice(
            seq(                            'where', $._declarations0),
            seq('module', $.name,           'where', $._declarations0),
            seq('module', $.anonymous_name, 'where', $._declarations0)
        ),

        // expr_where: $ => seq(
        //     $.expr,
        //     optional($.where_clause)
        // ),

        ////////////////////////////////////////////////////////////////////////
        // Other kinds of declarations
        ////////////////////////////////////////////////////////////////////////

        // Top-level definitions.
        _declaration: $ => choice(
            // $.field,
            $.function_clause,
            // $.data,
            // $.data_signature,
            // $.record,
            // $.record_signature,
            // $.infix,
            // $.mutual,
            // $.abstract,
            // $.private,
            // $.instance,
            // $.macro,
            // $.postulate,
            // $.primitive,
            // $.open,
            // $.module_macro,
            // $.module,
            // $.pragma,
            // $.syntax,
            // $.patten_syn,
            // $.unquote_declaration
        ),


        // Function declarations. The left hand side is parsed as an expression
        // to allow declarations like 'x::xs ++ ys = e', when '::' has higher
        // precedence than '++'.
        // function_clause also handle possibly dotted type signatures.
        function_clause: $ => prec.left(seq(
            $.lhs,
            optional($.rhs),
            optional($.where_clause)
        )),

        rhs: $ => choice(
            seq('=', $.expr),
            seq(':', $.expr)
        ),

        // // Data declaration. Can be local.
        // data: $ => seq(
        //     choice('data', 'codata'),
        //     $.name,
        //     optional($.typed_untyped_bindings1),
        //     optional(seq(':', $.expr)),
        //     'where',
        //     $._declarations0
        // ),
        //
        // // Data type signature. Found in mutual blocks.
        // data_signature: $ => seq(
        //     'data',
        //     $.name,
        //     optional($.typed_untyped_bindings1),
        //     ':',
        //     $.expr
        // ),
        //
        // // Record declarations.
        // record: $ => seq(
        //     'record',
        //     $.atomic_expr_no_curly,
        //     optional($.typed_untyped_bindings1),
        //     optional(seq(':', $.expr)),
        //     'where',
        //     optional($.record_declarations)
        // ),
        //
        // // Record type signature. In mutual blocks.
        // record_signature: $ => seq(
        //     'record',
        //     $.atomic_expr_no_curly,
        //     optional($.typed_untyped_bindings1),
        //     ':',
        //     $.expr
        // ),
        //
        // // Declaration of record constructor name.
        // record_constructor_name: $ => choice(
        //     seq('constructor', $.name),
        //     seq('instance', $.vopen, 'constructor', $.name, $.vclose)
        // )
        //
        // // Fixity declarations.
        // infix: $ => seq(
        //     choice('infix', 'infixl', 'infixr'),
        //     $.int,
        //     repeat1($.binding_name)
        // ),

        // Field declarations.
        // field: $ => seq(
        //     'field',
        //     $.arg_type_signatures
        // ),

        // // Mutually recursive declarations.
        // mutual: $ => seq(
        //     'mutual',
        //     $._declarations0
        // ),
        //
        // // Abstract declarations.
        // abstract: $ => seq(
        //     'abstract',
        //     $._declarations0
        // ),
        //
        // // Private can only appear on the top-level (or rather the module level)
        // private: $ => seq(
        //     'private',
        //     $._declarations0
        // ),
        //
        // // Instance declarations.
        // instance: $ => seq(
        //     'instance',
        //     $._declarations0
        // ),
        //
        // // Macro declarations.
        // macro: $ => seq(
        //     'macro',
        //     $._declarations0
        // ),
        //
        // // Postulates.
        // postulate: $ => seq(
        //     'postulate',
        //     $._declarations0
        // ),
        //
        // // Primitives. Can only contain type signatures.
        // primitive: $ => seq(
        //     'primitive',
        //     $.type_signatures
        // ),
        //
        // // Unquoting declarations.
        // unquote_declaration: $ => choice(
        //     seq('unquoteDecl',                  '=', $.expr),
        //     seq('unquoteDecl', repeat1($.name), '=', $.expr),
        //     seq('unquoteDef' , repeat1($.name), '=', $.expr)
        // ),
        //
        // // Syntax declaration (To declare eg. mixfix binders)
        // syntax: $ => seq(
        //         'syntax',
        //         $.name,
        //         $.hole_names1,
        //         '=',
        //         repeat1($.name)
        // ),
        //
        // // Pattern synonyms.
        // patten_syn: $ => seq(
        //     'pattern',
        //     $.name,
        //     optional($.lambda_bindings),
        //     '=',
        //     $.expr
        // ),
        //
        // hole_names1: $ => repeat1($.hole_name),
        // hole_name: $ => choice(
        //     $.name,
        //     seq('(', '\\', $.name, '->', $.name, ')'),
        //     seq('(', '\\', '_',    '->', $.name, ')'),
        //     seq('{', $.simple_hole, '}'),
        //     seq('{{', $.simple_hole, '}}'),
        //     seq('{', $.simple_hole, '=', $.simple_hole, '}'),
        //     seq('{{', $.simple_hole, '=', $.simple_hole, '}}')
        // ),
        //
        // simple_hole: $ => choice(
        //     $.name,
        //     seq('\\', $.name, '->', $.name),
        //     seq('\\', '_',    '->', $.name)
        // ),
        //
        // open: $ => choice(
        //     seq(        'import', $.qualified_name, optional($.open_args1), optional($.import_directives1)),
        //     seq('open', 'import', $.qualified_name, optional($.open_args1), optional($.import_directives1)),
        //     seq('open',           $.qualified_name, optional($.open_args1), optional($.import_directives1)),
        // ),

        // open_args1: $ => repeat1($.atomic_expr),
        //
        // module_application: $ => choice(
        //     seq($.qualified_name, '{{', '...', '}}'),
        //     seq($.qualified_name, optional($.open_args1)),
        // ),
        //
        // // Module instantiation
        // module_macro: $ => choice(
        //     seq(
        //         'module',
        //         $.qualified_name,
        //         optional($.typed_untyped_bindings1),
        //         '=',
        //         $.module_application,
        //         optional($.import_directives1)
        //     ),
        //     seq(
        //         'open',
        //         'module',
        //         $.name,
        //         optional($.typed_untyped_bindings1),
        //         '=',
        //         $.module_application,
        //         optional($.import_directives1)
        //     )
        // ),
        //
        // // Module
        // module: $ => seq(
        //     'module',
        //     choice($.qualified_name, $.anonymous_name),
        //     optional($.typed_untyped_bindings1),
        //     'where',
        //     $._declarations0
        // ),
        //
        //
        // ////////////////////////////////////////////////////////////////////////
        // // Sequence of declarations
        // ////////////////////////////////////////////////////////////////////////
        //
        // // Non-empty list of type signatures, with several identifiers allowed
        // // for every signature.
        // type_signatures: $ => seq(
        //     $.vopen,
        //     $._type_signatures1,
        //     $.vclose
        // ),
        //
        // // Inside the layout block.
        // _type_signatures1: $ => sepBy1($.semi, $._type_signature),
        // _type_signature: $ => seq(
        //     repeat1($.name),
        //     ':',
        //     $.expr
        // ),
        //
        // A variant of TypeSignatures which uses ArgTypeSigs instead of _type_signature
        // arg_type_signatures: $ => seq(
        //     $.vopen,
        //     $._arg_type_signatures1,
        //     $.vclose
        // ),
        //
        // _arg_type_signatures1: $ => sepBy1($.semi, $._arg_type_signature),
        //
        // // A variant of _type_signature where any sub-sequence of names can be
        // // marked as hidden or irrelevant using braces and dots:
        // // {n1 .n2} n3 .n4 {n5} .{n6 n7} ... : Type.
        // _arg_type_signature: $ => choice(
        //     seq(optional('overlap'), $.arg_names, ':', $.expr),
        //     seq('instance', prec.left(sepBy1($.semi, $.arg_type_signatures)))
        // ),
        //
        // // Record declarations, including an optional record constructor name.
        // record_declarations: $ => seq(
        //     $.vopen,
        //     choice(
        //         $.record_directives1,
        //         seq(optional($.record_directives1), $.semi, $._declarations1),
        //         $._declarations1
        //     ),
        //     $.vclose
        // ),
        //
        // record_directives1: $ => sepBy1($.semi, $.record_directive),
        //
        // record_directive: $ => choice(
        //     $.record_constructor_name,
        //     $.record_induction,
        //     $.record_eta,
        // ),
        //
        // record_induction: $ => choice(
        //     'inductive',
        //     'coinductive'
        // ),
        //
        // record_eta: $ => choice(
        //     'eta-equality',
        //     'no-eta-equality'
        // ),


        // Arbitrary declarations
        declarations: $ => seq(
            $.vopen,
            $._declarations1,
            $.vclose
        ),

        // Arbitrary declarations (possibly empty)
        _declarations0: $ => choice(
            seq($.vopen, $.vclose),
            $.declarations
        ),
        _declarations1: $ => prec.right(sepBy1($.semi, $._declaration)),
    }
});

////////////////////////////////////////////////////////////////////////
// Generic combinators
////////////////////////////////////////////////////////////////////////

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

////////////////////////////////////////////////////////////////////////
// Language-specific combinators
////////////////////////////////////////////////////////////////////////

function maybeDotted(rule) {
    return choice(
        rule,               // Relevant
        seq('.', rule),     // Irrelevant
        seq('..', rule),    // NonStrict
    )
}

function bracketed(rule) {
    return choice(
        seq('(', rule, ')'),    // (   )
        seq('{', rule, '}'),    // {   }
        seq('{{', rule, '}}'),  // {{ }}
    )
}
