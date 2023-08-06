/// <reference path="./grammar.d.ts" />

module.exports = grammar({
  name: "strace",
  rules: {
    source_file: ($) => seq(repeat(choice($.line, $.signal)), optional($.exit)),
    line: ($) =>
      seq(
        $.syscall,
        $.parameters,
        "=",
        $.returnValue,
        $._newline,
      ),
    //--- SIGCHLD {si_signo=SIGCHLD, si_code=CLD_EXITED, si_pid=353295, si_uid=1002, si_status=0, si_utime=0, si_stime=0} ---

    signal: ($) => seq("---", $.value, $.dict, "---"),
    syscall: () => /[a-z][a-z0-9_]*/,
    parameters: ($) =>
      seq("(", repeat(seq($.parameter, optional(","))), ")"),

    parameter: ($) =>
      seq(
        choice(
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
    values: ($) => seq($.value, repeat(seq(choice("|", "*"), $.value))),
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
    errorDescription: ($) => seq(
      "(",
      choice(
        seq("flags", $.values),
        /[^f][a-zA-Z_ ]*/,
        // hardcode for easy success
        "Ioctl() ",
      ),
      ")"),

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
      seq($.dictKey, "=", $._dictValue)
      ,
      //wait4(353295, [{WIFEXITED(s) && WEXITSTATUS(s) == 0}], 0, NULL) = 353295
      seq($.macro, repeat1(seq("&&", $.macro)), "==", $.integer)
    ),
    macro: ($) => seq(/[A-Z]+/, '(', /[a-z]+/, ')'),
    dictKey: () => /[a-z_][a-z_0-9]+/,
    _dictValue: ($) => choice(seq($.syscall, $.parameters), $.parameter),

    exit: ($) => seq("+++", "exited", "with", $.integer, "+++"),
  },
});
