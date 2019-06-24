module.exports = grammar({
  name: 'agda',

  externals: $ => [
    $.newline,
  ],

  rules: {
    source_file: $ => repeat($.hello),

    // 'hello' followed by newline
    hello: $ => seq('hello', $.newline)
  }
});
