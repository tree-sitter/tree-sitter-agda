module.exports = grammar({
    name: 'agda',

    rules: {
        source_file: $ => repeat($._top_level),

        _top_level: $ => choice(
            $.pragma,
            $.hello
        ),


        // http://agda.readthedocs.io/en/latest/language/pragmas.html
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





        hello: $ => 'hello'
    }
});
