const
  letter = /[a-zA-Z]/,
  decimal_digit = /[0-9]/
  octal_digit = /[0-7]/
  hex_digit = /[0-9A-Fa-f]/

module.exports = grammar({
  name: 'proto',

  rules: {
    // proto = syntax { import | package | option | topLevelDef | emptyStatement }
    // topLevelDef = message | enum | service
    source_file: $ => seq(
      $.syntax,
      optional(repeat(choice(
        $.import,
        $.package,
        $.option,
        $.enum,
        $.empty_statement,
      ))),
    ),

    empty_statement: $ => ';',

    // syntax = "syntax" "=" quote "proto3" quote ";"
    syntax: $ => seq('syntax', '=', '"proto3"', ';'),

    // import = "import" [ "weak" | "public" ] strLit ";"
    import: $ => seq(
      'import',
      optional(choice('weak', 'public')),
      field('path', $.string),
      ';',
    ),

    // package = "package" fullIdent ";"
    package: $ => seq(
      'package',
      $.full_ident,
      ';',
    ),

    // option = "option" optionName  "=" constant ";"
    // optionName = ( ident | "(" fullIdent ")" ) { "." ident }
    option: $ => seq(
      'option',
      $._option_name,
      '=',
      $.constant,
      ';',
    ),

    _option_name: $ => seq(
      choice(
        $.identifier,
        seq('(', $.full_ident, ')'),
      ),
      repeat(seq(
        '.',
        $.identifier,
      )),
    ),

    // enum = "enum" enumName enumBody
    // enumBody = "{" { option | enumField | emptyStatement } "}"
    // enumField = ident "=" [ "-" ] intLit [ "[" enumValueOption { ","  enumValueOption } "]" ]";"
    // enumValueOption = optionName "=" constant
    enum: $ => seq(
      'enum',
      $.identifier,
      $.enum_body,
    ),

    enum_body: $ => seq(
      '{',
      repeat(choice(
        $.option,
        $.enum_field,
        $.empty_statement,
      )),
      '}',
    ),

    enum_field: $ => seq(
      $.identifier,
      '=',
      optional('-'),
      $.int_lit,
      optional(seq(
        '[',
        $.enum_value_option,
        repeat(seq(',', $.enum_value_option)),
        ']',
      )),
      ';',
    ),

    enum_value_option: $ => seq(
      $._option_name,
      '=',
      $.constant,
    ),

    // constant = fullIdent | ( [ "-" | "+" ] intLit ) | ( [ "-" | "+" ] floatLit ) | strLit | boolLit
    constant: $ => choice(
      $.full_ident,
      seq(
        optional(choice('-', '+')),
        $.int_lit,
      ),
      seq(
        optional(choice('-', '+')),
        $.float_lit,
      ),
      $.string,
      $.bool,
      // TODO
    ),

    // ident = letter { letter | decimalDigit | "_" }
    identifier: $ => token(seq(
      letter,
      optional(repeat(choice(
        letter,
        decimal_digit,
        '_',
      ))),
    )),

    // fullIdent = ident { "." ident }
    full_ident: $ => seq(
      $.identifier,
      optional(repeat(seq('.', $.identifier))),
    ),

    // boolLit = "true" | "false"
    bool: $ => choice($.true, $.false),
    true: $ => 'true',
    false: $ => 'false',

    // intLit     = decimalLit | octalLit | hexLit
    int_lit: $ => choice(
      $.decimal_lit,
      $.octal_lit,
      $.hex_lit,
    ),

    // decimalLit = ( "1" … "9" ) { decimalDigit }
    decimal_lit: $ => token(seq(
      /[1-9]/,
      repeat(decimal_digit),
    )),

    // octalLit   = "0" { octalDigit }
    octal_lit: $ => token(seq(
      '0',
      repeat(octal_digit),
    )),

    // hexLit     = "0" ( "x" | "X" ) hexDigit { hexDigit }
    hex_lit: $ => token(seq(
      '0',
      choice('x', 'X'),
      hex_digit,
      repeat(hex_digit),
    )),

    // floatLit = ( decimals "." [ decimals ] [ exponent ] | decimals exponent | "."decimals [ exponent ] ) | "inf" | "nan"
    // decimals  = decimalDigit { decimalDigit }
    // exponent  = ( "e" | "E" ) [ "+" | "-" ] decimals
    float_lit: $ => {
      const decimals = seq(
        decimal_digit,
        repeat(decimal_digit),
      );

      const exponent = seq(
        choice('e', 'E'),
        optional(choice('+', '-')),
        decimals,
      );

      return token(choice(
        seq(
          decimals,
          '.',
          optional(decimals),
          optional(exponent),
        ),
        seq(
          decimals,
          exponent,
        ),
        seq(
          '.',
          decimals,
          optional(exponent),
        ),
        'inf',
        'nan',
      ));
    },

    string: $ => choice(
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, /[^"\\]+/)),
          $.escape_sequence
        )),
        '"'
      ),

      seq(
        "'",
        repeat(choice(
          token.immediate(prec(1, /[^'\\]+/)),
          $.escape_sequence
        )),
        "'",
      ),
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    )),
  }
});
