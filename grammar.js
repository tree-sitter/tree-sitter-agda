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
        $._layout_close_brace
    ],

    conflicts: $ => [
        [$._record_directives1]
    ],

    rules: {
        source_file: $ => seq(
            $._vopen,
            repeat(seq($._declaration, $._semi)),
            optional($._vclose)
        ),

        err: $ => /.+/,

        int: $ => token(decimalLiteral),
        literal: $ => 'literal: undefined',
        set_n: $ => 'set_n: undefined',
        begin_import_dir: $ => 'begin_import_dir: undefined',


        ////////////////////////////////////////////////////////////////////////
        // Special lexemes
        ////////////////////////////////////////////////////////////////////////

        _semi: $ => choice(
            $._layout_semicolon,
            ';'
        ),

        _vopen: $ => $._layout_open_brace,
        _vclose: $ => $._layout_close_brace,
        _close: $ => choice(
            $._vclose
        ),

        ////////////////////////////////////////////////////////////////////////
        // Constants
        ////////////////////////////////////////////////////////////////////////

        _const_forall: $ => token(choice(
            'forall',
            '∀'
        )),

        _const_right_arrow: $ => token(choice(
            '->',
            '→'
        )),

        _const_lambda: $ => token(choice(
            '\\',
            'λ'
        )),
        ////////////////////////////////////////////////////////////////////////
        // Name
        // http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
        ////////////////////////////////////////////////////////////////////////

        // underscores are allowed
        name: $ => /[^\s\;\.\"\(\)\{\}\@]+/,


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
        _arg_names: $ => repeat1($.arg_name),
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
            seq($._typed_bindings1, $._const_right_arrow, $.expr),
            seq($._atoms1         , $._const_right_arrow, $.expr),
            seq($._expr1          , '='                 , $.expr),
            prec(-1, $._expr1) // lowest precedence
        ),

        // Level 1 Expressions: Application
        _expr1: $ => seq(
            repeat(seq($._atoms1, '|')),
            $._application
        ),

        _application: $ => seq(
            repeat($.atom),
            $._expr2
        ),

        // Level 2 Expressions: Lambdas and lets
        _expr2: $ => choice(
            // lambda bindings
            $.lambda,
            // forall
            seq($._const_forall, $.forall_bindings, $.expr),
            // let ... in
            $.let,
            // do
            $.do,


            // seq('quoteGoal', $.name, 'in', $.expr),
            // seq('tactic', $._atoms1),
            // seq('tactic', $._atoms1, '|', $._expr1),

            prec(-1, $.atom),
        ),

        do: $ => seq('do', $._vopen, repeat1(seq($._do_stmt, $._semi)), $._close),

        let: $ => prec.right(seq('let', $._declarations, seq('in', $.expr))),

        lambda: $ => choice(
            seq($._const_lambda,          $._lambda_binding, $._const_right_arrow, $.expr),
            seq($._const_lambda,     '{', $._lambda_clauses, '}'),
            seq($._const_lambda, 'where', $._vopen, $._lambda_where_clauses, $._close),
            seq($._const_lambda,          $._lambda_binding),
        ),

        // Level 3 Expressions: Atoms
        _atoms1: $ => repeat1($.atom), // right
        atom: $ => choice(
            $._atom_curly,
            $._atom_no_curly
        ),

        _atom_curly: $ => seq('{', optional($.expr), '}'),
        _atom_no_curly: $ => choice(
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
            seq($.name_at, $.atom),
            seq('.', $.atom),
            // seq('record', '{', optional($.record_assignments1), '}'),
            // seq('record', $._atom_no_curly, '{', optional($.field_assignments1), '}'),
            '...'
        ),
        //
        // record_assignments1: $ => sepR(';', $.record_assignment),
        // record_assignment: $ => choice(
        //     $.field_assignment,
        //     $.module_assignment,
        // ),
        //
        // module_assignment: $ => seq($.qualified_name, optional($.open_args1), optional($.import_directives1)),
        //
        //
        // field_assignments1: $ => sepR(';', $.field_assignment),
        // field_assignment: $ => seq($.name, '=', $.expr),

        // ////////////////////////////////////////////////////////////////////////
        // // Bindings
        // ////////////////////////////////////////////////////////////////////////

        _typed_bindings1: $ => repeat1($.typed_binding),

        // "LamBinds"
        _lambda_binding: $ => prec.right(choice(
            seq($.untyped_binding, $._lambda_binding),
            seq($.typed_binding, $._lambda_binding),
            $.untyped_binding,
            $.typed_binding,
            seq('(', ')'),
            seq('{', '}'),
            seq('{{', '}}')
        )),

        catchall_pragma: $ => "CatchallPragma: undefined",

        // "normal" lambda expressions that don't retract to "()"
        lambda_clause: $ => seq(
            optional($.catchall_pragma),
            repeat($.atom),
            $._const_right_arrow,
            $.expr
        ),

        lambda_clause_absurd: $ => seq(
            optional($.catchall_pragma),
            $._application
        ),

        _lambda_clause: $ => choice(
            $.lambda_clause,
            $.lambda_clause_absurd
        ),

        // Parses all extended lambda clauses except for a single absurd clause,
        // which is taken care of in _absurd_lambda_clause
        _lambda_clauses: $ => choice(
            seq($._lambda_clauses, $._semi, $._lambda_clause),
            seq($.lambda_clause_absurd, $._semi, $._lambda_clause),
            seq($.lambda_clause),
        ),

        // Parses all extended lambda clauses including a single absurd clause.
        // For λ where this is not taken care of in AbsurdLambda
        _lambda_where_clauses: $ => repeat1(seq($._lambda_clause, $._semi)),

        forall_bindings: $ => seq(
            $._typed_untyped_binding1,
            $._const_right_arrow
        ),

        // "DomainFreeBinding"
        untyped_binding: $ => maybeDotted(choice(
                seq($.binding_name),
                seq('{', $._application, '}'),
                seq('{{', $._application, '}}')
        )),

        // "TypedBindings"
        typed_binding: $ => choice(
            maybeDotted(bracketed(seq(
                $._application, ':', $.expr
            ))),
            // seq('(', $.open, ')'),
            // seq('(', 'let', repeat1($.declaration), ')')
        ),

        _typed_untyped_binding1: $ => repeat1(choice(
            $.untyped_binding,
            $.typed_binding
        )),

        // ////////////////////////////////////////////////////////////////////////
        // // Do-notation
        // ////////////////////////////////////////////////////////////////////////

        _do_stmt: $ => seq(
            $.expr,
            optional($.do_where)
        ),

        do_where: $ => seq(
            'where',
            $._vopen,
            $._lambda_where_clauses,
            $._close
        ),

        ////////////////////////////////////////////////////////////////////////
        // Module and Imports
        // http://agda.readthedocs.io/en/v2.5.3/language/module-system.html
        ////////////////////////////////////////////////////////////////////////

        open: $ => choice(
            seq(        'import', $.qualified_name, optional($._open_args1), repeat($.import_directive)),
            seq('open', 'import', $.qualified_name, optional($._open_args1), repeat($.import_directive)),
            seq('open',           $.qualified_name, optional($._open_args1), repeat($.import_directive)),
        ),
        _open_args1: $ => repeat1($.atom),

        import_directive: $ => choice(
            'public',
            seq('using', '(', $._comma_import_names1 ,')'),
            seq('hiding', '(', $._comma_import_names1 ,')'),
            seq('renaming', '(', sepR(';', $.renaming) ,')'),
            seq('using', '(' ,')'),
            seq('hiding', '(' ,')'),
            seq('renaming', '(' ,')')
        ),

        renaming: $ => seq(
            optional('module'),
            $.name,
            'to',
            $.name
        ),
        _import_name: $ => seq(
            optional('module'), $.name
        ),

        _comma_import_names1: $ => sepR(';', $._import_name),

        ////////////////////////////////////////////////////////////////////////
        // Function clauses
        ////////////////////////////////////////////////////////////////////////

        // Function declarations. The left hand side is parsed as an expression
        // to allow declarations like 'x::xs ++ ys = e', when '::' has higher
        // precedence than '++'.
        // function_clause also handle possibly dotted type signatures.
        function_clause: $ => prec.right(seq(
            $.lhs,
            optional($.rhs),
            optional($.where_clause)
        )),

        lhs: $ => prec.right(seq(
            $._expr1,
            optional($.rewrite_equations),
            optional($.with_expressions)
        )),

        rewrite_equations: $ => seq('rewrite', $._expr1),
        with_expressions: $ => seq('with', $._expr1),

        rhs: $ => choice(
            seq('=', $.expr),
            seq(':', $.expr)
        ),

        where_clause: $ => choice(
            seq(                            'where', $._declarations0),
            seq('module', $.name,           'where', $._declarations0),
            seq('module', $.anonymous_name, 'where', $._declarations0)
        ),

        ////////////////////////////////////////////////////////////////////////
        // Data
        ////////////////////////////////////////////////////////////////////////

        // Data declaration. Can be local.
        data: $ => seq(
            choice('data', 'codata'),
            $.name,
            optional($._typed_untyped_binding1),
            optional(seq(':', $.expr)),
            'where',
            $._declarations0_,
        ),

        // Data type signature. Found in mutual blocks.
        data_signature_only: $ => seq(
            'data',
            $.name,
            optional($._typed_untyped_binding1),
            ':',
            $.expr
        ),

        ////////////////////////////////////////////////////////////////////////
        // Record
        ////////////////////////////////////////////////////////////////////////

        record: $ => seq(
            'record',
            $._atom_no_curly,
            optional($._typed_untyped_binding1),
            optional(seq(':', $.expr)),
            'where',
            optional($.record_declarations_block)
        ),

        // Record type signature. In mutual blocks.
        record_signature_only: $ => seq(
            'record',
            $._atom_no_curly,
            optional($._typed_untyped_binding1),
            ':',
            $.expr
        ),


        // Record declarations, including an optional record constructor name.
        record_declarations_block: $ => seq(
            $._vopen,
            choice(
                optional($._record_directives1),    // directives only
                $._declarations1_,                  // declarations only

                // first directives then declarations
                seq(optional($._record_directives1), $._declarations1_),
            ),
            $._close
        ),

        _record_directives1: $ => repeat1(seq($._record_directive, $._semi)),

        _record_directive: $ => choice(
            $.record_constructor_name,
            $.record_induction,
            $.record_eta,
        ),

        // Declaration of record constructor name.
        record_constructor_name: $ => choice(
            seq('instance', $._vopen, 'constructor', $.name, $._semi, $._vclose),
            seq('constructor', $.name)
        ),

        record_induction: $ => choice(
            'inductive',
            'coinductive'
        ),

        record_eta: $ => choice(
            'eta-equality',
            'no-eta-equality'
        ),

        ////////////////////////////////////////////////////////////////////////
        // Field (in records)
        ////////////////////////////////////////////////////////////////////////

        // Field declarations.
        field: $ => seq(
            'field',
            $._arg_type_signatures_block
        ),

        // A variant of TypeSignatures which uses arg_type_signatures instead of
        // _type_signature
        _arg_type_signatures_block: $ => seq(
            $._vopen,
            $._arg_type_signatures1,
            $._close
        ),

        _arg_type_signatures1: $ => repeat1(seq($.arg_type_signature, $._semi)),

        // A variant of _type_signature where any sub-sequence of names can be
        // marked as hidden or irrelevant using braces and dots:
        // {n1 .n2} n3 .n4 {n5} .{n6 n7} ... : Type.
        arg_type_signature: $ => choice(
            seq(optional('overlap'), $._arg_names, ':', $.expr),
            seq('instance', $._arg_type_signatures_block)
        ),


        ////////////////////////////////////////////////////////////////////////
        // Other kinds of declarations
        ////////////////////////////////////////////////////////////////////////

        // Top-level definitions.
        _declaration: $ => choice(
            $.field,
            $.function_clause,
            $.data,
            $.data_signature_only,
            $.record,
            $.record_signature_only,
            $.infix,
            $.mutual,
            $.abstract,
            $.private,
            $.instance,
            $.macro,
            $.postulate,
            $.primitive,
            $.open,
            // $.module_macro,
            $.module,
            // $.pragma,
            // $.syntax,
            // $.patten_syn,
            // $.unquote_declaration
        ),

        // Fixity declarations.
        infix: $ => seq(
            choice('infix', 'infixl', 'infixr'),
            $.int,
            repeat1($.binding_name)
        ),

        // Mutually recursive declarations.
        mutual: $ => seq(
            'mutual',
            $._declarations0_
        ),

        // Abstract declarations.
        abstract: $ => seq(
            'abstract',
            $._declarations0_
        ),

        // Private can only appear on the top-level (or rather the module level)
        private: $ => seq(
            'private',
            $._declarations0_
        ),

        // Instance declarations.
        instance: $ => seq(
            'instance',
            $._declarations0_
        ),

        // Macro declarations.
        macro: $ => seq(
            'macro',
            $._declarations0_
        ),

        // Postulates.
        postulate: $ => seq(
            'postulate',
            $._declarations0_
        ),

        // Primitives. Can only contain type signatures.
        primitive: $ => seq(
            'primitive',
            $._type_signatures
        ),

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
        //     optional($._lambda_binding),
        //     '=',
        //     $.expr
        // ),
        //
        // hole_names1: $ => repeat1($.hole_name),
        // hole_name: $ => choice(
        //     $.name,
        //     seq('(', $._const_lambda, $.name, $._const_right_arrow, $.name, ')'),
        //     seq('(', $._const_lambda, '_',    $._const_right_arrow, $.name, ')'),
        //     seq('{', $.simple_hole, '}'),
        //     seq('{{', $.simple_hole, '}}'),
        //     seq('{', $.simple_hole, '=', $.simple_hole, '}'),
        //     seq('{{', $.simple_hole, '=', $.simple_hole, '}}')
        // ),
        //
        // simple_hole: $ => choice(
        //     $.name,
        //     seq($._const_lambda, $.name, $._const_right_arrow, $.name),
        //     seq($._const_lambda, '_',    $._const_right_arrow, $.name)
        // ),
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
        //         optional($._typed_untyped_binding1),
        //         '=',
        //         $.module_application,
        //         optional($.import_directives1)
        //     ),
        //     seq(
        //         'open',
        //         'module',
        //         $.name,
        //         optional($._typed_untyped_binding1),
        //         '=',
        //         $.module_application,
        //         optional($.import_directives1)
        //     )
        // ),

        // Module
        module: $ => seq(
            'module',
            choice($.qualified_name, $.anonymous_name),
            optional($._typed_untyped_binding1),
            'where',
            $._declarations0_
        ),


        ////////////////////////////////////////////////////////////////////////
        // Sequence of declarations
        ////////////////////////////////////////////////////////////////////////

        // Non-empty list of type signatures, with several identifiers allowed
        // for every signature.
        _type_signatures: $ => seq(
            $._vopen,
            $._type_signatures1,
            $._close
        ),

        // Inside the layout block.
        _type_signatures1: $ => repeat1(seq($.type_signature, $._semi)),
        type_signature: $ => seq(
            repeat1($.name),
            ':',
            $.expr
        ),

        // Arbitrary declarations
        _declarations: $ => seq(
            $._vopen,
            $._declarations1,
            $._close
        ),

        // Arbitrary declarations (possibly empty)
        _declarations0: $ => seq(
            $._vopen,
            optional($._declarations1),
            $._close
        ),
        _declarations0_: $ => seq(
            $._vopen,
            optional($._declarations1_),
            $._close
        ),
        _declarations2_: $ => seq(
            $._vopen,
            $._declarations1_,
            $._close
        ),

        _declarations1: $ => sepR($._semi, $._declaration),
        _declarations1_: $ => repeat1(seq($._declaration, $._semi)),
    }
});

////////////////////////////////////////////////////////////////////////
// Generic combinators
////////////////////////////////////////////////////////////////////////

function sepR(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepL(sep, rule) {
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
