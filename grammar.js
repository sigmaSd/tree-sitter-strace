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
          "NULL",
        ),
        optional($.comment),
        optional("..."),
      ),
    integer: () => /-?\d+/,
    string: ($) =>
      seq(
        '"',
        /[^"]*/,
        '"',
      ),
    list: ($) =>
      seq(
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
