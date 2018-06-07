// Lexer: https://github.com/agda/agda/blob/master/src/full/Agda/Syntax/Parser/Lexer.x
// Names: http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names

// const white       = /[\ \t\n\f\v\r]/;
// const white_notab = /[\   \n\f\v\r]/;
// const white_nl    = /[\     \f\v\r]/;

// numbers and literals
const number = /0x[0-9a-fA-F]+|[0-9]+/;
const integer = /\-?(0x[0-9a-fA-F]+|[0-9]+)/;
const exponent = /[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+)/;
const float = /(\-?(0x[0-9a-fA-F]+|[0-9]+)\.(0x[0-9a-fA-F]+|[0-9]+)([eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))?)|((0x[0-9a-fA-F]+|[0-9]+)[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))/;

// names
const name = /([^\s\;\.\"\(\)\{\}\@\'\\\_]|\\[^\sa-zA-Z]|\_[^\s\;\.\"\(\)\{\}\@])[^\s\;\.\"\(\)\{\}\@]*/;
const qualified_name = /(([^\s\;\.\"\(\)\{\}\@\'\\\_]|\\[^\sa-zA-Z]|\_[^\s\;\.\"\(\)\{\}\@])[^\s\;\.\"\(\)\{\}\@]*\.)*([^\s\;\.\"\(\)\{\}\@\'\\\_]|\\[^\sa-zA-Z]|\_[^\s\;\.\"\(\)\{\}\@])[^\s\;\.\"\(\)\{\}\@]*/;

module.exports = grammar({
    name: 'agda',

    extras: $ => [
        $.comment,
        /\s|\\n/
    ],

    externals: $ => [
        $._newline,
        $._indent,
        $._dedent
    ],

    conflicts: $ => [
        // [$._record_directives1],
    ],

    rules: {
        source_file: $ => optional(repeat1(choice(
            $._inline_declaration,
            $._block_declaration
        ))),

        ////////////////////////////////////////////////////////////////////////
        // Comment
        ////////////////////////////////////////////////////////////////////////

        comment: $ => token(choice(
            prec(100, seq('--', /.*/)),
            seq('{--}'),
            seq(
                '{-',
                /[^#]/,
                repeat(choice(
                    /[^-]/,     // anything but -
                    /-[^}]/,    // - not followed by }
                )),
                /-}/
            )
        )),

        ////////////////////////////////////////////////////////////////////////
        // Constants
        ////////////////////////////////////////////////////////////////////////

        _const_forall: $ => token(choice('forall', '∀')),
        _const_right_arrow: $ => token(choice('->','→')),
        _const_lambda: $ => token(choice('\\','λ')),

        ////////////////////////////////////////////////////////////////////////
        // Literals
        ////////////////////////////////////////////////////////////////////////

        // -- Literals
        // <0,code> \'             { litChar }
        // <0,code,pragma_> \"     { litString }
        // <0,code> @integer       { literal LitNat }
        // <0,code> @float         { literal LitFloat }
        integer: $ => integer,
        string: $ => /\".*\"/,
        literal: $ => choice(
            integer,
            /\".*\"/,
        ),
        ////////////////////////////////////////////////////////////////////////
        // Name
        // http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
        ////////////////////////////////////////////////////////////////////////

        name: $ => name,
        qualified_name: $ => qualified_name,

        anonymous_name: $ => '_',
        _binding_name: $ => choice(
            $.name,
            $.anonymous_name,
        ),

        // identifiers which may be surrounded by braces or dotted.
        _arg_names: $ => repeat1($.arg_name),
        arg_name: $ => choice(
            maybeDotted($.name),
            seq('{' , repeat1(maybeDotted($.name)), '}' ),
            seq('{{', repeat1(maybeDotted($.name)), '}}'),
            seq('.' , '{',  repeat1($.name), '}'),
            seq('..', '{',  repeat1($.name), '}'),
            seq('.' , '{{', repeat1($.name), '}}'),
            seq('..', '{{', repeat1($.name), '}}'),
        ),

        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        //
        // Declarations
        //
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////

        _declaration_block: $ => block($,
            $._inline_declaration,
            $._block_declaration,
        ),

        _declaration_block0: $ => choice(
            $._newline,
            $._declaration_block
        ),

        _inline_declaration: $ => choice(
            $.data_signature_only,
            $.record_signature_only,
            $.module_macro,
            $.open,
            $.pragma,
            $.infix,
            $.pattern,
            $.syntax,
        ),

        _block_declaration: $ => choice(
            $.data,
            $.function_clause,
            $.record,
            $.module,
            $.field,
            $.mutual,
            $.abstract,
            $.private,
            $.instance,
            $.macro,
            $.postulate,
            $.primitive,
        ),

        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        //
        // Inline Declarations
        //
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // Data type signature. Found in mutual blocks.
        data_signature_only: $ => seq(
            'data',
            $.name,
            optional($._typed_untyped_binding1),
            ':',
            $.expr,
            $._newline,
        ),

        ////////////////////////////////////////////////////////////////////////
        // Record type signature. In mutual blocks.
        record_signature_only: $ => seq(
            'record',
            $._atom_no_curly,
            optional($._typed_untyped_binding1),
            ':',
            $.expr,
            $._newline,
        ),

        ////////////////////////////////////////////////////////////////////////
        // Module instantiation
        module_macro: $ => choice(
            seq(
                'module',
                $.qualified_name,
                optional($._typed_untyped_binding1),
                '=',
                $.module_application,
                repeat($.import_directive),
                $._newline,
            ),
            seq(
                'open',
                'module',
                $.name,
                optional($._typed_untyped_binding1),
                '=',
                $.module_application,
                repeat($.import_directive),
                $._newline,
            )
        ),


        ////////////////////////////////////////////////////////////////////////
        // Open
        ////////////////////////////////////////////////////////////////////////
        open: $ => prec.right(choice(
            seq(        'import', $.qualified_name, optional($._open_args1), repeat($.import_directive), $._newline),
            seq('open', 'import', $.qualified_name, optional($._open_args1), repeat($.import_directive), $._newline),
            seq('open',           $.qualified_name, optional($._open_args1), repeat($.import_directive), $._newline),
        )),

        _open_args1: $ => prec.left(repeat1($.atom)),

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
        pragma: $ => seq(
            '{-#',
            repeat(choice(
                /[^#]/,
                /#[^-]/,
                /#\-[^}]/,
            )),
            '#-}',
            $._newline,
        ),

        ////////////////////////////////////////////////////////////////////////
        // Fixity declarations.
        infix: $ => seq(
            choice('infix', 'infixl', 'infixr'),
            $.integer,
            repeat1($._binding_name),
            $._newline,
        ),

        ////////////////////////////////////////////////////////////////////////
        // Pattern synonyms.
        pattern: $ => seq(
            'pattern',
            $.name,
            optional($._lambda_binding),
            '=',
            $.expr
        ),


        ////////////////////////////////////////////////////////////////////////
        // Syntax
        ////////////////////////////////////////////////////////////////////////

        syntax: $ => seq(
                'syntax',
                $.name,
                repeat1($.hole_name),
                '=',
                repeat1($.name),
                $._newline
        ),

        hole_name: $ => choice(
            $.name,
            seq('(', $._const_lambda, $.name, $._const_right_arrow, $.name, ')'),
            seq('(', $._const_lambda, '_',    $._const_right_arrow, $.name, ')'),
            seq('{', $.simple_hole, '}'),
            seq('{{', $.simple_hole, '}}'),
            seq('{', $.simple_hole, '=', $.simple_hole, '}'),
            seq('{{', $.simple_hole, '=', $.simple_hole, '}}')
        ),

        simple_hole: $ => choice(
            $.name,
            seq($._const_lambda, $.name, $._const_right_arrow, $.name),
            seq($._const_lambda, '_',    $._const_right_arrow, $.name)
        ),


        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        //
        // Block Declarations
        //
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        data: $ => seq(
            choice('data', 'codata'),
            alias($.name, $.data_name),
            optional($._typed_untyped_binding1),
            optional(seq(':', $.expr)),
            'where',
            $._declaration_block0,
        ),

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
            optional($.where_clause),
            $._newline,
        )),

        lhs: $ => prec.right(seq(
            $._expr1,
            optional($.rewrite_equations),
            optional($.with_expressions)
        )),

        rewrite_equations: $ => seq('rewrite', $._expr1),
        with_expressions: $ => seq('with', $.expr),

        rhs: $ => choice(
            seq('=', $.expr),
            seq(':', $.expr)
        ),

        where_clause: $ => choice(
            seq(                            'where', $._declaration_block0),
            seq('module', $.name,           'where', $._declaration_block0),
            seq('module', $.anonymous_name, 'where', $._declaration_block0)
        ),

        //////////////////////////////////////////////////////////////////////
        // Record
        //////////////////////////////////////////////////////////////////////

        record: $ => seq(
            'record',
            alias($._atom_no_curly, $.record_name),
            optional($._typed_untyped_binding1),
            optional(seq(':', $.expr)),
            'where',
            choice($._newline, $.record_declarations_block),
        ),

        // Record declarations, including an optional record constructor name.
        record_declarations_block: $ => indent($,
            repeat(choice(
                $._record_directive,
                $.record_constructor_instance,
            )),
            repeat(choice(
                $._inline_declaration,
                $._block_declaration)
            ),
        ),

        // Declaration of record constructor name.
        record_constructor_instance: $ => seq(
            'instance',
            block($,
                seq('constructor', $.name, $._newline)
            ),
        ),
        _record_directive: $ => seq(
            choice(
                $.record_constructor,
                $.record_induction,
                $.record_eta
            ),
            $._newline
        ),

        record_constructor: $ => seq('constructor', $.name),

        record_induction: $ => choice(
            'inductive',
            'coinductive'
        ),

        record_eta: $ => choice(
            'eta-equality',
            'no-eta-equality'
        ),

        _record_assignments1: $ => sepR(';', $._record_assignment),

        _record_assignment: $ => choice(
            $.field_assignment,
            $.module_assignment
        ),

        module_assignment: $ => seq(
            $.qualified_name,
            optional($._open_args1),
            repeat($.import_directive)
        ),


        _field_assignments1: $ => sepR(';', $.field_assignment),

        // the name should just be $.name rather than $.qualified_name,
        // made it more permissive to resolve conflicts
        // between $.field_assignment and $.module_assignment
        field_assignment: $ => seq($.qualified_name, '=', $.expr),

        ////////////////////////////////////////////////////////////////////////
        // Module and Imports
        // http://agda.readthedocs.io/en/v2.5.3/language/module-system.html
        ////////////////////////////////////////////////////////////////////////

        module: $ => seq(
            'module',
            alias(choice($.qualified_name, $.anonymous_name), $.module_name),
            optional($._typed_untyped_binding1),
            'where',
            $._declaration_block0
        ),

        module_application: $ => choice(
            prec(1, seq($.qualified_name, '{{', '...', '}}')),
            seq($.qualified_name, optional($._open_args1)),
        ),

        ////////////////////////////////////////////////////////////////////////
        // Field
        ////////////////////////////////////////////////////////////////////////

        field: $ => seq(
            'field',
            $._type_sig_block,
        ),

        // A variant of TypeSignatures which uses arg_type_signatures instead of
        // _type_signature
        _type_sig_block: $ => block($,
            $.type_sig,
            $.type_sig_instance,
        ),

        // A variant of _type_signature where any sub-sequence of names can be
        // marked as hidden or irrelevant using braces and dots:
        // {n1 .n2} n3 .n4 {n5} .{n6 n7} ... : Type.
        type_sig: $ => seq(
            optional('overlap'),
            $._arg_names,
            ':',
            $.expr,
            $._newline,
        ),
        type_sig_instance: $ => seq(
            'instance',
            $._type_sig_block
        ),

        ////////////////////////////////////////////////////////////////////////
        // Mutually recursive declarations.
        mutual: $ => seq(
            'mutual',
            $._declaration_block0
        ),

        ////////////////////////////////////////////////////////////////////////
        // Abstract declarations.
        abstract: $ => seq(
            'abstract',
            $._declaration_block0
        ),

        ////////////////////////////////////////////////////////////////////////
        // Private can only appear on the top-level (or rather the module level)
        private: $ => seq(
            'private',
            $._declaration_block0
        ),

        ////////////////////////////////////////////////////////////////////////
        // Instance declarations.
        instance: $ => seq(
            'instance',
            $._declaration_block0
        ),

        ////////////////////////////////////////////////////////////////////////
        // Macro declarations.
        macro: $ => seq(
            'macro',
            $._declaration_block0
        ),

        ////////////////////////////////////////////////////////////////////////
        // Postulates.
        postulate: $ => seq(
            'postulate',
            $._declaration_block0
        ),


        ////////////////////////////////////////////////////////////////////////
        // Primitives
        ////////////////////////////////////////////////////////////////////////

        // Can only contain type signatures.
        primitive: $ => seq(
            'primitive',
            $._simple_type_sig_block
        ),

        // For $.primitive only
        // Non-empty list of type signatures, with several identifiers allowed
        // for every signature.
        _simple_type_sig_block: $ => block($, $.simple_type_sig),
        simple_type_sig: $ => seq(
            repeat1($.name),
            ':',
            $.expr,
            $._newline,
        ),


        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        //
        // Expression-related
        //
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // Bindings
        ////////////////////////////////////////////////////////////////////////

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

        catchall_pragma: $ => seq('{-#', 'CATCHALL', '#-}'),

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

        // Appears inside a pair of brackets: λ { ... }
        // Parses all extended lambda clauses except for a single absurd clause
        _lambda_clauses_no_single_absurd: $ => choice(
            // length of 2 or above
            seq($._lambda_clauses_no_single_absurd, ';', $._lambda_clause),
            // length of 2
            seq($.lambda_clause_absurd, ';', $._lambda_clause),
            // length of 1
            seq($.lambda_clause),
        ),

        // Appears after "where"
        // Parses all extended lambda clauses including a single absurd clause.
        // For λ where this is not taken care of in AbsurdLambda
        _lambda_where_block: $ => block($,
            seq($.lambda_clause, $._newline),
            seq($.lambda_clause_absurd, $._newline),
        ),

        forall_bindings: $ => seq(
            $._typed_untyped_binding1,
            $._const_right_arrow
        ),



        // "DomainFreeBinding"
        untyped_binding: $ => maybeDotted(choice(
            seq($._binding_name),
            seq('{', $._application, '}'),
            seq('{{', $._application, '}}')
        )),

        _typed_bindings1: $ => prec.right(repeat1($.typed_binding)),

        // "TypedBindings"
        typed_binding: $ => choice(
            maybeDotted(bracketed(seq(
                $._application, ':', $.expr
            ))),
            seq('(', $.open, ')'),
            seq('(', 'let', $._let_declaration_block, ')')
        ),

        _typed_untyped_binding1: $ => repeat1(choice(
            $.untyped_binding,
            $.typed_binding
        )),

        ////////////////////////////////////////////////////////////////////////
        // Do-notation
        ////////////////////////////////////////////////////////////////////////

        _do_stmt: $ => seq(
            $.expr,
            choice(
                $._newline,
                $.do_where,
            ),
        ),

        do_where: $ => seq(
            'where',
            $._lambda_where_block,
        ),

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

            seq('quoteGoal', $.name, 'in', $.expr),
            seq('tactic', $._atoms1),
            seq('tactic', $._atoms1, '|', $._expr1),
            prec(-1, $.atom),
        ),

        do: $ => seq(
            'do',
            block($,
                $._do_stmt,
            ),
        ),

        function_clause_test: $ => seq(
            $.lhs,
            optional($.rhs),
            optional($.where_clause)
        ),

        _let_declaration_block: $ => choice(
            indent($, seq(
                sepL($._newline, $.function_clause_test),
                optional($._newline),
                'in',
                $.expr,
            )),
        ),

        let: $ => prec.right(seq(
            'let',
            $._let_declaration_block,
        )),

        lambda: $ => choice(
            seq($._const_lambda,          $._lambda_binding, $._const_right_arrow, $.expr),
            seq($._const_lambda,     '{', $._lambda_clauses_no_single_absurd, '}'),
            seq($._const_lambda, 'where', $._lambda_where_block),
            seq($._const_lambda,          $._lambda_binding),
        ),

        // Level 3 Expressions: Atoms
        _atoms1: $ => prec.right(repeat1($.atom)), // right
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
            'Set',
            'Prop',
            'quote',
            'quoteTerm',
            'unquote',
            seq('{{', $.expr, '}}'),
            seq('(', $.expr, ')'),
            seq('(|', $.expr, '|)'),
            seq('(', ')'),
            seq('{{', '}}'),
            // seq($.name_at, $.atom),
            seq('.', $.atom),
            seq('record', '{', optional($._record_assignments1), '}'),
            seq('record', $._atom_no_curly, '{', optional($._field_assignments1), '}'),
            '...'
        ),

    }
});

////////////////////////////////////////////////////////////////////////
// Generic combinators
////////////////////////////////////////////////////////////////////////

function sepR(sep, rule) {
    return seq(rule, repeat(seq(sep, rule)))
}

function sepL(sep, rule) {
    return seq(repeat(seq(rule, sep)), rule)
}

function indent($, ...rule) {
    return seq(
        $._indent,
        ...rule,
        $._dedent
    );
}

// A mix of the rules (inline or block) enclosed in a indentation
function block($, ...rules) {
    return indent($,
        repeat1(choice(...rules))
    );
}

// Like "block", except that the $._newline of the last element can be elided
function blockDangling($, inlines, blocks, dangling) {
    return indent($, seq(
        repeat(choice(
            seq(inlines, $._newline),
            blocks
        )),
        choice(
            seq(inlines, optional($._newline)),
            blocks
        ),
        dangling
    ));
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
