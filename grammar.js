const
      digit = /[0-9]/,
      decimalLiteral = seq(digit, repeat(digit));

module.exports = grammar({
    name: 'agda',

    extras: $ => [
        $.comment,
        /\s|\\n/
    ],

    conflicts: $ => [
        [$.instance],
        [$.mutual],
        [$.abstract],
        [$.private],
        [$.macro],
        [$.postulate],
        [$.open],
        [$.syntax],
        [$.where_clause],
        [$.record],
        [$.record, $.record_signature],
        [$.record_declarations],
        [$.module],
        [$.data],
        [$.data, $.data_signature],
        [$.declarations1],
        [$.infix],
        [$.open_args1],
        [$.rewrite_equations, $.with_expressions],
        [$.record_directives1],
        [$.module_application],
        [$.arg_type_signature],
        // [$.private],
    ],

    rules: {
        source_file: $ => repeat($.declaration),

        int: $ => token(decimalLiteral),

        ////////////////////////////////////////////////////////////////////////
        // Name
        // http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
        ////////////////////////////////////////////////////////////////////////

        semi: $ => ';',

        name: $ => /[^\s\_\;\.\"\(\)\{\}\@]+(\_[^\s\_\;\.\"\(\)\{\}\@]+)*/,
        qualified_name: $ => /[^\s\_\;\.\"\(\)\{\}\@]+(\.[^\s\_\;\.\"\(\)\{\}\@]+)*/,

        // A binding variable, can be '_'
        binding_name: $ => choice(
            '_',
            $.name
        ),
        anonymous_name: $ => '_',

        _maybe_dotted_name: $ => maybeDotted($.name),
        _maybe_dotted_names: $ => repeat1(maybeDotted($.name)),

        // identifiers which may be surrounded by braces or dotted.
        arg_names: $ => repeat1($.arg_name),
        arg_name: $ => choice(
            $._maybe_dotted_name,
            seq('{' , $._maybe_dotted_names, '}'),
            seq('{{', $._maybe_dotted_names, '}}'),
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

        lambda_clauses: $ => 'lambda_clauses: undefined',
        lambda_where_clauses: $ => 'lambda_where_clauses: undefined',
        forall_bindings: $ => 'forall_bindings: undefined',
        literal: $ => 'literal: undefined',
        set_n: $ => 'set_n: undefined',
        begin_import_dir: $ => 'begin_import_dir: undefined',
        ////////////////////////////////////////////////////////////////////////
        // Expressions
        ////////////////////////////////////////////////////////////////////////

        expr: $ => choice(
            seq($.tele_arrow, $.expr),
            seq($.expr3s1, '->', $.expr),
            seq($.expr1, '=', $.expr),
        ),

        // Level 2 Expressions: Application
        expr1: $ => choice(
            seq($.expr3s1, '|', $.expr1),
            $.application
        ),

        // expr3 expr3 expr3 ... expr3 expr2
        application: $ => choice(
            $.expr2,                        //  NIL
            seq($.expr3, $.application)     //  CONS
        ),

        // Level 2 Expressions: Lambdas and lets
        expr2: $ => prec(2, choice(
            seq('\\', $.lambda_bindings, '->', $.expr),
            $.extended_or_absurd_lambda,
            seq('forall', $.forall_bindings, $.expr),
            seq('let', repeat1($.declaration), optional(seq('in', $.expr))),
            seq('do', repeat1($.do_stmt)),
            $.expr3,
            seq('forall', $.name, 'in', $.expr),
            prec(4, seq('tactic', $.expr3s1)),
            prec(4, seq('tactic', $.expr3s1, '|', $.expr1))
        )),

        extended_or_absurd_lambda: $ => choice(
            seq('\\',     '{', $.lambda_clauses, '}'),
            seq('\\', 'where', $.lambda_where_clauses),
            seq('\\',          $.lambda_bindings)
        ),

        expr3s1: $ => choice(
            prec.left(3, $.expr3),
            prec.left(2, seq($.expr3s1, $.expr3))
        ),

        // Level 3 Expressions: Atoms
        expr3_curly: $ => seq('{', optional($.expr), '}'),

        expr3_no_curly: $ => choice(
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
            seq($.name, '@', $.expr3),
            seq('.', $.expr3),
            seq('record', '{', optional($.record_assignments1), '}'),
            seq('record', $.expr3_no_curly, '{', optional($.field_assignments1), '}'),
            '...'
        ),

        expr3: $ => choice(
            $.expr3_curly,
            $.expr3_no_curly
        ),

        record_assignments1: $ => sepBy1(';', $.record_assignment),
        record_assignment: $ => choice(
            $.field_assignment,
            $.module_assignment,
        ),

        module_assignment: $ => seq($.qualified_name, optional($.open_args1), optional($.import_directives1)),


        field_assignments1: $ => sepBy1(';', $.field_assignment),
        field_assignment: $ => seq($.name, '=', $.expr),

        ////////////////////////////////////////////////////////////////////////
        // Bindings
        ////////////////////////////////////////////////////////////////////////

        tele_arrow: $ => seq(
            repeat1($.typed_bindings),
            '->'
        ),

        // "LamBinds"
        lambda_bindings: $ => choice(
            prec.right(2, seq($.untyped_bindings, $.lambda_bindings)),
            prec.right(2, seq($.typed_bindings, $.lambda_bindings)),
            $.untyped_bindings,
            $.typed_bindings,
            seq('(', ')'),
            seq('{', '}'),
            seq('{{', '}}')
        ),

        // "DomainFreeBinding"
        untyped_bindings: $ => maybeDotted(choice(
                seq('(', $.binding_name, ')'),
                seq('{', $.application, '}'),
                seq('{{', $.application, '}}')
        )),

        // "TypedBindings"
        typed_bindings: $ => choice(
            maybeDotted(bracketed(seq(
                $.application, ':', $.expr
            ))),
            seq('(', $.open, ')'),
            seq('(', 'let', repeat1($.declaration), ')')
        ),

        typed_untyped_bindings1: $ => repeat1(choice(
            $.untyped_bindings,
            $.typed_bindings
        )),

        ////////////////////////////////////////////////////////////////////////
        // Do-notation
        ////////////////////////////////////////////////////////////////////////

        do_stmt: $ => seq(
            prec(2, $.expr),
            optional($.do_where)
        ),

        do_where: $ => seq(
            'where',
            $.lambda_where_clauses
        ),

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
        // comma_import_names: $ => optional($.comma_import_names1),
        comma_import_names1: $ => sepBy1(';', $.import_name),


        // module: $ => seq(
        //     'module',
        //     choice(
        //         $.qualified_name,
        //         $.anonymous_name
        //     ),
        //     optional($.typed_untyped_bindings1),
        //     'where'
        // ),
        //

        ////////////////////////////////////////////////////////////////////////
        // Function clauses
        ////////////////////////////////////////////////////////////////////////

        lhs: $ => seq(
            $.expr1,
            optional($.rewrite_equations),
            optional($.with_expressions)
        ),

        rewrite_equations: $ => seq('with', $.expr1),
        with_expressions: $ => seq('with', $.expr1),

        hole_content: $ => choice(
            $.expr,
            optional($.rewrite_equations)
        ),

        where_clause: $ => choice(
            $.expr,
            seq(                            'where', optional($.declarations1)),
            seq('module', $.name,           'where', optional($.declarations1)),
            seq('module', $.anonymous_name, 'where', optional($.declarations1))
        ),

        expr_where: $ => seq(
            $.expr,
            optional($.where_clause)
        ),

        ////////////////////////////////////////////////////////////////////////
        // Other kinds of declarations
        ////////////////////////////////////////////////////////////////////////

        // Top-level definitions.
        declaration: $ => choice(
            $.field,
            $.function_clause,
            $.data,
            $.data_signature,
            $.record,
            $.record_signature,
            $.infix,
            $.mutual,
            $.abstract,
            $.private,
            $.instance,
            $.macro,
            $.postulate,
            $.primitive,
            $.open,
            $.module_macro,
            $.module,
            $.pragma,
            $.syntax,
            $.patten_syn,
            $.unquote_declaration
        ),


        // Function declarations. The left hand side is parsed as an expression
        // to allow declarations like 'x::xs ++ ys = e', when '::' has higher
        // precedence than '++'.
        // function_clause also handle possibly dotted type signatures.
        function_clause: $ => seq(
            $.lhs,
            optional($.rhs),
            $.where_clause
        ),

        rhs: $ => choice(
            seq('=', $.expr),
            seq(':', $.expr)
        ),

        // Data declaration. Can be local.
        data: $ => seq(
            choice('data', 'codata'),
            $.name,
            optional($.typed_untyped_bindings1),
            optional(seq(':', $.expr)),
            'where',
            optional($.declarations1)
        ),

        // Data type signature. Found in mutual blocks.
        data_signature: $ => seq(
            'data',
            $.name,
            optional($.typed_untyped_bindings1),
            ':',
            $.expr
        ),

        // Record declarations.
        record: $ => seq(
            'record',
            $.expr3_no_curly,
            optional($.typed_untyped_bindings1),
            optional(seq(':', $.expr)),
            'where',
            optional($.record_declarations)
        ),

        // Record type signature. In mutual blocks.
        record_signature: $ => seq(
            'record',
            $.expr3_no_curly,
            optional($.typed_untyped_bindings1),
            ':',
            $.expr
        ),

        // Declaration of record constructor name.
        record_constructor_name: $ => seq(
            optional('instance'),
            'constructor',
            $.name
        ),

        // Fixity declarations.
        infix: $ => seq(
            choice('infix', 'infixl', 'infixr'),
            $.int,
            repeat1($.binding_name)
        ),

        // Field declarations.
        field: $ => seq(
            'field',
            $.arg_type_signature
        ),

        // Mutually recursive declarations.
        mutual: $ => seq(
            'mutual',
            optional($.declarations1)
        ),

        // Abstract declarations.
        abstract: $ => seq(
            'abstract',
            optional($.declarations1)
        ),

        // Private can only appear on the top-level (or rather the module level)
        private: $ => seq(
            'private',
            optional($.declarations1)
        ),

        // Instance declarations.
        instance: $ => seq(
            'instance',
            optional($.declarations1)
        ),

        // Macro declarations.
        macro: $ => seq(
            'macro',
            optional($.declarations1)
        ),

        // Postulates.
        postulate: $ => seq(
            'postulate',
            optional($.declarations1)
        ),

        // Primitives. Can only contain type signatures.
        primitive: $ => seq(
            'primitive',
            $.type_signature
        ),

        // Unquoting declarations.
        unquote_declaration: $ => choice(
            seq('unquoteDecl',                  '=', $.expr),
            seq('unquoteDecl', repeat1($.name), '=', $.expr),
            seq('unquoteDef' , repeat1($.name), '=', $.expr)
        ),

        // Syntax declaration (To declare eg. mixfix binders)
        syntax: $ => seq(
                'syntax',
                $.name,
                $.hole_names1,
                '=',
                repeat1($.name)
        ),

        // Pattern synonyms.
        patten_syn: $ => seq(
            'pattern',
            $.name,
            optional($.lambda_bindings),
            '=',
            $.expr
        ),

        hole_names1: $ => repeat1($.hole_name),
        hole_name: $ => choice(
            $.name,
            seq('(', '\\', $.name, '->', $.name, ')'),
            seq('(', '\\', '_',    '->', $.name, ')'),
            seq('{', $.simple_hole, '}'),
            seq('{{', $.simple_hole, '}}'),
            seq('{', $.simple_hole, '=', $.simple_hole, '}'),
            seq('{{', $.simple_hole, '=', $.simple_hole, '}}')
        ),

        simple_hole: $ => choice(
            $.name,
            seq('\\', $.name, '->', $.name),
            seq('\\', '_',    '->', $.name)
        ),

        open: $ => choice(
            seq(        'import', $.qualified_name, optional($.open_args1), optional($.import_directives1)),
            seq('open', 'import', $.qualified_name, optional($.open_args1), optional($.import_directives1)),
            seq('open',           $.qualified_name, optional($.open_args1), optional($.import_directives1)),
            seq('open',           $.qualified_name, '{{', '...', '}}', optional($.import_directives1))
        ),

        open_args1: $ => repeat1($.expr3),

        module_application: $ => choice(
            seq($.qualified_name, '{{', '...', '}}'),
            seq($.qualified_name, optional($.open_args1)),
        ),

        // Module instantiation
        module_macro: $ => choice(
            seq(
                'module',
                $.qualified_name,
                optional($.typed_untyped_bindings1),
                '=',
                $.module_application,
                optional($.import_directives1)
            ),
            seq(
                'open',
                'module',
                $.name,
                optional($.typed_untyped_bindings1),
                '=',
                $.module_application,
                optional($.import_directives1)
            )
        ),

        // Module
        module: $ => seq(
            'module',
            choice($.qualified_name, $.anonymous_name),
            optional($.typed_untyped_bindings1),
            'where',
            optional($.declarations1)
        ),


        ////////////////////////////////////////////////////////////////////////
        // Sequence of declarations
        ////////////////////////////////////////////////////////////////////////

        // Type signatures of the form "n1 n2 n3 ... : Type", with at least
        // one bound name.
        type_signature: $ => seq(
            repeat1($.name),
            ':',
            $.expr
        ),

        // A variant of type_signature where any sub-sequence of names can be
        // marked as hidden or irrelevant using braces and dots:
        // {n1 .n2} n3 .n4 {n5} .{n6 n7} ... : Type.
        arg_type_signature: $ => choice(
            seq($.arg_names, ':', $.expr),
            seq('instance', sepBy1($.semi, $.arg_type_signature))
        ),

        // Record declarations, including an optional record constructor name.
        record_declarations: $ => choice(
            $.record_directives1,
            seq(optional($.record_directives1), $.semi, $.declarations1),
            $.declarations1
        ),

        record_directives1: $ => sepBy1($.semi, $.record_directive),

        record_directive: $ => choice(
            $.record_constructor_name,
            $.record_induction,
            $.record_eta,
        ),

        record_induction: $ => choice(
            'inductive',
            'coinductive'
        ),

        record_eta: $ => choice(
            'eta-equality',
            'no-eta-equality'
        ),

        declarations1: $ => sepBy1($.semi, $.declaration),
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
