/**
 * tree-sitter-europacss
 *
 * Extends tree-sitter-css with EuropaCSS at-rules:
 * @color, @space, @font, @fontsize, @responsive, @mq,
 * @column, @display, @grid, @iterate, @unpack, @abs100, @row, @if
 */

const CSS = require('tree-sitter-css/grammar')

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

    // --- EuropaCSS at-rule definitions ---

    // @color <target> <color_name> [breakpoint];
    europacss_color: $ =>
      seq(
        '@color',
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

    // @space <property> <value> [breakpoint];
    europacss_space: $ =>
      seq(
        '@space',
        field('property', $._europacss_value),
        field('value', $._europacss_value),
        optional(field('breakpoint', $._europacss_value)),
        ';',
      ),

    // @font <family> <size> [breakpoint];
    europacss_font: $ =>
      seq(
        '@font',
        field('family', $._europacss_value),
        field('size', $._europacss_value),
        optional(field('breakpoint', $._europacss_value)),
        ';',
      ),

    // @fontsize <size> [breakpoint];
    europacss_fontsize: $ =>
      seq(
        '@fontsize',
        field('size', $._europacss_value),
        optional(field('breakpoint', $._europacss_value)),
        ';',
      ),

    // @responsive <breakpoint> { ... }
    europacss_responsive: $ =>
      seq('@responsive', field('breakpoint', $._europacss_value), $.block),

    // @mq <query> { ... }
    europacss_mq: $ => seq('@mq', field('query', $._europacss_value), $.block),

    // @column <value> [breakpoint];
    europacss_column: $ =>
      seq(
        '@column',
        field('value', $._europacss_value),
        optional(field('breakpoint', $._europacss_value)),
        ';',
      ),

    // @display <value>;
    europacss_display: $ =>
      seq('@display', field('value', $._europacss_value), ';'),

    // @grid;
    europacss_grid: _ => seq('@grid', ';'),

    // @row;
    europacss_row: _ => seq('@row', ';'),

    // @abs100;
    europacss_abs100: _ => seq('@abs100', ';'),

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
        $.plain_value,
      ),

    // Breakpoint collection variables: $lg, $mobile, $desktop
    europacss_variable: _ => token(prec(1, /\$[\w-]+/)),

    // Range values: ->1023px, 1024px->1440px, 1441px->
    europacss_range: _ => token(prec(1, /[\w.]+->[\w.]*|->[\w.]+/)),

    // Slash-separated values: 3/12, flex/row/wrap, display/default
    europacss_slash_value: _ => token(prec(1, /[\w-]+(?:\/[\w-]+)+/)),

    // Dot-separated names: body.foreground, link.hover.text
    europacss_dotted_name: _ => token(prec(1, /[\w-]+(?:\.[\w-]+)+/)),
  },
})
