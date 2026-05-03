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
#define STATE_COUNT 463
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 184
#define ALIAS_COUNT 9
#define TOKEN_COUNT 102
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
  sym__kw_display = 74,
  sym__kw_grid = 75,
  sym__kw_row = 76,
  sym__kw_abs100 = 77,
  anon_sym_fg = 78,
  anon_sym_bg = 79,
  anon_sym_fill = 80,
  anon_sym_stroke = 81,
  anon_sym_border = 82,
  anon_sym_border_DASHtop = 83,
  anon_sym_border_DASHbottom = 84,
  anon_sym_border_DASHleft = 85,
  anon_sym_border_DASHright = 86,
  anon_sym_ATresponsive = 87,
  anon_sym_ATmq = 88,
  anon_sym_ATiterate = 89,
  anon_sym_ATunpack = 90,
  anon_sym_ATif = 91,
  sym_europacss_comparison = 92,
  anon_sym_calc = 93,
  anon_sym_var = 94,
  sym_europacss_variable = 95,
  sym_europacss_range = 96,
  sym_europacss_slash_value = 97,
  sym_europacss_dotted_name = 98,
  sym__descendant_operator = 99,
  sym__pseudo_class_selector_colon = 100,
  sym___error_recovery = 101,
  sym_stylesheet = 102,
  sym_import_statement = 103,
  sym_media_statement = 104,
  sym_charset_statement = 105,
  sym_namespace_statement = 106,
  sym_keyframes_statement = 107,
  sym_keyframe_block_list = 108,
  sym_keyframe_block = 109,
  sym_supports_statement = 110,
  sym_postcss_statement = 111,
  sym_at_rule = 112,
  sym_rule_set = 113,
  sym_selectors = 114,
  sym_block = 115,
  sym__selector = 116,
  sym_universal_selector = 117,
  sym_class_selector = 118,
  sym_pseudo_class_selector = 119,
  sym__nth_child_pseudo_class_selector = 120,
  sym_pseudo_element_selector = 121,
  sym_id_selector = 122,
  sym_attribute_selector = 123,
  sym_child_selector = 124,
  sym_descendant_selector = 125,
  sym_sibling_selector = 126,
  sym_adjacent_sibling_selector = 127,
  sym_namespace_selector = 128,
  sym_pseudo_class_arguments = 129,
  sym_pseudo_class_with_selector_arguments = 130,
  sym_pseudo_class_nth_child_arguments = 131,
  sym_pseudo_element_arguments = 132,
  sym_declaration = 133,
  sym_last_declaration = 134,
  sym__query = 135,
  sym_feature_query = 136,
  sym_parenthesized_query = 137,
  sym_binary_query = 138,
  sym_unary_query = 139,
  sym_selector_query = 140,
  sym__value = 141,
  sym_parenthesized_value = 142,
  sym_color_value = 143,
  sym_string_value = 144,
  sym_integer_value = 145,
  sym_float_value = 146,
  sym_grid_value = 147,
  sym_call_expression = 148,
  sym_binary_expression = 149,
  sym_arguments = 150,
  sym_class_name = 151,
  sym_europacss_color = 152,
  sym_europacss_color_target = 153,
  sym_europacss_space = 154,
  sym_europacss_font = 155,
  sym_europacss_fontsize = 156,
  sym_europacss_responsive = 157,
  sym_europacss_mq = 158,
  sym_europacss_column = 159,
  sym_europacss_display = 160,
  sym_europacss_grid = 161,
  sym_europacss_row = 162,
  sym_europacss_abs100 = 163,
  sym_europacss_iterate = 164,
  sym_europacss_unpack = 165,
  sym_europacss_if = 166,
  sym__europacss_value = 167,
  sym_europacss_calc = 168,
  sym_europacss_var_ref = 169,
  aux_sym_stylesheet_repeat1 = 170,
  aux_sym_import_statement_repeat1 = 171,
  aux_sym_keyframe_block_list_repeat1 = 172,
  aux_sym_postcss_statement_repeat1 = 173,
  aux_sym_selectors_repeat1 = 174,
  aux_sym_block_repeat1 = 175,
  aux_sym_pseudo_class_arguments_repeat1 = 176,
  aux_sym_declaration_repeat1 = 177,
  aux_sym_string_value_repeat1 = 178,
  aux_sym_string_value_repeat2 = 179,
  aux_sym_grid_value_repeat1 = 180,
  aux_sym_arguments_repeat1 = 181,
  aux_sym_class_name_repeat1 = 182,
  aux_sym_europacss_calc_repeat1 = 183,
  alias_sym_attribute_name = 184,
  alias_sym_feature_name = 185,
  alias_sym_function_name = 186,
  alias_sym_id_name = 187,
  alias_sym_keyframes_name = 188,
  alias_sym_keyword_query = 189,
  alias_sym_namespace_name = 190,
  alias_sym_property_name = 191,
  alias_sym_tag_name = 192,
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
  [60] = 59,
  [61] = 61,
  [62] = 62,
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
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 81,
  [86] = 81,
  [87] = 36,
  [88] = 48,
  [89] = 89,
  [90] = 49,
  [91] = 39,
  [92] = 40,
  [93] = 41,
  [94] = 42,
  [95] = 35,
  [96] = 50,
  [97] = 43,
  [98] = 51,
  [99] = 99,
  [100] = 52,
  [101] = 53,
  [102] = 54,
  [103] = 103,
  [104] = 44,
  [105] = 37,
  [106] = 106,
  [107] = 38,
  [108] = 45,
  [109] = 55,
  [110] = 47,
  [111] = 111,
  [112] = 15,
  [113] = 113,
  [114] = 46,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 118,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 124,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
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
  [146] = 146,
  [147] = 83,
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
  [170] = 82,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 179,
  [181] = 181,
  [182] = 182,
  [183] = 173,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 179,
  [189] = 174,
  [190] = 177,
  [191] = 185,
  [192] = 173,
  [193] = 174,
  [194] = 176,
  [195] = 173,
  [196] = 173,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 83,
  [210] = 82,
  [211] = 211,
  [212] = 198,
  [213] = 211,
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
  [231] = 229,
  [232] = 232,
  [233] = 228,
  [234] = 224,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 186,
  [248] = 187,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 204,
  [258] = 252,
  [259] = 201,
  [260] = 202,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 171,
  [265] = 186,
  [266] = 187,
  [267] = 267,
  [268] = 204,
  [269] = 201,
  [270] = 202,
  [271] = 271,
  [272] = 204,
  [273] = 273,
  [274] = 274,
  [275] = 186,
  [276] = 276,
  [277] = 187,
  [278] = 278,
  [279] = 201,
  [280] = 202,
  [281] = 281,
  [282] = 282,
  [283] = 281,
  [284] = 284,
  [285] = 284,
  [286] = 286,
  [287] = 199,
  [288] = 206,
  [289] = 203,
  [290] = 82,
  [291] = 291,
  [292] = 292,
  [293] = 207,
  [294] = 205,
  [295] = 83,
  [296] = 296,
  [297] = 200,
  [298] = 197,
  [299] = 208,
  [300] = 300,
  [301] = 171,
  [302] = 201,
  [303] = 186,
  [304] = 187,
  [305] = 202,
  [306] = 205,
  [307] = 200,
  [308] = 203,
  [309] = 206,
  [310] = 204,
  [311] = 199,
  [312] = 197,
  [313] = 207,
  [314] = 208,
  [315] = 83,
  [316] = 82,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 319,
  [324] = 322,
  [325] = 321,
  [326] = 318,
  [327] = 321,
  [328] = 320,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 336,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 338,
  [342] = 342,
  [343] = 339,
  [344] = 344,
  [345] = 340,
  [346] = 346,
  [347] = 340,
  [348] = 340,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 344,
  [353] = 351,
  [354] = 340,
  [355] = 355,
  [356] = 43,
  [357] = 357,
  [358] = 50,
  [359] = 359,
  [360] = 55,
  [361] = 361,
  [362] = 355,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 359,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 361,
  [375] = 366,
  [376] = 367,
  [377] = 359,
  [378] = 355,
  [379] = 379,
  [380] = 366,
  [381] = 361,
  [382] = 366,
  [383] = 367,
  [384] = 359,
  [385] = 355,
  [386] = 366,
  [387] = 367,
  [388] = 359,
  [389] = 355,
  [390] = 367,
  [391] = 369,
  [392] = 372,
  [393] = 393,
  [394] = 394,
  [395] = 187,
  [396] = 396,
  [397] = 397,
  [398] = 396,
  [399] = 186,
  [400] = 400,
  [401] = 394,
  [402] = 402,
  [403] = 403,
  [404] = 394,
  [405] = 405,
  [406] = 186,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 276,
  [416] = 267,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 417,
  [424] = 424,
  [425] = 425,
  [426] = 418,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 429,
  [435] = 435,
  [436] = 433,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 431,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 444,
  [448] = 448,
  [449] = 449,
  [450] = 431,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 451,
  [455] = 455,
  [456] = 439,
  [457] = 429,
  [458] = 449,
  [459] = 433,
  [460] = 460,
  [461] = 461,
  [462] = 462,
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
        '-', 378,
        '.', 220,
        '/', 380,
        ':', 265,
        ';', 206,
        '=', 242,
        '>', 249,
        '@', 80,
        'E', 50,
        '[', 241,
        '\\', 188,
        ']', 248,
        '^', 75,
        'a', 140,
        'b', 114,
        'c', 81,
        'e', 48,
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
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '%', 373,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 376,
        '.', 185,
        '/', 381,
        ';', 206,
        '[', 374,
        '_', 385,
        '}', 213,
        'E', 360,
        'e', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '-', 54,
        '.', 220,
        '/', 33,
        ':', 72,
        '>', 249,
        '[', 241,
        '_', 385,
        '|', 254,
        '~', 250,
        'E', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '-', 376,
        '.', 220,
        '/', 381,
        ':', 72,
        '>', 249,
        '[', 241,
        '_', 385,
        '|', 254,
        '~', 250,
        'E', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '-', 376,
        '.', 185,
        '/', 381,
        ';', 206,
        '[', 374,
        '_', 385,
        '}', 213,
        'E', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '-', 376,
        '.', 185,
        '/', 381,
        ';', 206,
        '[', 374,
        '_', 385,
        'a', 393,
        'o', 397,
        '{', 212,
        'E', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '-', 376,
        '.', 220,
        '/', 381,
        ':', 72,
        '>', 249,
        '[', 241,
        '_', 385,
        '|', 254,
        '~', 250,
        'E', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '-', 376,
        '.', 185,
        '/', 381,
        ';', 206,
        '[', 374,
        '_', 385,
        '}', 213,
        'E', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '-', 54,
        '.', 185,
        '/', 33,
        ';', 206,
        '[', 374,
        '_', 385,
        '}', 213,
        'E', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '-', 376,
        '.', 185,
        '/', 381,
        ';', 206,
        '[', 374,
        '_', 385,
        'a', 393,
        'o', 397,
        '{', 212,
        'E', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        '+', 56,
        '-', 54,
        '.', 185,
        '/', 33,
        ';', 206,
        '[', 374,
        '_', 385,
        'n', 394,
        'o', 392,
        's', 389,
        '{', 212,
        'E', 382,
        'e', 382,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '/', 32,
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '/', 32,
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '/', 32,
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '$', 191,
        '%', 373,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 377,
        '.', 185,
        '/', 381,
        '_', 65,
        'v', 368,
        'E', 361,
        'e', 361,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '$', 191,
        '%', 373,
        '(', 267,
        '+', 56,
        '-', 55,
        '.', 42,
        '/', 33,
        ';', 206,
        '_', 44,
        'c', 362,
        '<', 77,
        '>', 77,
        'E', 366,
        'e', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '$', 191,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 377,
        '.', 185,
        '/', 381,
        '_', 65,
        'v', 569,
        'E', 552,
        'e', 552,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '$', 191,
        '(', 267,
        '+', 56,
        '-', 55,
        '.', 42,
        '/', 33,
        ';', 206,
        '_', 44,
        'c', 553,
        '<', 77,
        '>', 77,
        'E', 557,
        'e', 557,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '%', 373,
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 379,
        '/', 380,
        ';', 206,
        'n', 353,
        'o', 352,
        's', 349,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 375,
        '/', 380,
        ':', 264,
        ';', 206,
        ']', 248,
        'a', 139,
        'o', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '(', 256,
        '*', 218,
        '+', 252,
        '-', 379,
        '/', 380,
        ';', 206,
        'n', 429,
        'o', 426,
        's', 414,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 379,
        '/', 380,
        ';', 206,
        'n', 429,
        'o', 426,
        's', 414,
        '{', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 379,
        '/', 380,
        ';', 206,
        'n', 429,
        'o', 426,
        's', 414,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '(', 267,
        '-', 197,
        '/', 32,
        ';', 206,
        '[', 374,
        'n', 429,
        'o', 426,
        's', 414,
        '{', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 375,
        '/', 380,
        ':', 264,
        ';', 206,
        ']', 248,
        'a', 139,
        'o', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 375,
        '/', 380,
        ';', 206,
        ']', 248,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 375,
        '/', 380,
        ';', 206,
        ']', 248,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        ')', 257,
        ',', 205,
        '/', 32,
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
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(550);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(547);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'w') ADVANCE(418);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(447);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == 'v') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == 'v') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(385);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '{') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '{') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '>') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '>') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '>') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '0') ADVANCE(590);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(613);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 80:
      ADVANCE_MAP(
        'a', 460,
        'c', 484,
        'd', 488,
        'f', 503,
        'g', 517,
        'i', 481,
        'k', 466,
        'm', 467,
        'n', 450,
        'r', 478,
        's', 510,
        'u', 501,
      );
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
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
      if (lookahead == 'c') ADVANCE(606);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(485);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'k') ADVANCE(466);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
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
      if (lookahead == 'e') ADVANCE(594);
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
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(591);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(591);
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
      if (lookahead == 'h') ADVANCE(37);
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
      if (lookahead == 'l') ADVANCE(593);
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
      if (lookahead == 'm') ADVANCE(597);
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
      if (lookahead == 'p') ADVANCE(596);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(595);
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
      if (lookahead == 't') ADVANCE(598);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(53);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 192:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 193:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 194:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 195:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 196:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 197:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 198:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 199:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(566);
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
        '-', 378,
        '.', 220,
        '/', 380,
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
        'a', 139,
        'b', 113,
        'c', 85,
        'e', 49,
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
        '/', 32,
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
        '/', 32,
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
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
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          lookahead == 'e') ADVANCE(51);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          lookahead == 'e') ADVANCE(51);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
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
          lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(35);
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
          lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(35);
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
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
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
          lookahead == 'e') ADVANCE(52);
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
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
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
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 't') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 't') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == 'y') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '_') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '_') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '/') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(385);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(547);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'y') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(402);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(524);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(491);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(586);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'q') ADVANCE(601);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(604);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(508);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(523);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(603);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(508);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(479);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(500);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(476);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(477);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'n') ADVANCE(529);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(496);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead == 'u') ADVANCE(515);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(455);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(507);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(458);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(513);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(530);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(536);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'u') ADVANCE(515);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'v') ADVANCE(473);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'w') ADVANCE(588);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'y') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'y') ADVANCE(584);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'y') ADVANCE(483);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'z') ADVANCE(471);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(550);
      END_STATE();
    case 548:
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
          lookahead == '}') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(547);
      END_STATE();
    case 549:
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
          lookahead == '}') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(567);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(568);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '.') ADVANCE(560);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(564);
      if (lookahead == '/') ADVANCE(199);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '>') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '>') ADVANCE(613);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(193);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '>') ADVANCE(613);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(199);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(549);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '>') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__kw_color);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__kw_color);
      if (lookahead == '!') ADVANCE(573);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__kw_space);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__kw_space);
      if (lookahead == '!') ADVANCE(575);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__kw_font);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__kw_font);
      if (lookahead == '!') ADVANCE(577);
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__kw_fontsize);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__kw_fontsize);
      if (lookahead == '!') ADVANCE(579);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__kw_column);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__kw_column);
      if (lookahead == '!') ADVANCE(581);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__kw_display);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__kw_display);
      if (lookahead == '!') ADVANCE(583);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__kw_grid);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__kw_grid);
      if (lookahead == '!') ADVANCE(585);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__kw_row);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__kw_row);
      if (lookahead == '!') ADVANCE(587);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__kw_abs100);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__kw_abs100);
      if (lookahead == '!') ADVANCE(589);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_fg);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_bg);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_stroke);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_border);
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_border_DASHtop);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_border_DASHbottom);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_border_DASHleft);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_border_DASHright);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_ATresponsive);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_ATmq);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_ATiterate);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_ATunpack);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(546);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_europacss_comparison);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '/') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(566);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_europacss_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_europacss_range);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '.') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '>') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
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
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 201, .external_lex_state = 2},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 201, .external_lex_state = 2},
  [62] = {.lex_state = 201, .external_lex_state = 2},
  [63] = {.lex_state = 201, .external_lex_state = 2},
  [64] = {.lex_state = 201, .external_lex_state = 2},
  [65] = {.lex_state = 201, .external_lex_state = 2},
  [66] = {.lex_state = 201, .external_lex_state = 2},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 201, .external_lex_state = 2},
  [69] = {.lex_state = 201, .external_lex_state = 2},
  [70] = {.lex_state = 201, .external_lex_state = 2},
  [71] = {.lex_state = 201, .external_lex_state = 2},
  [72] = {.lex_state = 201, .external_lex_state = 2},
  [73] = {.lex_state = 201, .external_lex_state = 2},
  [74] = {.lex_state = 201, .external_lex_state = 2},
  [75] = {.lex_state = 201, .external_lex_state = 2},
  [76] = {.lex_state = 5, .external_lex_state = 3},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 14, .external_lex_state = 3},
  [80] = {.lex_state = 8, .external_lex_state = 3},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 8, .external_lex_state = 3},
  [83] = {.lex_state = 8, .external_lex_state = 3},
  [84] = {.lex_state = 14, .external_lex_state = 3},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 201, .external_lex_state = 2},
  [88] = {.lex_state = 201, .external_lex_state = 2},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 201, .external_lex_state = 2},
  [91] = {.lex_state = 201, .external_lex_state = 2},
  [92] = {.lex_state = 201, .external_lex_state = 2},
  [93] = {.lex_state = 201, .external_lex_state = 2},
  [94] = {.lex_state = 201, .external_lex_state = 2},
  [95] = {.lex_state = 201, .external_lex_state = 2},
  [96] = {.lex_state = 201, .external_lex_state = 2},
  [97] = {.lex_state = 201, .external_lex_state = 2},
  [98] = {.lex_state = 201, .external_lex_state = 2},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 201, .external_lex_state = 2},
  [101] = {.lex_state = 201, .external_lex_state = 2},
  [102] = {.lex_state = 201, .external_lex_state = 2},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 201, .external_lex_state = 2},
  [105] = {.lex_state = 201, .external_lex_state = 2},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 201, .external_lex_state = 2},
  [108] = {.lex_state = 201, .external_lex_state = 2},
  [109] = {.lex_state = 201, .external_lex_state = 2},
  [110] = {.lex_state = 201, .external_lex_state = 2},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 201, .external_lex_state = 2},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 201, .external_lex_state = 2},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 14, .external_lex_state = 3},
  [117] = {.lex_state = 14, .external_lex_state = 3},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 14, .external_lex_state = 3},
  [120] = {.lex_state = 14, .external_lex_state = 3},
  [121] = {.lex_state = 14, .external_lex_state = 3},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 14, .external_lex_state = 3},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 14, .external_lex_state = 3},
  [131] = {.lex_state = 14, .external_lex_state = 3},
  [132] = {.lex_state = 14, .external_lex_state = 3},
  [133] = {.lex_state = 14, .external_lex_state = 3},
  [134] = {.lex_state = 14, .external_lex_state = 3},
  [135] = {.lex_state = 14, .external_lex_state = 3},
  [136] = {.lex_state = 14, .external_lex_state = 3},
  [137] = {.lex_state = 14, .external_lex_state = 3},
  [138] = {.lex_state = 14, .external_lex_state = 3},
  [139] = {.lex_state = 10},
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
  [154] = {.lex_state = 14, .external_lex_state = 3},
  [155] = {.lex_state = 10},
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
  [169] = {.lex_state = 14, .external_lex_state = 3},
  [170] = {.lex_state = 14, .external_lex_state = 3},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 14, .external_lex_state = 3},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 18},
  [213] = {.lex_state = 18},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 14, .external_lex_state = 3},
  [220] = {.lex_state = 14, .external_lex_state = 3},
  [221] = {.lex_state = 14, .external_lex_state = 3},
  [222] = {.lex_state = 14, .external_lex_state = 3},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 19},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 19},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 23},
  [230] = {.lex_state = 19},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 19},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 19},
  [236] = {.lex_state = 19},
  [237] = {.lex_state = 19},
  [238] = {.lex_state = 19},
  [239] = {.lex_state = 19},
  [240] = {.lex_state = 19},
  [241] = {.lex_state = 19},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 19},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 25},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 38},
  [250] = {.lex_state = 201, .external_lex_state = 3},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 201, .external_lex_state = 3},
  [253] = {.lex_state = 201, .external_lex_state = 3},
  [254] = {.lex_state = 201, .external_lex_state = 3},
  [255] = {.lex_state = 38},
  [256] = {.lex_state = 201, .external_lex_state = 3},
  [257] = {.lex_state = 18},
  [258] = {.lex_state = 201, .external_lex_state = 3},
  [259] = {.lex_state = 18},
  [260] = {.lex_state = 18},
  [261] = {.lex_state = 201, .external_lex_state = 3},
  [262] = {.lex_state = 201, .external_lex_state = 3},
  [263] = {.lex_state = 201, .external_lex_state = 3},
  [264] = {.lex_state = 22},
  [265] = {.lex_state = 17},
  [266] = {.lex_state = 17},
  [267] = {.lex_state = 19},
  [268] = {.lex_state = 23},
  [269] = {.lex_state = 19},
  [270] = {.lex_state = 19},
  [271] = {.lex_state = 25},
  [272] = {.lex_state = 19},
  [273] = {.lex_state = 25},
  [274] = {.lex_state = 25},
  [275] = {.lex_state = 20},
  [276] = {.lex_state = 19},
  [277] = {.lex_state = 20},
  [278] = {.lex_state = 25},
  [279] = {.lex_state = 23},
  [280] = {.lex_state = 23},
  [281] = {.lex_state = 25},
  [282] = {.lex_state = 201, .external_lex_state = 3},
  [283] = {.lex_state = 25},
  [284] = {.lex_state = 25},
  [285] = {.lex_state = 25},
  [286] = {.lex_state = 201, .external_lex_state = 3},
  [287] = {.lex_state = 23},
  [288] = {.lex_state = 23},
  [289] = {.lex_state = 23},
  [290] = {.lex_state = 23},
  [291] = {.lex_state = 19},
  [292] = {.lex_state = 201, .external_lex_state = 3},
  [293] = {.lex_state = 23},
  [294] = {.lex_state = 23},
  [295] = {.lex_state = 23},
  [296] = {.lex_state = 29},
  [297] = {.lex_state = 23},
  [298] = {.lex_state = 23},
  [299] = {.lex_state = 23},
  [300] = {.lex_state = 21},
  [301] = {.lex_state = 21},
  [302] = {.lex_state = 21},
  [303] = {.lex_state = 28},
  [304] = {.lex_state = 28},
  [305] = {.lex_state = 21},
  [306] = {.lex_state = 21},
  [307] = {.lex_state = 21},
  [308] = {.lex_state = 21},
  [309] = {.lex_state = 21},
  [310] = {.lex_state = 21},
  [311] = {.lex_state = 21},
  [312] = {.lex_state = 21},
  [313] = {.lex_state = 21},
  [314] = {.lex_state = 21},
  [315] = {.lex_state = 21},
  [316] = {.lex_state = 21},
  [317] = {.lex_state = 29},
  [318] = {.lex_state = 201},
  [319] = {.lex_state = 29},
  [320] = {.lex_state = 29},
  [321] = {.lex_state = 21},
  [322] = {.lex_state = 29},
  [323] = {.lex_state = 29},
  [324] = {.lex_state = 29},
  [325] = {.lex_state = 21},
  [326] = {.lex_state = 201},
  [327] = {.lex_state = 21},
  [328] = {.lex_state = 29},
  [329] = {.lex_state = 21},
  [330] = {.lex_state = 29},
  [331] = {.lex_state = 29},
  [332] = {.lex_state = 29},
  [333] = {.lex_state = 29},
  [334] = {.lex_state = 29},
  [335] = {.lex_state = 29},
  [336] = {.lex_state = 29},
  [337] = {.lex_state = 29},
  [338] = {.lex_state = 29},
  [339] = {.lex_state = 21},
  [340] = {.lex_state = 21},
  [341] = {.lex_state = 29},
  [342] = {.lex_state = 29},
  [343] = {.lex_state = 21},
  [344] = {.lex_state = 201},
  [345] = {.lex_state = 21},
  [346] = {.lex_state = 36},
  [347] = {.lex_state = 21},
  [348] = {.lex_state = 21},
  [349] = {.lex_state = 21},
  [350] = {.lex_state = 21},
  [351] = {.lex_state = 201},
  [352] = {.lex_state = 201},
  [353] = {.lex_state = 201},
  [354] = {.lex_state = 21},
  [355] = {.lex_state = 1},
  [356] = {.lex_state = 29},
  [357] = {.lex_state = 201},
  [358] = {.lex_state = 29},
  [359] = {.lex_state = 2},
  [360] = {.lex_state = 29},
  [361] = {.lex_state = 201},
  [362] = {.lex_state = 1},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 1},
  [365] = {.lex_state = 201},
  [366] = {.lex_state = 2},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 201},
  [369] = {.lex_state = 29},
  [370] = {.lex_state = 2},
  [371] = {.lex_state = 201},
  [372] = {.lex_state = 201},
  [373] = {.lex_state = 29},
  [374] = {.lex_state = 201},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 1},
  [377] = {.lex_state = 2},
  [378] = {.lex_state = 1},
  [379] = {.lex_state = 201},
  [380] = {.lex_state = 2},
  [381] = {.lex_state = 201},
  [382] = {.lex_state = 2},
  [383] = {.lex_state = 1},
  [384] = {.lex_state = 2},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 1},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 29},
  [392] = {.lex_state = 201},
  [393] = {.lex_state = 29},
  [394] = {.lex_state = 201},
  [395] = {.lex_state = 58},
  [396] = {.lex_state = 201},
  [397] = {.lex_state = 201},
  [398] = {.lex_state = 201},
  [399] = {.lex_state = 58},
  [400] = {.lex_state = 29},
  [401] = {.lex_state = 201},
  [402] = {.lex_state = 201},
  [403] = {.lex_state = 201},
  [404] = {.lex_state = 201},
  [405] = {.lex_state = 201},
  [406] = {.lex_state = 30},
  [407] = {.lex_state = 201},
  [408] = {.lex_state = 201},
  [409] = {.lex_state = 201},
  [410] = {.lex_state = 29},
  [411] = {.lex_state = 201},
  [412] = {.lex_state = 201},
  [413] = {.lex_state = 201},
  [414] = {.lex_state = 201},
  [415] = {.lex_state = 201},
  [416] = {.lex_state = 201},
  [417] = {.lex_state = 201},
  [418] = {.lex_state = 201},
  [419] = {.lex_state = 201},
  [420] = {.lex_state = 39},
  [421] = {.lex_state = 201},
  [422] = {.lex_state = 201},
  [423] = {.lex_state = 201},
  [424] = {.lex_state = 201},
  [425] = {.lex_state = 62},
  [426] = {.lex_state = 201},
  [427] = {.lex_state = 201},
  [428] = {.lex_state = 201},
  [429] = {.lex_state = 201},
  [430] = {.lex_state = 201},
  [431] = {.lex_state = 60},
  [432] = {.lex_state = 201},
  [433] = {.lex_state = 201},
  [434] = {.lex_state = 201},
  [435] = {.lex_state = 61},
  [436] = {.lex_state = 201},
  [437] = {.lex_state = 201},
  [438] = {.lex_state = 201},
  [439] = {.lex_state = 13},
  [440] = {.lex_state = 60},
  [441] = {.lex_state = 13},
  [442] = {.lex_state = 201},
  [443] = {.lex_state = 201},
  [444] = {.lex_state = 201},
  [445] = {.lex_state = 25},
  [446] = {.lex_state = 201},
  [447] = {.lex_state = 201},
  [448] = {.lex_state = 201},
  [449] = {.lex_state = 201},
  [450] = {.lex_state = 60},
  [451] = {.lex_state = 201},
  [452] = {.lex_state = 201},
  [453] = {.lex_state = 201},
  [454] = {.lex_state = 201},
  [455] = {.lex_state = 201},
  [456] = {.lex_state = 13},
  [457] = {.lex_state = 201},
  [458] = {.lex_state = 201},
  [459] = {.lex_state = 201},
  [460] = {.lex_state = 201},
  [461] = {.lex_state = 201},
  [462] = {.lex_state = 201},
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
    [sym_stylesheet] = STATE(446),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(426),
    [sym__selector] = STATE(254),
    [sym_universal_selector] = STATE(254),
    [sym_class_selector] = STATE(254),
    [sym_pseudo_class_selector] = STATE(254),
    [sym_pseudo_element_selector] = STATE(254),
    [sym_id_selector] = STATE(254),
    [sym_attribute_selector] = STATE(254),
    [sym_child_selector] = STATE(254),
    [sym_descendant_selector] = STATE(254),
    [sym_sibling_selector] = STATE(254),
    [sym_adjacent_sibling_selector] = STATE(254),
    [sym_namespace_selector] = STATE(254),
    [sym_declaration] = STATE(9),
    [sym_string_value] = STATE(254),
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
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(418),
    [sym__selector] = STATE(254),
    [sym_universal_selector] = STATE(254),
    [sym_class_selector] = STATE(254),
    [sym_pseudo_class_selector] = STATE(254),
    [sym_pseudo_element_selector] = STATE(254),
    [sym_id_selector] = STATE(254),
    [sym_attribute_selector] = STATE(254),
    [sym_child_selector] = STATE(254),
    [sym_descendant_selector] = STATE(254),
    [sym_sibling_selector] = STATE(254),
    [sym_adjacent_sibling_selector] = STATE(254),
    [sym_namespace_selector] = STATE(254),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(459),
    [sym_string_value] = STATE(254),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
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
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [3] = {
    [sym_import_statement] = STATE(2),
    [sym_media_statement] = STATE(2),
    [sym_charset_statement] = STATE(2),
    [sym_namespace_statement] = STATE(2),
    [sym_keyframes_statement] = STATE(2),
    [sym_supports_statement] = STATE(2),
    [sym_postcss_statement] = STATE(2),
    [sym_at_rule] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(418),
    [sym__selector] = STATE(254),
    [sym_universal_selector] = STATE(254),
    [sym_class_selector] = STATE(254),
    [sym_pseudo_class_selector] = STATE(254),
    [sym_pseudo_element_selector] = STATE(254),
    [sym_id_selector] = STATE(254),
    [sym_attribute_selector] = STATE(254),
    [sym_child_selector] = STATE(254),
    [sym_descendant_selector] = STATE(254),
    [sym_sibling_selector] = STATE(254),
    [sym_adjacent_sibling_selector] = STATE(254),
    [sym_namespace_selector] = STATE(254),
    [sym_declaration] = STATE(2),
    [sym_last_declaration] = STATE(457),
    [sym_string_value] = STATE(254),
    [sym_europacss_color] = STATE(2),
    [sym_europacss_space] = STATE(2),
    [sym_europacss_font] = STATE(2),
    [sym_europacss_fontsize] = STATE(2),
    [sym_europacss_responsive] = STATE(2),
    [sym_europacss_mq] = STATE(2),
    [sym_europacss_column] = STATE(2),
    [sym_europacss_display] = STATE(2),
    [sym_europacss_grid] = STATE(2),
    [sym_europacss_row] = STATE(2),
    [sym_europacss_abs100] = STATE(2),
    [sym_europacss_iterate] = STATE(2),
    [sym_europacss_unpack] = STATE(2),
    [sym_europacss_if] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(97),
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
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [4] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(418),
    [sym__selector] = STATE(254),
    [sym_universal_selector] = STATE(254),
    [sym_class_selector] = STATE(254),
    [sym_pseudo_class_selector] = STATE(254),
    [sym_pseudo_element_selector] = STATE(254),
    [sym_id_selector] = STATE(254),
    [sym_attribute_selector] = STATE(254),
    [sym_child_selector] = STATE(254),
    [sym_descendant_selector] = STATE(254),
    [sym_sibling_selector] = STATE(254),
    [sym_adjacent_sibling_selector] = STATE(254),
    [sym_namespace_selector] = STATE(254),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(433),
    [sym_string_value] = STATE(254),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
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
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [5] = {
    [sym_import_statement] = STATE(6),
    [sym_media_statement] = STATE(6),
    [sym_charset_statement] = STATE(6),
    [sym_namespace_statement] = STATE(6),
    [sym_keyframes_statement] = STATE(6),
    [sym_supports_statement] = STATE(6),
    [sym_postcss_statement] = STATE(6),
    [sym_at_rule] = STATE(6),
    [sym_rule_set] = STATE(6),
    [sym_selectors] = STATE(418),
    [sym__selector] = STATE(254),
    [sym_universal_selector] = STATE(254),
    [sym_class_selector] = STATE(254),
    [sym_pseudo_class_selector] = STATE(254),
    [sym_pseudo_element_selector] = STATE(254),
    [sym_id_selector] = STATE(254),
    [sym_attribute_selector] = STATE(254),
    [sym_child_selector] = STATE(254),
    [sym_descendant_selector] = STATE(254),
    [sym_sibling_selector] = STATE(254),
    [sym_adjacent_sibling_selector] = STATE(254),
    [sym_namespace_selector] = STATE(254),
    [sym_declaration] = STATE(6),
    [sym_last_declaration] = STATE(434),
    [sym_string_value] = STATE(254),
    [sym_europacss_color] = STATE(6),
    [sym_europacss_space] = STATE(6),
    [sym_europacss_font] = STATE(6),
    [sym_europacss_fontsize] = STATE(6),
    [sym_europacss_responsive] = STATE(6),
    [sym_europacss_mq] = STATE(6),
    [sym_europacss_column] = STATE(6),
    [sym_europacss_display] = STATE(6),
    [sym_europacss_grid] = STATE(6),
    [sym_europacss_row] = STATE(6),
    [sym_europacss_abs100] = STATE(6),
    [sym_europacss_iterate] = STATE(6),
    [sym_europacss_unpack] = STATE(6),
    [sym_europacss_if] = STATE(6),
    [aux_sym_block_repeat1] = STATE(6),
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
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [6] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(418),
    [sym__selector] = STATE(254),
    [sym_universal_selector] = STATE(254),
    [sym_class_selector] = STATE(254),
    [sym_pseudo_class_selector] = STATE(254),
    [sym_pseudo_element_selector] = STATE(254),
    [sym_id_selector] = STATE(254),
    [sym_attribute_selector] = STATE(254),
    [sym_child_selector] = STATE(254),
    [sym_descendant_selector] = STATE(254),
    [sym_sibling_selector] = STATE(254),
    [sym_adjacent_sibling_selector] = STATE(254),
    [sym_namespace_selector] = STATE(254),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(436),
    [sym_string_value] = STATE(254),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
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
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [7] = {
    [sym_import_statement] = STATE(4),
    [sym_media_statement] = STATE(4),
    [sym_charset_statement] = STATE(4),
    [sym_namespace_statement] = STATE(4),
    [sym_keyframes_statement] = STATE(4),
    [sym_supports_statement] = STATE(4),
    [sym_postcss_statement] = STATE(4),
    [sym_at_rule] = STATE(4),
    [sym_rule_set] = STATE(4),
    [sym_selectors] = STATE(418),
    [sym__selector] = STATE(254),
    [sym_universal_selector] = STATE(254),
    [sym_class_selector] = STATE(254),
    [sym_pseudo_class_selector] = STATE(254),
    [sym_pseudo_element_selector] = STATE(254),
    [sym_id_selector] = STATE(254),
    [sym_attribute_selector] = STATE(254),
    [sym_child_selector] = STATE(254),
    [sym_descendant_selector] = STATE(254),
    [sym_sibling_selector] = STATE(254),
    [sym_adjacent_sibling_selector] = STATE(254),
    [sym_namespace_selector] = STATE(254),
    [sym_declaration] = STATE(4),
    [sym_last_declaration] = STATE(429),
    [sym_string_value] = STATE(254),
    [sym_europacss_color] = STATE(4),
    [sym_europacss_space] = STATE(4),
    [sym_europacss_font] = STATE(4),
    [sym_europacss_fontsize] = STATE(4),
    [sym_europacss_responsive] = STATE(4),
    [sym_europacss_mq] = STATE(4),
    [sym_europacss_column] = STATE(4),
    [sym_europacss_display] = STATE(4),
    [sym_europacss_grid] = STATE(4),
    [sym_europacss_row] = STATE(4),
    [sym_europacss_abs100] = STATE(4),
    [sym_europacss_iterate] = STATE(4),
    [sym_europacss_unpack] = STATE(4),
    [sym_europacss_if] = STATE(4),
    [aux_sym_block_repeat1] = STATE(4),
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
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
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
    [sym_selectors] = STATE(418),
    [sym__selector] = STATE(254),
    [sym_universal_selector] = STATE(254),
    [sym_class_selector] = STATE(254),
    [sym_pseudo_class_selector] = STATE(254),
    [sym_pseudo_element_selector] = STATE(254),
    [sym_id_selector] = STATE(254),
    [sym_attribute_selector] = STATE(254),
    [sym_child_selector] = STATE(254),
    [sym_descendant_selector] = STATE(254),
    [sym_sibling_selector] = STATE(254),
    [sym_adjacent_sibling_selector] = STATE(254),
    [sym_namespace_selector] = STATE(254),
    [sym_declaration] = STATE(8),
    [sym_string_value] = STATE(254),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(107),
    [anon_sym_ATmedia] = ACTIONS(110),
    [anon_sym_ATcharset] = ACTIONS(113),
    [anon_sym_ATnamespace] = ACTIONS(116),
    [anon_sym_ATkeyframes] = ACTIONS(119),
    [aux_sym_keyframes_statement_token1] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_ATsupports] = ACTIONS(124),
    [sym_nesting_selector] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(133),
    [anon_sym_COLON_COLON] = ACTIONS(136),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [sym_identifier] = ACTIONS(163),
    [sym_at_keyword] = ACTIONS(166),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(169),
    [sym__kw_space] = ACTIONS(172),
    [sym__kw_font] = ACTIONS(175),
    [sym__kw_fontsize] = ACTIONS(178),
    [sym__kw_column] = ACTIONS(181),
    [sym__kw_display] = ACTIONS(184),
    [sym__kw_grid] = ACTIONS(187),
    [sym__kw_row] = ACTIONS(190),
    [sym__kw_abs100] = ACTIONS(193),
    [anon_sym_ATresponsive] = ACTIONS(196),
    [anon_sym_ATmq] = ACTIONS(199),
    [anon_sym_ATiterate] = ACTIONS(202),
    [anon_sym_ATunpack] = ACTIONS(205),
    [anon_sym_ATif] = ACTIONS(208),
    [sym__pseudo_class_selector_colon] = ACTIONS(211),
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
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(426), 1,
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
    STATE(254), 13,
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
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_ATimport,
    ACTIONS(221), 1,
      anon_sym_ATmedia,
    ACTIONS(224), 1,
      anon_sym_ATcharset,
    ACTIONS(227), 1,
      anon_sym_ATnamespace,
    ACTIONS(233), 1,
      anon_sym_ATsupports,
    ACTIONS(236), 1,
      sym_nesting_selector,
    ACTIONS(239), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_COLON_COLON,
    ACTIONS(248), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(257), 1,
      anon_sym_TILDE,
    ACTIONS(260), 1,
      anon_sym_PLUS,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(275), 1,
      sym_at_keyword,
    ACTIONS(278), 1,
      sym__pseudo_class_selector_colon,
    STATE(426), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(230), 2,
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
    STATE(254), 13,
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
    ACTIONS(281), 1,
      sym_nesting_selector,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      anon_sym_PLUS,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(303), 1,
      anon_sym_LBRACK2,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_plain_value,
    STATE(80), 1,
      sym_string_value,
    STATE(89), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(250), 12,
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
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(303), 1,
      anon_sym_LBRACK2,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(309), 1,
      sym_nesting_selector,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_string_value,
    STATE(106), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(256), 12,
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
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(303), 1,
      anon_sym_LBRACK2,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(313), 1,
      sym_nesting_selector,
    STATE(80), 1,
      sym_string_value,
    STATE(115), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(263), 12,
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
    ACTIONS(315), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(317), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [547] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(319), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(321), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [593] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(325), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [639] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(327), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(329), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [685] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(331), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(333), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [731] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(335), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(337), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [777] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(339), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(341), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [823] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(343), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(345), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [869] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(347), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(349), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [915] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(351), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(353), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [961] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(355), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(357), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1007] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(359), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(361), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1053] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(363), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(365), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1099] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(367), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(369), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1145] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(371), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(373), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1191] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(375), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(377), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1237] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(379), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(381), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1283] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(383), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(385), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1329] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(387), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(389), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1375] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(391), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(393), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1421] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(395), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(397), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1467] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(325), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1513] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(399), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(401), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1559] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(403), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(405), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1605] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(407), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(409), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1651] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(411), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(413), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1697] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(415), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(417), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1743] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(419), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(421), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1789] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(423), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(425), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1835] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(427), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(429), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1881] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(431), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(433), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1927] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(435), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(437), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1973] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(439), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(441), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2019] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(443), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(445), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2065] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(447), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(449), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2111] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(451), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(453), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2157] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(455), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(457), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2203] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(459), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(461), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2249] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(463), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(465), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2295] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(467), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(469), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2341] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(471), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(473), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2387] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(475), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(477), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2433] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(479), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(481), 23,
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
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2479] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(491), 1,
      anon_sym_LPAREN2,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(501), 1,
      sym_identifier,
    STATE(35), 1,
      sym_block,
    STATE(129), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(320), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2554] = 17,
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
    ACTIONS(503), 1,
      sym_nesting_selector,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(253), 13,
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
  [2619] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      sym_important,
    ACTIONS(513), 1,
      anon_sym_LPAREN2,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(527), 1,
      sym_plain_value,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(400), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(340), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2682] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      anon_sym_LPAREN2,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      sym_important,
    ACTIONS(531), 1,
      sym_plain_value,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(400), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(347), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2745] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(533), 1,
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
  [2807] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(535), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(136), 13,
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
  [2869] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(537), 1,
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
  [2931] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(539), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(261), 13,
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
  [2993] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(541), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(150), 13,
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
  [3055] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(543), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(282), 13,
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
  [3117] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(551), 1,
      anon_sym_STAR,
    ACTIONS(555), 1,
      sym_important,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(559), 1,
      sym_plain_value,
    STATE(113), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(553), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(216), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3185] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(561), 1,
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
  [3247] = 17,
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
    ACTIONS(563), 1,
      sym_nesting_selector,
    ACTIONS(565), 1,
      sym_identifier,
    STATE(219), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(292), 12,
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
  [3311] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(567), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(135), 13,
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
  [3373] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(569), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(286), 13,
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
  [3435] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(571), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(133), 13,
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
  [3497] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(573), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(134), 13,
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
  [3559] = 17,
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
    ACTIONS(563), 1,
      sym_nesting_selector,
    ACTIONS(575), 1,
      sym_identifier,
    STATE(222), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(292), 12,
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
  [3623] = 16,
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
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(577), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(146), 13,
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
  [3685] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(581), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(587), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(579), 10,
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
  [3730] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_STAR,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(559), 1,
      sym_plain_value,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      sym_important,
    STATE(118), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(553), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(216), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3795] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    ACTIONS(551), 1,
      anon_sym_STAR,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(559), 1,
      sym_plain_value,
    ACTIONS(593), 1,
      sym_important,
    STATE(122), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(553), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(216), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3860] = 5,
    STATE(84), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(599), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(595), 19,
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
  [3897] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(603), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(607), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(601), 10,
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
  [3936] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(361), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3997] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(615), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(613), 15,
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
  [4032] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(619), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(617), 15,
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
  [4067] = 5,
    STATE(84), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(625), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(621), 19,
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
  [4104] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(374), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4165] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(381), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4226] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(399), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(401), 15,
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
  [4258] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(447), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(449), 15,
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
  [4290] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(397), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4350] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(451), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(453), 15,
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
  [4382] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(411), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(413), 15,
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
  [4414] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(415), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(417), 15,
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
  [4446] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(419), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(421), 15,
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
  [4478] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(423), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(425), 15,
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
  [4510] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(325), 15,
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
  [4542] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(455), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(457), 15,
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
  [4574] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(427), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(429), 15,
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
  [4606] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(459), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(461), 15,
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
  [4638] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      sym_important,
    ACTIONS(644), 1,
      anon_sym_LPAREN2,
    ACTIONS(647), 1,
      anon_sym_SQUOTE,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    ACTIONS(653), 1,
      aux_sym_integer_value_token1,
    ACTIONS(656), 1,
      aux_sym_float_value_token1,
    ACTIONS(659), 1,
      anon_sym_LBRACK2,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(665), 1,
      sym_plain_value,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(636), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4694] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(463), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(465), 15,
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
  [4726] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(467), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(469), 15,
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
  [4758] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(471), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(473), 15,
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
  [4790] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      sym_important,
    ACTIONS(679), 1,
      anon_sym_LPAREN2,
    ACTIONS(682), 1,
      anon_sym_SQUOTE,
    ACTIONS(685), 1,
      anon_sym_DQUOTE,
    ACTIONS(688), 1,
      aux_sym_integer_value_token1,
    ACTIONS(691), 1,
      aux_sym_float_value_token1,
    ACTIONS(694), 1,
      anon_sym_LBRACK2,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(700), 1,
      sym_plain_value,
    STATE(103), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(671), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(216), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4848] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(431), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(433), 15,
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
  [4880] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(403), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(405), 15,
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
  [4912] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(408), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4972] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(407), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(409), 15,
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
  [5004] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(435), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(437), 15,
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
  [5036] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(475), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(477), 15,
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
  [5068] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(443), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(445), 15,
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
  [5100] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(705), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5156] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(319), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(321), 15,
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
  [5188] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(559), 1,
      sym_plain_value,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 1,
      sym_important,
    STATE(103), 1,
      aux_sym_declaration_repeat1,
    STATE(216), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5248] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(439), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(441), 15,
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
  [5280] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(713), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5335] = 5,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(717), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(715), 18,
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
  [5370] = 5,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(721), 18,
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
  [5405] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(559), 1,
      sym_plain_value,
    ACTIONS(725), 1,
      anon_sym_SEMI,
    ACTIONS(727), 1,
      sym_important,
    STATE(103), 1,
      aux_sym_declaration_repeat1,
    STATE(216), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5462] = 5,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(729), 18,
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
  [5497] = 5,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(737), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(735), 18,
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
  [5532] = 5,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(743), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(741), 18,
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
  [5567] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(559), 1,
      sym_plain_value,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    ACTIONS(745), 1,
      sym_important,
    STATE(103), 1,
      aux_sym_declaration_repeat1,
    STATE(216), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5624] = 5,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(747), 18,
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
  [5659] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5713] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5767] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5821] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5875] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_arguments,
    ACTIONS(761), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(759), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(581), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
    ACTIONS(587), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [5915] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(763), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5969] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(765), 18,
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
  [5998] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(769), 18,
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
  [6027] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(773), 18,
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
  [6056] = 4,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(777), 17,
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
  [6087] = 4,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(785), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(783), 17,
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
  [6118] = 4,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(787), 17,
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
  [6149] = 4,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(791), 17,
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
  [6180] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(795), 18,
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
  [6209] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(801), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(799), 18,
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
  [6238] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(125), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6289] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(803), 18,
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
  [6318] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(807), 18,
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
  [6347] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(579), 18,
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
  [6376] = 4,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(811), 17,
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
  [6407] = 4,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(817), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(815), 17,
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
  [6438] = 4,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(821), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(819), 17,
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
  [6469] = 4,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(823), 17,
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
  [6500] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(617), 18,
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
  [6529] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(827), 18,
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
  [6558] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(833), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(831), 18,
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
  [6587] = 4,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(835), 17,
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
  [6618] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(841), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(839), 18,
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
  [6647] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(845), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(843), 18,
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
  [6676] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(849), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(847), 18,
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
  [6705] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(853), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(851), 18,
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
  [6734] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(111), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(215), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6785] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(857), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(855), 18,
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
  [6814] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(861), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(859), 18,
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
  [6843] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(865), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(863), 18,
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
  [6872] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(867), 18,
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
  [6901] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(873), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(871), 18,
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
  [6930] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(877), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(875), 18,
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
  [6959] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(881), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(879), 18,
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
  [6988] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(717), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(715), 18,
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
  [7017] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(883), 18,
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
  [7046] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(889), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(887), 18,
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
  [7075] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(721), 18,
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
  [7104] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(893), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(891), 18,
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
  [7133] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(895), 18,
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
  [7162] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(901), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(899), 18,
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
  [7191] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(613), 18,
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
  [7220] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_arguments,
    ACTIONS(587), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(581), 10,
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
  [7255] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(905), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(903), 18,
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
  [7284] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(907), 1,
      sym_important,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(913), 1,
      sym_plain_value,
    STATE(348), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7332] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(915), 1,
      sym_important,
    ACTIONS(917), 1,
      sym_plain_value,
    STATE(325), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7380] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(919), 1,
      sym_important,
    ACTIONS(921), 1,
      sym_plain_value,
    STATE(217), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7428] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(923), 1,
      sym_important,
    ACTIONS(925), 1,
      sym_plain_value,
    STATE(77), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7476] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_POUND,
    ACTIONS(929), 1,
      sym_important,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(937), 1,
      aux_sym_integer_value_token1,
    ACTIONS(939), 1,
      aux_sym_float_value_token1,
    ACTIONS(941), 1,
      anon_sym_LBRACK2,
    ACTIONS(943), 1,
      sym_identifier,
    ACTIONS(945), 1,
      sym_plain_value,
    STATE(231), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7524] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(947), 1,
      sym_important,
    ACTIONS(949), 1,
      sym_plain_value,
    STATE(349), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7572] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_POUND,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(937), 1,
      aux_sym_integer_value_token1,
    ACTIONS(939), 1,
      aux_sym_float_value_token1,
    ACTIONS(941), 1,
      anon_sym_LBRACK2,
    ACTIONS(943), 1,
      sym_identifier,
    ACTIONS(951), 1,
      sym_important,
    ACTIONS(953), 1,
      sym_plain_value,
    STATE(294), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7620] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(955), 1,
      sym_important,
    ACTIONS(957), 1,
      sym_plain_value,
    STATE(306), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7668] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(959), 1,
      sym_important,
    ACTIONS(961), 1,
      sym_plain_value,
    STATE(67), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7716] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(963), 1,
      sym_important,
    ACTIONS(965), 1,
      sym_plain_value,
    STATE(329), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7764] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(967), 1,
      sym_important,
    ACTIONS(969), 1,
      sym_plain_value,
    STATE(345), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7812] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(971), 1,
      sym_important,
    ACTIONS(973), 1,
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
  [7860] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(975), 1,
      sym_important,
    ACTIONS(977), 1,
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
  [7908] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym_unit,
    ACTIONS(981), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(979), 11,
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
  [7940] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_unit,
    ACTIONS(987), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(985), 11,
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
  [7972] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(991), 1,
      sym_important,
    ACTIONS(993), 1,
      sym_plain_value,
    STATE(205), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8020] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(995), 1,
      sym_important,
    ACTIONS(997), 1,
      sym_plain_value,
    STATE(327), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8068] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_POUND,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(937), 1,
      aux_sym_integer_value_token1,
    ACTIONS(939), 1,
      aux_sym_float_value_token1,
    ACTIONS(941), 1,
      anon_sym_LBRACK2,
    ACTIONS(943), 1,
      sym_identifier,
    ACTIONS(999), 1,
      sym_important,
    ACTIONS(1001), 1,
      sym_plain_value,
    STATE(229), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8116] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(1003), 1,
      sym_important,
    ACTIONS(1005), 1,
      sym_plain_value,
    STATE(339), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8164] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      sym_important,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(527), 1,
      sym_plain_value,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    STATE(340), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8212] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(1007), 1,
      sym_important,
    ACTIONS(1009), 1,
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
  [8260] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(1011), 1,
      sym_important,
    ACTIONS(1013), 1,
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
  [8308] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(529), 1,
      sym_important,
    ACTIONS(531), 1,
      sym_plain_value,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    STATE(347), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8356] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_integer_value_token1,
    ACTIONS(521), 1,
      aux_sym_float_value_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACK2,
    ACTIONS(909), 1,
      anon_sym_LPAREN2,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(1015), 1,
      sym_important,
    ACTIONS(1017), 1,
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
  [8404] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1021), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1019), 11,
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
  [8433] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(1029), 1,
      anon_sym_LPAREN2,
    ACTIONS(1031), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1033), 1,
      aux_sym_float_value_token1,
    ACTIONS(1035), 1,
      anon_sym_var,
    ACTIONS(1023), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1025), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(213), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8474] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1039), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1037), 11,
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
  [8503] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1043), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1041), 11,
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
  [8532] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1047), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1045), 11,
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
  [8561] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1051), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1049), 11,
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
  [8590] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1055), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1053), 11,
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
  [8619] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1059), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1057), 11,
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
  [8648] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1063), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1061), 11,
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
  [8677] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1067), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1065), 11,
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
  [8706] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1071), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1069), 11,
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
  [8735] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1075), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1073), 11,
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
  [8764] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(619), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(617), 11,
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
  [8793] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(615), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(613), 11,
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
  [8822] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LPAREN2,
    ACTIONS(1031), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1033), 1,
      aux_sym_float_value_token1,
    ACTIONS(1035), 1,
      anon_sym_var,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    ACTIONS(1077), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1079), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(214), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8863] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LPAREN2,
    ACTIONS(1031), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1033), 1,
      aux_sym_float_value_token1,
    ACTIONS(1035), 1,
      anon_sym_var,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    ACTIONS(1083), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1085), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(211), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8904] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LPAREN2,
    ACTIONS(1031), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1033), 1,
      aux_sym_float_value_token1,
    ACTIONS(1035), 1,
      anon_sym_var,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    ACTIONS(1077), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1079), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(214), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8945] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    ACTIONS(1099), 1,
      anon_sym_LPAREN2,
    ACTIONS(1102), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1105), 1,
      aux_sym_float_value_token1,
    ACTIONS(1108), 1,
      anon_sym_var,
    ACTIONS(1091), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1094), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(214), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8986] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_STAR,
    ACTIONS(553), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1113), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1111), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9018] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_STAR,
    ACTIONS(553), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1117), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1115), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9050] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_STAR,
    ACTIONS(553), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1119), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(671), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9082] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(603), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9114] = 5,
    ACTIONS(1123), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1121), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(601), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9144] = 5,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1125), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(579), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9174] = 5,
    ACTIONS(1123), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1121), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(579), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9204] = 5,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1125), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(601), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9234] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_SEMI,
    ACTIONS(1131), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(603), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9266] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    ACTIONS(607), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(603), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9295] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1133), 1,
      anon_sym_SEMI,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1139), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1141), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(442), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9334] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
    ACTIONS(1147), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1149), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(428), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9373] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
    ACTIONS(1153), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1155), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(438), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9412] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_SEMI,
    ACTIONS(607), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(603), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9441] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1161), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1165), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(341), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9480] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    ACTIONS(1171), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1173), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(427), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9519] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(1175), 1,
      anon_sym_SEMI,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1161), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1165), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(338), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9558] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1177), 1,
      anon_sym_SEMI,
    ACTIONS(1179), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1181), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(461), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9597] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_SEMI,
    ACTIONS(607), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(603), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9626] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SEMI,
    ACTIONS(607), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(603), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9655] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LPAREN2,
    ACTIONS(1185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1187), 1,
      aux_sym_float_value_token1,
    ACTIONS(1193), 1,
      anon_sym_calc,
    ACTIONS(1189), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1191), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(225), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9691] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LPAREN2,
    ACTIONS(1185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1187), 1,
      aux_sym_float_value_token1,
    ACTIONS(1193), 1,
      anon_sym_calc,
    ACTIONS(1195), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1197), 4,
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
  [9727] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LPAREN2,
    ACTIONS(1185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1187), 1,
      aux_sym_float_value_token1,
    ACTIONS(1193), 1,
      anon_sym_calc,
    ACTIONS(1199), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1201), 4,
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
  [9763] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1203), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1205), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(413), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9799] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LPAREN2,
    ACTIONS(1185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1187), 1,
      aux_sym_float_value_token1,
    ACTIONS(1193), 1,
      anon_sym_calc,
    ACTIONS(1207), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1209), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(227), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9835] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1211), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1213), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(424), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9871] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LPAREN2,
    ACTIONS(1185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1187), 1,
      aux_sym_float_value_token1,
    ACTIONS(1193), 1,
      anon_sym_calc,
    ACTIONS(1215), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1217), 4,
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
  [9907] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LPAREN2,
    ACTIONS(1185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1187), 1,
      aux_sym_float_value_token1,
    ACTIONS(1193), 1,
      anon_sym_calc,
    ACTIONS(1219), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1221), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(236), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9943] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1223), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1225), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(452), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9979] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1227), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1229), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(421), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10015] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN2,
    ACTIONS(1135), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1137), 1,
      aux_sym_float_value_token1,
    ACTIONS(1143), 1,
      anon_sym_calc,
    ACTIONS(1231), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1233), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(437), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10051] = 9,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(1235), 1,
      anon_sym_SEMI,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(328), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10086] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1239), 1,
      sym_unit,
    ACTIONS(979), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(981), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10113] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1241), 1,
      sym_unit,
    ACTIONS(985), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(987), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10140] = 9,
    ACTIONS(1245), 1,
      anon_sym_host,
    ACTIONS(1249), 1,
      sym_escape_sequence,
    ACTIONS(1251), 1,
      sym_identifier,
    STATE(79), 1,
      aux_sym_class_name_repeat1,
    STATE(116), 1,
      sym_class_name,
    STATE(163), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1247), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1243), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [10174] = 14,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(1253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACK,
    ACTIONS(1259), 1,
      anon_sym_GT,
    ACTIONS(1261), 1,
      anon_sym_TILDE,
    ACTIONS(1263), 1,
      anon_sym_PLUS,
    ACTIONS(1265), 1,
      anon_sym_PIPE,
    ACTIONS(1267), 1,
      sym__descendant_operator,
    ACTIONS(1269), 1,
      sym__pseudo_class_selector_colon,
    STATE(397), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10218] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1271), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1273), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10242] = 3,
    ACTIONS(1275), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(579), 12,
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
  [10264] = 14,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(1253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACK,
    ACTIONS(1259), 1,
      anon_sym_GT,
    ACTIONS(1261), 1,
      anon_sym_TILDE,
    ACTIONS(1263), 1,
      anon_sym_PLUS,
    ACTIONS(1265), 1,
      anon_sym_PIPE,
    ACTIONS(1267), 1,
      sym__descendant_operator,
    ACTIONS(1269), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1277), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10308] = 14,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(1253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACK,
    ACTIONS(1259), 1,
      anon_sym_GT,
    ACTIONS(1261), 1,
      anon_sym_TILDE,
    ACTIONS(1263), 1,
      anon_sym_PLUS,
    ACTIONS(1265), 1,
      anon_sym_PIPE,
    ACTIONS(1267), 1,
      sym__descendant_operator,
    ACTIONS(1269), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1277), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_LBRACE,
    STATE(403), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10352] = 9,
    ACTIONS(1249), 1,
      sym_escape_sequence,
    ACTIONS(1251), 1,
      sym_identifier,
    ACTIONS(1285), 1,
      anon_sym_host,
    STATE(79), 1,
      aux_sym_class_name_repeat1,
    STATE(117), 1,
      sym_class_name,
    STATE(166), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1247), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1283), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [10386] = 14,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(1253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACK,
    ACTIONS(1259), 1,
      anon_sym_GT,
    ACTIONS(1261), 1,
      anon_sym_TILDE,
    ACTIONS(1263), 1,
      anon_sym_PLUS,
    ACTIONS(1265), 1,
      anon_sym_PIPE,
    ACTIONS(1267), 1,
      sym__descendant_operator,
    ACTIONS(1269), 1,
      sym__pseudo_class_selector_colon,
    STATE(408), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10430] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1057), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1059), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10454] = 3,
    ACTIONS(1287), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(579), 12,
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
  [10476] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1045), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1047), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10500] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1049), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1051), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10524] = 12,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(1253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACK,
    ACTIONS(1259), 1,
      anon_sym_GT,
    ACTIONS(1261), 1,
      anon_sym_TILDE,
    ACTIONS(1263), 1,
      anon_sym_PLUS,
    ACTIONS(1265), 1,
      anon_sym_PIPE,
    ACTIONS(1267), 1,
      sym__descendant_operator,
    ACTIONS(1269), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1289), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [10564] = 3,
    ACTIONS(1291), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(579), 12,
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
  [10586] = 12,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(1253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACK,
    ACTIONS(1259), 1,
      anon_sym_GT,
    ACTIONS(1261), 1,
      anon_sym_TILDE,
    ACTIONS(1263), 1,
      anon_sym_PLUS,
    ACTIONS(1265), 1,
      anon_sym_PIPE,
    ACTIONS(1267), 1,
      sym__descendant_operator,
    ACTIONS(1269), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(713), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10625] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(581), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(587), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10652] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1295), 1,
      sym_unit,
    ACTIONS(981), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(979), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10677] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym_unit,
    ACTIONS(987), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(985), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10702] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1301), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1299), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10724] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1057), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1059), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10746] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1047), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1045), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10768] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1051), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1049), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10790] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(342), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10816] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1059), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1057), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10838] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(332), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10864] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(333), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10890] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1303), 1,
      sym_unit,
    ACTIONS(979), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(981), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10914] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1307), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1305), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10936] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1309), 1,
      sym_unit,
    ACTIONS(985), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(987), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10960] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1311), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(400), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10986] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1045), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1047), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11008] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1049), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1051), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11030] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(336), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11056] = 12,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(1253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACK,
    ACTIONS(1259), 1,
      anon_sym_GT,
    ACTIONS(1261), 1,
      anon_sym_TILDE,
    ACTIONS(1263), 1,
      anon_sym_PLUS,
    ACTIONS(1265), 1,
      anon_sym_PIPE,
    ACTIONS(1267), 1,
      sym__descendant_operator,
    ACTIONS(1269), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11094] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(337), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11120] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(391), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11146] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1163), 1,
      anon_sym_LPAREN2,
    ACTIONS(1167), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(369), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11172] = 12,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(1253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACK,
    ACTIONS(1259), 1,
      anon_sym_GT,
    ACTIONS(1261), 1,
      anon_sym_TILDE,
    ACTIONS(1263), 1,
      anon_sym_PLUS,
    ACTIONS(1265), 1,
      anon_sym_PIPE,
    ACTIONS(1267), 1,
      sym__descendant_operator,
    ACTIONS(1269), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11210] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1037), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1039), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11231] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1067), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11252] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1053), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1055), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11273] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(613), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(615), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11294] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1317), 5,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    ACTIONS(1319), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
  [11315] = 11,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(1253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1255), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_LBRACK,
    ACTIONS(1259), 1,
      anon_sym_GT,
    ACTIONS(1261), 1,
      anon_sym_TILDE,
    ACTIONS(1263), 1,
      anon_sym_PLUS,
    ACTIONS(1265), 1,
      anon_sym_PIPE,
    ACTIONS(1267), 1,
      sym__descendant_operator,
    ACTIONS(1269), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11350] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1069), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1071), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11371] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1061), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1063), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11392] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(617), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(619), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11413] = 4,
    ACTIONS(1323), 1,
      anon_sym_border,
    STATE(237), 1,
      sym_europacss_color_target,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1321), 8,
      anon_sym_fg,
      anon_sym_bg,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_border_DASHtop,
      anon_sym_border_DASHbottom,
      anon_sym_border_DASHleft,
      anon_sym_border_DASHright,
  [11434] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1041), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1043), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11455] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1019), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1021), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11476] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1073), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1075), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11497] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
    ACTIONS(1327), 1,
      anon_sym_COLON,
    STATE(308), 1,
      sym_arguments,
    ACTIONS(581), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(759), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11526] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_arguments,
    ACTIONS(581), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11551] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_SLASH,
    ACTIONS(1045), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [11571] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_SLASH,
    ACTIONS(1329), 1,
      sym_unit,
    ACTIONS(979), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11593] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_SLASH,
    ACTIONS(1331), 1,
      sym_unit,
    ACTIONS(985), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11615] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_SLASH,
    ACTIONS(1049), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11634] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_SLASH,
    ACTIONS(1061), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11653] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_SLASH,
    ACTIONS(1041), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11672] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_SLASH,
    ACTIONS(1053), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11691] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_SLASH,
    ACTIONS(1065), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11710] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_SLASH,
    ACTIONS(1057), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11729] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_SLASH,
    ACTIONS(1037), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11748] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_SLASH,
    ACTIONS(1019), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11767] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_SLASH,
    ACTIONS(1069), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11786] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_SLASH,
    ACTIONS(1073), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11805] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SLASH,
    ACTIONS(617), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11824] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_SLASH,
    ACTIONS(613), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11843] = 6,
    ACTIONS(1333), 1,
      anon_sym_RBRACE,
    ACTIONS(1338), 1,
      aux_sym_integer_value_token1,
    STATE(412), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1335), 2,
      sym_from,
      sym_to,
    STATE(317), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [11865] = 7,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
    ACTIONS(1341), 1,
      sym_identifier,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(451), 2,
      sym_string_value,
      sym_call_expression,
  [11889] = 6,
    ACTIONS(1343), 1,
      anon_sym_RBRACE,
    ACTIONS(1347), 1,
      aux_sym_integer_value_token1,
    STATE(412), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1345), 2,
      sym_from,
      sym_to,
    STATE(322), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [11911] = 7,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1351), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_block,
    STATE(344), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
  [11935] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RBRACK,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    STATE(401), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11959] = 6,
    ACTIONS(1347), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1363), 1,
      anon_sym_RBRACE,
    STATE(412), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1345), 2,
      sym_from,
      sym_to,
    STATE(317), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [11981] = 6,
    ACTIONS(1347), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1365), 1,
      anon_sym_RBRACE,
    STATE(412), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1345), 2,
      sym_from,
      sym_to,
    STATE(324), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12003] = 6,
    ACTIONS(1347), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1367), 1,
      anon_sym_RBRACE,
    STATE(412), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1345), 2,
      sym_from,
      sym_to,
    STATE(317), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12025] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1369), 1,
      anon_sym_RBRACK,
    STATE(404), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12049] = 7,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
    ACTIONS(1341), 1,
      sym_identifier,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(454), 2,
      sym_string_value,
      sym_call_expression,
  [12073] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1371), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12097] = 7,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_block,
    STATE(352), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
  [12121] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1375), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12140] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1377), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12153] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1379), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12166] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1381), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12179] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1383), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12192] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(759), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12205] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1385), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12218] = 6,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      sym_block,
    STATE(392), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
  [12239] = 6,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      sym_block,
    STATE(372), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
  [12260] = 5,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      anon_sym_SEMI,
    STATE(398), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
  [12278] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1389), 1,
      anon_sym_SEMI,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12296] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12314] = 5,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_SEMI,
    STATE(396), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
  [12332] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1395), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12346] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1397), 1,
      anon_sym_SEMI,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12364] = 6,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_block,
    STATE(357), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12384] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12402] = 4,
    ACTIONS(1405), 1,
      aux_sym_integer_value_token1,
    STATE(410), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1403), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [12418] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12436] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12454] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1411), 1,
      anon_sym_RBRACK,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12472] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1413), 1,
      anon_sym_RBRACK,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12490] = 5,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(1415), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(447), 2,
      sym_string_value,
      sym_call_expression,
  [12508] = 6,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_block,
    STATE(357), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12528] = 5,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(1419), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(444), 2,
      sym_string_value,
      sym_call_expression,
  [12546] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_SLASH,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    ACTIONS(1357), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12564] = 4,
    ACTIONS(1423), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1425), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12579] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(429), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12590] = 4,
    ACTIONS(1427), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1395), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12605] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(457), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12616] = 4,
    ACTIONS(1430), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1432), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12631] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(477), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12642] = 4,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12657] = 4,
    ACTIONS(1430), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1425), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12672] = 4,
    ACTIONS(1436), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1438), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12687] = 4,
    ACTIONS(1441), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1443), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12702] = 4,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1446), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12717] = 4,
    ACTIONS(1449), 1,
      anon_sym_SQUOTE,
    STATE(370), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1451), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12732] = 4,
    ACTIONS(1449), 1,
      anon_sym_DQUOTE,
    STATE(355), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1453), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12747] = 4,
    STATE(79), 1,
      aux_sym_class_name_repeat1,
    STATE(130), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1249), 2,
      sym_escape_sequence,
      sym_identifier,
  [12762] = 4,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
  [12777] = 4,
    ACTIONS(1423), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1432), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12792] = 4,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1289), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [12807] = 5,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      sym_block,
    STATE(357), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12824] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1458), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12835] = 4,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12850] = 4,
    ACTIONS(1462), 1,
      anon_sym_SQUOTE,
    STATE(377), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1464), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12865] = 4,
    ACTIONS(1462), 1,
      anon_sym_DQUOTE,
    STATE(378), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1466), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12880] = 4,
    ACTIONS(1468), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1432), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12895] = 4,
    ACTIONS(1468), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1425), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12910] = 4,
    STATE(79), 1,
      aux_sym_class_name_repeat1,
    STATE(131), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1249), 2,
      sym_escape_sequence,
      sym_identifier,
  [12925] = 4,
    ACTIONS(1470), 1,
      anon_sym_SQUOTE,
    STATE(359), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1472), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12940] = 4,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12955] = 4,
    ACTIONS(1476), 1,
      anon_sym_SQUOTE,
    STATE(384), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1478), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12970] = 4,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
    STATE(385), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1480), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12985] = 4,
    ACTIONS(1482), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1432), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13000] = 4,
    ACTIONS(1482), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1425), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13015] = 4,
    ACTIONS(1484), 1,
      anon_sym_SQUOTE,
    STATE(388), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1486), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13030] = 4,
    ACTIONS(1484), 1,
      anon_sym_DQUOTE,
    STATE(389), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1488), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13045] = 4,
    ACTIONS(1490), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1432), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13060] = 4,
    ACTIONS(1490), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1425), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13075] = 4,
    ACTIONS(1470), 1,
      anon_sym_DQUOTE,
    STATE(362), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1492), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13090] = 4,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
  [13105] = 5,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_block,
    STATE(357), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13122] = 3,
    ACTIONS(1327), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(759), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [13135] = 4,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1494), 1,
      anon_sym_RBRACK,
    STATE(407), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13149] = 3,
    ACTIONS(1496), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(985), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13161] = 4,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_SEMI,
    STATE(357), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13175] = 4,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13189] = 4,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1502), 1,
      anon_sym_SEMI,
    STATE(357), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13203] = 3,
    ACTIONS(1504), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(979), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13215] = 3,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1353), 2,
      anon_sym_and,
      anon_sym_or,
  [13227] = 4,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1508), 1,
      anon_sym_RBRACK,
    STATE(407), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13241] = 4,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    ACTIONS(1510), 1,
      anon_sym_COMMA,
    STATE(402), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13255] = 4,
    ACTIONS(1277), 1,
      anon_sym_COMMA,
    ACTIONS(1513), 1,
      anon_sym_LBRACE,
    STATE(371), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13269] = 4,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    ACTIONS(1515), 1,
      anon_sym_RBRACK,
    STATE(407), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13283] = 4,
    ACTIONS(1277), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13297] = 4,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    ACTIONS(981), 1,
      anon_sym_of,
    ACTIONS(1519), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13311] = 4,
    ACTIONS(1375), 1,
      anon_sym_RBRACK,
    ACTIONS(1521), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13325] = 4,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13339] = 3,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13350] = 3,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    ACTIONS(1528), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13361] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13372] = 3,
    ACTIONS(1530), 1,
      anon_sym_LBRACE,
    STATE(373), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13383] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13394] = 3,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13405] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1305), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13414] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1299), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13423] = 3,
    ACTIONS(1534), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13434] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13445] = 3,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13456] = 3,
    ACTIONS(1536), 1,
      aux_sym_color_value_token1,
    ACTIONS(1538), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13467] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13478] = 3,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13489] = 3,
    ACTIONS(1540), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13500] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13511] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1542), 1,
      sym_plain_value,
    ACTIONS(1544), 1,
      sym_europacss_slash_value,
  [13524] = 3,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13535] = 2,
    ACTIONS(1546), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13543] = 2,
    ACTIONS(1548), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13551] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13559] = 2,
    ACTIONS(1550), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13567] = 2,
    ACTIONS(1552), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13575] = 2,
    ACTIONS(1554), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13583] = 2,
    ACTIONS(1556), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13591] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13599] = 3,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1558), 1,
      sym_plain_value,
  [13609] = 2,
    ACTIONS(1560), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13617] = 2,
    ACTIONS(1562), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13625] = 2,
    ACTIONS(1564), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13633] = 2,
    ACTIONS(1566), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13641] = 2,
    ACTIONS(1568), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13649] = 2,
    ACTIONS(1570), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13657] = 2,
    ACTIONS(1572), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13665] = 2,
    ACTIONS(1574), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13673] = 2,
    ACTIONS(1576), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13681] = 2,
    ACTIONS(1578), 1,
      anon_sym_LBRACK2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13689] = 2,
    ACTIONS(1580), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13697] = 2,
    ACTIONS(1582), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13705] = 2,
    ACTIONS(1584), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13713] = 2,
    ACTIONS(1586), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13721] = 2,
    ACTIONS(1588), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13729] = 2,
    ACTIONS(1590), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13737] = 2,
    ACTIONS(1592), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13745] = 2,
    ACTIONS(1594), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13753] = 2,
    ACTIONS(1596), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13761] = 2,
    ACTIONS(1598), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13769] = 2,
    ACTIONS(1600), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13777] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13785] = 2,
    ACTIONS(1602), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13793] = 2,
    ACTIONS(1604), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13801] = 2,
    ACTIONS(1606), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13809] = 2,
    ACTIONS(1608), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13817] = 2,
    ACTIONS(1610), 1,
      sym_identifier,
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
  [SMALL_STATE(15)] = 547,
  [SMALL_STATE(16)] = 593,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 685,
  [SMALL_STATE(19)] = 731,
  [SMALL_STATE(20)] = 777,
  [SMALL_STATE(21)] = 823,
  [SMALL_STATE(22)] = 869,
  [SMALL_STATE(23)] = 915,
  [SMALL_STATE(24)] = 961,
  [SMALL_STATE(25)] = 1007,
  [SMALL_STATE(26)] = 1053,
  [SMALL_STATE(27)] = 1099,
  [SMALL_STATE(28)] = 1145,
  [SMALL_STATE(29)] = 1191,
  [SMALL_STATE(30)] = 1237,
  [SMALL_STATE(31)] = 1283,
  [SMALL_STATE(32)] = 1329,
  [SMALL_STATE(33)] = 1375,
  [SMALL_STATE(34)] = 1421,
  [SMALL_STATE(35)] = 1467,
  [SMALL_STATE(36)] = 1513,
  [SMALL_STATE(37)] = 1559,
  [SMALL_STATE(38)] = 1605,
  [SMALL_STATE(39)] = 1651,
  [SMALL_STATE(40)] = 1697,
  [SMALL_STATE(41)] = 1743,
  [SMALL_STATE(42)] = 1789,
  [SMALL_STATE(43)] = 1835,
  [SMALL_STATE(44)] = 1881,
  [SMALL_STATE(45)] = 1927,
  [SMALL_STATE(46)] = 1973,
  [SMALL_STATE(47)] = 2019,
  [SMALL_STATE(48)] = 2065,
  [SMALL_STATE(49)] = 2111,
  [SMALL_STATE(50)] = 2157,
  [SMALL_STATE(51)] = 2203,
  [SMALL_STATE(52)] = 2249,
  [SMALL_STATE(53)] = 2295,
  [SMALL_STATE(54)] = 2341,
  [SMALL_STATE(55)] = 2387,
  [SMALL_STATE(56)] = 2433,
  [SMALL_STATE(57)] = 2479,
  [SMALL_STATE(58)] = 2554,
  [SMALL_STATE(59)] = 2619,
  [SMALL_STATE(60)] = 2682,
  [SMALL_STATE(61)] = 2745,
  [SMALL_STATE(62)] = 2807,
  [SMALL_STATE(63)] = 2869,
  [SMALL_STATE(64)] = 2931,
  [SMALL_STATE(65)] = 2993,
  [SMALL_STATE(66)] = 3055,
  [SMALL_STATE(67)] = 3117,
  [SMALL_STATE(68)] = 3185,
  [SMALL_STATE(69)] = 3247,
  [SMALL_STATE(70)] = 3311,
  [SMALL_STATE(71)] = 3373,
  [SMALL_STATE(72)] = 3435,
  [SMALL_STATE(73)] = 3497,
  [SMALL_STATE(74)] = 3559,
  [SMALL_STATE(75)] = 3623,
  [SMALL_STATE(76)] = 3685,
  [SMALL_STATE(77)] = 3730,
  [SMALL_STATE(78)] = 3795,
  [SMALL_STATE(79)] = 3860,
  [SMALL_STATE(80)] = 3897,
  [SMALL_STATE(81)] = 3936,
  [SMALL_STATE(82)] = 3997,
  [SMALL_STATE(83)] = 4032,
  [SMALL_STATE(84)] = 4067,
  [SMALL_STATE(85)] = 4104,
  [SMALL_STATE(86)] = 4165,
  [SMALL_STATE(87)] = 4226,
  [SMALL_STATE(88)] = 4258,
  [SMALL_STATE(89)] = 4290,
  [SMALL_STATE(90)] = 4350,
  [SMALL_STATE(91)] = 4382,
  [SMALL_STATE(92)] = 4414,
  [SMALL_STATE(93)] = 4446,
  [SMALL_STATE(94)] = 4478,
  [SMALL_STATE(95)] = 4510,
  [SMALL_STATE(96)] = 4542,
  [SMALL_STATE(97)] = 4574,
  [SMALL_STATE(98)] = 4606,
  [SMALL_STATE(99)] = 4638,
  [SMALL_STATE(100)] = 4694,
  [SMALL_STATE(101)] = 4726,
  [SMALL_STATE(102)] = 4758,
  [SMALL_STATE(103)] = 4790,
  [SMALL_STATE(104)] = 4848,
  [SMALL_STATE(105)] = 4880,
  [SMALL_STATE(106)] = 4912,
  [SMALL_STATE(107)] = 4972,
  [SMALL_STATE(108)] = 5004,
  [SMALL_STATE(109)] = 5036,
  [SMALL_STATE(110)] = 5068,
  [SMALL_STATE(111)] = 5100,
  [SMALL_STATE(112)] = 5156,
  [SMALL_STATE(113)] = 5188,
  [SMALL_STATE(114)] = 5248,
  [SMALL_STATE(115)] = 5280,
  [SMALL_STATE(116)] = 5335,
  [SMALL_STATE(117)] = 5370,
  [SMALL_STATE(118)] = 5405,
  [SMALL_STATE(119)] = 5462,
  [SMALL_STATE(120)] = 5497,
  [SMALL_STATE(121)] = 5532,
  [SMALL_STATE(122)] = 5567,
  [SMALL_STATE(123)] = 5624,
  [SMALL_STATE(124)] = 5659,
  [SMALL_STATE(125)] = 5713,
  [SMALL_STATE(126)] = 5767,
  [SMALL_STATE(127)] = 5821,
  [SMALL_STATE(128)] = 5875,
  [SMALL_STATE(129)] = 5915,
  [SMALL_STATE(130)] = 5969,
  [SMALL_STATE(131)] = 5998,
  [SMALL_STATE(132)] = 6027,
  [SMALL_STATE(133)] = 6056,
  [SMALL_STATE(134)] = 6087,
  [SMALL_STATE(135)] = 6118,
  [SMALL_STATE(136)] = 6149,
  [SMALL_STATE(137)] = 6180,
  [SMALL_STATE(138)] = 6209,
  [SMALL_STATE(139)] = 6238,
  [SMALL_STATE(140)] = 6289,
  [SMALL_STATE(141)] = 6318,
  [SMALL_STATE(142)] = 6347,
  [SMALL_STATE(143)] = 6376,
  [SMALL_STATE(144)] = 6407,
  [SMALL_STATE(145)] = 6438,
  [SMALL_STATE(146)] = 6469,
  [SMALL_STATE(147)] = 6500,
  [SMALL_STATE(148)] = 6529,
  [SMALL_STATE(149)] = 6558,
  [SMALL_STATE(150)] = 6587,
  [SMALL_STATE(151)] = 6618,
  [SMALL_STATE(152)] = 6647,
  [SMALL_STATE(153)] = 6676,
  [SMALL_STATE(154)] = 6705,
  [SMALL_STATE(155)] = 6734,
  [SMALL_STATE(156)] = 6785,
  [SMALL_STATE(157)] = 6814,
  [SMALL_STATE(158)] = 6843,
  [SMALL_STATE(159)] = 6872,
  [SMALL_STATE(160)] = 6901,
  [SMALL_STATE(161)] = 6930,
  [SMALL_STATE(162)] = 6959,
  [SMALL_STATE(163)] = 6988,
  [SMALL_STATE(164)] = 7017,
  [SMALL_STATE(165)] = 7046,
  [SMALL_STATE(166)] = 7075,
  [SMALL_STATE(167)] = 7104,
  [SMALL_STATE(168)] = 7133,
  [SMALL_STATE(169)] = 7162,
  [SMALL_STATE(170)] = 7191,
  [SMALL_STATE(171)] = 7220,
  [SMALL_STATE(172)] = 7255,
  [SMALL_STATE(173)] = 7284,
  [SMALL_STATE(174)] = 7332,
  [SMALL_STATE(175)] = 7380,
  [SMALL_STATE(176)] = 7428,
  [SMALL_STATE(177)] = 7476,
  [SMALL_STATE(178)] = 7524,
  [SMALL_STATE(179)] = 7572,
  [SMALL_STATE(180)] = 7620,
  [SMALL_STATE(181)] = 7668,
  [SMALL_STATE(182)] = 7716,
  [SMALL_STATE(183)] = 7764,
  [SMALL_STATE(184)] = 7812,
  [SMALL_STATE(185)] = 7860,
  [SMALL_STATE(186)] = 7908,
  [SMALL_STATE(187)] = 7940,
  [SMALL_STATE(188)] = 7972,
  [SMALL_STATE(189)] = 8020,
  [SMALL_STATE(190)] = 8068,
  [SMALL_STATE(191)] = 8116,
  [SMALL_STATE(192)] = 8164,
  [SMALL_STATE(193)] = 8212,
  [SMALL_STATE(194)] = 8260,
  [SMALL_STATE(195)] = 8308,
  [SMALL_STATE(196)] = 8356,
  [SMALL_STATE(197)] = 8404,
  [SMALL_STATE(198)] = 8433,
  [SMALL_STATE(199)] = 8474,
  [SMALL_STATE(200)] = 8503,
  [SMALL_STATE(201)] = 8532,
  [SMALL_STATE(202)] = 8561,
  [SMALL_STATE(203)] = 8590,
  [SMALL_STATE(204)] = 8619,
  [SMALL_STATE(205)] = 8648,
  [SMALL_STATE(206)] = 8677,
  [SMALL_STATE(207)] = 8706,
  [SMALL_STATE(208)] = 8735,
  [SMALL_STATE(209)] = 8764,
  [SMALL_STATE(210)] = 8793,
  [SMALL_STATE(211)] = 8822,
  [SMALL_STATE(212)] = 8863,
  [SMALL_STATE(213)] = 8904,
  [SMALL_STATE(214)] = 8945,
  [SMALL_STATE(215)] = 8986,
  [SMALL_STATE(216)] = 9018,
  [SMALL_STATE(217)] = 9050,
  [SMALL_STATE(218)] = 9082,
  [SMALL_STATE(219)] = 9114,
  [SMALL_STATE(220)] = 9144,
  [SMALL_STATE(221)] = 9174,
  [SMALL_STATE(222)] = 9204,
  [SMALL_STATE(223)] = 9234,
  [SMALL_STATE(224)] = 9266,
  [SMALL_STATE(225)] = 9295,
  [SMALL_STATE(226)] = 9334,
  [SMALL_STATE(227)] = 9373,
  [SMALL_STATE(228)] = 9412,
  [SMALL_STATE(229)] = 9441,
  [SMALL_STATE(230)] = 9480,
  [SMALL_STATE(231)] = 9519,
  [SMALL_STATE(232)] = 9558,
  [SMALL_STATE(233)] = 9597,
  [SMALL_STATE(234)] = 9626,
  [SMALL_STATE(235)] = 9655,
  [SMALL_STATE(236)] = 9691,
  [SMALL_STATE(237)] = 9727,
  [SMALL_STATE(238)] = 9763,
  [SMALL_STATE(239)] = 9799,
  [SMALL_STATE(240)] = 9835,
  [SMALL_STATE(241)] = 9871,
  [SMALL_STATE(242)] = 9907,
  [SMALL_STATE(243)] = 9943,
  [SMALL_STATE(244)] = 9979,
  [SMALL_STATE(245)] = 10015,
  [SMALL_STATE(246)] = 10051,
  [SMALL_STATE(247)] = 10086,
  [SMALL_STATE(248)] = 10113,
  [SMALL_STATE(249)] = 10140,
  [SMALL_STATE(250)] = 10174,
  [SMALL_STATE(251)] = 10218,
  [SMALL_STATE(252)] = 10242,
  [SMALL_STATE(253)] = 10264,
  [SMALL_STATE(254)] = 10308,
  [SMALL_STATE(255)] = 10352,
  [SMALL_STATE(256)] = 10386,
  [SMALL_STATE(257)] = 10430,
  [SMALL_STATE(258)] = 10454,
  [SMALL_STATE(259)] = 10476,
  [SMALL_STATE(260)] = 10500,
  [SMALL_STATE(261)] = 10524,
  [SMALL_STATE(262)] = 10564,
  [SMALL_STATE(263)] = 10586,
  [SMALL_STATE(264)] = 10625,
  [SMALL_STATE(265)] = 10652,
  [SMALL_STATE(266)] = 10677,
  [SMALL_STATE(267)] = 10702,
  [SMALL_STATE(268)] = 10724,
  [SMALL_STATE(269)] = 10746,
  [SMALL_STATE(270)] = 10768,
  [SMALL_STATE(271)] = 10790,
  [SMALL_STATE(272)] = 10816,
  [SMALL_STATE(273)] = 10838,
  [SMALL_STATE(274)] = 10864,
  [SMALL_STATE(275)] = 10890,
  [SMALL_STATE(276)] = 10914,
  [SMALL_STATE(277)] = 10936,
  [SMALL_STATE(278)] = 10960,
  [SMALL_STATE(279)] = 10986,
  [SMALL_STATE(280)] = 11008,
  [SMALL_STATE(281)] = 11030,
  [SMALL_STATE(282)] = 11056,
  [SMALL_STATE(283)] = 11094,
  [SMALL_STATE(284)] = 11120,
  [SMALL_STATE(285)] = 11146,
  [SMALL_STATE(286)] = 11172,
  [SMALL_STATE(287)] = 11210,
  [SMALL_STATE(288)] = 11231,
  [SMALL_STATE(289)] = 11252,
  [SMALL_STATE(290)] = 11273,
  [SMALL_STATE(291)] = 11294,
  [SMALL_STATE(292)] = 11315,
  [SMALL_STATE(293)] = 11350,
  [SMALL_STATE(294)] = 11371,
  [SMALL_STATE(295)] = 11392,
  [SMALL_STATE(296)] = 11413,
  [SMALL_STATE(297)] = 11434,
  [SMALL_STATE(298)] = 11455,
  [SMALL_STATE(299)] = 11476,
  [SMALL_STATE(300)] = 11497,
  [SMALL_STATE(301)] = 11526,
  [SMALL_STATE(302)] = 11551,
  [SMALL_STATE(303)] = 11571,
  [SMALL_STATE(304)] = 11593,
  [SMALL_STATE(305)] = 11615,
  [SMALL_STATE(306)] = 11634,
  [SMALL_STATE(307)] = 11653,
  [SMALL_STATE(308)] = 11672,
  [SMALL_STATE(309)] = 11691,
  [SMALL_STATE(310)] = 11710,
  [SMALL_STATE(311)] = 11729,
  [SMALL_STATE(312)] = 11748,
  [SMALL_STATE(313)] = 11767,
  [SMALL_STATE(314)] = 11786,
  [SMALL_STATE(315)] = 11805,
  [SMALL_STATE(316)] = 11824,
  [SMALL_STATE(317)] = 11843,
  [SMALL_STATE(318)] = 11865,
  [SMALL_STATE(319)] = 11889,
  [SMALL_STATE(320)] = 11911,
  [SMALL_STATE(321)] = 11935,
  [SMALL_STATE(322)] = 11959,
  [SMALL_STATE(323)] = 11981,
  [SMALL_STATE(324)] = 12003,
  [SMALL_STATE(325)] = 12025,
  [SMALL_STATE(326)] = 12049,
  [SMALL_STATE(327)] = 12073,
  [SMALL_STATE(328)] = 12097,
  [SMALL_STATE(329)] = 12121,
  [SMALL_STATE(330)] = 12140,
  [SMALL_STATE(331)] = 12153,
  [SMALL_STATE(332)] = 12166,
  [SMALL_STATE(333)] = 12179,
  [SMALL_STATE(334)] = 12192,
  [SMALL_STATE(335)] = 12205,
  [SMALL_STATE(336)] = 12218,
  [SMALL_STATE(337)] = 12239,
  [SMALL_STATE(338)] = 12260,
  [SMALL_STATE(339)] = 12278,
  [SMALL_STATE(340)] = 12296,
  [SMALL_STATE(341)] = 12314,
  [SMALL_STATE(342)] = 12332,
  [SMALL_STATE(343)] = 12346,
  [SMALL_STATE(344)] = 12364,
  [SMALL_STATE(345)] = 12384,
  [SMALL_STATE(346)] = 12402,
  [SMALL_STATE(347)] = 12418,
  [SMALL_STATE(348)] = 12436,
  [SMALL_STATE(349)] = 12454,
  [SMALL_STATE(350)] = 12472,
  [SMALL_STATE(351)] = 12490,
  [SMALL_STATE(352)] = 12508,
  [SMALL_STATE(353)] = 12528,
  [SMALL_STATE(354)] = 12546,
  [SMALL_STATE(355)] = 12564,
  [SMALL_STATE(356)] = 12579,
  [SMALL_STATE(357)] = 12590,
  [SMALL_STATE(358)] = 12605,
  [SMALL_STATE(359)] = 12616,
  [SMALL_STATE(360)] = 12631,
  [SMALL_STATE(361)] = 12642,
  [SMALL_STATE(362)] = 12657,
  [SMALL_STATE(363)] = 12672,
  [SMALL_STATE(364)] = 12687,
  [SMALL_STATE(365)] = 12702,
  [SMALL_STATE(366)] = 12717,
  [SMALL_STATE(367)] = 12732,
  [SMALL_STATE(368)] = 12747,
  [SMALL_STATE(369)] = 12762,
  [SMALL_STATE(370)] = 12777,
  [SMALL_STATE(371)] = 12792,
  [SMALL_STATE(372)] = 12807,
  [SMALL_STATE(373)] = 12824,
  [SMALL_STATE(374)] = 12835,
  [SMALL_STATE(375)] = 12850,
  [SMALL_STATE(376)] = 12865,
  [SMALL_STATE(377)] = 12880,
  [SMALL_STATE(378)] = 12895,
  [SMALL_STATE(379)] = 12910,
  [SMALL_STATE(380)] = 12925,
  [SMALL_STATE(381)] = 12940,
  [SMALL_STATE(382)] = 12955,
  [SMALL_STATE(383)] = 12970,
  [SMALL_STATE(384)] = 12985,
  [SMALL_STATE(385)] = 13000,
  [SMALL_STATE(386)] = 13015,
  [SMALL_STATE(387)] = 13030,
  [SMALL_STATE(388)] = 13045,
  [SMALL_STATE(389)] = 13060,
  [SMALL_STATE(390)] = 13075,
  [SMALL_STATE(391)] = 13090,
  [SMALL_STATE(392)] = 13105,
  [SMALL_STATE(393)] = 13122,
  [SMALL_STATE(394)] = 13135,
  [SMALL_STATE(395)] = 13149,
  [SMALL_STATE(396)] = 13161,
  [SMALL_STATE(397)] = 13175,
  [SMALL_STATE(398)] = 13189,
  [SMALL_STATE(399)] = 13203,
  [SMALL_STATE(400)] = 13215,
  [SMALL_STATE(401)] = 13227,
  [SMALL_STATE(402)] = 13241,
  [SMALL_STATE(403)] = 13255,
  [SMALL_STATE(404)] = 13269,
  [SMALL_STATE(405)] = 13283,
  [SMALL_STATE(406)] = 13297,
  [SMALL_STATE(407)] = 13311,
  [SMALL_STATE(408)] = 13325,
  [SMALL_STATE(409)] = 13339,
  [SMALL_STATE(410)] = 13350,
  [SMALL_STATE(411)] = 13361,
  [SMALL_STATE(412)] = 13372,
  [SMALL_STATE(413)] = 13383,
  [SMALL_STATE(414)] = 13394,
  [SMALL_STATE(415)] = 13405,
  [SMALL_STATE(416)] = 13414,
  [SMALL_STATE(417)] = 13423,
  [SMALL_STATE(418)] = 13434,
  [SMALL_STATE(419)] = 13445,
  [SMALL_STATE(420)] = 13456,
  [SMALL_STATE(421)] = 13467,
  [SMALL_STATE(422)] = 13478,
  [SMALL_STATE(423)] = 13489,
  [SMALL_STATE(424)] = 13500,
  [SMALL_STATE(425)] = 13511,
  [SMALL_STATE(426)] = 13524,
  [SMALL_STATE(427)] = 13535,
  [SMALL_STATE(428)] = 13543,
  [SMALL_STATE(429)] = 13551,
  [SMALL_STATE(430)] = 13559,
  [SMALL_STATE(431)] = 13567,
  [SMALL_STATE(432)] = 13575,
  [SMALL_STATE(433)] = 13583,
  [SMALL_STATE(434)] = 13591,
  [SMALL_STATE(435)] = 13599,
  [SMALL_STATE(436)] = 13609,
  [SMALL_STATE(437)] = 13617,
  [SMALL_STATE(438)] = 13625,
  [SMALL_STATE(439)] = 13633,
  [SMALL_STATE(440)] = 13641,
  [SMALL_STATE(441)] = 13649,
  [SMALL_STATE(442)] = 13657,
  [SMALL_STATE(443)] = 13665,
  [SMALL_STATE(444)] = 13673,
  [SMALL_STATE(445)] = 13681,
  [SMALL_STATE(446)] = 13689,
  [SMALL_STATE(447)] = 13697,
  [SMALL_STATE(448)] = 13705,
  [SMALL_STATE(449)] = 13713,
  [SMALL_STATE(450)] = 13721,
  [SMALL_STATE(451)] = 13729,
  [SMALL_STATE(452)] = 13737,
  [SMALL_STATE(453)] = 13745,
  [SMALL_STATE(454)] = 13753,
  [SMALL_STATE(455)] = 13761,
  [SMALL_STATE(456)] = 13769,
  [SMALL_STATE(457)] = 13777,
  [SMALL_STATE(458)] = 13785,
  [SMALL_STATE(459)] = 13793,
  [SMALL_STATE(460)] = 13801,
  [SMALL_STATE(461)] = 13809,
  [SMALL_STATE(462)] = 13817,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_mq, 3, 0, 19),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_mq, 3, 0, 19),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 14),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 14),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_grid, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_grid, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_row, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_row, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_abs100, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_abs100, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_iterate, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_iterate, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_fontsize, 3, 0, 16),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_fontsize, 3, 0, 16),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column, 3, 0, 17),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column, 3, 0, 17),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_display, 3, 0, 17),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_display, 3, 0, 17),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_responsive, 3, 0, 18),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_responsive, 3, 0, 18),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_unpack, 3, 0, 17),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_unpack, 3, 0, 17),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_if, 3, 0, 20),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_if, 3, 0, 20),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color, 4, 0, 22),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color, 4, 0, 22),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_space, 4, 0, 23),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_space, 4, 0, 23),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_font, 4, 0, 24),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_font, 4, 0, 24),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_fontsize, 4, 0, 25),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_fontsize, 4, 0, 25),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color, 5, 0, 27),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color, 5, 0, 27),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_space, 5, 0, 28),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_space, 5, 0, 28),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_font, 5, 0, 29),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_font, 5, 0, 29),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 14),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 14),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, 0, 14),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 14),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column, 4, 0, 26),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column, 4, 0, 26),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, 0, 14),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, 0, 14),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, 0, 4),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, 0, 4),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, 0, 12),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, 0, 12),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, 0, 6),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, 0, 6),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 2, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1, 0, 0),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1, 0, 0),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2, 0, 0),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2, 0, 0),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2, 0, 0),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 7),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 7),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [1094] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [1102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [1105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, 0, 14),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_var_ref, 4, 0, 30),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_var_ref, 4, 0, 30),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_calc, 4, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_calc, 4, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_calc, 3, 0, 0),
  [1307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_calc, 3, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0),
  [1335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [1338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3, 0, 0),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4, 0, 0),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2, 0, 0),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3, 0, 0),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, 0, 21),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0),
  [1438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [1441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0),
  [1443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0), SHIFT_REPEAT(364),
  [1446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2, 0, 0),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2, 0, 0),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1580] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
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
