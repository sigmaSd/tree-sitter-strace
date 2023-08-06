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
    syscall: () => /[a-zA-Z][a-zA-Z0-9_]*/,
    parameters: ($) =>
      seq("(", repeat(seq($.parameter, optional(","))), ")"),

    parameter: ($) =>
      seq(
        choice(
          $.integer,
          $.string,
          $.list,
          $.pointer,
          $.idents,
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
        repeat(seq(choice($.integer, $.string), optional(","))),
        "]",
      ),
    pointer: () => /0x[0-9a-fA-F]+/,
    idents: ($) => seq($.ident, repeat(seq("|", $.ident))),
    ident: () => /[a-zA-Z0-9_]+/,
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
    dictElem: ($) => seq($.ident, "=", $._dictValue),
    _dictValue: ($) => $.parameter,
    // TODO: dictvalue can be a syscall
    //_dictValue: ($) => choice(seq($.syscall, $.parameters), $.parameter),

    exit: ($) => seq("+++", "exited", "with", $.integer, "+++"),
  },
});
