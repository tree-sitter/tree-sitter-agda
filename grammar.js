module.exports = grammar({
    name: 'xagda',
    rules: {
        source_file: $ => repeat($._top_level),

        _top_level: $ => choice(
            $.test
        ),

        test: $ => seq(
            'hello'
        )
    }
});
