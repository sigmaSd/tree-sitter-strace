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
    syscall: ($) => /[a-zA-Z][a-zA-Z0-9_]*/,
    parameters: ($) =>
      seq("(", optional(seq($.parameter, repeat(seq(",", $.parameter)))), ")"),

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
    integer: ($) => /-?\d+/,
    string: ($) =>
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, /[^"\\]+/)),
          $._escape_sequence,
        )),
        '"',
      ),
    list: ($) =>
      seq(
        "[",
        repeat(seq($._list_element, ", ")),
        optional($._list_element),
        "]",
      ),
    _list_element: ($) =>
      choice(
        $.integer,
        $.string,
      ),
    pointer: ($) => /0x[0-9a-fA-F]+/,
    idents: ($) => seq($.ident, repeat(seq("|", $.ident))),
    ident: ($) => /[a-zA-Z0-9_*]+/,
    comment: ($) => /\/\*.*\*\//,
    _escape_sequence: ($) => token.immediate(seq("\\", /./)),
    _newline: ($) => /\r?\n/,
    rest: ($) => /[^\n]*/,
    returnValue: ($) =>
      seq(
        choice($.integer, $.pointer, "?"),
        optional($.errorName),
        optional($.errorDescription),
      ),
    errorName: ($) => /[A-Z]+/,
    errorDescription: ($) => seq("(", /[a-zA-Z ]+/, ")"),
    dict: ($) => seq(
      "{",
      seq(
        $.dictElem,
        repeat(seq(",", $.dictElem))
      ),
      optional(seq(",", "...")),
      "}"),
    dictElem: ($) => seq($.ident, "=", $.parameter),
    exit: ($) => seq("+++", "exited", "with", $.integer, "+++"),
  },
});
