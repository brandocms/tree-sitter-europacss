; === CSS base highlights (from Zed's built-in CSS) ===

(comment) @comment

[
  (tag_name)
  (nesting_selector)
  (universal_selector)
] @tag

[
  "~"
  ">"
  "+"
  "-"
  "|"
  "*"
  "/"
  "="
  "^="
  "|="
  "~="
  "$="
  "*="
] @operator

[
  "and"
  "or"
  "not"
  "only"
] @keyword.operator

(id_name) @selector.id

(class_name) @selector.class

(namespace_name) @namespace

(namespace_selector
  (tag_name) @namespace
  "|")

(attribute_name) @attribute

(pseudo_element_selector
  "::"
  (tag_name) @selector.pseudo)

(pseudo_class_selector
  ":"
  (class_name) @selector.pseudo)

[
  (feature_name)
  (property_name)
] @property

(function_name) @function

[
  (plain_value)
  (keyframes_name)
  (keyword_query)
] @constant.builtin

(attribute_selector
  (plain_value) @string)

(parenthesized_query
  (keyword_query) @property)

([
  (property_name)
  (plain_value)
] @variable
  (#match? @variable "^--"))

[
  "@media"
  "@import"
  "@charset"
  "@namespace"
  "@supports"
  "@keyframes"
  (at_keyword)
  (to)
  (from)
  (important)
] @keyword

(string_value) @string

(color_value) @string.special

[
  (integer_value)
  (float_value)
] @number

(unit) @type.unit

[
  ","
  ":"
  "."
  "::"
  ";"
] @punctuation.delimiter

(id_selector
  "#" @punctuation.delimiter)

[
  "{"
  ")"
  "("
  "}"
  "["
  "]"
] @punctuation.bracket

; === EuropaCSS highlights ===

; EuropaCSS keywords (@color, @space!, @responsive, etc.)
(europacss_keyword) @keyword

; Color targets (fg, bg, fill, stroke, border-*)
(europacss_color_target) @type

; Variables ($lg, $mobile, etc.)
(europacss_variable) @variable

; Dotted names (body.foreground, link.hover.text)
(europacss_dotted_name) @property

; Slash values (3/12, flex/row/wrap)
(europacss_slash_value) @number

; Range values (->1023px, 1024px->1440px)
(europacss_range) @number

; Field-specific highlights for EuropaCSS values
(europacss_color
  value: (plain_value) @constant)

(europacss_space
  property: (plain_value) @property
  value: (plain_value) @number)

(europacss_font
  family: (plain_value) @string
  size: (plain_value) @number)

(europacss_fontsize
  size: (plain_value) @number)

(europacss_responsive
  breakpoint: (plain_value) @constant)

(europacss_mq
  query: (plain_value) @constant)

(europacss_column
  value: (plain_value) @number)

(europacss_display
  value: (plain_value) @constant)
