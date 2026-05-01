/**
 * tree-sitter-europacss
 *
 * Extends tree-sitter-css with EuropaCSS at-rules:
 * @color, @space, @font, @fontsize, @responsive, @mq,
 * @column, @display, @grid, @iterate, @unpack, @abs100, @row, @if
 *
 * All statement-like rules support a ! suffix for !important (e.g. @space!)
 */

const CSS = require('tree-sitter-css/grammar')

// Helper: create a token that matches @keyword with optional ! suffix
// Uses regex so the lexer picks the longest match (@space! over @space)
function kw(name) {
  const bare = name.slice(1) // strip the @
  return token(prec(2, new RegExp('@' + bare + '!?')))
}

module.exports = grammar(CSS, {
  name: 'europacss',

  rules: {
    // Extend _block_item to include EuropaCSS at-rules
    _block_item: ($, original) =>
      choice(
        $.europacss_color,
        $.europacss_space,
        $.europacss_font,
        $.europacss_fontsize,
        $.europacss_responsive,
        $.europacss_mq,
        $.europacss_column,
        $.europacss_display,
        $.europacss_grid,
        $.europacss_row,
        $.europacss_abs100,
        $.europacss_iterate,
        $.europacss_unpack,
        $.europacss_if,
        original,
      ),

    // --- EuropaCSS keyword tokens (all support optional ! suffix) ---

    _kw_color: _ => token(prec(5, /@color!?/)),
    _kw_space: _ => token(prec(5, /@space!?/)),
    _kw_font: _ => token(prec(5, /@font!?/)),
    _kw_fontsize: _ => token(prec(5, /@fontsize!?/)),
    _kw_column: _ => token(prec(5, /@column!?/)),
    _kw_display: _ => token(prec(5, /@display!?/)),
    _kw_grid: _ => token(prec(5, /@grid!?/)),
    _kw_row: _ => token(prec(5, /@row!?/)),
    _kw_abs100: _ => token(prec(5, /@abs100!?/)),

    // --- EuropaCSS at-rule definitions ---

    // @color[!] <target> <color_name> [breakpoint];
    europacss_color: $ =>
      seq(
        alias($._kw_color, $.europacss_keyword),
        field('target', $.europacss_color_target),
        field('value', $._europacss_value),
        optional(field('breakpoint', $._europacss_value)),
        ';',
      ),

    europacss_color_target: _ =>
      choice(
        'fg',
        'bg',
        'fill',
        'stroke',
        'border',
        'border-top',
        'border-bottom',
        'border-left',
        'border-right',
      ),

    // @space[!] <property> <value> [breakpoint];
    europacss_space: $ =>
      seq(
        alias($._kw_space, $.europacss_keyword),
        field('property', $.plain_value),
        field('value', $._europacss_value),
        optional(field('breakpoint', $._europacss_value)),
        ';',
      ),

    // @font[!] <family> <size> [breakpoint];
    europacss_font: $ =>
      seq(
        alias($._kw_font, $.europacss_keyword),
        field('family', $._europacss_value),
        field('size', $._europacss_value),
        optional(field('breakpoint', $._europacss_value)),
        ';',
      ),

    // @fontsize[!] <size> [breakpoint];
    europacss_fontsize: $ =>
      seq(
        alias($._kw_fontsize, $.europacss_keyword),
        field('size', $._europacss_value),
        optional(field('breakpoint', $._europacss_value)),
        ';',
      ),

    // @responsive <breakpoint> { ... }
    europacss_responsive: $ =>
      seq('@responsive', field('breakpoint', $._europacss_value), $.block),

    // @mq <query> { ... }
    europacss_mq: $ => seq('@mq', field('query', $._europacss_value), $.block),

    // @column[!] <value> [breakpoint];
    europacss_column: $ =>
      seq(
        alias($._kw_column, $.europacss_keyword),
        field('value', $._europacss_value),
        optional(field('breakpoint', $._europacss_value)),
        ';',
      ),

    // @display[!] <value>;
    europacss_display: $ =>
      seq(
        alias($._kw_display, $.europacss_keyword),
        field('value', $._europacss_value),
        ';',
      ),

    // @grid[!];
    europacss_grid: $ => seq(alias($._kw_grid, $.europacss_keyword), ';'),

    // @row[!];
    europacss_row: $ => seq(alias($._kw_row, $.europacss_keyword), ';'),

    // @abs100[!];
    europacss_abs100: $ => seq(alias($._kw_abs100, $.europacss_keyword), ';'),

    // @iterate { ... }
    europacss_iterate: $ => seq('@iterate', $.block),

    // @unpack <value>;
    europacss_unpack: $ =>
      seq('@unpack', field('value', $._europacss_value), ';'),

    // @if <condition> { ... }
    europacss_if: $ => seq('@if', field('condition', $._europacss_value), $.block),

    // --- EuropaCSS value types ---

    _europacss_value: $ =>
      choice(
        $.europacss_variable,
        $.europacss_range,
        $.europacss_slash_value,
        $.europacss_dotted_name,
        $.parenthesized_value,
        $.integer_value,
        $.float_value,
        $.plain_value,
      ),

    // Breakpoint collection variables: $lg, $mobile, $desktop
    europacss_variable: _ => token(prec(1, /\$[\w-]+/)),

    // Range values: ->1023px, 1024px->1440px, 1441px->
    europacss_range: _ => token(prec(1, /[\w.]+->[\w.]*|->[\w.]+/)),

    // Slash-separated values: 3/12, flex/row/wrap, display/default
    europacss_slash_value: _ => token(prec(1, /[\w-]+(?:\/[\w-]+)+/)),

    // Dot-separated names: body.foreground, link.hover.text
    // Must start with a letter to avoid matching CSS values like 11.428vw
    europacss_dotted_name: _ => token(prec(1, /[a-zA-Z][\w-]*(?:\.[\w-]+)+/)),
  },
})
