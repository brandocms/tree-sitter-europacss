#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 468
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 186
#define ALIAS_COUNT 9
#define TOKEN_COUNT 103
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 31

enum ts_symbol_identifiers {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  sym_nesting_selector = 14,
  anon_sym_STAR = 15,
  anon_sym_DOT = 16,
  anon_sym_has = 17,
  anon_sym_not = 18,
  anon_sym_is = 19,
  anon_sym_where = 20,
  anon_sym_host = 21,
  anon_sym_host_DASHcontext = 22,
  anon_sym_nth_DASHchild = 23,
  anon_sym_nth_DASHlast_DASHchild = 24,
  anon_sym_COLON_COLON = 25,
  anon_sym_POUND = 26,
  anon_sym_LBRACK = 27,
  anon_sym_EQ = 28,
  anon_sym_TILDE_EQ = 29,
  anon_sym_CARET_EQ = 30,
  anon_sym_PIPE_EQ = 31,
  anon_sym_STAR_EQ = 32,
  anon_sym_DOLLAR_EQ = 33,
  anon_sym_RBRACK = 34,
  anon_sym_GT = 35,
  anon_sym_TILDE = 36,
  anon_sym_PLUS = 37,
  anon_sym_PIPE = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_even = 41,
  anon_sym_odd = 42,
  anon_sym_of = 43,
  sym__nth_functional_notation = 44,
  anon_sym_COLON = 45,
  sym_important = 46,
  anon_sym_LPAREN2 = 47,
  anon_sym_and = 48,
  anon_sym_or = 49,
  anon_sym_only = 50,
  anon_sym_selector = 51,
  aux_sym_color_value_token1 = 52,
  anon_sym_SQUOTE = 53,
  aux_sym_string_value_token1 = 54,
  anon_sym_DQUOTE = 55,
  aux_sym_string_value_token2 = 56,
  sym_escape_sequence = 57,
  aux_sym_integer_value_token1 = 58,
  aux_sym_float_value_token1 = 59,
  sym_unit = 60,
  anon_sym_LBRACK2 = 61,
  anon_sym_DASH = 62,
  anon_sym_SLASH = 63,
  sym_identifier = 64,
  sym_at_keyword = 65,
  sym_js_comment = 66,
  sym_comment = 67,
  sym_plain_value = 68,
  sym__kw_color = 69,
  sym__kw_space = 70,
  sym__kw_font = 71,
  sym__kw_fontsize = 72,
  sym__kw_column = 73,
  sym__kw_column_offset = 74,
  sym__kw_display = 75,
  sym__kw_grid = 76,
  sym__kw_row = 77,
  sym__kw_abs100 = 78,
  anon_sym_fg = 79,
  anon_sym_bg = 80,
  anon_sym_fill = 81,
  anon_sym_stroke = 82,
  anon_sym_border = 83,
  anon_sym_border_DASHtop = 84,
  anon_sym_border_DASHbottom = 85,
  anon_sym_border_DASHleft = 86,
  anon_sym_border_DASHright = 87,
  anon_sym_ATresponsive = 88,
  anon_sym_ATmq = 89,
  anon_sym_ATiterate = 90,
  anon_sym_ATunpack = 91,
  anon_sym_ATif = 92,
  sym_europacss_comparison = 93,
  anon_sym_calc = 94,
  anon_sym_var = 95,
  sym_europacss_variable = 96,
  sym_europacss_range = 97,
  sym_europacss_slash_value = 98,
  sym_europacss_dotted_name = 99,
  sym__descendant_operator = 100,
  sym__pseudo_class_selector_colon = 101,
  sym___error_recovery = 102,
  sym_stylesheet = 103,
  sym_import_statement = 104,
  sym_media_statement = 105,
  sym_charset_statement = 106,
  sym_namespace_statement = 107,
  sym_keyframes_statement = 108,
  sym_keyframe_block_list = 109,
  sym_keyframe_block = 110,
  sym_supports_statement = 111,
  sym_postcss_statement = 112,
  sym_at_rule = 113,
  sym_rule_set = 114,
  sym_selectors = 115,
  sym_block = 116,
  sym__selector = 117,
  sym_universal_selector = 118,
  sym_class_selector = 119,
  sym_pseudo_class_selector = 120,
  sym__nth_child_pseudo_class_selector = 121,
  sym_pseudo_element_selector = 122,
  sym_id_selector = 123,
  sym_attribute_selector = 124,
  sym_child_selector = 125,
  sym_descendant_selector = 126,
  sym_sibling_selector = 127,
  sym_adjacent_sibling_selector = 128,
  sym_namespace_selector = 129,
  sym_pseudo_class_arguments = 130,
  sym_pseudo_class_with_selector_arguments = 131,
  sym_pseudo_class_nth_child_arguments = 132,
  sym_pseudo_element_arguments = 133,
  sym_declaration = 134,
  sym_last_declaration = 135,
  sym__query = 136,
  sym_feature_query = 137,
  sym_parenthesized_query = 138,
  sym_binary_query = 139,
  sym_unary_query = 140,
  sym_selector_query = 141,
  sym__value = 142,
  sym_parenthesized_value = 143,
  sym_color_value = 144,
  sym_string_value = 145,
  sym_integer_value = 146,
  sym_float_value = 147,
  sym_grid_value = 148,
  sym_call_expression = 149,
  sym_binary_expression = 150,
  sym_arguments = 151,
  sym_class_name = 152,
  sym_europacss_color = 153,
  sym_europacss_color_target = 154,
  sym_europacss_space = 155,
  sym_europacss_font = 156,
  sym_europacss_fontsize = 157,
  sym_europacss_responsive = 158,
  sym_europacss_mq = 159,
  sym_europacss_column = 160,
  sym_europacss_column_offset = 161,
  sym_europacss_display = 162,
  sym_europacss_grid = 163,
  sym_europacss_row = 164,
  sym_europacss_abs100 = 165,
  sym_europacss_iterate = 166,
  sym_europacss_unpack = 167,
  sym_europacss_if = 168,
  sym__europacss_value = 169,
  sym_europacss_calc = 170,
  sym_europacss_var_ref = 171,
  aux_sym_stylesheet_repeat1 = 172,
  aux_sym_import_statement_repeat1 = 173,
  aux_sym_keyframe_block_list_repeat1 = 174,
  aux_sym_postcss_statement_repeat1 = 175,
  aux_sym_selectors_repeat1 = 176,
  aux_sym_block_repeat1 = 177,
  aux_sym_pseudo_class_arguments_repeat1 = 178,
  aux_sym_declaration_repeat1 = 179,
  aux_sym_string_value_repeat1 = 180,
  aux_sym_string_value_repeat2 = 181,
  aux_sym_grid_value_repeat1 = 182,
  aux_sym_arguments_repeat1 = 183,
  aux_sym_class_name_repeat1 = 184,
  aux_sym_europacss_calc_repeat1 = 185,
  alias_sym_attribute_name = 186,
  alias_sym_feature_name = 187,
  alias_sym_function_name = 188,
  alias_sym_id_name = 189,
  alias_sym_keyframes_name = 190,
  alias_sym_keyword_query = 191,
  alias_sym_namespace_name = 192,
  alias_sym_property_name = 193,
  alias_sym_tag_name = 194,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_has] = "class_name",
  [anon_sym_not] = "not",
  [anon_sym_is] = "class_name",
  [anon_sym_where] = "class_name",
  [anon_sym_host] = "class_name",
  [anon_sym_host_DASHcontext] = "class_name",
  [anon_sym_nth_DASHchild] = "class_name",
  [anon_sym_nth_DASHlast_DASHchild] = "class_name",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_even] = "plain_value",
  [anon_sym_odd] = "plain_value",
  [anon_sym_of] = "of",
  [sym__nth_functional_notation] = "plain_value",
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_js_comment] = "js_comment",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__kw_color] = "europacss_keyword",
  [sym__kw_space] = "europacss_keyword",
  [sym__kw_font] = "europacss_keyword",
  [sym__kw_fontsize] = "europacss_keyword",
  [sym__kw_column] = "europacss_keyword",
  [sym__kw_column_offset] = "europacss_keyword",
  [sym__kw_display] = "europacss_keyword",
  [sym__kw_grid] = "europacss_keyword",
  [sym__kw_row] = "europacss_keyword",
  [sym__kw_abs100] = "europacss_keyword",
  [anon_sym_fg] = "fg",
  [anon_sym_bg] = "bg",
  [anon_sym_fill] = "fill",
  [anon_sym_stroke] = "stroke",
  [anon_sym_border] = "border",
  [anon_sym_border_DASHtop] = "border-top",
  [anon_sym_border_DASHbottom] = "border-bottom",
  [anon_sym_border_DASHleft] = "border-left",
  [anon_sym_border_DASHright] = "border-right",
  [anon_sym_ATresponsive] = "@responsive",
  [anon_sym_ATmq] = "@mq",
  [anon_sym_ATiterate] = "@iterate",
  [anon_sym_ATunpack] = "@unpack",
  [anon_sym_ATif] = "@if",
  [sym_europacss_comparison] = "europacss_comparison",
  [anon_sym_calc] = "calc",
  [anon_sym_var] = "var",
  [sym_europacss_variable] = "europacss_variable",
  [sym_europacss_range] = "europacss_range",
  [sym_europacss_slash_value] = "europacss_slash_value",
  [sym_europacss_dotted_name] = "europacss_dotted_name",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__pseudo_class_selector_colon] = ":",
  [sym___error_recovery] = "__error_recovery",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_postcss_statement] = "postcss_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym__nth_child_pseudo_class_selector] = "_nth_child_pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_pseudo_class_with_selector_arguments] = "arguments",
  [sym_pseudo_class_nth_child_arguments] = "arguments",
  [sym_pseudo_element_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_string_value] = "string_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_grid_value] = "grid_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_class_name] = "class_name",
  [sym_europacss_color] = "europacss_color",
  [sym_europacss_color_target] = "europacss_color_target",
  [sym_europacss_space] = "europacss_space",
  [sym_europacss_font] = "europacss_font",
  [sym_europacss_fontsize] = "europacss_fontsize",
  [sym_europacss_responsive] = "europacss_responsive",
  [sym_europacss_mq] = "europacss_mq",
  [sym_europacss_column] = "europacss_column",
  [sym_europacss_column_offset] = "europacss_column_offset",
  [sym_europacss_display] = "europacss_display",
  [sym_europacss_grid] = "europacss_grid",
  [sym_europacss_row] = "europacss_row",
  [sym_europacss_abs100] = "europacss_abs100",
  [sym_europacss_iterate] = "europacss_iterate",
  [sym_europacss_unpack] = "europacss_unpack",
  [sym_europacss_if] = "europacss_if",
  [sym__europacss_value] = "_europacss_value",
  [sym_europacss_calc] = "europacss_calc",
  [sym_europacss_var_ref] = "europacss_var_ref",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_postcss_statement_repeat1] = "postcss_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_string_value_repeat1] = "string_value_repeat1",
  [aux_sym_string_value_repeat2] = "string_value_repeat2",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_class_name_repeat1] = "class_name_repeat1",
  [aux_sym_europacss_calc_repeat1] = "europacss_calc_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_has] = sym_class_name,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_is] = sym_class_name,
  [anon_sym_where] = sym_class_name,
  [anon_sym_host] = sym_class_name,
  [anon_sym_host_DASHcontext] = sym_class_name,
  [anon_sym_nth_DASHchild] = sym_class_name,
  [anon_sym_nth_DASHlast_DASHchild] = sym_class_name,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_even] = sym_plain_value,
  [anon_sym_odd] = sym_plain_value,
  [anon_sym_of] = anon_sym_of,
  [sym__nth_functional_notation] = sym_plain_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_value_token1] = aux_sym_string_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_value_token2] = aux_sym_string_value_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_js_comment] = sym_js_comment,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__kw_color] = sym__kw_color,
  [sym__kw_space] = sym__kw_color,
  [sym__kw_font] = sym__kw_color,
  [sym__kw_fontsize] = sym__kw_color,
  [sym__kw_column] = sym__kw_color,
  [sym__kw_column_offset] = sym__kw_color,
  [sym__kw_display] = sym__kw_color,
  [sym__kw_grid] = sym__kw_color,
  [sym__kw_row] = sym__kw_color,
  [sym__kw_abs100] = sym__kw_color,
  [anon_sym_fg] = anon_sym_fg,
  [anon_sym_bg] = anon_sym_bg,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_border] = anon_sym_border,
  [anon_sym_border_DASHtop] = anon_sym_border_DASHtop,
  [anon_sym_border_DASHbottom] = anon_sym_border_DASHbottom,
  [anon_sym_border_DASHleft] = anon_sym_border_DASHleft,
  [anon_sym_border_DASHright] = anon_sym_border_DASHright,
  [anon_sym_ATresponsive] = anon_sym_ATresponsive,
  [anon_sym_ATmq] = anon_sym_ATmq,
  [anon_sym_ATiterate] = anon_sym_ATiterate,
  [anon_sym_ATunpack] = anon_sym_ATunpack,
  [anon_sym_ATif] = anon_sym_ATif,
  [sym_europacss_comparison] = sym_europacss_comparison,
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_var] = anon_sym_var,
  [sym_europacss_variable] = sym_europacss_variable,
  [sym_europacss_range] = sym_europacss_range,
  [sym_europacss_slash_value] = sym_europacss_slash_value,
  [sym_europacss_dotted_name] = sym_europacss_dotted_name,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym___error_recovery] = sym___error_recovery,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_postcss_statement] = sym_postcss_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym__nth_child_pseudo_class_selector] = sym__nth_child_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_pseudo_class_with_selector_arguments] = sym_arguments,
  [sym_pseudo_class_nth_child_arguments] = sym_arguments,
  [sym_pseudo_element_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_string_value] = sym_string_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_class_name] = sym_class_name,
  [sym_europacss_color] = sym_europacss_color,
  [sym_europacss_color_target] = sym_europacss_color_target,
  [sym_europacss_space] = sym_europacss_space,
  [sym_europacss_font] = sym_europacss_font,
  [sym_europacss_fontsize] = sym_europacss_fontsize,
  [sym_europacss_responsive] = sym_europacss_responsive,
  [sym_europacss_mq] = sym_europacss_mq,
  [sym_europacss_column] = sym_europacss_column,
  [sym_europacss_column_offset] = sym_europacss_column_offset,
  [sym_europacss_display] = sym_europacss_display,
  [sym_europacss_grid] = sym_europacss_grid,
  [sym_europacss_row] = sym_europacss_row,
  [sym_europacss_abs100] = sym_europacss_abs100,
  [sym_europacss_iterate] = sym_europacss_iterate,
  [sym_europacss_unpack] = sym_europacss_unpack,
  [sym_europacss_if] = sym_europacss_if,
  [sym__europacss_value] = sym__europacss_value,
  [sym_europacss_calc] = sym_europacss_calc,
  [sym_europacss_var_ref] = sym_europacss_var_ref,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_postcss_statement_repeat1] = aux_sym_postcss_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_string_value_repeat1] = aux_sym_string_value_repeat1,
  [aux_sym_string_value_repeat2] = aux_sym_string_value_repeat2,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_class_name_repeat1] = aux_sym_class_name_repeat1,
  [aux_sym_europacss_calc_repeat1] = aux_sym_europacss_calc_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host_DASHcontext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHchild] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHlast_DASHchild] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_even] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_odd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym__nth_functional_notation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_js_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_color] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_space] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_font] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_fontsize] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_column] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_column_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_display] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_grid] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_row] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_abs100] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHtop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHbottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHleft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATresponsive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATiterate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATunpack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
    .visible = true,
    .named = false,
  },
  [sym_europacss_comparison] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_calc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [sym_europacss_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_range] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_slash_value] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_dotted_name] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
  },
  [sym___error_recovery] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_postcss_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym__nth_child_pseudo_class_selector] = {
    .visible = false,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_with_selector_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_nth_child_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_grid_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_color] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_color_target] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_space] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_font] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_fontsize] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_responsive] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_mq] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_column] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_column_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_display] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_grid] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_row] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_abs100] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_iterate] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_unpack] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_if] = {
    .visible = true,
    .named = true,
  },
  [sym__europacss_value] = {
    .visible = false,
    .named = true,
  },
  [sym_europacss_calc] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_var_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postcss_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grid_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_europacss_calc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_breakpoint = 1,
  field_condition = 2,
  field_family = 3,
  field_name = 4,
  field_property = 5,
  field_query = 6,
  field_size = 7,
  field_target = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_breakpoint] = "breakpoint",
  [field_condition] = "condition",
  [field_family] = "family",
  [field_name] = "name",
  [field_property] = "property",
  [field_query] = "query",
  [field_size] = "size",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [16] = {.index = 0, .length = 1},
  [17] = {.index = 1, .length = 1},
  [18] = {.index = 2, .length = 1},
  [19] = {.index = 3, .length = 1},
  [20] = {.index = 4, .length = 1},
  [22] = {.index = 5, .length = 2},
  [23] = {.index = 7, .length = 2},
  [24] = {.index = 9, .length = 2},
  [25] = {.index = 11, .length = 2},
  [26] = {.index = 13, .length = 2},
  [27] = {.index = 15, .length = 3},
  [28] = {.index = 18, .length = 3},
  [29] = {.index = 21, .length = 3},
  [30] = {.index = 24, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_size, 1},
  [1] =
    {field_value, 1},
  [2] =
    {field_breakpoint, 1},
  [3] =
    {field_query, 1},
  [4] =
    {field_condition, 1},
  [5] =
    {field_target, 1},
    {field_value, 2},
  [7] =
    {field_property, 1},
    {field_value, 2},
  [9] =
    {field_family, 1},
    {field_size, 2},
  [11] =
    {field_breakpoint, 2},
    {field_size, 1},
  [13] =
    {field_breakpoint, 2},
    {field_value, 1},
  [15] =
    {field_breakpoint, 3},
    {field_target, 1},
    {field_value, 2},
  [18] =
    {field_breakpoint, 3},
    {field_property, 1},
    {field_value, 2},
  [21] =
    {field_breakpoint, 3},
    {field_family, 1},
    {field_size, 2},
  [24] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [1] = sym_class_name,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = alias_sym_attribute_name,
  },
  [10] = {
    [2] = sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = alias_sym_attribute_name,
  },
  [21] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    alias_sym_attribute_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 78,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 82,
  [88] = 82,
  [89] = 48,
  [90] = 50,
  [91] = 42,
  [92] = 35,
  [93] = 52,
  [94] = 94,
  [95] = 58,
  [96] = 43,
  [97] = 44,
  [98] = 45,
  [99] = 46,
  [100] = 100,
  [101] = 47,
  [102] = 33,
  [103] = 53,
  [104] = 34,
  [105] = 105,
  [106] = 54,
  [107] = 107,
  [108] = 37,
  [109] = 38,
  [110] = 39,
  [111] = 49,
  [112] = 40,
  [113] = 41,
  [114] = 114,
  [115] = 115,
  [116] = 51,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 121,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 126,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 86,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 85,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 177,
  [179] = 179,
  [180] = 180,
  [181] = 176,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 177,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 190,
  [192] = 176,
  [193] = 176,
  [194] = 189,
  [195] = 188,
  [196] = 176,
  [197] = 189,
  [198] = 175,
  [199] = 199,
  [200] = 86,
  [201] = 85,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 204,
  [207] = 207,
  [208] = 208,
  [209] = 205,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 227,
  [236] = 228,
  [237] = 229,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 184,
  [251] = 183,
  [252] = 252,
  [253] = 207,
  [254] = 203,
  [255] = 210,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 260,
  [267] = 183,
  [268] = 184,
  [269] = 269,
  [270] = 169,
  [271] = 271,
  [272] = 272,
  [273] = 210,
  [274] = 274,
  [275] = 203,
  [276] = 207,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 203,
  [283] = 207,
  [284] = 284,
  [285] = 210,
  [286] = 183,
  [287] = 184,
  [288] = 288,
  [289] = 288,
  [290] = 271,
  [291] = 211,
  [292] = 213,
  [293] = 85,
  [294] = 202,
  [295] = 214,
  [296] = 215,
  [297] = 216,
  [298] = 212,
  [299] = 169,
  [300] = 300,
  [301] = 301,
  [302] = 86,
  [303] = 208,
  [304] = 304,
  [305] = 305,
  [306] = 184,
  [307] = 183,
  [308] = 203,
  [309] = 210,
  [310] = 207,
  [311] = 208,
  [312] = 213,
  [313] = 212,
  [314] = 214,
  [315] = 215,
  [316] = 211,
  [317] = 216,
  [318] = 86,
  [319] = 85,
  [320] = 202,
  [321] = 321,
  [322] = 322,
  [323] = 321,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 325,
  [328] = 321,
  [329] = 329,
  [330] = 329,
  [331] = 322,
  [332] = 324,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 334,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 344,
  [346] = 343,
  [347] = 347,
  [348] = 347,
  [349] = 349,
  [350] = 350,
  [351] = 342,
  [352] = 352,
  [353] = 342,
  [354] = 342,
  [355] = 342,
  [356] = 352,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 41,
  [361] = 48,
  [362] = 53,
  [363] = 359,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 370,
  [374] = 374,
  [375] = 368,
  [376] = 376,
  [377] = 377,
  [378] = 359,
  [379] = 367,
  [380] = 368,
  [381] = 370,
  [382] = 371,
  [383] = 383,
  [384] = 367,
  [385] = 368,
  [386] = 370,
  [387] = 371,
  [388] = 367,
  [389] = 368,
  [390] = 370,
  [391] = 371,
  [392] = 392,
  [393] = 393,
  [394] = 369,
  [395] = 371,
  [396] = 367,
  [397] = 372,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 183,
  [405] = 184,
  [406] = 402,
  [407] = 400,
  [408] = 408,
  [409] = 409,
  [410] = 183,
  [411] = 400,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 413,
  [418] = 418,
  [419] = 419,
  [420] = 274,
  [421] = 277,
  [422] = 422,
  [423] = 423,
  [424] = 422,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 433,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 434,
  [444] = 444,
  [445] = 439,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 436,
  [452] = 452,
  [453] = 452,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 434,
  [459] = 459,
  [460] = 460,
  [461] = 447,
  [462] = 462,
  [463] = 433,
  [464] = 464,
  [465] = 465,
  [466] = 454,
  [467] = 439,
};

