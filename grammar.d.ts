// chatgpt generated types + manual editing
// only for convinience and making the editor less red
// might be incorrect

/**
 * Creates an alias for the specified rule.
 * @param {any} rule - The rule to alias.
 * @param {any} value - The alias value. Can be a string or a reference error object.
 * @returns {{ type: "ALIAS"; content: any; named: boolean; value: string | null; }} The alias object.
 */
declare function alias(rule: any, value: any): {
  type: "ALIAS";
  content: any;
  named: boolean;
  value: string | null;
};

/**
 * Creates a blank rule.
 * @returns {{ type: "BLANK"; }} The blank rule object.
 */
declare function blank(): {
  type: "BLANK";
};

/**
 * Creates a rule for a field with the specified name and content.
 * @param {string} name - The name of the field.
 * @param {any} rule - The content of the field.
 * @returns {{ type: "FIELD"; name: string; content: any; }} The field rule object.
 */
declare function field(name: string, rule: any): {
  type: "FIELD";
  name: string;
  content: any;
};

/**
 * Creates a choice rule from the provided elements.
 * @param {...any} elements - The elements to include in the choice rule.
 * @returns {{ type: "CHOICE"; members: any[]; }} The choice rule object.
 */
declare function choice(...elements: any[]): {
  type: "CHOICE";
  members: any[];
};

/**
 * Creates an optional rule from the provided value.
 * @param {any} value - The value to make optional.
 * @returns {{ type: "CHOICE"; members: any[]; }} The optional rule object.
 */
declare function optional(value: any): {
  type: "CHOICE";
  members: any[];
};

/**
 * Creates a precedence rule with the specified number and content.
 * @param {number} number - The precedence number.
 * @param {any} rule - The content of the precedence rule.
 * @returns {{ type: "PREC"; value: number; content: any; }} The precedence rule object.
 */
declare function prec(number: number, rule: any): {
  type: "PREC";
  value: number;
  content: any;
};

/**
 * Namespace for left-associative precedence rules.
 */
declare namespace prec {
  /**
   * Creates a left-associative precedence rule with the specified number and content.
   * @param {number} number - The precedence number.
   * @param {any} rule - The content of the left-associative precedence rule.
   * @returns {{ type: "PREC_LEFT"; value: number; content: any; }} The left-associative precedence rule object.
   */
  function left(number: number, rule: any): {
    type: "PREC_LEFT";
    value: number;
    content: any;
  };
}

/**
 * Namespace for right-associative precedence rules.
 */
declare namespace prec {
  /**
   * Creates a right-associative precedence rule with the specified number and content.
   * @param {number} number - The precedence number.
   * @param {any} rule - The content of the right-associative precedence rule.
   * @returns {{ type: "PREC_RIGHT"; value: number; content: any; }} The right-associative precedence rule object.
   */
  function right(number: number, rule: any): {
    type: "PREC_RIGHT";
    value: number;
    content: any;
  };
}

/**
 * Namespace for dynamic precedence rules.
 */
declare namespace prec {
  /**
   * Creates a dynamic precedence rule with the specified number and content.
   * @param {number} number - The precedence number.
   * @param {any} rule - The content of the dynamic precedence rule.
   * @returns {{ type: "PREC_DYNAMIC"; value: number; content: any; }} The dynamic precedence rule object.
   */
  function dynamic(number: number, rule: any): {
    type: "PREC_DYNAMIC";
    value: number;
    content: any;
  };
}

/**
 * Creates a repeat rule from the provided rule.
 * @param {any} rule - The rule to repeat.
 * @returns {{ type: "REPEAT"; content: any; }} The repeat rule object.
 */
declare function repeat(rule: any): {
  type: "REPEAT";
  content: any;
};

/**
 * Creates a repeat-one-or-more rule from the provided rule.
 * @param {any} rule - The rule to repeat one or more times.
 * @returns {{ type: "REPEAT1"; content: any; }} The repeat-one-or-more rule object.
 */
declare function repeat1(rule: any): {
  type: "REPEAT1";
  content: any;
};

/**
 * Creates a sequence rule from the provided elements.
 * @param {...any} elements - The elements to include in the sequence rule.
 * @returns {{ type: "SEQ"; members: any[]; }} The sequence rule object.
 */
declare function seq(...elements: any[]): {
  type: "SEQ";
  members: any[];
};

/**
 * Creates a symbol rule with the specified name.
 * @param {string} name - The name of the symbol rule.
 * @returns {{ type: "SYMBOL"; name: string; }} The symbol rule object.
 */
declare function sym(name: string): {
  type: "SYMBOL";
  name: string;
};

/**
 * Creates a token rule from the provided value.
 * @param {any} value - The value to use as a token.
 * @returns {{ type: "TOKEN"; content: any; }} The token rule object.
 */
declare function token(value: any): {
  type: "TOKEN";
  content: any;
};

/**
 * Namespace for immediate token rules.
 */
declare namespace token {
  /**
   * Creates an immediate token rule from the provided value.
   * @param {any} value - The value to use as an immediate token.
   * @returns {{ type: "IMMEDIATE_TOKEN"; content: any; }} The immediate token rule object.
   */
  function immediate(value: any): {
    type: "IMMEDIATE_TOKEN";
    content: any;
  };
}

/**
 * Normalizes a grammar rule or value to a consistent format.
 * @param {any} value - The rule or value to normalize.
 * @throws {Error} Throws an error if the value is undefined or the rule is invalid.
 * @returns {{ type: string; value: any; }} The normalized rule object.
 */
declare function normalize(value: any): { type: string; value: any; };

/**
 * Creates a RuleBuilder object for defining grammar rules.
 * @param {object} ruleMap - The map of existing rule names to check for conflicts.
 * @returns {Proxy} The RuleBuilder proxy object.
 */
declare function RuleBuilder(ruleMap: object): typeof Proxy;

interface BaseGrammar {
  name: string;
  word: string;
  rules: { [key: string]: ($: BaseGrammar["rules"]) => any };
  extras: { type: string; value: any }[];
  conflicts: string[][];
  precedences: { value: number; content: any }[][];
  externals: { type: string; value: any }[];
  inline: string[];
  supertypes: string[];
}
/**
 * Creates a new grammar based on the provided base grammar and options.
 * @param {BaseGrammar} baseGrammar - The base grammar object.
 * @param {object} options - The options for the new grammar.
 * @throws {Error} Throws an error if the grammar name is invalid or rules are not functions.
 * @returns {any} The generated grammar object.
 */
declare function grammar(baseGrammar: Partial<BaseGrammar>, options?: object): any

/**
 * Checks the number of arguments passed to a grammar rule function and throws an error if more than one rule argument is provided.
 * @param {number} ruleCount - The number of rules passed to the function.
 * @param {Function} caller - The calling function where the check is performed.
 * @param {string} callerName - The name of the calling function.
 * @param {string} [suffix] - An optional suffix to include in the error message.
 * @throws {Error} Throws an error if more than one rule argument is passed.
 */
declare function checkArguments(ruleCount: number, caller: Function, callerName: string, suffix?: string): void;

/**
 * Checks if the precedence value is missing (null or undefined) and throws an error if so.
 * @param {any} value - The precedence value to check.
 * @throws {Error} Throws an error if the precedence value is missing.
 */
declare function checkPrecedence(value: any): void;

