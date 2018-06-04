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
        [$._record_directives1],
    ],

    rules: {
        source_file: $ => optional($._declarations1),
        // err: $ => /.+/,
        //
        // begin_import_dir: $ => 'begin_import_dir: undefined',
        //

        ////////////////////////////////////////////////////////////////////////
        // Special lexemes
        ////////////////////////////////////////////////////////////////////////

        //
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
            // $.do,

            seq('quoteGoal', $.name, 'in', $.expr),
            seq('tactic', $._atoms1),
            seq('tactic', $._atoms1, '|', $._expr1),
            prec(-1, $.atom),
        ),

        // do: $ => seq('do', $._vopen, repeat1(seq($._do_stmt, $._semi)), $._close),

        let: $ => prec.right(seq('let', $._declarations, seq('in', $.expr))),

        lambda: $ => choice(
            seq($._const_lambda,          $._lambda_binding, $._const_right_arrow, $.expr),
            seq($._const_lambda,     '{', $._lambda_clauses_no_single_absurd, '}'),
            seq($._const_lambda, 'where', indent($, $._lambda_where_clauses)),
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

        //
        // set: $ => choice(
        //     prec(10000, /Set[0-9\u2080-\u2089]/),
        //     'Set0',
        //     'Set',
        // ),

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
        // Bindings
        ////////////////////////////////////////////////////////////////////////

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

        // Parses all extended lambda clauses including a single absurd clause.
        // For λ where this is not taken care of in AbsurdLambda
        _lambda_where_clauses: $ => repeat1(seq($._lambda_clause, $._newline)),


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

        // "TypedBindings"
        typed_binding: $ => choice(
            maybeDotted(bracketed(seq(
                $._application, ':', $.expr
            ))),
            seq('(', $.open, ')'),
            seq('(', 'let', $._declarations, ')')
        ),

        _typed_untyped_binding1: $ => repeat1(choice(
            $.untyped_binding,
            $.typed_binding
        )),

        // ////////////////////////////////////////////////////////////////////////
        // // Do-notation
        // ////////////////////////////////////////////////////////////////////////
        //
        // _do_stmt: $ => seq(
        //     $.expr,
        //     optional($.do_where)
        // ),
        //
        // do_where: $ => seq(
        //     'where',
        //     $._vopen,
        //     $._lambda_where_clauses,
        //     $._close
        // ),
        //
        ////////////////////////////////////////////////////////////////////////
        // Module and Imports
        // http://agda.readthedocs.io/en/v2.5.3/language/module-system.html
        ////////////////////////////////////////////////////////////////////////

        module_application: $ => choice(
            prec(1, seq($.qualified_name, '{{', '...', '}}')),
            seq($.qualified_name, optional($._open_args1)),
        ),

        // Module instantiation
        module_macro: $ => choice(
            seq(
                'module',
                $.qualified_name,
                optional($._typed_untyped_binding1),
                '=',
                $.module_application,
                repeat($.import_directive)
            ),
            seq(
                'open',
                'module',
                $.name,
                optional($._typed_untyped_binding1),
                '=',
                $.module_application,
                repeat($.import_directive)
            )
        ),

        // Module
        module: $ => seq(
            'module',
            choice($.qualified_name, $.anonymous_name),
            optional($._typed_untyped_binding1),
            'where',
            $._declarations0
        ),

        open: $ => prec.right(choice(
            seq(        'import', $.qualified_name, optional($._open_args1), repeat($.import_directive)),
            seq('open', 'import', $.qualified_name, optional($._open_args1), repeat($.import_directive)),
            seq('open',           $.qualified_name, optional($._open_args1), repeat($.import_directive)),
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
            $._declarations0
        ),

        // Data type signature. Found in mutual blocks.
        data_signature_only: $ => seq(
            'data',
            $.name,
            optional($._typed_untyped_binding1),
            ':',
            $.expr,
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
        record_declarations_block: $ => indent($,
            choice(
                // 1. directives only (none or many)
                optional($._record_directives1),
                // 2. declarations only
                $._declarations1,
                // 3. both directives (none or many) and declarations
                seq(optional($._record_directives1), $._declarations1),
            )
        ),

        _record_directives1: $ => block(
            $._record_directive,
            $.record_constructor_instance,
            $._newline
        ),

        // Declaration of record constructor name.
        record_constructor_instance: $ => seq('instance', indent($, 'constructor', $.name)),
        record_constructor: $ => seq('constructor', $.name),


        _record_directive: $ => choice(
            $.record_constructor,
            $.record_induction,
            $.record_eta
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
            indent($, $._type_sig_block)
        ),

        // A variant of TypeSignatures which uses arg_type_signatures instead of
        // _type_signature
        _type_sig_block: $ => block(
            $.type_sig,
            $.type_sig_instance,
            $._newline
        ),

        // A variant of _type_signature where any sub-sequence of names can be
        // marked as hidden or irrelevant using braces and dots:
        // {n1 .n2} n3 .n4 {n5} .{n6 n7} ... : Type.
        type_sig: $ => seq(optional('overlap'), $._arg_names, ':', $.expr),
        type_sig_instance: $ => seq(
            'instance',
            indent($, $._type_sig_block)
        ),

        ////////////////////////////////////////////////////////////////////////
        // Pragma
        // http://agda.readthedocs.io/en/latest/language/pragmas.html
        ////////////////////////////////////////////////////////////////////////

        pragma: $ => token(seq(
            '{-#',
            repeat(choice(
              /[^#]/,
              /#[^-]/,
              /#\-[^}]/,
            )),
            '#-}'
        )),

        ////////////////////////////////////////////////////////////////////////
        // Other kinds of declarations
        ////////////////////////////////////////////////////////////////////////

        // Top-level definitions that ends with newline.
        _declaration: $ => choice(
            $.function_clause,
            $.data_signature_only,
            $.record_signature_only,
            $.infix,
            // $.module_macro,
            $.pragma,
            // $.syntax,
            // $.pattern,
            // $.unquote_declaration
        ),

        // Top-level definitions that indents.
        _declaration_block: $ => choice(
            $.field,
            $.data,
            $.record,
            $.open,

            // $.mutual,
            // $.abstract,
            // $.private,
            $.instance,
            // $.macro,
            // $.postulate,
            $.primitive,
            $.module,
        ),

        // Fixity declarations.
        infix: $ => seq(
            choice('infix', 'infixl', 'infixr'),
            $.integer,
            repeat1($._binding_name)
        ),

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

        // Instance declarations.
        instance: $ => seq(
            'instance',
            $._declarations0
        ),
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

        // Primitives. Can only contain type signatures.
        primitive: $ => seq(
            'primitive',
            $._simple_type_sig_block
        ),

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
        // // Syntax declaration (To declare eg. mixfix binders)
        // syntax: $ => seq(
        //         'syntax',
        //         $.name,
        //         repeat1($.hole_name),
        //         '=',
        //         repeat1($.name)
        // ),
        //
        // // Pattern synonyms.
        // pattern: $ => seq(
        //     'pattern',
        //     $.name,
        //     optional($._lambda_binding),
        //     '=',
        //     $.expr
        // ),
        //
        // // Unquoting declarations.
        // unquote_declaration: $ => choice(
        //     seq('unquoteDecl',                  '=', $.expr),
        //     seq('unquoteDecl', repeat1($.name), '=', $.expr),
        //     seq('unquoteDef' , repeat1($.name), '=', $.expr)
        // ),
        //
        //
        ////////////////////////////////////////////////////////////////////////
        // Sequence of declarations
        ////////////////////////////////////////////////////////////////////////

        // For $.primitive only
        // Non-empty list of type signatures, with several identifiers allowed
        // for every signature.
        _simple_type_sig_block: $ => indent($, $._simple_type_sigs1),
        _simple_type_sigs1: $ => repeat1(seq($.simple_type_sig, $._newline)),
        simple_type_sig: $ => seq(
            repeat1($.name),
            ':',
            $.expr
        ),


        // Arbitrary declarations (NOT empty)
        _declarations: $ => indent($, $._declarations1),

        // Arbitrary declarations (possibly empty)
        _declarations0: $ => choice(
            $._newline,
            $._declarations
        ),

        _declarations1: $ => block(
            $._declaration,
            $._declaration_block,
            $._newline
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

// lines that ends with some separator or blocks (that does not end with a separator)
function block(line, block, sep) {
    return seq(
        repeat(choice(
            seq(line, sep),   // a single line
            block,            // or a single block
        )),
        choice(
            seq(line, sep),   // a single line
            block,            // or a single block
        )
    )
}

// indent and then dedent
function indent($, ...rules) {
    return seq(
        $._indent,
        seq(...rules),
        $._dedent
    );
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