static TSCharacterRange sym_plain_value_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '\''}, {'+', '+'}, {'-', ':'}, {'<', 'Z'}, {'\\', '\\'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static TSCharacterRange sym_plain_value_character_set_2[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '\''}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'\\', '\\'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(203);
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '$', 74,
        '&', 217,
        '\'', 310,
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 379,
        '.', 220,
        '/', 381,
        ':', 265,
        ';', 206,
        '=', 242,
        '>', 249,
        '@', 80,
        'E', 51,
        '[', 241,
        '\\', 188,
        ']', 248,
        '^', 75,
        'a', 140,
        'b', 114,
        'c', 81,
        'e', 49,
        'f', 116,
        'h', 82,
        'i', 164,
        'n', 145,
        'o', 99,
        's', 107,
        't', 146,
        'v', 83,
        'w', 120,
        '{', 212,
        '|', 255,
        '}', 213,
        '~', 251,
      );
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'd') ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '%', 374,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        '}', 213,
        'E', 360,
        'e', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '&', 217,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        '-', 55,
        '.', 220,
        '/', 37,
        ':', 72,
        '>', 249,
        '[', 241,
        '_', 386,
        '|', 254,
        '~', 250,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 220,
        '/', 382,
        ':', 72,
        '>', 249,
        '[', 241,
        '_', 386,
        '|', 254,
        '~', 250,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        '}', 213,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 256,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        'a', 394,
        'o', 398,
        '{', 212,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 220,
        '/', 382,
        ':', 72,
        '>', 249,
        '[', 241,
        '_', 386,
        '|', 254,
        '~', 250,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        '}', 213,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        ')', 257,
        '+', 56,
        ',', 205,
        '-', 55,
        '.', 185,
        '/', 37,
        ';', 206,
        '[', 375,
        '_', 386,
        '}', 213,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        'a', 394,
        'o', 398,
        '{', 212,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        '+', 56,
        '-', 55,
        '.', 185,
        '/', 37,
        ';', 206,
        '[', 375,
        '_', 386,
        'n', 395,
        'o', 393,
        's', 390,
        '{', 212,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 316,
        '#', 240,
        '&', 217,
        '\'', 310,
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 72,
        '>', 249,
        '@', 80,
        '[', 241,
        '|', 254,
        '}', 213,
        '~', 250,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '#', 240,
        '$', 73,
        '(', 256,
        ')', 257,
        '*', 76,
        '+', 252,
        ',', 205,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 72,
        '=', 242,
        '>', 249,
        '[', 241,
        '\\', 188,
        ']', 248,
        '^', 75,
        '{', 212,
        '|', 255,
        '~', 251,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '#', 240,
        '$', 73,
        ')', 257,
        '*', 76,
        '+', 252,
        ',', 205,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 72,
        '=', 242,
        '>', 249,
        '[', 241,
        '\\', 188,
        ']', 248,
        '^', 75,
        '{', 212,
        '|', 255,
        '~', 251,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '$', 191,
        '%', 67,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 377,
        '.', 185,
        '/', 382,
        '_', 69,
        'v', 576,
        'E', 568,
        'e', 568,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '$', 191,
        '%', 67,
        '(', 267,
        '+', 56,
        '-', 24,
        '.', 46,
        '/', 37,
        ';', 206,
        '_', 21,
        'c', 559,
        '<', 77,
        '>', 77,
        'E', 563,
        'e', 563,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '$', 191,
        '%', 368,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 377,
        '.', 185,
        '/', 382,
        '_', 69,
        'v', 370,
        'E', 367,
        'e', 367,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '$', 191,
        '%', 368,
        '(', 267,
        '+', 56,
        '-', 24,
        '.', 46,
        '/', 37,
        ';', 206,
        '_', 21,
        'c', 362,
        '<', 77,
        '>', 77,
        'E', 366,
        'e', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '%', 374,
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 380,
        '/', 381,
        ';', 206,
        'n', 353,
        'o', 352,
        's', 349,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '%', 67,
        '.', 185,
        '/', 195,
        '>', 193,
        '-', 69,
        '_', 69,
        'E', 568,
        'e', 568,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 376,
        '/', 381,
        ':', 264,
        ';', 206,
        ']', 248,
        'a', 139,
        'o', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '(', 256,
        '*', 218,
        '+', 252,
        '-', 380,
        '/', 381,
        ';', 206,
        'n', 430,
        'o', 427,
        's', 415,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 380,
        '/', 381,
        ';', 206,
        'n', 430,
        'o', 427,
        's', 415,
        '{', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 380,
        '/', 381,
        ';', 206,
        'n', 430,
        'o', 427,
        's', 415,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '(', 267,
        '-', 197,
        '/', 36,
        ';', 206,
        '[', 375,
        'n', 430,
        'o', 427,
        's', 415,
        '{', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 376,
        '/', 381,
        ':', 264,
        ';', 206,
        ']', 248,
        'a', 139,
        'o', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 376,
        '/', 381,
        ';', 206,
        ']', 248,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 376,
        '/', 381,
        ';', 206,
        ']', 248,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        ')', 257,
        ',', 205,
        '/', 36,
        ':', 264,
        ';', 206,
        'a', 139,
        'b', 113,
        'f', 115,
        'o', 111,
        's', 174,
        't', 146,
        '{', 212,
        '}', 213,
        '+', 187,
        '-', 187,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 34:
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(557);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(554);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(558);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == 'w') ADVANCE(419);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == 'v') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == 'v') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '{') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '{') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(573);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(573);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '>') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 70:
      if (lookahead == '0') ADVANCE(599);
      END_STATE();
    case 71:
      if (lookahead == '0') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(239);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(622);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 80:
      ADVANCE_MAP(
        'a', 461,
        'c', 488,
        'd', 492,
        'f', 507,
        'g', 522,
        'i', 483,
        'k', 467,
        'm', 468,
        'n', 451,
        'r', 480,
        's', 515,
        'u', 505,
      );
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(615);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 'k') ADVANCE(467);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(260);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(601);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(601);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(600);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(600);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(606);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(605);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 181:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 182:
      if (lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 184:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(322);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 192:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 193:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 194:
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 195:
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 196:
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 197:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 198:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 199:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 200:
      if (eof) ADVANCE(203);
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '$', 74,
        '&', 217,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 379,
        '.', 220,
        '/', 381,
        ':', 265,
        ';', 206,
        '=', 242,
        '>', 249,
        '@', 80,
        'E', 52,
        '[', 241,
        '\\', 188,
        ']', 248,
        '^', 75,
        'a', 139,
        'b', 113,
        'c', 85,
        'e', 50,
        'f', 115,
        'h', 82,
        'i', 164,
        'n', 145,
        'o', 99,
        's', 107,
        't', 146,
        'v', 83,
        'w', 120,
        '{', 212,
        '|', 255,
        '}', 213,
        '~', 251,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 201:
      if (eof) ADVANCE(203);
      ADVANCE_MAP(
        '"', 316,
        '#', 240,
        '&', 217,
        '\'', 310,
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 265,
        ';', 206,
        '>', 249,
        '@', 89,
        '[', 241,
        '\\', 188,
        ']', 248,
        '{', 212,
        '|', 254,
        '}', 213,
        '~', 250,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 202:
      if (eof) ADVANCE(203);
      ADVANCE_MAP(
        '"', 316,
        '#', 240,
        '&', 217,
        '\'', 310,
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 265,
        ';', 206,
        '>', 249,
        '@', 89,
        '[', 241,
        '\\', 188,
        ']', 248,
        '{', 212,
        '|', 254,
        '}', 213,
        '~', 250,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_even);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (lookahead == '+') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(239);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'c') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'e') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'e') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 't') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 't') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'y') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '/') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(565);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '_') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '_') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(579);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(579);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(579);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(554);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'y') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(447);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(529);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(495);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'q') ADVANCE(610);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(613);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(513);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(486);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(538);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(528);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(454);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(454);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(612);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(513);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(481);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(477);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(479);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'u') ADVANCE(500);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(452);
      if (lookahead == 'u') ADVANCE(520);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(456);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(510);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(459);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(535);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(520);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'v') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'w') ADVANCE(597);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(485);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(593);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(487);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'z') ADVANCE(472);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(557);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(554);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(574);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(565);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(575);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '>') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '>') ADVANCE(622);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(196);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(627);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '/') ADVANCE(199);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '>') ADVANCE(622);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(199);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__kw_color);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__kw_color);
      if (lookahead == '!') ADVANCE(580);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__kw_space);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__kw_space);
      if (lookahead == '!') ADVANCE(582);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__kw_font);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__kw_font);
      if (lookahead == '!') ADVANCE(584);
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__kw_fontsize);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__kw_fontsize);
      if (lookahead == '!') ADVANCE(586);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__kw_column);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__kw_column);
      if (lookahead == '!') ADVANCE(588);
      if (lookahead == '-') ADVANCE(508);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__kw_column_offset);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__kw_column_offset);
      if (lookahead == '!') ADVANCE(590);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__kw_display);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__kw_display);
      if (lookahead == '!') ADVANCE(592);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__kw_grid);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__kw_grid);
      if (lookahead == '!') ADVANCE(594);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__kw_row);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__kw_row);
      if (lookahead == '!') ADVANCE(596);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__kw_abs100);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__kw_abs100);
      if (lookahead == '!') ADVANCE(598);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_fg);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_bg);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_stroke);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_border);
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_border_DASHtop);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_border_DASHbottom);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_border_DASHleft);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_border_DASHright);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_ATresponsive);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_ATmq);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_ATiterate);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_ATunpack);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_europacss_comparison);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(579);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_europacss_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_europacss_range);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(624);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '-') ADVANCE(627);
      if (lookahead == '.') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '>') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 201, .external_lex_state = 2},
  [2] = {.lex_state = 13, .external_lex_state = 2},
  [3] = {.lex_state = 13, .external_lex_state = 2},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 201, .external_lex_state = 2},
  [10] = {.lex_state = 201, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 13, .external_lex_state = 2},
  [26] = {.lex_state = 13, .external_lex_state = 2},
  [27] = {.lex_state = 13, .external_lex_state = 2},
  [28] = {.lex_state = 13, .external_lex_state = 2},
  [29] = {.lex_state = 13, .external_lex_state = 2},
  [30] = {.lex_state = 13, .external_lex_state = 2},
  [31] = {.lex_state = 13, .external_lex_state = 2},
  [32] = {.lex_state = 13, .external_lex_state = 2},
  [33] = {.lex_state = 13, .external_lex_state = 2},
  [34] = {.lex_state = 13, .external_lex_state = 2},
  [35] = {.lex_state = 13, .external_lex_state = 2},
  [36] = {.lex_state = 13, .external_lex_state = 2},
  [37] = {.lex_state = 13, .external_lex_state = 2},
  [38] = {.lex_state = 13, .external_lex_state = 2},
  [39] = {.lex_state = 13, .external_lex_state = 2},
  [40] = {.lex_state = 13, .external_lex_state = 2},
  [41] = {.lex_state = 13, .external_lex_state = 2},
  [42] = {.lex_state = 13, .external_lex_state = 2},
  [43] = {.lex_state = 13, .external_lex_state = 2},
  [44] = {.lex_state = 13, .external_lex_state = 2},
  [45] = {.lex_state = 13, .external_lex_state = 2},
  [46] = {.lex_state = 13, .external_lex_state = 2},
  [47] = {.lex_state = 13, .external_lex_state = 2},
  [48] = {.lex_state = 13, .external_lex_state = 2},
  [49] = {.lex_state = 13, .external_lex_state = 2},
  [50] = {.lex_state = 13, .external_lex_state = 2},
  [51] = {.lex_state = 13, .external_lex_state = 2},
  [52] = {.lex_state = 13, .external_lex_state = 2},
  [53] = {.lex_state = 13, .external_lex_state = 2},
  [54] = {.lex_state = 13, .external_lex_state = 2},
  [55] = {.lex_state = 13, .external_lex_state = 2},
  [56] = {.lex_state = 13, .external_lex_state = 2},
  [57] = {.lex_state = 13, .external_lex_state = 2},
  [58] = {.lex_state = 13, .external_lex_state = 2},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 201, .external_lex_state = 2},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 201, .external_lex_state = 2},
  [64] = {.lex_state = 201, .external_lex_state = 2},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 201, .external_lex_state = 2},
  [67] = {.lex_state = 201, .external_lex_state = 2},
  [68] = {.lex_state = 201, .external_lex_state = 2},
  [69] = {.lex_state = 201, .external_lex_state = 2},
  [70] = {.lex_state = 201, .external_lex_state = 2},
  [71] = {.lex_state = 201, .external_lex_state = 2},
  [72] = {.lex_state = 201, .external_lex_state = 2},
  [73] = {.lex_state = 201, .external_lex_state = 2},
  [74] = {.lex_state = 201, .external_lex_state = 2},
  [75] = {.lex_state = 201, .external_lex_state = 2},
  [76] = {.lex_state = 201, .external_lex_state = 2},
  [77] = {.lex_state = 201, .external_lex_state = 2},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 5, .external_lex_state = 3},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 14, .external_lex_state = 3},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 14, .external_lex_state = 3},
  [84] = {.lex_state = 8, .external_lex_state = 3},
  [85] = {.lex_state = 8, .external_lex_state = 3},
  [86] = {.lex_state = 8, .external_lex_state = 3},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 201, .external_lex_state = 2},
  [90] = {.lex_state = 201, .external_lex_state = 2},
  [91] = {.lex_state = 201, .external_lex_state = 2},
  [92] = {.lex_state = 201, .external_lex_state = 2},
  [93] = {.lex_state = 201, .external_lex_state = 2},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 201, .external_lex_state = 2},
  [96] = {.lex_state = 201, .external_lex_state = 2},
  [97] = {.lex_state = 201, .external_lex_state = 2},
  [98] = {.lex_state = 201, .external_lex_state = 2},
  [99] = {.lex_state = 201, .external_lex_state = 2},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 201, .external_lex_state = 2},
  [102] = {.lex_state = 201, .external_lex_state = 2},
  [103] = {.lex_state = 201, .external_lex_state = 2},
  [104] = {.lex_state = 201, .external_lex_state = 2},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 201, .external_lex_state = 2},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 201, .external_lex_state = 2},
  [109] = {.lex_state = 201, .external_lex_state = 2},
  [110] = {.lex_state = 201, .external_lex_state = 2},
  [111] = {.lex_state = 201, .external_lex_state = 2},
  [112] = {.lex_state = 201, .external_lex_state = 2},
  [113] = {.lex_state = 201, .external_lex_state = 2},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 201, .external_lex_state = 2},
  [117] = {.lex_state = 14, .external_lex_state = 3},
  [118] = {.lex_state = 14, .external_lex_state = 3},
  [119] = {.lex_state = 14, .external_lex_state = 3},
  [120] = {.lex_state = 14, .external_lex_state = 3},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 14, .external_lex_state = 3},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 14, .external_lex_state = 3},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 14, .external_lex_state = 3},
  [133] = {.lex_state = 14, .external_lex_state = 3},
  [134] = {.lex_state = 14, .external_lex_state = 3},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 14, .external_lex_state = 3},
  [137] = {.lex_state = 14, .external_lex_state = 3},
  [138] = {.lex_state = 14, .external_lex_state = 3},
  [139] = {.lex_state = 14, .external_lex_state = 3},
  [140] = {.lex_state = 14, .external_lex_state = 3},
  [141] = {.lex_state = 14, .external_lex_state = 3},
  [142] = {.lex_state = 14, .external_lex_state = 3},
  [143] = {.lex_state = 14, .external_lex_state = 3},
  [144] = {.lex_state = 14, .external_lex_state = 3},
  [145] = {.lex_state = 14, .external_lex_state = 3},
  [146] = {.lex_state = 14, .external_lex_state = 3},
  [147] = {.lex_state = 14, .external_lex_state = 3},
  [148] = {.lex_state = 14, .external_lex_state = 3},
  [149] = {.lex_state = 14, .external_lex_state = 3},
  [150] = {.lex_state = 14, .external_lex_state = 3},
  [151] = {.lex_state = 14, .external_lex_state = 3},
  [152] = {.lex_state = 14, .external_lex_state = 3},
  [153] = {.lex_state = 14, .external_lex_state = 3},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 14, .external_lex_state = 3},
  [156] = {.lex_state = 14, .external_lex_state = 3},
  [157] = {.lex_state = 14, .external_lex_state = 3},
  [158] = {.lex_state = 14, .external_lex_state = 3},
  [159] = {.lex_state = 14, .external_lex_state = 3},
  [160] = {.lex_state = 14, .external_lex_state = 3},
  [161] = {.lex_state = 14, .external_lex_state = 3},
  [162] = {.lex_state = 14, .external_lex_state = 3},
  [163] = {.lex_state = 14, .external_lex_state = 3},
  [164] = {.lex_state = 14, .external_lex_state = 3},
  [165] = {.lex_state = 14, .external_lex_state = 3},
  [166] = {.lex_state = 14, .external_lex_state = 3},
  [167] = {.lex_state = 14, .external_lex_state = 3},
  [168] = {.lex_state = 14, .external_lex_state = 3},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 14, .external_lex_state = 3},
  [171] = {.lex_state = 14, .external_lex_state = 3},
  [172] = {.lex_state = 14, .external_lex_state = 3},
  [173] = {.lex_state = 14, .external_lex_state = 3},
  [174] = {.lex_state = 14, .external_lex_state = 3},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 16},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 14, .external_lex_state = 3},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 14, .external_lex_state = 3},
  [221] = {.lex_state = 14, .external_lex_state = 3},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 14, .external_lex_state = 3},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 27},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 17},
  [235] = {.lex_state = 27},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 18},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 29},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 16},
  [255] = {.lex_state = 16},
  [256] = {.lex_state = 201, .external_lex_state = 3},
  [257] = {.lex_state = 42},
  [258] = {.lex_state = 201, .external_lex_state = 3},
  [259] = {.lex_state = 201, .external_lex_state = 3},
  [260] = {.lex_state = 201, .external_lex_state = 3},
  [261] = {.lex_state = 201, .external_lex_state = 3},
  [262] = {.lex_state = 42},
  [263] = {.lex_state = 201, .external_lex_state = 3},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 201, .external_lex_state = 3},
  [266] = {.lex_state = 201, .external_lex_state = 3},
  [267] = {.lex_state = 19},
  [268] = {.lex_state = 19},
  [269] = {.lex_state = 201, .external_lex_state = 3},
  [270] = {.lex_state = 26},
  [271] = {.lex_state = 29},
  [272] = {.lex_state = 201, .external_lex_state = 3},
  [273] = {.lex_state = 27},
  [274] = {.lex_state = 17},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 27},
  [277] = {.lex_state = 17},
  [278] = {.lex_state = 29},
  [279] = {.lex_state = 29},
  [280] = {.lex_state = 201, .external_lex_state = 3},
  [281] = {.lex_state = 29},
  [282] = {.lex_state = 17},
  [283] = {.lex_state = 17},
  [284] = {.lex_state = 29},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 20},
  [287] = {.lex_state = 20},
  [288] = {.lex_state = 29},
  [289] = {.lex_state = 29},
  [290] = {.lex_state = 29},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 27},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 27},
  [295] = {.lex_state = 27},
  [296] = {.lex_state = 27},
  [297] = {.lex_state = 27},
  [298] = {.lex_state = 27},
  [299] = {.lex_state = 25},
  [300] = {.lex_state = 201, .external_lex_state = 3},
  [301] = {.lex_state = 33},
  [302] = {.lex_state = 27},
  [303] = {.lex_state = 27},
  [304] = {.lex_state = 25},
  [305] = {.lex_state = 17},
  [306] = {.lex_state = 32},
  [307] = {.lex_state = 32},
  [308] = {.lex_state = 25},
  [309] = {.lex_state = 25},
  [310] = {.lex_state = 25},
  [311] = {.lex_state = 25},
  [312] = {.lex_state = 25},
  [313] = {.lex_state = 25},
  [314] = {.lex_state = 25},
  [315] = {.lex_state = 25},
  [316] = {.lex_state = 25},
  [317] = {.lex_state = 25},
  [318] = {.lex_state = 25},
  [319] = {.lex_state = 25},
  [320] = {.lex_state = 25},
  [321] = {.lex_state = 25},
  [322] = {.lex_state = 33},
  [323] = {.lex_state = 25},
  [324] = {.lex_state = 201},
  [325] = {.lex_state = 33},
  [326] = {.lex_state = 33},
  [327] = {.lex_state = 33},
  [328] = {.lex_state = 25},
  [329] = {.lex_state = 33},
  [330] = {.lex_state = 33},
  [331] = {.lex_state = 33},
  [332] = {.lex_state = 201},
  [333] = {.lex_state = 33},
  [334] = {.lex_state = 33},
  [335] = {.lex_state = 33},
  [336] = {.lex_state = 33},
  [337] = {.lex_state = 33},
  [338] = {.lex_state = 33},
  [339] = {.lex_state = 33},
  [340] = {.lex_state = 33},
  [341] = {.lex_state = 25},
  [342] = {.lex_state = 25},
  [343] = {.lex_state = 25},
  [344] = {.lex_state = 33},
  [345] = {.lex_state = 33},
  [346] = {.lex_state = 25},
  [347] = {.lex_state = 201},
  [348] = {.lex_state = 201},
  [349] = {.lex_state = 33},
  [350] = {.lex_state = 25},
  [351] = {.lex_state = 25},
  [352] = {.lex_state = 201},
  [353] = {.lex_state = 25},
  [354] = {.lex_state = 25},
  [355] = {.lex_state = 25},
  [356] = {.lex_state = 201},
  [357] = {.lex_state = 40},
  [358] = {.lex_state = 25},
  [359] = {.lex_state = 201},
  [360] = {.lex_state = 33},
  [361] = {.lex_state = 33},
  [362] = {.lex_state = 33},
  [363] = {.lex_state = 201},
  [364] = {.lex_state = 33},
  [365] = {.lex_state = 33},
  [366] = {.lex_state = 201},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 33},
  [370] = {.lex_state = 1},
  [371] = {.lex_state = 2},
  [372] = {.lex_state = 201},
  [373] = {.lex_state = 1},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 2},
  [377] = {.lex_state = 201},
  [378] = {.lex_state = 201},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 2},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 2},
  [383] = {.lex_state = 201},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 1},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 201},
  [393] = {.lex_state = 201},
  [394] = {.lex_state = 33},
  [395] = {.lex_state = 2},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 201},
  [398] = {.lex_state = 201},
  [399] = {.lex_state = 201},
  [400] = {.lex_state = 201},
  [401] = {.lex_state = 201},
  [402] = {.lex_state = 201},
  [403] = {.lex_state = 33},
  [404] = {.lex_state = 58},
  [405] = {.lex_state = 58},
  [406] = {.lex_state = 201},
  [407] = {.lex_state = 201},
  [408] = {.lex_state = 201},
  [409] = {.lex_state = 201},
  [410] = {.lex_state = 34},
  [411] = {.lex_state = 201},
  [412] = {.lex_state = 201},
  [413] = {.lex_state = 201},
  [414] = {.lex_state = 201},
  [415] = {.lex_state = 201},
  [416] = {.lex_state = 33},
  [417] = {.lex_state = 201},
  [418] = {.lex_state = 43},
  [419] = {.lex_state = 201},
  [420] = {.lex_state = 201},
  [421] = {.lex_state = 201},
  [422] = {.lex_state = 201},
  [423] = {.lex_state = 201},
  [424] = {.lex_state = 201},
  [425] = {.lex_state = 201},
  [426] = {.lex_state = 62},
  [427] = {.lex_state = 201},
  [428] = {.lex_state = 201},
  [429] = {.lex_state = 201},
  [430] = {.lex_state = 201},
  [431] = {.lex_state = 201},
  [432] = {.lex_state = 201},
  [433] = {.lex_state = 201},
  [434] = {.lex_state = 201},
  [435] = {.lex_state = 201},
  [436] = {.lex_state = 201},
  [437] = {.lex_state = 61},
  [438] = {.lex_state = 201},
  [439] = {.lex_state = 60},
  [440] = {.lex_state = 201},
  [441] = {.lex_state = 201},
  [442] = {.lex_state = 201},
  [443] = {.lex_state = 201},
  [444] = {.lex_state = 13},
  [445] = {.lex_state = 60},
  [446] = {.lex_state = 201},
  [447] = {.lex_state = 13},
  [448] = {.lex_state = 201},
  [449] = {.lex_state = 201},
  [450] = {.lex_state = 201},
  [451] = {.lex_state = 201},
  [452] = {.lex_state = 201},
  [453] = {.lex_state = 201},
  [454] = {.lex_state = 201},
  [455] = {.lex_state = 201},
  [456] = {.lex_state = 201},
  [457] = {.lex_state = 201},
  [458] = {.lex_state = 201},
  [459] = {.lex_state = 201},
  [460] = {.lex_state = 201},
  [461] = {.lex_state = 13},
  [462] = {.lex_state = 201},
  [463] = {.lex_state = 201},
  [464] = {.lex_state = 29},
  [465] = {.lex_state = 201},
  [466] = {.lex_state = 201},
  [467] = {.lex_state = 60},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_host_DASHcontext] = ACTIONS(1),
    [anon_sym_nth_DASHchild] = ACTIONS(1),
    [anon_sym_nth_DASHlast_DASHchild] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_even] = ACTIONS(1),
    [anon_sym_odd] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_js_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(1),
    [sym__kw_space] = ACTIONS(1),
    [sym__kw_font] = ACTIONS(1),
    [sym__kw_fontsize] = ACTIONS(1),
    [sym__kw_column] = ACTIONS(1),
    [sym__kw_column_offset] = ACTIONS(1),
    [sym__kw_display] = ACTIONS(1),
    [sym__kw_grid] = ACTIONS(1),
    [sym__kw_row] = ACTIONS(1),
    [sym__kw_abs100] = ACTIONS(1),
    [anon_sym_fg] = ACTIONS(1),
    [anon_sym_bg] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_border] = ACTIONS(1),
    [anon_sym_border_DASHtop] = ACTIONS(1),
    [anon_sym_border_DASHbottom] = ACTIONS(1),
    [anon_sym_border_DASHleft] = ACTIONS(1),
    [anon_sym_border_DASHright] = ACTIONS(1),
    [anon_sym_ATresponsive] = ACTIONS(1),
    [anon_sym_ATmq] = ACTIONS(1),
    [anon_sym_ATiterate] = ACTIONS(1),
    [anon_sym_ATunpack] = ACTIONS(1),
    [anon_sym_ATif] = ACTIONS(1),
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [sym_europacss_variable] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(432),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(413),
    [sym__selector] = STATE(259),
    [sym_universal_selector] = STATE(259),
    [sym_class_selector] = STATE(259),
    [sym_pseudo_class_selector] = STATE(259),
    [sym_pseudo_element_selector] = STATE(259),
    [sym_id_selector] = STATE(259),
    [sym_attribute_selector] = STATE(259),
    [sym_child_selector] = STATE(259),
    [sym_descendant_selector] = STATE(259),
    [sym_sibling_selector] = STATE(259),
    [sym_adjacent_sibling_selector] = STATE(259),
    [sym_namespace_selector] = STATE(259),
    [sym_declaration] = STATE(9),
    [sym_string_value] = STATE(259),
    [aux_sym_stylesheet_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATmedia] = ACTIONS(11),
    [anon_sym_ATcharset] = ACTIONS(13),
    [anon_sym_ATnamespace] = ACTIONS(15),
    [anon_sym_ATkeyframes] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_at_keyword] = ACTIONS(47),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [2] = {
    [sym_import_statement] = STATE(3),
    [sym_media_statement] = STATE(3),
    [sym_charset_statement] = STATE(3),
    [sym_namespace_statement] = STATE(3),
    [sym_keyframes_statement] = STATE(3),
    [sym_supports_statement] = STATE(3),
    [sym_postcss_statement] = STATE(3),
    [sym_at_rule] = STATE(3),
    [sym_rule_set] = STATE(3),
    [sym_selectors] = STATE(417),
    [sym__selector] = STATE(259),
    [sym_universal_selector] = STATE(259),
    [sym_class_selector] = STATE(259),
    [sym_pseudo_class_selector] = STATE(259),
    [sym_pseudo_element_selector] = STATE(259),
    [sym_id_selector] = STATE(259),
    [sym_attribute_selector] = STATE(259),
    [sym_child_selector] = STATE(259),
    [sym_descendant_selector] = STATE(259),
    [sym_sibling_selector] = STATE(259),
    [sym_adjacent_sibling_selector] = STATE(259),
    [sym_namespace_selector] = STATE(259),
    [sym_declaration] = STATE(3),
    [sym_last_declaration] = STATE(443),
    [sym_string_value] = STATE(259),
    [sym_europacss_color] = STATE(3),
    [sym_europacss_space] = STATE(3),
    [sym_europacss_font] = STATE(3),
    [sym_europacss_fontsize] = STATE(3),
    [sym_europacss_responsive] = STATE(3),
    [sym_europacss_mq] = STATE(3),
    [sym_europacss_column] = STATE(3),
    [sym_europacss_column_offset] = STATE(3),
    [sym_europacss_display] = STATE(3),
    [sym_europacss_grid] = STATE(3),
    [sym_europacss_row] = STATE(3),
    [sym_europacss_abs100] = STATE(3),
    [sym_europacss_iterate] = STATE(3),
    [sym_europacss_unpack] = STATE(3),
    [sym_europacss_if] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_column_offset] = ACTIONS(79),
    [sym__kw_display] = ACTIONS(81),
    [sym__kw_grid] = ACTIONS(83),
    [sym__kw_row] = ACTIONS(85),
    [sym__kw_abs100] = ACTIONS(87),
    [anon_sym_ATresponsive] = ACTIONS(89),
    [anon_sym_ATmq] = ACTIONS(91),
    [anon_sym_ATiterate] = ACTIONS(93),
    [anon_sym_ATunpack] = ACTIONS(95),
    [anon_sym_ATif] = ACTIONS(97),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [3] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(417),
    [sym__selector] = STATE(259),
    [sym_universal_selector] = STATE(259),
    [sym_class_selector] = STATE(259),
    [sym_pseudo_class_selector] = STATE(259),
    [sym_pseudo_element_selector] = STATE(259),
    [sym_id_selector] = STATE(259),
    [sym_attribute_selector] = STATE(259),
    [sym_child_selector] = STATE(259),
    [sym_descendant_selector] = STATE(259),
    [sym_sibling_selector] = STATE(259),
    [sym_adjacent_sibling_selector] = STATE(259),
    [sym_namespace_selector] = STATE(259),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(463),
    [sym_string_value] = STATE(259),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_column_offset] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_column_offset] = ACTIONS(79),
    [sym__kw_display] = ACTIONS(81),
    [sym__kw_grid] = ACTIONS(83),
    [sym__kw_row] = ACTIONS(85),
    [sym__kw_abs100] = ACTIONS(87),
    [anon_sym_ATresponsive] = ACTIONS(89),
    [anon_sym_ATmq] = ACTIONS(91),
    [anon_sym_ATiterate] = ACTIONS(93),
    [anon_sym_ATunpack] = ACTIONS(95),
    [anon_sym_ATif] = ACTIONS(97),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [4] = {
    [sym_import_statement] = STATE(5),
    [sym_media_statement] = STATE(5),
    [sym_charset_statement] = STATE(5),
    [sym_namespace_statement] = STATE(5),
    [sym_keyframes_statement] = STATE(5),
    [sym_supports_statement] = STATE(5),
    [sym_postcss_statement] = STATE(5),
    [sym_at_rule] = STATE(5),
    [sym_rule_set] = STATE(5),
    [sym_selectors] = STATE(417),
    [sym__selector] = STATE(259),
    [sym_universal_selector] = STATE(259),
    [sym_class_selector] = STATE(259),
    [sym_pseudo_class_selector] = STATE(259),
    [sym_pseudo_element_selector] = STATE(259),
    [sym_id_selector] = STATE(259),
    [sym_attribute_selector] = STATE(259),
    [sym_child_selector] = STATE(259),
    [sym_descendant_selector] = STATE(259),
    [sym_sibling_selector] = STATE(259),
    [sym_adjacent_sibling_selector] = STATE(259),
    [sym_namespace_selector] = STATE(259),
    [sym_declaration] = STATE(5),
    [sym_last_declaration] = STATE(458),
    [sym_string_value] = STATE(259),
    [sym_europacss_color] = STATE(5),
    [sym_europacss_space] = STATE(5),
    [sym_europacss_font] = STATE(5),
    [sym_europacss_fontsize] = STATE(5),
    [sym_europacss_responsive] = STATE(5),
    [sym_europacss_mq] = STATE(5),
    [sym_europacss_column] = STATE(5),
    [sym_europacss_column_offset] = STATE(5),
    [sym_europacss_display] = STATE(5),
    [sym_europacss_grid] = STATE(5),
    [sym_europacss_row] = STATE(5),
    [sym_europacss_abs100] = STATE(5),
    [sym_europacss_iterate] = STATE(5),
    [sym_europacss_unpack] = STATE(5),
    [sym_europacss_if] = STATE(5),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_column_offset] = ACTIONS(79),
    [sym__kw_display] = ACTIONS(81),
    [sym__kw_grid] = ACTIONS(83),
    [sym__kw_row] = ACTIONS(85),
    [sym__kw_abs100] = ACTIONS(87),
    [anon_sym_ATresponsive] = ACTIONS(89),
    [anon_sym_ATmq] = ACTIONS(91),
    [anon_sym_ATiterate] = ACTIONS(93),
    [anon_sym_ATunpack] = ACTIONS(95),
    [anon_sym_ATif] = ACTIONS(97),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [5] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(417),
    [sym__selector] = STATE(259),
    [sym_universal_selector] = STATE(259),
    [sym_class_selector] = STATE(259),
    [sym_pseudo_class_selector] = STATE(259),
    [sym_pseudo_element_selector] = STATE(259),
    [sym_id_selector] = STATE(259),
    [sym_attribute_selector] = STATE(259),
    [sym_child_selector] = STATE(259),
    [sym_descendant_selector] = STATE(259),
    [sym_sibling_selector] = STATE(259),
    [sym_adjacent_sibling_selector] = STATE(259),
    [sym_namespace_selector] = STATE(259),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(433),
    [sym_string_value] = STATE(259),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_column_offset] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_column_offset] = ACTIONS(79),
    [sym__kw_display] = ACTIONS(81),
    [sym__kw_grid] = ACTIONS(83),
    [sym__kw_row] = ACTIONS(85),
    [sym__kw_abs100] = ACTIONS(87),
    [anon_sym_ATresponsive] = ACTIONS(89),
    [anon_sym_ATmq] = ACTIONS(91),
    [anon_sym_ATiterate] = ACTIONS(93),
    [anon_sym_ATunpack] = ACTIONS(95),
    [anon_sym_ATif] = ACTIONS(97),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [6] = {
    [sym_import_statement] = STATE(7),
    [sym_media_statement] = STATE(7),
    [sym_charset_statement] = STATE(7),
    [sym_namespace_statement] = STATE(7),
    [sym_keyframes_statement] = STATE(7),
    [sym_supports_statement] = STATE(7),
    [sym_postcss_statement] = STATE(7),
    [sym_at_rule] = STATE(7),
    [sym_rule_set] = STATE(7),
    [sym_selectors] = STATE(417),
    [sym__selector] = STATE(259),
    [sym_universal_selector] = STATE(259),
    [sym_class_selector] = STATE(259),
    [sym_pseudo_class_selector] = STATE(259),
    [sym_pseudo_element_selector] = STATE(259),
    [sym_id_selector] = STATE(259),
    [sym_attribute_selector] = STATE(259),
    [sym_child_selector] = STATE(259),
    [sym_descendant_selector] = STATE(259),
    [sym_sibling_selector] = STATE(259),
    [sym_adjacent_sibling_selector] = STATE(259),
    [sym_namespace_selector] = STATE(259),
    [sym_declaration] = STATE(7),
    [sym_last_declaration] = STATE(434),
    [sym_string_value] = STATE(259),
    [sym_europacss_color] = STATE(7),
    [sym_europacss_space] = STATE(7),
    [sym_europacss_font] = STATE(7),
    [sym_europacss_fontsize] = STATE(7),
    [sym_europacss_responsive] = STATE(7),
    [sym_europacss_mq] = STATE(7),
    [sym_europacss_column] = STATE(7),
    [sym_europacss_column_offset] = STATE(7),
    [sym_europacss_display] = STATE(7),
    [sym_europacss_grid] = STATE(7),
    [sym_europacss_row] = STATE(7),
    [sym_europacss_abs100] = STATE(7),
    [sym_europacss_iterate] = STATE(7),
    [sym_europacss_unpack] = STATE(7),
    [sym_europacss_if] = STATE(7),
    [aux_sym_block_repeat1] = STATE(7),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_column_offset] = ACTIONS(79),
    [sym__kw_display] = ACTIONS(81),
    [sym__kw_grid] = ACTIONS(83),
    [sym__kw_row] = ACTIONS(85),
    [sym__kw_abs100] = ACTIONS(87),
    [anon_sym_ATresponsive] = ACTIONS(89),
    [anon_sym_ATmq] = ACTIONS(91),
    [anon_sym_ATiterate] = ACTIONS(93),
    [anon_sym_ATunpack] = ACTIONS(95),
    [anon_sym_ATif] = ACTIONS(97),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [7] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(417),
    [sym__selector] = STATE(259),
    [sym_universal_selector] = STATE(259),
    [sym_class_selector] = STATE(259),
    [sym_pseudo_class_selector] = STATE(259),
    [sym_pseudo_element_selector] = STATE(259),
    [sym_id_selector] = STATE(259),
    [sym_attribute_selector] = STATE(259),
    [sym_child_selector] = STATE(259),
    [sym_descendant_selector] = STATE(259),
    [sym_sibling_selector] = STATE(259),
    [sym_adjacent_sibling_selector] = STATE(259),
    [sym_namespace_selector] = STATE(259),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(438),
    [sym_string_value] = STATE(259),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_column_offset] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_column_offset] = ACTIONS(79),
    [sym__kw_display] = ACTIONS(81),
    [sym__kw_grid] = ACTIONS(83),
    [sym__kw_row] = ACTIONS(85),
    [sym__kw_abs100] = ACTIONS(87),
    [anon_sym_ATresponsive] = ACTIONS(89),
    [anon_sym_ATmq] = ACTIONS(91),
    [anon_sym_ATiterate] = ACTIONS(93),
    [anon_sym_ATunpack] = ACTIONS(95),
    [anon_sym_ATif] = ACTIONS(97),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [8] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(417),
    [sym__selector] = STATE(259),
    [sym_universal_selector] = STATE(259),
    [sym_class_selector] = STATE(259),
    [sym_pseudo_class_selector] = STATE(259),
    [sym_pseudo_element_selector] = STATE(259),
    [sym_id_selector] = STATE(259),
    [sym_attribute_selector] = STATE(259),
    [sym_child_selector] = STATE(259),
    [sym_descendant_selector] = STATE(259),
    [sym_sibling_selector] = STATE(259),
    [sym_adjacent_sibling_selector] = STATE(259),
    [sym_namespace_selector] = STATE(259),
    [sym_declaration] = STATE(8),
    [sym_string_value] = STATE(259),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_column_offset] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(109),
    [anon_sym_ATmedia] = ACTIONS(112),
    [anon_sym_ATcharset] = ACTIONS(115),
    [anon_sym_ATnamespace] = ACTIONS(118),
    [anon_sym_ATkeyframes] = ACTIONS(121),
    [aux_sym_keyframes_statement_token1] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_ATsupports] = ACTIONS(126),
    [sym_nesting_selector] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(138),
    [anon_sym_POUND] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym_identifier] = ACTIONS(165),
    [sym_at_keyword] = ACTIONS(168),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(171),
    [sym__kw_space] = ACTIONS(174),
    [sym__kw_font] = ACTIONS(177),
    [sym__kw_fontsize] = ACTIONS(180),
    [sym__kw_column] = ACTIONS(183),
    [sym__kw_column_offset] = ACTIONS(186),
    [sym__kw_display] = ACTIONS(189),
    [sym__kw_grid] = ACTIONS(192),
    [sym__kw_row] = ACTIONS(195),
    [sym__kw_abs100] = ACTIONS(198),
    [anon_sym_ATresponsive] = ACTIONS(201),
    [anon_sym_ATmq] = ACTIONS(204),
    [anon_sym_ATiterate] = ACTIONS(207),
    [anon_sym_ATunpack] = ACTIONS(210),
    [anon_sym_ATif] = ACTIONS(213),
    [sym__pseudo_class_selector_colon] = ACTIONS(216),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(9), 1,
      anon_sym_ATimport,
    ACTIONS(11), 1,
      anon_sym_ATmedia,
    ACTIONS(13), 1,
      anon_sym_ATcharset,
    ACTIONS(15), 1,
      anon_sym_ATnamespace,
    ACTIONS(19), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_at_keyword,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(413), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(259), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [102] = 26,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      anon_sym_ATimport,
    ACTIONS(226), 1,
      anon_sym_ATmedia,
    ACTIONS(229), 1,
      anon_sym_ATcharset,
    ACTIONS(232), 1,
      anon_sym_ATnamespace,
    ACTIONS(238), 1,
      anon_sym_ATsupports,
    ACTIONS(241), 1,
      sym_nesting_selector,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(250), 1,
      anon_sym_COLON_COLON,
    ACTIONS(253), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_GT,
    ACTIONS(262), 1,
      anon_sym_TILDE,
    ACTIONS(265), 1,
      anon_sym_PLUS,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(280), 1,
      sym_at_keyword,
    ACTIONS(283), 1,
      sym__pseudo_class_selector_colon,
    STATE(413), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(259), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [204] = 27,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(286), 1,
      sym_nesting_selector,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_POUND,
    ACTIONS(292), 1,
      anon_sym_PLUS,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(312), 1,
      sym_plain_value,
    STATE(84), 1,
      sym_string_value,
    STATE(100), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(265), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [304] = 27,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_POUND,
    ACTIONS(292), 1,
      anon_sym_PLUS,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(314), 1,
      sym_nesting_selector,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_string_value,
    STATE(94), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(261), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [404] = 26,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_POUND,
    ACTIONS(292), 1,
      anon_sym_PLUS,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK2,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(318), 1,
      sym_nesting_selector,
    STATE(84), 1,
      sym_string_value,
    STATE(123), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(269), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [501] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(320), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(322), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [548] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(324), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(326), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [595] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(328), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(330), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [642] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(332), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(334), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [689] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(336), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(338), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [736] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(340), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(342), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [783] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(344), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(346), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [830] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(348), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(350), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [877] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(352), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(354), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [924] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(356), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(358), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [971] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(360), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(362), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1018] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(364), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(366), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1065] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(370), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1112] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(372), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(374), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1159] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(376), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(378), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1206] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(380), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(382), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1253] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(384), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(386), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1300] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(388), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(390), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1347] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(392), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(394), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1394] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(396), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(398), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1441] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(400), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(402), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1488] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(404), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(406), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1535] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(408), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(410), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1582] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(412), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(414), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1629] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(416), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(418), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1676] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(420), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(422), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1723] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(424), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(426), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1770] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(428), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(430), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1817] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(432), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(434), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1864] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(436), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(438), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1911] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(440), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(442), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1958] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(444), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(446), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2005] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(448), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(450), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2052] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(452), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(454), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2099] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(456), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(458), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2146] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(460), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(462), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2193] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(464), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(466), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2240] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(468), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(470), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2287] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(472), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(474), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2334] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(478), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2381] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(482), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2428] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(396), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(398), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2475] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(484), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(486), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2522] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(488), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(490), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2569] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(492), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(494), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2616] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(33), 1,
      sym_block,
    STATE(129), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(327), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2691] = 17,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(516), 1,
      sym_nesting_selector,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(256), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2756] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      sym_important,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym_plain_value,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(403), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(342), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2819] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym_important,
    ACTIONS(544), 1,
      sym_plain_value,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(403), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(355), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2882] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(546), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(144), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2944] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(548), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(152), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3006] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(560), 1,
      sym_important,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_plain_value,
    STATE(107), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(558), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(219), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3074] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(566), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(172), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3136] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(568), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(143), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3198] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(145), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3260] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(572), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(280), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3322] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(574), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(165), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3384] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(576), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(142), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3446] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(173), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3508] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(580), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(263), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3570] = 17,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(582), 1,
      sym_nesting_selector,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(218), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(300), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [3634] = 17,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(582), 1,
      sym_nesting_selector,
    ACTIONS(586), 1,
      sym_identifier,
    STATE(221), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(300), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [3698] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(588), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(155), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3760] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(590), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(272), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3822] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_plain_value,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    ACTIONS(594), 1,
      sym_important,
    STATE(124), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(558), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(219), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3887] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_arguments,
    ACTIONS(600), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(598), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(604), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(596), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3932] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_plain_value,
    ACTIONS(606), 1,
      sym_important,
    STATE(121), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(558), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(219), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3997] = 5,
    STATE(81), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(610), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(612), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(608), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4034] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(359), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(615), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4095] = 5,
    STATE(81), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(623), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(619), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4132] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(627), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(631), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(625), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4171] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(635), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(633), 15,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [4206] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(639), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(637), 15,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [4241] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(378), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(615), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4302] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(363), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(615), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4363] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(456), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(458), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4395] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(464), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(466), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4427] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(432), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(434), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4459] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(404), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(406), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4491] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(472), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(474), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4523] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(412), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4583] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(492), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(494), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4615] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(436), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(438), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4647] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(440), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(442), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4679] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(444), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(446), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4711] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(448), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(450), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4743] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(408), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4803] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(452), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(454), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4835] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(396), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(398), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4867] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(478), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4899] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(400), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(402), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4931] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(651), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4987] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(482), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5019] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_plain_value,
    ACTIONS(653), 1,
      anon_sym_SEMI,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 1,
      sym_important,
    STATE(115), 1,
      aux_sym_declaration_repeat1,
    STATE(219), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5079] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(412), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(414), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5111] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(416), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(418), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5143] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(420), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(422), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5175] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(460), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(462), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5207] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(424), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(426), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5239] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(428), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(430), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5271] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      sym_important,
    ACTIONS(667), 1,
      anon_sym_LPAREN2,
    ACTIONS(670), 1,
      anon_sym_SQUOTE,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
    ACTIONS(676), 1,
      aux_sym_integer_value_token1,
    ACTIONS(679), 1,
      aux_sym_float_value_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(688), 1,
      sym_plain_value,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(659), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5327] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_POUND,
    ACTIONS(699), 1,
      sym_important,
    ACTIONS(702), 1,
      anon_sym_LPAREN2,
    ACTIONS(705), 1,
      anon_sym_SQUOTE,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    ACTIONS(711), 1,
      aux_sym_integer_value_token1,
    ACTIONS(714), 1,
      aux_sym_float_value_token1,
    ACTIONS(717), 1,
      anon_sym_LBRACK2,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(723), 1,
      sym_plain_value,
    STATE(115), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(694), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(219), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5385] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(468), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(470), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5417] = 5,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(728), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(726), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5452] = 5,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(732), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5487] = 5,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(738), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(736), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5522] = 5,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(744), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(742), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5557] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_plain_value,
    ACTIONS(653), 1,
      anon_sym_SEMI,
    ACTIONS(748), 1,
      sym_important,
    STATE(115), 1,
      aux_sym_declaration_repeat1,
    STATE(219), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5614] = 5,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(752), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(750), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5649] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5704] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_plain_value,
    ACTIONS(756), 1,
      anon_sym_SEMI,
    ACTIONS(758), 1,
      sym_important,
    STATE(115), 1,
      aux_sym_declaration_repeat1,
    STATE(219), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5761] = 5,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(762), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(760), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5796] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5850] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5904] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_arguments,
    ACTIONS(770), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(768), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(598), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
    ACTIONS(604), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [5944] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(772), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5998] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6052] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6106] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(780), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(778), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6135] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(784), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(782), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6164] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(788), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(786), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6193] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    STATE(130), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6244] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(792), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(790), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6273] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(796), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(794), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6302] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(800), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(798), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6331] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(804), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(802), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6360] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(808), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(806), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6389] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(596), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6418] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(814), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(810), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6449] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(816), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6480] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(820), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6511] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(826), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(824), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6542] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(637), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6571] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(828), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6600] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(834), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(832), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6629] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(836), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6658] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(840), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6687] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(846), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(844), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6716] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(850), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(848), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6747] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(854), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(852), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6776] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_important,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(312), 1,
      sym_plain_value,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    STATE(105), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(223), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6827] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(858), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(856), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6858] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(862), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(860), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6887] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(866), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(864), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6916] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(870), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(868), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6945] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(874), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(872), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6974] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(878), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(876), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7003] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(882), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(880), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7032] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(886), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(884), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7061] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(762), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(760), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7090] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(890), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(888), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7119] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(894), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(892), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7150] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(738), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(736), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7179] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(898), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(896), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7208] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(902), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(900), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7237] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_arguments,
    ACTIONS(604), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(598), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7272] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(906), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(904), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7301] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(633), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7330] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(910), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(908), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7361] = 4,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(914), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(912), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7392] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(918), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(916), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7421] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(920), 1,
      sym_important,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(926), 1,
      sym_plain_value,
    STATE(346), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7469] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(928), 1,
      sym_important,
    ACTIONS(930), 1,
      sym_plain_value,
    STATE(353), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7517] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(932), 1,
      sym_important,
    ACTIONS(934), 1,
      sym_plain_value,
    STATE(312), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7565] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_POUND,
    ACTIONS(938), 1,
      sym_important,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(942), 1,
      anon_sym_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(946), 1,
      aux_sym_integer_value_token1,
    ACTIONS(948), 1,
      aux_sym_float_value_token1,
    ACTIONS(950), 1,
      anon_sym_LBRACK2,
    ACTIONS(952), 1,
      sym_identifier,
    ACTIONS(954), 1,
      sym_plain_value,
    STATE(292), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7613] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(956), 1,
      sym_important,
    ACTIONS(958), 1,
      sym_plain_value,
    STATE(350), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7661] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(960), 1,
      sym_important,
    ACTIONS(962), 1,
      sym_plain_value,
    STATE(65), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7709] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(964), 1,
      sym_important,
    ACTIONS(966), 1,
      sym_plain_value,
    STATE(351), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7757] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(968), 1,
      sym_important,
    ACTIONS(970), 1,
      sym_plain_value,
    STATE(222), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7805] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym_unit,
    ACTIONS(974), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(972), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7837] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(982), 1,
      sym_unit,
    ACTIONS(980), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(978), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7869] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(984), 1,
      sym_important,
    ACTIONS(986), 1,
      sym_plain_value,
    STATE(341), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7917] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(988), 1,
      sym_important,
    ACTIONS(990), 1,
      sym_plain_value,
    STATE(213), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7965] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(992), 1,
      sym_important,
    ACTIONS(994), 1,
      sym_plain_value,
    STATE(358), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8013] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(996), 1,
      sym_important,
    ACTIONS(998), 1,
      sym_plain_value,
    STATE(78), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8061] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      sym_important,
    ACTIONS(1002), 1,
      sym_plain_value,
    STATE(323), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8109] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(942), 1,
      anon_sym_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(946), 1,
      aux_sym_integer_value_token1,
    ACTIONS(948), 1,
      aux_sym_float_value_token1,
    ACTIONS(950), 1,
      anon_sym_LBRACK2,
    ACTIONS(952), 1,
      sym_identifier,
    ACTIONS(1004), 1,
      sym_important,
    ACTIONS(1006), 1,
      sym_plain_value,
    STATE(227), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8157] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(942), 1,
      anon_sym_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(946), 1,
      aux_sym_integer_value_token1,
    ACTIONS(948), 1,
      aux_sym_float_value_token1,
    ACTIONS(950), 1,
      anon_sym_LBRACK2,
    ACTIONS(952), 1,
      sym_identifier,
    ACTIONS(1008), 1,
      sym_important,
    ACTIONS(1010), 1,
      sym_plain_value,
    STATE(235), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8205] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(1012), 1,
      sym_important,
    ACTIONS(1014), 1,
      sym_plain_value,
    STATE(354), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8253] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      sym_important,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(540), 1,
      sym_plain_value,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    STATE(342), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8301] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(1016), 1,
      sym_important,
    ACTIONS(1018), 1,
      sym_plain_value,
    STATE(328), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8349] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN2,
    ACTIONS(304), 1,
      aux_sym_integer_value_token1,
    ACTIONS(306), 1,
      aux_sym_float_value_token1,
    ACTIONS(502), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(1020), 1,
      sym_important,
    ACTIONS(1022), 1,
      sym_plain_value,
    STATE(80), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8397] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(542), 1,
      sym_important,
    ACTIONS(544), 1,
      sym_plain_value,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    STATE(355), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8445] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(1024), 1,
      sym_important,
    ACTIONS(1026), 1,
      sym_plain_value,
    STATE(321), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8493] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_integer_value_token1,
    ACTIONS(534), 1,
      aux_sym_float_value_token1,
    ACTIONS(536), 1,
      anon_sym_LBRACK2,
    ACTIONS(922), 1,
      anon_sym_LPAREN2,
    ACTIONS(924), 1,
      sym_identifier,
    ACTIONS(1028), 1,
      sym_important,
    ACTIONS(1030), 1,
      sym_plain_value,
    STATE(343), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8541] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    ACTIONS(1040), 1,
      anon_sym_LPAREN2,
    ACTIONS(1043), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1046), 1,
      aux_sym_float_value_token1,
    ACTIONS(1049), 1,
      anon_sym_var,
    ACTIONS(1032), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1035), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(199), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8582] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(639), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(637), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8611] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(635), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(633), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8640] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1054), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1052), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8669] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1058), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1056), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8698] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    ACTIONS(1066), 1,
      anon_sym_LPAREN2,
    ACTIONS(1068), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1070), 1,
      aux_sym_float_value_token1,
    ACTIONS(1072), 1,
      anon_sym_var,
    ACTIONS(1060), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1062), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(199), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8739] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LPAREN2,
    ACTIONS(1068), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1070), 1,
      aux_sym_float_value_token1,
    ACTIONS(1072), 1,
      anon_sym_var,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1076), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(206), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8780] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LPAREN2,
    ACTIONS(1068), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1070), 1,
      aux_sym_float_value_token1,
    ACTIONS(1072), 1,
      anon_sym_var,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    ACTIONS(1060), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1062), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(199), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8821] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1084), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1082), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8850] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1088), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1086), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8879] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LPAREN2,
    ACTIONS(1068), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1070), 1,
      aux_sym_float_value_token1,
    ACTIONS(1072), 1,
      anon_sym_var,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    ACTIONS(1090), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1092), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(204), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8920] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1098), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1096), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8949] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1102), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1100), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8978] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1106), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1104), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9007] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1110), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1108), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9036] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1114), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1112), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9065] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1118), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1116), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9094] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1122), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1120), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9123] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SEMI,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(627), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9155] = 5,
    ACTIONS(1126), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1124), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(625), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9185] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(558), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1130), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1128), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9217] = 5,
    ACTIONS(1134), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1132), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(596), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9247] = 5,
    ACTIONS(1134), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1132), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(625), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9277] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(558), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1136), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(694), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9309] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_STAR,
    ACTIONS(558), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1140), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1138), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9341] = 5,
    ACTIONS(1126), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1124), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(596), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9371] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_SEMI,
    ACTIONS(1144), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(627), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9403] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1152), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1154), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(459), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9442] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1158), 1,
      anon_sym_SEMI,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1160), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1164), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(344), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9481] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_SEMI,
    ACTIONS(631), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(627), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9510] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_SEMI,
    ACTIONS(631), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(627), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9539] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
    ACTIONS(1172), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1174), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(465), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9578] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1176), 1,
      anon_sym_SEMI,
    ACTIONS(1178), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1180), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(448), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9617] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1182), 1,
      anon_sym_SEMI,
    ACTIONS(1184), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1186), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(456), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9656] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1188), 1,
      anon_sym_SEMI,
    ACTIONS(1190), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1192), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(435), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9695] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1194), 1,
      anon_sym_SEMI,
    ACTIONS(1196), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1198), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(462), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9734] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1160), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1164), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(345), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9773] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SEMI,
    ACTIONS(631), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(627), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9802] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_SEMI,
    ACTIONS(631), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(627), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9831] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1202), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1204), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(419), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9867] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1206), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1208), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(441), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9903] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LPAREN2,
    ACTIONS(1212), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1214), 1,
      aux_sym_float_value_token1,
    ACTIONS(1220), 1,
      anon_sym_calc,
    ACTIONS(1216), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1218), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(234), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9939] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LPAREN2,
    ACTIONS(1212), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1214), 1,
      aux_sym_float_value_token1,
    ACTIONS(1220), 1,
      anon_sym_calc,
    ACTIONS(1222), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1224), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(231), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9975] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LPAREN2,
    ACTIONS(1212), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1214), 1,
      aux_sym_float_value_token1,
    ACTIONS(1220), 1,
      anon_sym_calc,
    ACTIONS(1226), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1228), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(230), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10011] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LPAREN2,
    ACTIONS(1212), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1214), 1,
      aux_sym_float_value_token1,
    ACTIONS(1220), 1,
      anon_sym_calc,
    ACTIONS(1230), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1232), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(233), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10047] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LPAREN2,
    ACTIONS(1212), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1214), 1,
      aux_sym_float_value_token1,
    ACTIONS(1220), 1,
      anon_sym_calc,
    ACTIONS(1234), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1236), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(243), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10083] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LPAREN2,
    ACTIONS(1212), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1214), 1,
      aux_sym_float_value_token1,
    ACTIONS(1220), 1,
      anon_sym_calc,
    ACTIONS(1238), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1240), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(226), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10119] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1242), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1244), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(423), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10155] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1246), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1248), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(415), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10191] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LPAREN2,
    ACTIONS(1212), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1214), 1,
      aux_sym_float_value_token1,
    ACTIONS(1220), 1,
      anon_sym_calc,
    ACTIONS(1250), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1252), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(232), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10227] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN2,
    ACTIONS(1148), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1150), 1,
      aux_sym_float_value_token1,
    ACTIONS(1156), 1,
      anon_sym_calc,
    ACTIONS(1254), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1256), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(455), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10263] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym_unit,
    ACTIONS(978), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(980), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10290] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym_unit,
    ACTIONS(972), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(974), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10317] = 9,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(1262), 1,
      anon_sym_SEMI,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(325), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10352] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1082), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1084), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10376] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1056), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1058), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10400] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1096), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1098), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10424] = 14,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1268), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1270), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(1276), 1,
      anon_sym_TILDE,
    ACTIONS(1278), 1,
      anon_sym_PLUS,
    ACTIONS(1280), 1,
      anon_sym_PIPE,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    ACTIONS(1284), 1,
      sym__descendant_operator,
    ACTIONS(1286), 1,
      sym__pseudo_class_selector_colon,
    STATE(409), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10468] = 9,
    ACTIONS(1290), 1,
      anon_sym_host,
    ACTIONS(1294), 1,
      sym_escape_sequence,
    ACTIONS(1296), 1,
      sym_identifier,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(125), 1,
      sym_class_name,
    STATE(163), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1292), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1288), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [10502] = 3,
    ACTIONS(1298), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(596), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [10524] = 14,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1268), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1270), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(1276), 1,
      anon_sym_TILDE,
    ACTIONS(1278), 1,
      anon_sym_PLUS,
    ACTIONS(1280), 1,
      anon_sym_PIPE,
    ACTIONS(1284), 1,
      sym__descendant_operator,
    ACTIONS(1286), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1300), 1,
      anon_sym_LBRACE,
    STATE(401), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10568] = 3,
    ACTIONS(1302), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(596), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [10590] = 14,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(1268), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1270), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(1276), 1,
      anon_sym_TILDE,
    ACTIONS(1278), 1,
      anon_sym_PLUS,
    ACTIONS(1280), 1,
      anon_sym_PIPE,
    ACTIONS(1284), 1,
      sym__descendant_operator,
    ACTIONS(1286), 1,
      sym__pseudo_class_selector_colon,
    STATE(412), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10634] = 9,
    ACTIONS(1294), 1,
      sym_escape_sequence,
    ACTIONS(1296), 1,
      sym_identifier,
    ACTIONS(1306), 1,
      anon_sym_host,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(119), 1,
      sym_class_name,
    STATE(166), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1292), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1304), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [10668] = 12,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(1268), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1270), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(1276), 1,
      anon_sym_TILDE,
    ACTIONS(1278), 1,
      anon_sym_PLUS,
    ACTIONS(1280), 1,
      anon_sym_PIPE,
    ACTIONS(1284), 1,
      sym__descendant_operator,
    ACTIONS(1286), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1308), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [10708] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1310), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1312), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10732] = 14,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(1268), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1270), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(1276), 1,
      anon_sym_TILDE,
    ACTIONS(1278), 1,
      anon_sym_PLUS,
    ACTIONS(1280), 1,
      anon_sym_PIPE,
    ACTIONS(1284), 1,
      sym__descendant_operator,
    ACTIONS(1286), 1,
      sym__pseudo_class_selector_colon,
    STATE(408), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10776] = 3,
    ACTIONS(1314), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(596), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [10798] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1316), 1,
      sym_unit,
    ACTIONS(974), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(972), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10823] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1318), 1,
      sym_unit,
    ACTIONS(980), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(978), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10848] = 12,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(1268), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1270), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(1276), 1,
      anon_sym_TILDE,
    ACTIONS(1278), 1,
      anon_sym_PLUS,
    ACTIONS(1280), 1,
      anon_sym_PIPE,
    ACTIONS(1284), 1,
      sym__descendant_operator,
    ACTIONS(1286), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10887] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_arguments,
    ACTIONS(598), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(604), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10914] = 6,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(394), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10940] = 12,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(1268), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1270), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(1276), 1,
      anon_sym_TILDE,
    ACTIONS(1278), 1,
      anon_sym_PLUS,
    ACTIONS(1280), 1,
      anon_sym_PIPE,
    ACTIONS(1284), 1,
      sym__descendant_operator,
    ACTIONS(1286), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10978] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1096), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1098), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11000] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1326), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1324), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11022] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1056), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1058), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11044] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1082), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1084), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11066] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1330), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1328), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11088] = 6,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(349), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11114] = 6,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(339), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11140] = 12,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(1268), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1270), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(1276), 1,
      anon_sym_TILDE,
    ACTIONS(1278), 1,
      anon_sym_PLUS,
    ACTIONS(1280), 1,
      anon_sym_PIPE,
    ACTIONS(1284), 1,
      sym__descendant_operator,
    ACTIONS(1286), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11178] = 6,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(337), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11204] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1058), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1056), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11226] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1084), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1082), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11248] = 6,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1334), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(403), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11274] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1098), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1096), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11296] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym_unit,
    ACTIONS(972), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(974), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11320] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym_unit,
    ACTIONS(978), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(980), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11344] = 6,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(340), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11370] = 6,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(334), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11396] = 6,
    ACTIONS(506), 1,
      anon_sym_selector,
    ACTIONS(1162), 1,
      anon_sym_LPAREN2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(369), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11422] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1100), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1102), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11443] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1108), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1110), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11464] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(633), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(635), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11485] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1052), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1054), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11506] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1112), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1114), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11527] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1116), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1118), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11548] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1120), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1122), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11569] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1106), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11590] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SLASH,
    ACTIONS(1340), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym_arguments,
    ACTIONS(598), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11615] = 11,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(1268), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1270), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    ACTIONS(1274), 1,
      anon_sym_GT,
    ACTIONS(1276), 1,
      anon_sym_TILDE,
    ACTIONS(1278), 1,
      anon_sym_PLUS,
    ACTIONS(1280), 1,
      anon_sym_PIPE,
    ACTIONS(1284), 1,
      sym__descendant_operator,
    ACTIONS(1286), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11650] = 4,
    ACTIONS(1344), 1,
      anon_sym_border,
    STATE(242), 1,
      sym_europacss_color_target,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1342), 8,
      anon_sym_fg,
      anon_sym_bg,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_border_DASHtop,
      anon_sym_border_DASHbottom,
      anon_sym_border_DASHleft,
      anon_sym_border_DASHright,
  [11671] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(637), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(639), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11692] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1086), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1088), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11713] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SLASH,
    ACTIONS(1340), 1,
      anon_sym_LPAREN,
    ACTIONS(1346), 1,
      anon_sym_COLON,
    STATE(311), 1,
      sym_arguments,
    ACTIONS(598), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(768), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11742] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1348), 5,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    ACTIONS(1350), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
  [11763] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_SLASH,
    ACTIONS(1352), 1,
      sym_unit,
    ACTIONS(978), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11785] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_SLASH,
    ACTIONS(1354), 1,
      sym_unit,
    ACTIONS(972), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11807] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_SLASH,
    ACTIONS(1056), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [11827] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_SLASH,
    ACTIONS(1096), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11846] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_SLASH,
    ACTIONS(1082), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11865] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_SLASH,
    ACTIONS(1086), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11884] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_SLASH,
    ACTIONS(1108), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11903] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_SLASH,
    ACTIONS(1104), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11922] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_SLASH,
    ACTIONS(1112), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11941] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_SLASH,
    ACTIONS(1116), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11960] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_SLASH,
    ACTIONS(1100), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11979] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_SLASH,
    ACTIONS(1120), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11998] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_SLASH,
    ACTIONS(637), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12017] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SLASH,
    ACTIONS(633), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12036] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_SLASH,
    ACTIONS(1052), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12055] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1360), 1,
      anon_sym_RBRACK,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    STATE(411), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12079] = 6,
    ACTIONS(1364), 1,
      anon_sym_RBRACE,
    ACTIONS(1368), 1,
      aux_sym_integer_value_token1,
    STATE(429), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1366), 2,
      sym_from,
      sym_to,
    STATE(326), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12101] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1370), 1,
      anon_sym_RBRACK,
    STATE(407), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12125] = 7,
    ACTIONS(942), 1,
      anon_sym_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(1320), 1,
      anon_sym_LPAREN,
    ACTIONS(1372), 1,
      sym_identifier,
    STATE(303), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(453), 2,
      sym_string_value,
      sym_call_expression,
  [12149] = 7,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_block,
    STATE(348), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
  [12173] = 6,
    ACTIONS(1380), 1,
      anon_sym_RBRACE,
    ACTIONS(1385), 1,
      aux_sym_integer_value_token1,
    STATE(429), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1382), 2,
      sym_from,
      sym_to,
    STATE(326), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12195] = 7,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_block,
    STATE(347), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
  [12219] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1390), 1,
      anon_sym_RBRACK,
    STATE(400), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12243] = 6,
    ACTIONS(1368), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1392), 1,
      anon_sym_RBRACE,
    STATE(429), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1366), 2,
      sym_from,
      sym_to,
    STATE(331), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12265] = 6,
    ACTIONS(1368), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1394), 1,
      anon_sym_RBRACE,
    STATE(429), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1366), 2,
      sym_from,
      sym_to,
    STATE(322), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12287] = 6,
    ACTIONS(1368), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1396), 1,
      anon_sym_RBRACE,
    STATE(429), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1366), 2,
      sym_from,
      sym_to,
    STATE(326), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12309] = 7,
    ACTIONS(942), 1,
      anon_sym_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(1320), 1,
      anon_sym_LPAREN,
    ACTIONS(1372), 1,
      sym_identifier,
    STATE(303), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(452), 2,
      sym_string_value,
      sym_call_expression,
  [12333] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(768), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12346] = 6,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      sym_block,
    STATE(397), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
  [12367] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1398), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12380] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1400), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12393] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1402), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12406] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1404), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12419] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1406), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12432] = 6,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      sym_block,
    STATE(372), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
  [12453] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1408), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12472] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12490] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1412), 1,
      anon_sym_SEMI,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12508] = 5,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1414), 1,
      anon_sym_SEMI,
    STATE(406), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
  [12526] = 5,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_SEMI,
    STATE(402), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
  [12544] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1418), 1,
      anon_sym_SEMI,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12562] = 6,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1420), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_block,
    STATE(392), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12582] = 6,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1422), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym_block,
    STATE(392), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12602] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1424), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12616] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1426), 1,
      anon_sym_RBRACK,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12634] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12652] = 5,
    ACTIONS(942), 1,
      anon_sym_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(1430), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(451), 2,
      sym_string_value,
      sym_call_expression,
  [12670] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12688] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12706] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12724] = 5,
    ACTIONS(942), 1,
      anon_sym_SQUOTE,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(1438), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(436), 2,
      sym_string_value,
      sym_call_expression,
  [12742] = 4,
    ACTIONS(1442), 1,
      aux_sym_integer_value_token1,
    STATE(416), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1440), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [12758] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_SLASH,
    ACTIONS(1444), 1,
      anon_sym_RBRACK,
    ACTIONS(1358), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12776] = 4,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12791] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12802] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(458), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12813] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(478), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12824] = 4,
    ACTIONS(1448), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12839] = 3,
    ACTIONS(1346), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(768), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12852] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1450), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12863] = 4,
    ACTIONS(1452), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1308), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [12878] = 4,
    ACTIONS(1455), 1,
      anon_sym_SQUOTE,
    STATE(370), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1457), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12893] = 4,
    ACTIONS(1455), 1,
      anon_sym_DQUOTE,
    STATE(371), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1459), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12908] = 4,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
  [12923] = 4,
    ACTIONS(1461), 1,
      anon_sym_SQUOTE,
    STATE(374), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1463), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12938] = 4,
    ACTIONS(1461), 1,
      anon_sym_DQUOTE,
    STATE(376), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1465), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12953] = 5,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      sym_block,
    STATE(392), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12970] = 4,
    ACTIONS(1467), 1,
      anon_sym_SQUOTE,
    STATE(374), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1463), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12985] = 4,
    ACTIONS(1469), 1,
      anon_sym_SQUOTE,
    STATE(374), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1471), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13000] = 4,
    ACTIONS(1474), 1,
      anon_sym_DQUOTE,
    STATE(395), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1476), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13015] = 4,
    ACTIONS(1478), 1,
      anon_sym_DQUOTE,
    STATE(376), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1480), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13030] = 4,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(136), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1294), 2,
      sym_escape_sequence,
      sym_identifier,
  [13045] = 4,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13060] = 4,
    ACTIONS(1485), 1,
      anon_sym_SQUOTE,
    STATE(381), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1487), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13075] = 4,
    ACTIONS(1485), 1,
      anon_sym_DQUOTE,
    STATE(382), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1489), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13090] = 4,
    ACTIONS(1491), 1,
      anon_sym_SQUOTE,
    STATE(374), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1463), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13105] = 4,
    ACTIONS(1491), 1,
      anon_sym_DQUOTE,
    STATE(376), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1465), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13120] = 4,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1493), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13135] = 4,
    ACTIONS(1496), 1,
      anon_sym_SQUOTE,
    STATE(386), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1498), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13150] = 4,
    ACTIONS(1496), 1,
      anon_sym_DQUOTE,
    STATE(387), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1500), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13165] = 4,
    ACTIONS(1502), 1,
      anon_sym_SQUOTE,
    STATE(374), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1463), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13180] = 4,
    ACTIONS(1502), 1,
      anon_sym_DQUOTE,
    STATE(376), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1465), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13195] = 4,
    ACTIONS(1504), 1,
      anon_sym_SQUOTE,
    STATE(390), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1506), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13210] = 4,
    ACTIONS(1504), 1,
      anon_sym_DQUOTE,
    STATE(391), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1508), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13225] = 4,
    ACTIONS(1510), 1,
      anon_sym_SQUOTE,
    STATE(374), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1463), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13240] = 4,
    ACTIONS(1510), 1,
      anon_sym_DQUOTE,
    STATE(376), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1465), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13255] = 4,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1424), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13270] = 4,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(139), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1294), 2,
      sym_escape_sequence,
      sym_identifier,
  [13285] = 4,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
  [13300] = 4,
    ACTIONS(1467), 1,
      anon_sym_DQUOTE,
    STATE(376), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1465), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13315] = 4,
    ACTIONS(1474), 1,
      anon_sym_SQUOTE,
    STATE(373), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1515), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13330] = 5,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      sym_block,
    STATE(392), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13347] = 4,
    ACTIONS(1408), 1,
      anon_sym_RBRACK,
    ACTIONS(1517), 1,
      anon_sym_COMMA,
    STATE(398), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13361] = 4,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    ACTIONS(1520), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13375] = 4,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1523), 1,
      anon_sym_RBRACK,
    STATE(398), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13389] = 4,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1525), 1,
      anon_sym_LBRACE,
    STATE(366), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13403] = 4,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1527), 1,
      anon_sym_SEMI,
    STATE(392), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13417] = 3,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      anon_sym_and,
      anon_sym_or,
  [13429] = 3,
    ACTIONS(1531), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(972), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13441] = 3,
    ACTIONS(1533), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(978), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13453] = 4,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    ACTIONS(1535), 1,
      anon_sym_SEMI,
    STATE(392), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13467] = 4,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1537), 1,
      anon_sym_RBRACK,
    STATE(398), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13481] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13495] = 4,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13509] = 4,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    ACTIONS(974), 1,
      anon_sym_of,
    ACTIONS(1543), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13523] = 4,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1545), 1,
      anon_sym_RBRACK,
    STATE(398), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13537] = 4,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13551] = 3,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13562] = 3,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13573] = 3,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13584] = 3,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
    ACTIONS(1551), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13595] = 3,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13606] = 3,
    ACTIONS(1553), 1,
      aux_sym_color_value_token1,
    ACTIONS(1555), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13617] = 3,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13628] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1324), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13637] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1328), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13646] = 3,
    ACTIONS(1557), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13657] = 3,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13668] = 3,
    ACTIONS(1559), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13679] = 3,
    ACTIONS(1561), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13690] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1563), 1,
      sym_plain_value,
    ACTIONS(1565), 1,
      sym_europacss_slash_value,
  [13703] = 3,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13714] = 3,
    ACTIONS(1320), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13725] = 3,
    ACTIONS(1567), 1,
      anon_sym_LBRACE,
    STATE(365), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13736] = 3,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13747] = 2,
    ACTIONS(1569), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13755] = 2,
    ACTIONS(1571), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13763] = 2,
    ACTIONS(1573), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13771] = 2,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13779] = 2,
    ACTIONS(1575), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13787] = 2,
    ACTIONS(1577), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13795] = 3,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1579), 1,
      sym_plain_value,
  [13805] = 2,
    ACTIONS(1581), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13813] = 2,
    ACTIONS(1583), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13821] = 2,
    ACTIONS(1585), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13829] = 2,
    ACTIONS(1587), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13837] = 2,
    ACTIONS(1589), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13845] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13853] = 2,
    ACTIONS(1591), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13861] = 2,
    ACTIONS(1593), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13869] = 2,
    ACTIONS(1595), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13877] = 2,
    ACTIONS(1597), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13885] = 2,
    ACTIONS(1599), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13893] = 2,
    ACTIONS(1601), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13901] = 2,
    ACTIONS(1603), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13909] = 2,
    ACTIONS(1605), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13917] = 2,
    ACTIONS(1607), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13925] = 2,
    ACTIONS(1609), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13933] = 2,
    ACTIONS(1611), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13941] = 2,
    ACTIONS(1613), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13949] = 2,
    ACTIONS(1615), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13957] = 2,
    ACTIONS(1617), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13965] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13973] = 2,
    ACTIONS(1619), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13981] = 2,
    ACTIONS(1621), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13989] = 2,
    ACTIONS(1623), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13997] = 2,
    ACTIONS(1625), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14005] = 2,
    ACTIONS(1627), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14013] = 2,
    ACTIONS(1629), 1,
      anon_sym_LBRACK2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14021] = 2,
    ACTIONS(1631), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14029] = 2,
    ACTIONS(1633), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14037] = 2,
    ACTIONS(1635), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 404,
  [SMALL_STATE(14)] = 501,
  [SMALL_STATE(15)] = 548,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 642,
  [SMALL_STATE(18)] = 689,
  [SMALL_STATE(19)] = 736,
  [SMALL_STATE(20)] = 783,
  [SMALL_STATE(21)] = 830,
  [SMALL_STATE(22)] = 877,
  [SMALL_STATE(23)] = 924,
  [SMALL_STATE(24)] = 971,
  [SMALL_STATE(25)] = 1018,
  [SMALL_STATE(26)] = 1065,
  [SMALL_STATE(27)] = 1112,
  [SMALL_STATE(28)] = 1159,
  [SMALL_STATE(29)] = 1206,
  [SMALL_STATE(30)] = 1253,
  [SMALL_STATE(31)] = 1300,
  [SMALL_STATE(32)] = 1347,
  [SMALL_STATE(33)] = 1394,
  [SMALL_STATE(34)] = 1441,
  [SMALL_STATE(35)] = 1488,
  [SMALL_STATE(36)] = 1535,
  [SMALL_STATE(37)] = 1582,
  [SMALL_STATE(38)] = 1629,
  [SMALL_STATE(39)] = 1676,
  [SMALL_STATE(40)] = 1723,
  [SMALL_STATE(41)] = 1770,
  [SMALL_STATE(42)] = 1817,
  [SMALL_STATE(43)] = 1864,
  [SMALL_STATE(44)] = 1911,
  [SMALL_STATE(45)] = 1958,
  [SMALL_STATE(46)] = 2005,
  [SMALL_STATE(47)] = 2052,
  [SMALL_STATE(48)] = 2099,
  [SMALL_STATE(49)] = 2146,
  [SMALL_STATE(50)] = 2193,
  [SMALL_STATE(51)] = 2240,
  [SMALL_STATE(52)] = 2287,
  [SMALL_STATE(53)] = 2334,
  [SMALL_STATE(54)] = 2381,
  [SMALL_STATE(55)] = 2428,
  [SMALL_STATE(56)] = 2475,
  [SMALL_STATE(57)] = 2522,
  [SMALL_STATE(58)] = 2569,
  [SMALL_STATE(59)] = 2616,
  [SMALL_STATE(60)] = 2691,
  [SMALL_STATE(61)] = 2756,
  [SMALL_STATE(62)] = 2819,
  [SMALL_STATE(63)] = 2882,
  [SMALL_STATE(64)] = 2944,
  [SMALL_STATE(65)] = 3006,
  [SMALL_STATE(66)] = 3074,
  [SMALL_STATE(67)] = 3136,
  [SMALL_STATE(68)] = 3198,
  [SMALL_STATE(69)] = 3260,
  [SMALL_STATE(70)] = 3322,
  [SMALL_STATE(71)] = 3384,
  [SMALL_STATE(72)] = 3446,
  [SMALL_STATE(73)] = 3508,
  [SMALL_STATE(74)] = 3570,
  [SMALL_STATE(75)] = 3634,
  [SMALL_STATE(76)] = 3698,
  [SMALL_STATE(77)] = 3760,
  [SMALL_STATE(78)] = 3822,
  [SMALL_STATE(79)] = 3887,
  [SMALL_STATE(80)] = 3932,
  [SMALL_STATE(81)] = 3997,
  [SMALL_STATE(82)] = 4034,
  [SMALL_STATE(83)] = 4095,
  [SMALL_STATE(84)] = 4132,
  [SMALL_STATE(85)] = 4171,
  [SMALL_STATE(86)] = 4206,
  [SMALL_STATE(87)] = 4241,
  [SMALL_STATE(88)] = 4302,
  [SMALL_STATE(89)] = 4363,
  [SMALL_STATE(90)] = 4395,
  [SMALL_STATE(91)] = 4427,
  [SMALL_STATE(92)] = 4459,
  [SMALL_STATE(93)] = 4491,
  [SMALL_STATE(94)] = 4523,
  [SMALL_STATE(95)] = 4583,
  [SMALL_STATE(96)] = 4615,
  [SMALL_STATE(97)] = 4647,
  [SMALL_STATE(98)] = 4679,
  [SMALL_STATE(99)] = 4711,
  [SMALL_STATE(100)] = 4743,
  [SMALL_STATE(101)] = 4803,
  [SMALL_STATE(102)] = 4835,
  [SMALL_STATE(103)] = 4867,
  [SMALL_STATE(104)] = 4899,
  [SMALL_STATE(105)] = 4931,
  [SMALL_STATE(106)] = 4987,
  [SMALL_STATE(107)] = 5019,
  [SMALL_STATE(108)] = 5079,
  [SMALL_STATE(109)] = 5111,
  [SMALL_STATE(110)] = 5143,
  [SMALL_STATE(111)] = 5175,
  [SMALL_STATE(112)] = 5207,
  [SMALL_STATE(113)] = 5239,
  [SMALL_STATE(114)] = 5271,
  [SMALL_STATE(115)] = 5327,
  [SMALL_STATE(116)] = 5385,
  [SMALL_STATE(117)] = 5417,
  [SMALL_STATE(118)] = 5452,
  [SMALL_STATE(119)] = 5487,
  [SMALL_STATE(120)] = 5522,
  [SMALL_STATE(121)] = 5557,
  [SMALL_STATE(122)] = 5614,
  [SMALL_STATE(123)] = 5649,
  [SMALL_STATE(124)] = 5704,
  [SMALL_STATE(125)] = 5761,
  [SMALL_STATE(126)] = 5796,
  [SMALL_STATE(127)] = 5850,
  [SMALL_STATE(128)] = 5904,
  [SMALL_STATE(129)] = 5944,
  [SMALL_STATE(130)] = 5998,
  [SMALL_STATE(131)] = 6052,
  [SMALL_STATE(132)] = 6106,
  [SMALL_STATE(133)] = 6135,
  [SMALL_STATE(134)] = 6164,
  [SMALL_STATE(135)] = 6193,
  [SMALL_STATE(136)] = 6244,
  [SMALL_STATE(137)] = 6273,
  [SMALL_STATE(138)] = 6302,
  [SMALL_STATE(139)] = 6331,
  [SMALL_STATE(140)] = 6360,
  [SMALL_STATE(141)] = 6389,
  [SMALL_STATE(142)] = 6418,
  [SMALL_STATE(143)] = 6449,
  [SMALL_STATE(144)] = 6480,
  [SMALL_STATE(145)] = 6511,
  [SMALL_STATE(146)] = 6542,
  [SMALL_STATE(147)] = 6571,
  [SMALL_STATE(148)] = 6600,
  [SMALL_STATE(149)] = 6629,
  [SMALL_STATE(150)] = 6658,
  [SMALL_STATE(151)] = 6687,
  [SMALL_STATE(152)] = 6716,
  [SMALL_STATE(153)] = 6747,
  [SMALL_STATE(154)] = 6776,
  [SMALL_STATE(155)] = 6827,
  [SMALL_STATE(156)] = 6858,
  [SMALL_STATE(157)] = 6887,
  [SMALL_STATE(158)] = 6916,
  [SMALL_STATE(159)] = 6945,
  [SMALL_STATE(160)] = 6974,
  [SMALL_STATE(161)] = 7003,
  [SMALL_STATE(162)] = 7032,
  [SMALL_STATE(163)] = 7061,
  [SMALL_STATE(164)] = 7090,
  [SMALL_STATE(165)] = 7119,
  [SMALL_STATE(166)] = 7150,
  [SMALL_STATE(167)] = 7179,
  [SMALL_STATE(168)] = 7208,
  [SMALL_STATE(169)] = 7237,
  [SMALL_STATE(170)] = 7272,
  [SMALL_STATE(171)] = 7301,
  [SMALL_STATE(172)] = 7330,
  [SMALL_STATE(173)] = 7361,
  [SMALL_STATE(174)] = 7392,
  [SMALL_STATE(175)] = 7421,
  [SMALL_STATE(176)] = 7469,
  [SMALL_STATE(177)] = 7517,
  [SMALL_STATE(178)] = 7565,
  [SMALL_STATE(179)] = 7613,
  [SMALL_STATE(180)] = 7661,
  [SMALL_STATE(181)] = 7709,
  [SMALL_STATE(182)] = 7757,
  [SMALL_STATE(183)] = 7805,
  [SMALL_STATE(184)] = 7837,
  [SMALL_STATE(185)] = 7869,
  [SMALL_STATE(186)] = 7917,
  [SMALL_STATE(187)] = 7965,
  [SMALL_STATE(188)] = 8013,
  [SMALL_STATE(189)] = 8061,
  [SMALL_STATE(190)] = 8109,
  [SMALL_STATE(191)] = 8157,
  [SMALL_STATE(192)] = 8205,
  [SMALL_STATE(193)] = 8253,
  [SMALL_STATE(194)] = 8301,
  [SMALL_STATE(195)] = 8349,
  [SMALL_STATE(196)] = 8397,
  [SMALL_STATE(197)] = 8445,
  [SMALL_STATE(198)] = 8493,
  [SMALL_STATE(199)] = 8541,
  [SMALL_STATE(200)] = 8582,
  [SMALL_STATE(201)] = 8611,
  [SMALL_STATE(202)] = 8640,
  [SMALL_STATE(203)] = 8669,
  [SMALL_STATE(204)] = 8698,
  [SMALL_STATE(205)] = 8739,
  [SMALL_STATE(206)] = 8780,
  [SMALL_STATE(207)] = 8821,
  [SMALL_STATE(208)] = 8850,
  [SMALL_STATE(209)] = 8879,
  [SMALL_STATE(210)] = 8920,
  [SMALL_STATE(211)] = 8949,
  [SMALL_STATE(212)] = 8978,
  [SMALL_STATE(213)] = 9007,
  [SMALL_STATE(214)] = 9036,
  [SMALL_STATE(215)] = 9065,
  [SMALL_STATE(216)] = 9094,
  [SMALL_STATE(217)] = 9123,
  [SMALL_STATE(218)] = 9155,
  [SMALL_STATE(219)] = 9185,
  [SMALL_STATE(220)] = 9217,
  [SMALL_STATE(221)] = 9247,
  [SMALL_STATE(222)] = 9277,
  [SMALL_STATE(223)] = 9309,
  [SMALL_STATE(224)] = 9341,
  [SMALL_STATE(225)] = 9371,
  [SMALL_STATE(226)] = 9403,
  [SMALL_STATE(227)] = 9442,
  [SMALL_STATE(228)] = 9481,
  [SMALL_STATE(229)] = 9510,
  [SMALL_STATE(230)] = 9539,
  [SMALL_STATE(231)] = 9578,
  [SMALL_STATE(232)] = 9617,
  [SMALL_STATE(233)] = 9656,
  [SMALL_STATE(234)] = 9695,
  [SMALL_STATE(235)] = 9734,
  [SMALL_STATE(236)] = 9773,
  [SMALL_STATE(237)] = 9802,
  [SMALL_STATE(238)] = 9831,
  [SMALL_STATE(239)] = 9867,
  [SMALL_STATE(240)] = 9903,
  [SMALL_STATE(241)] = 9939,
  [SMALL_STATE(242)] = 9975,
  [SMALL_STATE(243)] = 10011,
  [SMALL_STATE(244)] = 10047,
  [SMALL_STATE(245)] = 10083,
  [SMALL_STATE(246)] = 10119,
  [SMALL_STATE(247)] = 10155,
  [SMALL_STATE(248)] = 10191,
  [SMALL_STATE(249)] = 10227,
  [SMALL_STATE(250)] = 10263,
  [SMALL_STATE(251)] = 10290,
  [SMALL_STATE(252)] = 10317,
  [SMALL_STATE(253)] = 10352,
  [SMALL_STATE(254)] = 10376,
  [SMALL_STATE(255)] = 10400,
  [SMALL_STATE(256)] = 10424,
  [SMALL_STATE(257)] = 10468,
  [SMALL_STATE(258)] = 10502,
  [SMALL_STATE(259)] = 10524,
  [SMALL_STATE(260)] = 10568,
  [SMALL_STATE(261)] = 10590,
  [SMALL_STATE(262)] = 10634,
  [SMALL_STATE(263)] = 10668,
  [SMALL_STATE(264)] = 10708,
  [SMALL_STATE(265)] = 10732,
  [SMALL_STATE(266)] = 10776,
  [SMALL_STATE(267)] = 10798,
  [SMALL_STATE(268)] = 10823,
  [SMALL_STATE(269)] = 10848,
  [SMALL_STATE(270)] = 10887,
  [SMALL_STATE(271)] = 10914,
  [SMALL_STATE(272)] = 10940,
  [SMALL_STATE(273)] = 10978,
  [SMALL_STATE(274)] = 11000,
  [SMALL_STATE(275)] = 11022,
  [SMALL_STATE(276)] = 11044,
  [SMALL_STATE(277)] = 11066,
  [SMALL_STATE(278)] = 11088,
  [SMALL_STATE(279)] = 11114,
  [SMALL_STATE(280)] = 11140,
  [SMALL_STATE(281)] = 11178,
  [SMALL_STATE(282)] = 11204,
  [SMALL_STATE(283)] = 11226,
  [SMALL_STATE(284)] = 11248,
  [SMALL_STATE(285)] = 11274,
  [SMALL_STATE(286)] = 11296,
  [SMALL_STATE(287)] = 11320,
  [SMALL_STATE(288)] = 11344,
  [SMALL_STATE(289)] = 11370,
  [SMALL_STATE(290)] = 11396,
  [SMALL_STATE(291)] = 11422,
  [SMALL_STATE(292)] = 11443,
  [SMALL_STATE(293)] = 11464,
  [SMALL_STATE(294)] = 11485,
  [SMALL_STATE(295)] = 11506,
  [SMALL_STATE(296)] = 11527,
  [SMALL_STATE(297)] = 11548,
  [SMALL_STATE(298)] = 11569,
  [SMALL_STATE(299)] = 11590,
  [SMALL_STATE(300)] = 11615,
  [SMALL_STATE(301)] = 11650,
  [SMALL_STATE(302)] = 11671,
  [SMALL_STATE(303)] = 11692,
  [SMALL_STATE(304)] = 11713,
  [SMALL_STATE(305)] = 11742,
  [SMALL_STATE(306)] = 11763,
  [SMALL_STATE(307)] = 11785,
  [SMALL_STATE(308)] = 11807,
  [SMALL_STATE(309)] = 11827,
  [SMALL_STATE(310)] = 11846,
  [SMALL_STATE(311)] = 11865,
  [SMALL_STATE(312)] = 11884,
  [SMALL_STATE(313)] = 11903,
  [SMALL_STATE(314)] = 11922,
  [SMALL_STATE(315)] = 11941,
  [SMALL_STATE(316)] = 11960,
  [SMALL_STATE(317)] = 11979,
  [SMALL_STATE(318)] = 11998,
  [SMALL_STATE(319)] = 12017,
  [SMALL_STATE(320)] = 12036,
  [SMALL_STATE(321)] = 12055,
  [SMALL_STATE(322)] = 12079,
  [SMALL_STATE(323)] = 12101,
  [SMALL_STATE(324)] = 12125,
  [SMALL_STATE(325)] = 12149,
  [SMALL_STATE(326)] = 12173,
  [SMALL_STATE(327)] = 12195,
  [SMALL_STATE(328)] = 12219,
  [SMALL_STATE(329)] = 12243,
  [SMALL_STATE(330)] = 12265,
  [SMALL_STATE(331)] = 12287,
  [SMALL_STATE(332)] = 12309,
  [SMALL_STATE(333)] = 12333,
  [SMALL_STATE(334)] = 12346,
  [SMALL_STATE(335)] = 12367,
  [SMALL_STATE(336)] = 12380,
  [SMALL_STATE(337)] = 12393,
  [SMALL_STATE(338)] = 12406,
  [SMALL_STATE(339)] = 12419,
  [SMALL_STATE(340)] = 12432,
  [SMALL_STATE(341)] = 12453,
  [SMALL_STATE(342)] = 12472,
  [SMALL_STATE(343)] = 12490,
  [SMALL_STATE(344)] = 12508,
  [SMALL_STATE(345)] = 12526,
  [SMALL_STATE(346)] = 12544,
  [SMALL_STATE(347)] = 12562,
  [SMALL_STATE(348)] = 12582,
  [SMALL_STATE(349)] = 12602,
  [SMALL_STATE(350)] = 12616,
  [SMALL_STATE(351)] = 12634,
  [SMALL_STATE(352)] = 12652,
  [SMALL_STATE(353)] = 12670,
  [SMALL_STATE(354)] = 12688,
  [SMALL_STATE(355)] = 12706,
  [SMALL_STATE(356)] = 12724,
  [SMALL_STATE(357)] = 12742,
  [SMALL_STATE(358)] = 12758,
  [SMALL_STATE(359)] = 12776,
  [SMALL_STATE(360)] = 12791,
  [SMALL_STATE(361)] = 12802,
  [SMALL_STATE(362)] = 12813,
  [SMALL_STATE(363)] = 12824,
  [SMALL_STATE(364)] = 12839,
  [SMALL_STATE(365)] = 12852,
  [SMALL_STATE(366)] = 12863,
  [SMALL_STATE(367)] = 12878,
  [SMALL_STATE(368)] = 12893,
  [SMALL_STATE(369)] = 12908,
  [SMALL_STATE(370)] = 12923,
  [SMALL_STATE(371)] = 12938,
  [SMALL_STATE(372)] = 12953,
  [SMALL_STATE(373)] = 12970,
  [SMALL_STATE(374)] = 12985,
  [SMALL_STATE(375)] = 13000,
  [SMALL_STATE(376)] = 13015,
  [SMALL_STATE(377)] = 13030,
  [SMALL_STATE(378)] = 13045,
  [SMALL_STATE(379)] = 13060,
  [SMALL_STATE(380)] = 13075,
  [SMALL_STATE(381)] = 13090,
  [SMALL_STATE(382)] = 13105,
  [SMALL_STATE(383)] = 13120,
  [SMALL_STATE(384)] = 13135,
  [SMALL_STATE(385)] = 13150,
  [SMALL_STATE(386)] = 13165,
  [SMALL_STATE(387)] = 13180,
  [SMALL_STATE(388)] = 13195,
  [SMALL_STATE(389)] = 13210,
  [SMALL_STATE(390)] = 13225,
  [SMALL_STATE(391)] = 13240,
  [SMALL_STATE(392)] = 13255,
  [SMALL_STATE(393)] = 13270,
  [SMALL_STATE(394)] = 13285,
  [SMALL_STATE(395)] = 13300,
  [SMALL_STATE(396)] = 13315,
  [SMALL_STATE(397)] = 13330,
  [SMALL_STATE(398)] = 13347,
  [SMALL_STATE(399)] = 13361,
  [SMALL_STATE(400)] = 13375,
  [SMALL_STATE(401)] = 13389,
  [SMALL_STATE(402)] = 13403,
  [SMALL_STATE(403)] = 13417,
  [SMALL_STATE(404)] = 13429,
  [SMALL_STATE(405)] = 13441,
  [SMALL_STATE(406)] = 13453,
  [SMALL_STATE(407)] = 13467,
  [SMALL_STATE(408)] = 13481,
  [SMALL_STATE(409)] = 13495,
  [SMALL_STATE(410)] = 13509,
  [SMALL_STATE(411)] = 13523,
  [SMALL_STATE(412)] = 13537,
  [SMALL_STATE(413)] = 13551,
  [SMALL_STATE(414)] = 13562,
  [SMALL_STATE(415)] = 13573,
  [SMALL_STATE(416)] = 13584,
  [SMALL_STATE(417)] = 13595,
  [SMALL_STATE(418)] = 13606,
  [SMALL_STATE(419)] = 13617,
  [SMALL_STATE(420)] = 13628,
  [SMALL_STATE(421)] = 13637,
  [SMALL_STATE(422)] = 13646,
  [SMALL_STATE(423)] = 13657,
  [SMALL_STATE(424)] = 13668,
  [SMALL_STATE(425)] = 13679,
  [SMALL_STATE(426)] = 13690,
  [SMALL_STATE(427)] = 13703,
  [SMALL_STATE(428)] = 13714,
  [SMALL_STATE(429)] = 13725,
  [SMALL_STATE(430)] = 13736,
  [SMALL_STATE(431)] = 13747,
  [SMALL_STATE(432)] = 13755,
  [SMALL_STATE(433)] = 13763,
  [SMALL_STATE(434)] = 13771,
  [SMALL_STATE(435)] = 13779,
  [SMALL_STATE(436)] = 13787,
  [SMALL_STATE(437)] = 13795,
  [SMALL_STATE(438)] = 13805,
  [SMALL_STATE(439)] = 13813,
  [SMALL_STATE(440)] = 13821,
  [SMALL_STATE(441)] = 13829,
  [SMALL_STATE(442)] = 13837,
  [SMALL_STATE(443)] = 13845,
  [SMALL_STATE(444)] = 13853,
  [SMALL_STATE(445)] = 13861,
  [SMALL_STATE(446)] = 13869,
  [SMALL_STATE(447)] = 13877,
  [SMALL_STATE(448)] = 13885,
  [SMALL_STATE(449)] = 13893,
  [SMALL_STATE(450)] = 13901,
  [SMALL_STATE(451)] = 13909,
  [SMALL_STATE(452)] = 13917,
  [SMALL_STATE(453)] = 13925,
  [SMALL_STATE(454)] = 13933,
  [SMALL_STATE(455)] = 13941,
  [SMALL_STATE(456)] = 13949,
  [SMALL_STATE(457)] = 13957,
  [SMALL_STATE(458)] = 13965,
  [SMALL_STATE(459)] = 13973,
  [SMALL_STATE(460)] = 13981,
  [SMALL_STATE(461)] = 13989,
  [SMALL_STATE(462)] = 13997,
  [SMALL_STATE(463)] = 14005,
  [SMALL_STATE(464)] = 14013,
  [SMALL_STATE(465)] = 14021,
  [SMALL_STATE(466)] = 14029,
  [SMALL_STATE(467)] = 14037,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_space, 4, 0, 23),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_space, 4, 0, 23),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_abs100, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_abs100, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_fontsize, 3, 0, 16),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_fontsize, 3, 0, 16),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column, 3, 0, 17),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column, 3, 0, 17),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column_offset, 3, 0, 17),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column_offset, 3, 0, 17),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_display, 3, 0, 17),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_display, 3, 0, 17),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_responsive, 3, 0, 18),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_responsive, 3, 0, 18),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_mq, 3, 0, 19),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_mq, 3, 0, 19),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_unpack, 3, 0, 17),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_unpack, 3, 0, 17),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_if, 3, 0, 20),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_if, 3, 0, 20),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color, 4, 0, 22),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color, 4, 0, 22),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_font, 4, 0, 24),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_font, 4, 0, 24),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_fontsize, 4, 0, 25),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_fontsize, 4, 0, 25),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column, 4, 0, 26),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column, 4, 0, 26),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column_offset, 4, 0, 26),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column_offset, 4, 0, 26),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color, 5, 0, 27),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color, 5, 0, 27),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_space, 5, 0, 28),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_space, 5, 0, 28),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_font, 5, 0, 29),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_font, 5, 0, 29),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_iterate, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_iterate, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 14),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 14),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, 0, 14),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 14),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 14),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 14),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_grid, 2, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_grid, 2, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_row, 2, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_row, 2, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, 0, 14),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 3),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, 0, 14),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, 0, 4),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, 0, 4),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, 0, 6),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, 0, 6),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, 0, 12),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, 0, 12),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 2, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 2, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1, 0, 0),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1, 0, 0),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1, 0, 0),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [1043] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [1046] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [1049] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2, 0, 0),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2, 0, 0),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2, 0, 0),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 7),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 7),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, 0, 14),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1, 0, 0),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_var_ref, 4, 0, 30),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_var_ref, 4, 0, 30),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_calc, 3, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_calc, 3, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_calc, 4, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_calc, 4, 0, 0),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0),
  [1382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [1385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, 0, 21),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4, 0, 0),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2, 0, 0),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3, 0, 0),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3, 0, 0),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2, 0, 0),
  [1452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0),
  [1471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0),
  [1480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0), SHIFT_REPEAT(376),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [1515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [1520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2, 0, 0),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1571] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
  ts_external_token___error_recovery = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
  [ts_external_token___error_recovery] = sym___error_recovery,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
    [ts_external_token___error_recovery] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [3] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_europacss_external_scanner_create(void);
void tree_sitter_europacss_external_scanner_destroy(void *);
bool tree_sitter_europacss_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_europacss_external_scanner_serialize(void *, char *);
void tree_sitter_europacss_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_europacss(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_europacss_external_scanner_create,
      tree_sitter_europacss_external_scanner_destroy,
      tree_sitter_europacss_external_scanner_scan,
      tree_sitter_europacss_external_scanner_serialize,
      tree_sitter_europacss_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
