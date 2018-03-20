module.exports = grammar({
    name: 'agda',

    extras: $ => [
        $.comment,
        /\s|\\n/
    ],

    rules: {
        source_file: $ => repeat($._top_level),

        _top_level: $ => choice(
            $.pragma,
            $.module_decl
        ),

        ////////////////////////////////////////////////////////////////////////
        // Name
        // http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
        ////////////////////////////////////////////////////////////////////////

        name: $ => sepBy1(
            '_',
            $._name_part
        ),

        qualified_name: $ => sepBy1(
            '.',
            $._name_part
        ),

        anonymous_name: $ => '_',

        _name_part: $ => /[^\s\_\;\.\"\(\)\{\}\@]+/,

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
        // Module
        // http://agda.readthedocs.io/en/v2.5.3/language/module-system.html
        ////////////////////////////////////////////////////////////////////////

        module_decl: $ => seq(
            'module',
            choice(
                $.qualified_name,
                $.anonymous_name
            ),
            'where'
        )
    }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}
