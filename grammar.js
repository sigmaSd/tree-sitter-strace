/// <reference path="./grammar.d.ts" />

module.exports = grammar({
  name: "strace",
  rules: {
    source_file: ($) => seq(repeat($.line), optional($.exit)),
    line: ($) =>
      seq(
        $.syscall,
        $.parameters,
        "=",
        $.returnValue,
        $._newline,
      ),
    syscall: () => /[a-z][a-z0-9_]*/,
    parameters: ($) =>
      seq("(", repeat(seq($.parameter, optional(","))), ")"),

    parameter: ($) =>
      seq(
        choice(
          $.value,
          $.string,
          $.list,
          $.pointer,
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
    values: ($) => seq($.value, repeat1(seq(choice("|", "*"), $.value))),
    value: ($) => choice(/[A-Z0-9_]+/, $.integer),
    comment: () => /\/\*.*\*\//,
    _newline: () => /\r?\n/,

    returnValue: ($) =>
      seq(
        choice($.integer, $.pointer, "?"),
        optional($.errorName),
        optional($.errorDescription),
      ),
    errorName: () => /[A-Z]+/,
    errorDescription: () => seq("(", /[a-zA-Z ]+/, ")"),

    dictFn: $ => seq($.dict, "=>", $.dict),
    dict: ($) => seq(
      "{",
      seq(
        $.dictElem,
        repeat(seq(",", $.dictElem))
      ),
      optional(seq(",", "...")),
      "}"),
    dictElem: ($) => seq($.dictKey, "=", $._dictValue),
    dictKey: () => /[a-z_][a-z_0-9]+/,
    _dictValue: ($) => choice(seq($.syscall, $.parameters), $.parameter),
    // TODO: dictvalue can be a syscall
    // _dictValue: ($) => choice($.value,$.integer,repeat(g)),
    // array: ($) => seq('[', repeat(seq($.dict, optional(','))), ']'),

    exit: ($) => seq("+++", "exited", "with", $.integer, "+++"),
  },
});
