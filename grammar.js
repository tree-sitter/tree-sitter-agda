module.exports = grammar({
  name: 'agda',

  externals: $ => [
      $._newline,
      $._indent,
      $._dedent
  ],

  conflicts: $ => [],

  rules: {
    source_file: $ => repeat(seq($._declaration, $._newline)),


    _declaration: $ => choice(
        $.hello,
    ),

    hello: $ => "hello"
  }
});
