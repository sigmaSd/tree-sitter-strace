/// <reference path="./grammar.d.ts" />

module.exports = grammar({
  name: "strace",
  rules: {
    source_file: ($) => repeat(choice($.line, $.signal, $.exit)),
    line: ($) =>
      seq(
        optional($.pid),
        choice(
          $.syscall,
          seq("<...", $.syscall, "resumed>", optional("=>"), optional(","))
        ),
        $.parameters,
        optional(
          seq(
            "=",
            $.returnValue,
            $._newline),
        )),

    signal: ($) => seq("---", $.value, $.dict, "---"),
    pid: $ => $.integer,
    syscall: () => /[a-z][a-z0-9_]*/,
    parameters: ($) =>
      seq(optional("("), repeat(seq($.parameter, optional(","),)), choice("<unfinished ...>", ")")),

    parameter: ($) =>
      seq(
        choice(
          $.string,
          $.list,
          $.values,
          $.dict,
          $.dictFn,
          "NULL",
        ),
        optional($.comment),
        optional("..."),
      ),
    integer: () => /-?\d+/,
    string: $ => seq(
      '"',
      repeat(choice(
        alias(token.immediate(prec(1, /[^\\"\n]+/)),
          $.string_content),
        $._escape_sequence,
      )),
      '"'),
    _escape_sequence: _ => token(prec(1, seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/,
      ),
    ))),

    list: ($) =>
      seq(
        optional('~'),
        "[",
        repeat(seq($.parameter, optional(","))),
        "]",
      ),
    pointer: () => /0x[0-9a-fA-F]+/,
    values: ($) => seq($.value, repeat(seq(choice("|", "*"), $.value))),
    value: ($) => choice(/[A-Z0-9_]+/, $.integer, $.pointer),
    comment: () => /\/\*.*\*\//,
    _newline: () => /\r?\n/,

    returnValue: ($) =>
      seq(
        choice($.integer, $.pointer, "?"),
        optional($.errorName),
        optional($.errorDescription),
      ),
    errorName: () => /[A-Z]+/,
    errorDescription: ($) => seq(
      "(",
      repeat(choice(
        alias(token.immediate(prec(1, /[^\(\)]+/)),
          $.errorContent),
        seq("(", ")"),)),
      ")"
    ),

    dictFn: $ => seq($.dict, "=>", $.dict),
    dict: ($) => seq(
      "{",
      seq(
        $.dictElem,
        repeat(seq(",", $.dictElem))
      ),
      optional(seq(",", "...")),
      "}"),
    dictElem: ($) => choice(
      seq($.dictKey, "=", optional($._dictValue))
      ,
      seq($.macro, repeat1(seq("&&", $.macro)), "==", $.integer)
    ),
    macro: ($) => seq(/[A-Z]+/, '(', /[a-z]+/, ')'),
    dictKey: () => /[a-z_][a-z_0-9]+/,
    _dictValue: ($) => choice(seq($.syscall, $.parameters), $.parameter),

    exit: ($) => seq(optional($.pid), "+++", "exited", "with", $.integer, "+++"),
  },
});
