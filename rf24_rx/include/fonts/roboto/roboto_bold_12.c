/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --stride 1 --align 1 --font Roboto-Bold.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o roboto_bold_12.c
 ******************************************************************************/

#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_BOLD_12
#define ROBOTO_BOLD_12 1
#endif

#if ROBOTO_BOLD_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0000 "\u0000" */
    0x0,

    /* U+0002 "\u0002" */
    0x0,

    /* U+000D "\r" */
    0x0,

    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xf3, 0xc0,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x28, 0xaf, 0xda, 0x4b, 0xf5, 0x14, 0x50,

    /* U+0024 "$" */
    0x10, 0x20, 0xf3, 0xf6, 0x6c, 0x6, 0x3, 0x66,
    0xfc, 0xf0, 0x80,

    /* U+0025 "%" */
    0x60, 0x94, 0x94, 0x68, 0x18, 0x16, 0x29, 0x69,
    0x6,

    /* U+0026 "&" */
    0x78, 0xcc, 0xcc, 0xf8, 0x70, 0xfa, 0xda, 0xcc,
    0x7e,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x36, 0x6c, 0xcc, 0xcc, 0xc4, 0x62, 0x10,

    /* U+0029 ")" */
    0xc6, 0x63, 0x33, 0x33, 0x32, 0x64, 0x80,

    /* U+002A "*" */
    0x21, 0x3e, 0xc5, 0x8,

    /* U+002B "+" */
    0x30, 0xc3, 0x3f, 0x30, 0xc3, 0x0,

    /* U+002C "," */
    0x6d, 0xa0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x11, 0x32, 0x26, 0x44, 0xc8,

    /* U+0030 "0" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x78,

    /* U+0031 "1" */
    0x3f, 0xb3, 0x33, 0x33, 0x30,

    /* U+0032 "2" */
    0x7b, 0x3c, 0xc3, 0x18, 0xe7, 0x18, 0xfc,

    /* U+0033 "3" */
    0x7b, 0x30, 0xc7, 0x38, 0x70, 0xf3, 0x78,

    /* U+0034 "4" */
    0xc, 0x38, 0xf1, 0xe6, 0xc9, 0xbf, 0x86, 0xc,

    /* U+0035 "5" */
    0x7f, 0xc, 0x3e, 0x4c, 0x30, 0xf3, 0x78,

    /* U+0036 "6" */
    0x31, 0x8c, 0x3e, 0xcf, 0x3c, 0xf3, 0x78,

    /* U+0037 "7" */
    0xfc, 0x30, 0x86, 0x18, 0xc3, 0x8, 0x60,

    /* U+0038 "8" */
    0x7b, 0x3c, 0xff, 0x7b, 0x7c, 0xf3, 0x78,

    /* U+0039 "9" */
    0x7b, 0x3c, 0xf3, 0xcd, 0xf0, 0xc6, 0x30,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0xf0, 0x3f, 0x80,

    /* U+003C "<" */
    0x9, 0xf9, 0xc3, 0x84,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0x87, 0xe, 0x7e, 0x40,

    /* U+003F "?" */
    0x79, 0x30, 0xc7, 0x38, 0xc0, 0xc, 0x30,

    /* U+0040 "@" */
    0x1f, 0x8, 0x64, 0xb, 0x39, 0x9a, 0x64, 0x99,
    0x26, 0x5b, 0x9f, 0x90, 0x6, 0x0, 0xf8,

    /* U+0041 "A" */
    0xc, 0xe, 0x7, 0x82, 0xc3, 0x21, 0x99, 0xfc,
    0xc2, 0x61, 0x80,

    /* U+0042 "B" */
    0xfb, 0x3c, 0xf3, 0xfb, 0x3c, 0xf3, 0xf8,

    /* U+0043 "C" */
    0x3c, 0xcf, 0x1e, 0xc, 0x18, 0x31, 0xb3, 0x3c,

    /* U+0044 "D" */
    0xf9, 0x9b, 0x1e, 0x3c, 0x78, 0xf1, 0xe6, 0xf8,

    /* U+0045 "E" */
    0xff, 0xc, 0x30, 0xfb, 0xc, 0x30, 0xfc,

    /* U+0046 "F" */
    0xff, 0xc, 0x30, 0xfb, 0xc, 0x30, 0xc0,

    /* U+0047 "G" */
    0x3c, 0xcf, 0x1e, 0xc, 0xf8, 0xf1, 0xb3, 0x3c,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3f, 0xf8, 0xf1, 0xe3, 0xc6,

    /* U+0049 "I" */
    0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xf3, 0x78,

    /* U+004B "K" */
    0xc7, 0x9b, 0x67, 0x8f, 0x1f, 0x33, 0x66, 0xc6,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xfc,

    /* U+004D "M" */
    0xe3, 0xf1, 0xf8, 0xfe, 0xff, 0x7e, 0xaf, 0x57,
    0xbb, 0xc9, 0x80,

    /* U+004E "N" */
    0xc7, 0xcf, 0x9f, 0xbd, 0x7b, 0xf3, 0xe7, 0xc6,

    /* U+004F "O" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0xb6, 0x38,

    /* U+0050 "P" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xd8, 0x30, 0x60, 0xc0,

    /* U+0051 "Q" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0xb6, 0x3c,
    0xc, 0x0,

    /* U+0052 "R" */
    0xfb, 0x3c, 0xf3, 0xfb, 0x6d, 0xb3, 0xcc,

    /* U+0053 "S" */
    0x3c, 0x8f, 0x7, 0x87, 0xc3, 0xf1, 0xe3, 0x3c,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0x7c,

    /* U+0056 "V" */
    0xc3, 0x46, 0x66, 0x66, 0x24, 0x3c, 0x3c, 0x38,
    0x18,

    /* U+0057 "W" */
    0xc4, 0x69, 0xc9, 0xbb, 0x35, 0x66, 0xac, 0x77,
    0xe, 0xe1, 0x8c, 0x31, 0x80,

    /* U+0058 "X" */
    0xc6, 0x66, 0x2c, 0x3c, 0x18, 0x3c, 0x2c, 0x66,
    0xc6,

    /* U+0059 "Y" */
    0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x18, 0x18,
    0x18,

    /* U+005A "Z" */
    0xfc, 0x30, 0x84, 0x30, 0x84, 0x30, 0xfc,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6e,

    /* U+005C "\\" */
    0xc2, 0x18, 0xc2, 0x18, 0xc2, 0x18, 0xc0,

    /* U+005D "]" */
    0xed, 0xb6, 0xdb, 0x6d, 0xbe,

    /* U+005E "^" */
    0x21, 0x9c, 0xad, 0x80,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x44,

    /* U+0061 "a" */
    0x39, 0x30, 0xdf, 0x4d, 0x37, 0xc0,

    /* U+0062 "b" */
    0xc3, 0xc, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0xe0,

    /* U+0063 "c" */
    0x7b, 0x2c, 0x30, 0xc3, 0x27, 0x80,

    /* U+0064 "d" */
    0xc, 0x30, 0xdf, 0xcf, 0x3c, 0xf3, 0xcd, 0xf0,

    /* U+0065 "e" */
    0x7b, 0x3c, 0xff, 0xc3, 0xa7, 0x80,

    /* U+0066 "f" */
    0x36, 0x6f, 0x66, 0x66, 0x66,

    /* U+0067 "g" */
    0x7f, 0x3c, 0xf3, 0xcf, 0x37, 0xc3, 0x4d, 0xe0,

    /* U+0068 "h" */
    0xc3, 0xc, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+0069 "i" */
    0xf3, 0xff, 0xf0,

    /* U+006A "j" */
    0x33, 0x3, 0x33, 0x33, 0x33, 0x33, 0xe0,

    /* U+006B "k" */
    0xc3, 0xc, 0x33, 0xdb, 0xcf, 0x36, 0xdb, 0x30,

    /* U+006C "l" */
    0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0xfb, 0xb3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcc,

    /* U+006E "n" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xc0,

    /* U+006F "o" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+0070 "p" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3f, 0xb0, 0xc3, 0x0,

    /* U+0071 "q" */
    0x7f, 0x3c, 0xf3, 0xcf, 0x37, 0xc3, 0xc, 0x30,

    /* U+0072 "r" */
    0xfc, 0xcc, 0xcc, 0xc0,

    /* U+0073 "s" */
    0x76, 0xf0, 0xe1, 0xed, 0xc0,

    /* U+0074 "t" */
    0x66, 0xf6, 0x66, 0x67, 0x70,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x37, 0xc0,

    /* U+0076 "v" */
    0xc6, 0xd9, 0xb3, 0x63, 0x87, 0xe, 0x0,

    /* U+0077 "w" */
    0x49, 0xa4, 0x97, 0xce, 0xe7, 0x71, 0xb0, 0xd8,

    /* U+0078 "x" */
    0xcd, 0xe3, 0x8c, 0x79, 0xec, 0xc0,

    /* U+0079 "y" */
    0xcd, 0xb6, 0xda, 0x38, 0xe3, 0x4, 0x31, 0x80,

    /* U+007A "z" */
    0xf8, 0x84, 0x46, 0x23, 0xe0,

    /* U+007B "{" */
    0x36, 0x66, 0x6e, 0xce, 0x66, 0x66, 0x30,

    /* U+007C "|" */
    0xff, 0xe0,

    /* U+007D "}" */
    0xc6, 0x66, 0x66, 0x37, 0x66, 0x66, 0xc0,

    /* U+007E "~" */
    0x65, 0xba, 0x70,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xf0, 0xff, 0xf0,

    /* U+00A2 "¢" */
    0x20, 0x87, 0x3e, 0xcb, 0xd, 0xbe, 0x70, 0x82,
    0x0,

    /* U+00A3 "£" */
    0x39, 0xb6, 0x18, 0xf9, 0x86, 0x18, 0xfc,

    /* U+00A4 "¤" */
    0xba, 0x8a, 0xc, 0x18, 0x30, 0x71, 0xdd,

    /* U+00A5 "¥" */
    0xcf, 0x37, 0x9e, 0xfc, 0xcf, 0xcc, 0x30,

    /* U+00A6 "¦" */
    0xff, 0xcf, 0xfc,

    /* U+00A7 "§" */
    0x7b, 0x3c, 0x3c, 0xff, 0x1e, 0x5e, 0x1f, 0x1c,
    0x5e,

    /* U+00A8 "¨" */
    0xd8,

    /* U+00A9 "©" */
    0x3c, 0x66, 0xda, 0xa5, 0xa1, 0xa1, 0xa5, 0x5a,
    0x66, 0x3c,

    /* U+00AA "ª" */
    0x75, 0x79, 0x70,

    /* U+00AB "«" */
    0x2a, 0x54, 0x92, 0x80,

    /* U+00AC "¬" */
    0xf8, 0x42,

    /* U+00AD "­" */
    0xe0,

    /* U+00AE "®" */
    0x3c, 0x66, 0xfa, 0xa5, 0xa5, 0xbd, 0xa5, 0x66,
    0x66, 0x3c,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0xf7, 0x80,

    /* U+00B1 "±" */
    0x31, 0xbe, 0x63, 0x18, 0x1f,

    /* U+00B2 "²" */
    0xea, 0x24, 0xf0,

    /* U+00B3 "³" */
    0x71, 0x31, 0x70,

    /* U+00B4 "´" */
    0xd0,

    /* U+00B5 "µ" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3f, 0xf0, 0xc3, 0x0,

    /* U+00B6 "¶" */
    0x3d, 0xf7, 0xdf, 0x7c, 0xf0, 0xc3, 0xc,

    /* U+00B7 "·" */
    0xf0,

    /* U+00B8 "¸" */
    0x9c,

    /* U+00B9 "¹" */
    0x35, 0x40,

    /* U+00BA "º" */
    0x69, 0x99, 0x60,

    /* U+00BB "»" */
    0x51, 0x22, 0x96, 0x50,

    /* U+00BC "¼" */
    0xc0, 0x44, 0x48, 0x48, 0x52, 0x16, 0x2a, 0x4f,
    0x2,

    /* U+00BD "½" */
    0xc0, 0x48, 0x48, 0x50, 0x57, 0x2b, 0x23, 0x44,
    0xf,

    /* U+00BE "¾" */
    0x70, 0x9, 0xc, 0x9a, 0x87, 0xd0, 0x58, 0x54,
    0x2f, 0x1, 0x0,

    /* U+00BF "¿" */
    0x30, 0xc0, 0xc, 0x31, 0x8c, 0x30, 0xc9, 0xe0,

    /* U+00C0 "À" */
    0x18, 0x4, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30,

    /* U+00C1 "Á" */
    0x6, 0x6, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30,

    /* U+00C2 "Â" */
    0x8, 0xb, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30,

    /* U+00C3 "Ã" */
    0x1a, 0x13, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30,

    /* U+00C4 "Ä" */
    0x36, 0x0, 0x2, 0x3, 0x81, 0x41, 0xb0, 0xd8,
    0x46, 0x7f, 0x30, 0x90, 0x60,

    /* U+00C5 "Å" */
    0xc, 0xe, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30,

    /* U+00C6 "Æ" */
    0x7, 0xe0, 0xf0, 0xf, 0x1, 0xb0, 0x1b, 0xe3,
    0x30, 0x3f, 0x6, 0x30, 0x63, 0xf0,

    /* U+00C7 "Ç" */
    0x3c, 0xcf, 0x1e, 0xc, 0x18, 0xf9, 0xbe, 0x38,
    0x30, 0x20, 0xc0,

    /* U+00C8 "È" */
    0x60, 0xc0, 0x3f, 0xc3, 0xc, 0x3e, 0xc3, 0xc,
    0x3f,

    /* U+00C9 "É" */
    0x18, 0x40, 0x3f, 0xc3, 0xc, 0x3e, 0xc3, 0xc,
    0x3f,

    /* U+00CA "Ê" */
    0x31, 0xa0, 0x3f, 0xc3, 0xc, 0x3e, 0xc3, 0xc,
    0x3f,

    /* U+00CB "Ë" */
    0x6c, 0x3, 0xfe, 0xc, 0x18, 0x3f, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+00CC "Ì" */
    0xcc, 0x36, 0xdb, 0x6d, 0xb0,

    /* U+00CD "Í" */
    0x78, 0x6d, 0xb6, 0xdb, 0x60,

    /* U+00CE "Î" */
    0x6b, 0x6, 0x66, 0x66, 0x66, 0x66,

    /* U+00CF "Ï" */
    0xd8, 0xc, 0x63, 0x18, 0xc6, 0x31, 0x8c,

    /* U+00D0 "Ð" */
    0x7c, 0x66, 0x63, 0x63, 0xf3, 0x63, 0x63, 0x66,
    0x7c,

    /* U+00D1 "Ñ" */
    0x2c, 0xf0, 0x6, 0x3e, 0x7c, 0xfd, 0xeb, 0xdf,
    0x9f, 0x3e, 0x30,

    /* U+00D2 "Ò" */
    0x20, 0x20, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+00D3 "Ó" */
    0x8, 0x20, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+00D4 "Ô" */
    0x10, 0x50, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+00D5 "Õ" */
    0x28, 0x70, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+00D6 "Ö" */
    0x6c, 0x0, 0xe3, 0x6c, 0x78, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+00D7 "×" */
    0x4d, 0xe3, 0x1e, 0x4d, 0x0,

    /* U+00D8 "Ø" */
    0x4, 0x79, 0xb6, 0x7d, 0x7a, 0xfd, 0xf3, 0x6c,
    0xf3, 0x0,

    /* U+00D9 "Ù" */
    0x20, 0x20, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1b, 0xe0,

    /* U+00DA "Ú" */
    0x8, 0x20, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1b, 0xe0,

    /* U+00DB "Û" */
    0x30, 0x50, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1b, 0xe0,

    /* U+00DC "Ü" */
    0x6c, 0x3, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00DD "Ý" */
    0xc, 0x18, 0x0, 0xc3, 0x66, 0x66, 0x3c, 0x3c,
    0x18, 0x18, 0x18, 0x18,

    /* U+00DE "Þ" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3f, 0xb0, 0xc0,

    /* U+00DF "ß" */
    0x71, 0xb3, 0x66, 0xcd, 0x9b, 0xb3, 0xe3, 0xc7,
    0xf8,

    /* U+00E0 "à" */
    0x20, 0xc0, 0xe, 0x4c, 0x37, 0xd3, 0x4d, 0xf0,

    /* U+00E1 "á" */
    0x18, 0x40, 0xe, 0x4c, 0x37, 0xd3, 0x4d, 0xf0,

    /* U+00E2 "â" */
    0x31, 0xa0, 0xe, 0x4c, 0x37, 0xd3, 0x4d, 0xf0,

    /* U+00E3 "ã" */
    0x2d, 0x60, 0xe, 0x4c, 0x37, 0xd3, 0x4d, 0xf0,

    /* U+00E4 "ä" */
    0x6c, 0x3, 0x9b, 0xd, 0xf4, 0xd3, 0x7c,

    /* U+00E5 "å" */
    0x30, 0xa3, 0xe, 0x4c, 0x37, 0xd3, 0x4d, 0xf0,

    /* U+00E6 "æ" */
    0x7f, 0x33, 0x20, 0xc9, 0xff, 0xcc, 0x33, 0x7,
    0xf8,

    /* U+00E7 "ç" */
    0x7b, 0x2c, 0x30, 0xcb, 0xe7, 0xc, 0x18, 0xc0,

    /* U+00E8 "è" */
    0x60, 0xc0, 0x1e, 0xcf, 0x3f, 0xf0, 0xe9, 0xe0,

    /* U+00E9 "é" */
    0x18, 0x40, 0x1e, 0xcf, 0x3f, 0xf0, 0xe9, 0xe0,

    /* U+00EA "ê" */
    0x31, 0xa0, 0x1e, 0xcf, 0x3f, 0xf0, 0xe9, 0xe0,

    /* U+00EB "ë" */
    0xd8, 0x7, 0xb3, 0xcf, 0xfc, 0x32, 0x78,

    /* U+00EC "ì" */
    0xcc, 0x36, 0xdb, 0x6c,

    /* U+00ED "í" */
    0x78, 0x6d, 0xb6, 0xd8,

    /* U+00EE "î" */
    0x69, 0x6, 0x66, 0x66, 0x66,

    /* U+00EF "ï" */
    0xd8, 0x18, 0xc6, 0x31, 0x8c, 0x60,

    /* U+00F0 "ð" */
    0x21, 0xe3, 0x87, 0x7f, 0x3c, 0xf3, 0xc9, 0xe0,

    /* U+00F1 "ñ" */
    0x69, 0x60, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+00F2 "ò" */
    0x60, 0x80, 0x1e, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+00F3 "ó" */
    0x18, 0x40, 0x1e, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+00F4 "ô" */
    0x31, 0xe0, 0x1e, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+00F5 "õ" */
    0x69, 0x60, 0x1e, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+00F6 "ö" */
    0x78, 0x7, 0xb3, 0xcf, 0x3c, 0xf3, 0x78,

    /* U+00F7 "÷" */
    0x30, 0xc0, 0x3f, 0x0, 0xc3, 0x0,

    /* U+00F8 "ø" */
    0x9, 0xed, 0xf7, 0xff, 0xbe, 0xde, 0x40,

    /* U+00F9 "ù" */
    0x60, 0x80, 0x33, 0xcf, 0x3c, 0xf3, 0xcd, 0xf0,

    /* U+00FA "ú" */
    0x18, 0xc0, 0x33, 0xcf, 0x3c, 0xf3, 0xcd, 0xf0,

    /* U+00FB "û" */
    0x31, 0x60, 0x33, 0xcf, 0x3c, 0xf3, 0xcd, 0xf0,

    /* U+00FC "ü" */
    0xd8, 0xc, 0xf3, 0xcf, 0x3c, 0xf3, 0x7c,

    /* U+00FD "ý" */
    0x18, 0x40, 0x33, 0x6d, 0xb6, 0x8e, 0x38, 0xc1,
    0xc, 0x60,

    /* U+00FE "þ" */
    0xc3, 0xc, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0xec,
    0x30, 0xc0,

    /* U+00FF "ÿ" */
    0x6c, 0x3, 0x1b, 0x66, 0xcd, 0x8e, 0x1c, 0x38,
    0x20, 0xc3, 0x0,

    /* U+0102 "Ă" */
    0x12, 0xe, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30,

    /* U+0103 "ă" */
    0x48, 0xe0, 0xe, 0x4c, 0x37, 0xd3, 0x4d, 0xf0,

    /* U+0104 "Ą" */
    0xc, 0xe, 0x7, 0x82, 0xc3, 0x21, 0x99, 0xfc,
    0xc2, 0x61, 0x80, 0x80, 0xc0, 0x30,

    /* U+0105 "ą" */
    0x39, 0x30, 0xdf, 0x4d, 0x37, 0xc2, 0x8, 0x30,

    /* U+0106 "Ć" */
    0x8, 0x30, 0x1, 0xe6, 0x78, 0xf0, 0x60, 0xc1,
    0x8d, 0x99, 0xe0,

    /* U+0107 "ć" */
    0x18, 0xc0, 0x1e, 0xcb, 0xc, 0x30, 0xc9, 0xe0,

    /* U+0110 "Đ" */
    0x7c, 0x66, 0x63, 0x63, 0xf3, 0x63, 0x63, 0x66,
    0x7c,

    /* U+0111 "đ" */
    0xc, 0x3c, 0x33, 0xec, 0xd9, 0xb3, 0x66, 0xcc,
    0xf8,

    /* U+0118 "Ę" */
    0xff, 0xc, 0x30, 0xfb, 0xc, 0x30, 0xfc, 0x43,
    0x6,

    /* U+0119 "ę" */
    0x7b, 0x2c, 0xf3, 0xff, 0x87, 0x84, 0x10, 0x60,

    /* U+0128 "Ĩ" */
    0xdb, 0x6, 0x66, 0x66, 0x66, 0x66,

    /* U+0129 "ĩ" */
    0xdb, 0x6, 0x66, 0x66, 0x66,

    /* U+0139 "Ĺ" */
    0x63, 0x0, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc,
    0x3f,

    /* U+013A "ĺ" */
    0x7b, 0x6d, 0xb6, 0xdb, 0x60,

    /* U+0143 "Ń" */
    0x8, 0x20, 0x6, 0x3e, 0x7c, 0xfd, 0xeb, 0xdf,
    0x9f, 0x3e, 0x30,

    /* U+0144 "ń" */
    0x18, 0x40, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+0154 "Ŕ" */
    0x10, 0x80, 0x3e, 0xcf, 0x3c, 0xfe, 0xdb, 0x6c,
    0xf3,

    /* U+0155 "ŕ" */
    0x36, 0xf, 0xcc, 0xcc, 0xcc,

    /* U+015A "Ś" */
    0x8, 0x30, 0x1, 0xe4, 0x78, 0x3c, 0x3e, 0x1f,
    0x8f, 0x19, 0xe0,

    /* U+015B "ś" */
    0x11, 0x0, 0xed, 0xe1, 0xc3, 0xdb, 0x80,

    /* U+0168 "Ũ" */
    0x24, 0xb0, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1b, 0xe0,

    /* U+0169 "ũ" */
    0x69, 0x60, 0x33, 0xcf, 0x3c, 0xf3, 0xcd, 0xf0,

    /* U+0172 "Ų" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0x7c,
    0x30, 0x30,

    /* U+0173 "ų" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x37, 0xc2, 0x18, 0x30,

    /* U+0179 "Ź" */
    0x18, 0x40, 0x3f, 0xc, 0x21, 0xc, 0x21, 0xc,
    0x3f,

    /* U+017A "ź" */
    0x19, 0x81, 0xf1, 0x8, 0x8c, 0x47, 0xc0,

    /* U+01A0 "Ơ" */
    0x1, 0x3b, 0x6e, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6,
    0x6c, 0x38,

    /* U+01A1 "ơ" */
    0x2, 0xfb, 0x36, 0x6c, 0xd9, 0xb3, 0x3c,

    /* U+01AF "Ư" */
    0x0, 0xe3, 0x71, 0xd8, 0xcc, 0x66, 0x33, 0x19,
    0x8c, 0xc6, 0x3e, 0x0,

    /* U+01B0 "ư" */
    0x3, 0x9f, 0x3e, 0x6c, 0xd9, 0xb3, 0x3e,

    /* U+01FA "Ǻ" */
    0x2, 0x6, 0x3, 0x2, 0x80, 0xc0, 0xe0, 0x78,
    0x2c, 0x32, 0x19, 0x9f, 0xcc, 0x26, 0x18,

    /* U+01FB "ǻ" */
    0xc, 0x43, 0xc, 0x39, 0xf4, 0xdf, 0x4d, 0x37,
    0xc0,

    /* U+01FC "Ǽ" */
    0x3, 0x0, 0x60, 0x0, 0x0, 0x7e, 0xf, 0x0,
    0xf0, 0x1b, 0x1, 0xbe, 0x33, 0x3, 0xf0, 0x63,
    0x6, 0x3f,

    /* U+01FD "ǽ" */
    0x6, 0x3, 0x0, 0x1, 0xfc, 0xcc, 0x83, 0x27,
    0xff, 0x30, 0xcc, 0x1f, 0xe0,

    /* U+01FE "Ǿ" */
    0x8, 0x20, 0x11, 0xe6, 0xd9, 0xf5, 0xeb, 0xf7,
    0xcd, 0xb3, 0xcc, 0x0,

    /* U+01FF "ǿ" */
    0x10, 0xc0, 0x9e, 0xdf, 0x7f, 0xfb, 0xed, 0xe4,
    0x0,

    /* U+0301 "́" */
    0x78,

    /* U+0303 "̃" */
    0xdb,

    /* U+0309 "̉" */
    0xd8,

    /* U+0323 "̣" */
    0xc0,

    /* U+0385 "΅" */
    0x21, 0x36,

    /* U+0386 "Ά" */
    0x60, 0x26, 0x7, 0x3, 0xc1, 0x61, 0x90, 0xcc,
    0xfe, 0x61, 0x30, 0xc0,

    /* U+0388 "Έ" */
    0xc0, 0x4f, 0xc6, 0x3, 0x1, 0x80, 0xf8, 0x60,
    0x30, 0x18, 0xf, 0xc0,

    /* U+0389 "Ή" */
    0x40, 0x26, 0x31, 0x8c, 0x63, 0x18, 0xc7, 0xf1,
    0x8c, 0x63, 0x18, 0xc6, 0x30,

    /* U+038A "Ί" */
    0xc4, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc0,

    /* U+038C "Ό" */
    0x80, 0x9c, 0x36, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x36, 0x1c,

    /* U+038E "Ύ" */
    0x40, 0x2c, 0x31, 0x98, 0x66, 0xf, 0x3, 0xc0,
    0x60, 0x18, 0x6, 0x1, 0x80,

    /* U+038F "Ώ" */
    0x80, 0x9c, 0x36, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x36, 0x77,

    /* U+0390 "ΐ" */
    0x21, 0x36, 0x2, 0x10, 0x84, 0x21, 0x8c,

    /* U+03AC "ά" */
    0x10, 0x20, 0x3, 0xec, 0xd9, 0xb3, 0x66, 0xcc,
    0xec,

    /* U+03AD "έ" */
    0x10, 0xc0, 0x1e, 0xcf, 0x7, 0x30, 0xcd, 0xe0,

    /* U+03AE "ή" */
    0x10, 0x40, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x30,
    0xc3, 0xc,

    /* U+03AF "ί" */
    0x58, 0x6d, 0xb6, 0xec,

    /* U+03B0 "ΰ" */
    0x10, 0x4c, 0xc0, 0xcb, 0x3c, 0xf3, 0xcf, 0x67,
    0x80,

    /* U+03CC "ό" */
    0x10, 0x80, 0x1e, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+03CD "ύ" */
    0x10, 0xc0, 0x32, 0xcf, 0x3c, 0xf3, 0xd9, 0xe0,

    /* U+03CE "ώ" */
    0xc, 0x4, 0x0, 0x8, 0x2c, 0x1e, 0x6f, 0x37,
    0xbb, 0xdd, 0xbb, 0x80,

    /* U+0403 "Ѓ" */
    0x18, 0x40, 0x3f, 0xc3, 0xc, 0x30, 0xc3, 0xc,
    0x30,

    /* U+040C "Ќ" */
    0x18, 0x60, 0x6, 0x3c, 0xdb, 0x3c, 0x78, 0xf9,
    0x9b, 0x36, 0x30,

    /* U+0453 "ѓ" */
    0x31, 0x1, 0xfc, 0x63, 0x18, 0xc6, 0x0,

    /* U+045C "ќ" */
    0x18, 0xc0, 0x33, 0xdb, 0x4f, 0x36, 0xdb, 0x30,

    /* U+1E00 "Ḁ" */
    0xc, 0x6, 0x7, 0x82, 0xc3, 0x21, 0x98, 0xfc,
    0xc2, 0x61, 0x80, 0x3, 0x1, 0x80,

    /* U+1E01 "ḁ" */
    0x39, 0xb0, 0xdf, 0x4d, 0x37, 0xc0, 0x30, 0xc0,

    /* U+1E3E "Ḿ" */
    0x4, 0x4, 0x0, 0x1c, 0x7e, 0x3f, 0x1f, 0xdf,
    0xef, 0xd5, 0xea, 0xf7, 0x79, 0x30,

    /* U+1E3F "ḿ" */
    0x6, 0x1, 0x0, 0x3, 0xee, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0xcc, 0xf3, 0x30,

    /* U+1E82 "Ẃ" */
    0x2, 0x0, 0xc0, 0x0, 0x62, 0x34, 0xe4, 0xdd,
    0x9a, 0xb3, 0x56, 0x3b, 0x87, 0x70, 0xc6, 0x18,
    0xc0,

    /* U+1E83 "ẃ" */
    0x4, 0x4, 0x0, 0x9, 0x34, 0x92, 0xf9, 0xdc,
    0xee, 0x36, 0x1b, 0x0,

    /* U+1EA0 "Ạ" */
    0xc, 0xe, 0x7, 0x82, 0xc3, 0x21, 0x99, 0xfc,
    0xc2, 0x61, 0x80, 0x3, 0x0,

    /* U+1EA1 "ạ" */
    0x39, 0xb0, 0xdf, 0x4d, 0x37, 0xc0, 0x30,

    /* U+1EA2 "Ả" */
    0xc, 0x2, 0x3, 0x0, 0x0, 0xc0, 0xe0, 0x78,
    0x2c, 0x32, 0x19, 0x9f, 0xcc, 0x26, 0x18,

    /* U+1EA3 "ả" */
    0x30, 0x61, 0x0, 0x39, 0x30, 0xdf, 0x4d, 0x37,
    0xc0,

    /* U+1EA4 "Ấ" */
    0x1, 0x86, 0x8c, 0x81, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30,

    /* U+1EA5 "ấ" */
    0x2, 0x68, 0x21, 0xc4, 0xc1, 0x9f, 0x26, 0x4c,
    0xf8,

    /* U+1EA6 "Ầ" */
    0xc0, 0x20, 0xf, 0x0, 0x0, 0xc0, 0xe0, 0x78,
    0x2c, 0x32, 0x19, 0x9f, 0xcc, 0x26, 0x18,

    /* U+1EA7 "ầ" */
    0xc0, 0x80, 0xe0, 0x21, 0xc4, 0xc1, 0x9f, 0x26,
    0x4c, 0xf8,

    /* U+1EA8 "Ẩ" */
    0x3, 0x0, 0x87, 0x0, 0x0, 0xc0, 0xe0, 0x78,
    0x2c, 0x32, 0x19, 0x9f, 0xcc, 0x26, 0x18,

    /* U+1EA9 "ẩ" */
    0x4, 0xc, 0xe0, 0x3, 0x89, 0x83, 0x3e, 0x4c,
    0x99, 0xf0,

    /* U+1EAA "Ẫ" */
    0x1c, 0xa, 0x3, 0x2, 0x40, 0xc0, 0xe0, 0x78,
    0x2c, 0x32, 0x19, 0x9f, 0xcc, 0x26, 0x18,

    /* U+1EAB "ẫ" */
    0x29, 0x63, 0x2, 0x39, 0x30, 0xdf, 0x4d, 0x37,
    0xc0,

    /* U+1EAC "Ậ" */
    0x8, 0xf, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30, 0x0, 0x60,

    /* U+1EAD "ậ" */
    0x31, 0xa0, 0xe, 0x6c, 0x37, 0xd3, 0x4d, 0xf0,
    0xc,

    /* U+1EAE "Ắ" */
    0x4, 0xf, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30,

    /* U+1EAF "ắ" */
    0x11, 0xe0, 0xe, 0x4c, 0x37, 0xd3, 0x4d, 0xf0,

    /* U+1EB0 "Ằ" */
    0x8, 0xf, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30,

    /* U+1EB1 "ằ" */
    0x21, 0xe0, 0xe, 0x4c, 0x37, 0xd3, 0x4d, 0xf0,

    /* U+1EB2 "Ẳ" */
    0xc, 0x4, 0x7, 0x80, 0x0, 0xc0, 0xe0, 0x78,
    0x2c, 0x32, 0x19, 0x9f, 0xcc, 0x26, 0x18,

    /* U+1EB3 "ẳ" */
    0x10, 0x47, 0x80, 0x39, 0x30, 0xdf, 0x4d, 0x37,
    0xc0,

    /* U+1EB4 "Ẵ" */
    0x1c, 0x19, 0x7, 0x0, 0x0, 0xc0, 0xe0, 0x78,
    0x2c, 0x32, 0x19, 0x9f, 0xcc, 0x26, 0x18,

    /* U+1EB5 "ẵ" */
    0x38, 0x7, 0x80, 0x39, 0x30, 0xdf, 0x4d, 0x37,
    0xc0,

    /* U+1EB6 "Ặ" */
    0x12, 0xe, 0x0, 0x1, 0x81, 0xc0, 0xf0, 0x58,
    0x64, 0x33, 0x3f, 0x98, 0x4c, 0x30, 0x0, 0x60,

    /* U+1EB7 "ặ" */
    0x68, 0xe0, 0xe, 0x6c, 0x37, 0xd3, 0x4d, 0xf0,
    0xc,

    /* U+1EB8 "Ẹ" */
    0xff, 0xc, 0x30, 0xfb, 0xc, 0x30, 0xfc, 0x3,
    0x0,

    /* U+1EB9 "ẹ" */
    0x7b, 0x2c, 0xf3, 0xff, 0x87, 0x80, 0x0, 0xc0,

    /* U+1EBA "Ẻ" */
    0x30, 0x63, 0x0, 0xff, 0xc, 0x30, 0xfb, 0xc,
    0x30, 0xfc,

    /* U+1EBB "ẻ" */
    0x30, 0x63, 0x0, 0x7b, 0x3c, 0xff, 0xc3, 0xa7,
    0x80,

    /* U+1EBC "Ẽ" */
    0x69, 0x60, 0x3f, 0xc3, 0xc, 0x3e, 0xc3, 0xc,
    0x3f,

    /* U+1EBD "ẽ" */
    0x69, 0x60, 0x1e, 0xcf, 0x3f, 0xf0, 0xe9, 0xe0,

    /* U+1EBE "Ế" */
    0x2, 0x2c, 0xf0, 0xf, 0xd8, 0x30, 0x60, 0xf9,
    0x83, 0x6, 0xf, 0xc0,

    /* U+1EBF "ế" */
    0x2, 0x8, 0xd2, 0x47, 0x99, 0xb3, 0x7e, 0xc1,
    0xd1, 0xe0,

    /* U+1EC0 "Ề" */
    0x80, 0x91, 0x70, 0x7, 0xec, 0x18, 0x30, 0x7c,
    0xc1, 0x83, 0x7, 0xe0,

    /* U+1EC1 "ề" */
    0x81, 0x81, 0x61, 0x23, 0xcc, 0xd9, 0xbf, 0x60,
    0xe8, 0xf0,

    /* U+1EC2 "Ể" */
    0x4, 0x13, 0x80, 0xff, 0xc, 0x30, 0xfb, 0xc,
    0x30, 0xfc,

    /* U+1EC3 "ể" */
    0x4, 0x13, 0x0, 0x7b, 0x3c, 0xff, 0xc3, 0xa7,
    0x80,

    /* U+1EC4 "Ễ" */
    0x28, 0x43, 0x12, 0xff, 0xc, 0x30, 0xfb, 0xc,
    0x30, 0xfc,

    /* U+1EC5 "ễ" */
    0x30, 0x3, 0x12, 0x7b, 0x3c, 0xff, 0xc3, 0xa7,
    0x80,

    /* U+1EC6 "Ệ" */
    0x31, 0xe0, 0x3f, 0xc3, 0xc, 0x3e, 0xc3, 0xc,
    0x3f, 0x0, 0xc0,

    /* U+1EC7 "ệ" */
    0x31, 0x60, 0x1e, 0xcb, 0x3c, 0xff, 0xe1, 0xe0,
    0x0, 0x30,

    /* U+1EC8 "Ỉ" */
    0xcf, 0xd, 0xb6, 0xdb, 0x6c,

    /* U+1EC9 "ỉ" */
    0xcf, 0xd, 0xb6, 0xdb, 0x0,

    /* U+1ECA "Ị" */
    0xff, 0xff, 0xc3,

    /* U+1ECB "ị" */
    0xf3, 0xff, 0xf3,

    /* U+1ECC "Ọ" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66,
    0x3c, 0x0, 0x0, 0x18,

    /* U+1ECD "ọ" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x37, 0x80, 0x0, 0xc0,

    /* U+1ECE "Ỏ" */
    0x10, 0x10, 0x40, 0x3, 0x8d, 0xb1, 0xe3, 0xc7,
    0x8f, 0x1b, 0x63, 0x80,

    /* U+1ECF "ỏ" */
    0x30, 0x43, 0x0, 0x7b, 0x3c, 0xf3, 0xcf, 0x37,
    0x80,

    /* U+1ED0 "Ố" */
    0x2, 0x28, 0xa0, 0x3, 0x8d, 0xb1, 0xe3, 0xc7,
    0x8f, 0x1b, 0x63, 0x80,

    /* U+1ED1 "ố" */
    0x2, 0x8, 0xf0, 0x7, 0x99, 0xb3, 0x66, 0xcd,
    0x99, 0xe0,

    /* U+1ED2 "Ồ" */
    0x80, 0xa0, 0xa0, 0x3, 0x8d, 0xb1, 0xe3, 0xc7,
    0x8f, 0x1b, 0x63, 0x80,

    /* U+1ED3 "ồ" */
    0x80, 0x81, 0x60, 0x3, 0xcc, 0xd9, 0xb3, 0x66,
    0xcc, 0xf0,

    /* U+1ED4 "Ổ" */
    0x4, 0x8, 0xe0, 0x3, 0x8d, 0xb1, 0xe3, 0xc7,
    0x8f, 0x1b, 0x63, 0x80,

    /* U+1ED5 "ổ" */
    0xc, 0x13, 0x0, 0x7b, 0x3c, 0xf3, 0xcf, 0x37,
    0x80,

    /* U+1ED6 "Ỗ" */
    0x38, 0x50, 0x41, 0x43, 0x8d, 0xb1, 0xe3, 0xc7,
    0x8f, 0x1b, 0x63, 0x80,

    /* U+1ED7 "ỗ" */
    0x30, 0x3, 0x0, 0x7b, 0x3c, 0xf3, 0xcf, 0x37,
    0x80,

    /* U+1ED8 "Ộ" */
    0x18, 0x24, 0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c, 0x0, 0x0, 0x18,

    /* U+1ED9 "ộ" */
    0x31, 0xe0, 0x1e, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,
    0x0, 0x30,

    /* U+1EDA "Ớ" */
    0x8, 0x10, 0x1, 0x3b, 0x6e, 0xc6, 0xc6, 0xc6,
    0xc6, 0xc6, 0x6c, 0x38,

    /* U+1EDB "ớ" */
    0x18, 0x20, 0xb, 0xec, 0xd9, 0xb3, 0x66, 0xcc,
    0xf0,

    /* U+1EDC "Ờ" */
    0x30, 0x10, 0x1, 0x3b, 0x6e, 0xc6, 0xc6, 0xc6,
    0xc6, 0xc6, 0x6c, 0x38,

    /* U+1EDD "ờ" */
    0x60, 0x40, 0xb, 0xec, 0xd9, 0xb3, 0x66, 0xcc,
    0xf0,

    /* U+1EDE "Ở" */
    0x18, 0x8, 0x18, 0x1, 0x39, 0x66, 0xc6, 0xc2,
    0xc2, 0xc2, 0xc6, 0x64, 0x38,

    /* U+1EDF "ở" */
    0x30, 0x20, 0xc0, 0x17, 0xd9, 0xb3, 0x66, 0xcd,
    0x99, 0xe0,

    /* U+1EE0 "Ỡ" */
    0x28, 0x38, 0x1, 0x3b, 0x6e, 0xc6, 0xc6, 0xc6,
    0xc6, 0xc6, 0x6c, 0x38,

    /* U+1EE1 "ỡ" */
    0x68, 0xb0, 0xb, 0xec, 0xd9, 0xb3, 0x66, 0xcc,
    0xf0,

    /* U+1EE2 "Ợ" */
    0x1, 0x3b, 0x6e, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6,
    0x6c, 0x38, 0x0, 0x0, 0x18,

    /* U+1EE3 "ợ" */
    0x7d, 0x9b, 0x36, 0x6c, 0xd9, 0x9e, 0x0, 0x0,
    0x60,

    /* U+1EE4 "Ụ" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0x7c,
    0x0, 0x1, 0x80,

    /* U+1EE5 "ụ" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x37, 0xc0, 0x1, 0x80,

    /* U+1EE6 "Ủ" */
    0x18, 0x10, 0x40, 0xc, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x37, 0xc0,

    /* U+1EE7 "ủ" */
    0x30, 0x63, 0x0, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0xc0,

    /* U+1EE8 "Ứ" */
    0xc, 0xc, 0x0, 0x38, 0xdc, 0x76, 0x33, 0x19,
    0x8c, 0xc6, 0x63, 0x31, 0x8f, 0x80,

    /* U+1EE9 "ứ" */
    0x18, 0x20, 0xe, 0x7c, 0xd9, 0xb3, 0x66, 0xcc,
    0xf8,

    /* U+1EEA "Ừ" */
    0x30, 0x8, 0x0, 0x38, 0xdc, 0x76, 0x33, 0x19,
    0x8c, 0xc6, 0x63, 0x31, 0x8f, 0x80,

    /* U+1EEB "ừ" */
    0x60, 0x60, 0xe, 0x7c, 0xd9, 0xb3, 0x66, 0xcc,
    0xf8,

    /* U+1EEC "Ử" */
    0x18, 0x4, 0x4, 0x0, 0x1c, 0x6e, 0x3b, 0x19,
    0x8c, 0xc6, 0x63, 0x31, 0x98, 0xc7, 0xc0,

    /* U+1EED "ử" */
    0x30, 0x30, 0xc0, 0x1c, 0xf9, 0xf3, 0x66, 0xcd,
    0x99, 0xf0,

    /* U+1EEE "Ữ" */
    0x34, 0x16, 0x0, 0x38, 0xdc, 0x76, 0x33, 0x19,
    0x8c, 0xc6, 0x63, 0x31, 0x8f, 0x80,

    /* U+1EEF "ữ" */
    0x68, 0xb0, 0xe, 0x7c, 0xd9, 0xb3, 0x66, 0xcc,
    0xf8,

    /* U+1EF0 "Ự" */
    0x0, 0xe3, 0x71, 0xb8, 0xec, 0x66, 0x33, 0x19,
    0x8c, 0xc6, 0x3e, 0x0, 0x0, 0x3, 0x0,

    /* U+1EF1 "ự" */
    0xcf, 0x9f, 0x36, 0x6c, 0xd9, 0x9f, 0x0, 0x0,
    0x60,

    /* U+1EF2 "Ỳ" */
    0x30, 0x18, 0x0, 0xc3, 0x66, 0x66, 0x3c, 0x3c,
    0x18, 0x18, 0x18, 0x18,

    /* U+1EF3 "ỳ" */
    0x20, 0xc0, 0x33, 0x6d, 0xb6, 0x8e, 0x38, 0xc1,
    0xc, 0x60,

    /* U+1EF4 "Ỵ" */
    0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x18, 0x18,
    0x18, 0x0, 0x18,

    /* U+1EF5 "ỵ" */
    0xcd, 0x36, 0xda, 0x38, 0xe3, 0xc, 0x31, 0xb0,

    /* U+1EF6 "Ỷ" */
    0x18, 0xc, 0x18, 0x0, 0xc2, 0x66, 0x66, 0x3c,
    0x3c, 0x18, 0x18, 0x18, 0x18,

    /* U+1EF7 "ỷ" */
    0x18, 0x40, 0x33, 0x6d, 0xb6, 0x8e, 0x38, 0xc1,
    0xc, 0x60,

    /* U+1EF8 "Ỹ" */
    0x34, 0x2c, 0x0, 0xc3, 0x66, 0x66, 0x3c, 0x3c,
    0x18, 0x18, 0x18, 0x18,

    /* U+1EF9 "ỹ" */
    0x2d, 0x60, 0x33, 0x6d, 0xb6, 0x8e, 0x38, 0xc1,
    0xc, 0x60,

    /* U+1F4D "Ὅ" */
    0xa7, 0x81, 0x98, 0x61, 0x8c, 0x31, 0x86, 0x30,
    0xc6, 0x18, 0x66, 0x7, 0x80,

    /* U+2010 "‐" */
    0xe0,

    /* U+2011 "‑" */
    0xe0,

    /* U+2013 "–" */
    0xfc,

    /* U+2014 "—" */
    0xff,

    /* U+2018 "‘" */
    0x5b, 0x0,

    /* U+2019 "’" */
    0x6d, 0x0,

    /* U+201C "“" */
    0x57, 0xbc,

    /* U+201D "”" */
    0x7b, 0xd4,

    /* U+2020 "†" */
    0x30, 0xcf, 0xcc, 0x30, 0xc3, 0xc, 0x30,

    /* U+2021 "‡" */
    0x30, 0xcf, 0xcc, 0x30, 0xc3, 0xc, 0xfc, 0xc3,
    0xc,

    /* U+2026 "…" */
    0xdb, 0xdb,

    /* U+2030 "‰" */
    0x60, 0x12, 0x82, 0x70, 0x34, 0x1, 0x80, 0x2d,
    0x8e, 0xc9, 0x59, 0x6, 0xc0,

    /* U+2032 "′" */
    0xe0,

    /* U+2033 "″" */
    0xb6, 0x80};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 52, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 61, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 9, .adv_w = 114, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 110, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 27, .adv_w = 142, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 126, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 31, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 46, .adv_w = 67, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 53, .adv_w = 67, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 60, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 64, .adv_w = 105, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 70, .adv_w = 47, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 72, .adv_w = 76, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 73, .adv_w = 56, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 71, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 79, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 110, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 110, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 54, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 51, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 153, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 157, .adv_w = 110, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 160, .adv_w = 99, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 164, .adv_w = 96, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 186, .adv_w = 129, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 126, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 125, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 136, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 56, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 168, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 135, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 320, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 118, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 119, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 127, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 125, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 168, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 122, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 119, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 53, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 404, .adv_w = 81, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 411, .adv_w = 53, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 416, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 420, .adv_w = 85, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 421, .adv_w = 63, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 422, .adv_w = 103, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 69, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 469, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 51, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 50, .box_w = 4, .box_h = 13, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 487, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 51, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 166, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 108, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 108, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 527, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 535, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 65, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 108, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 97, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 141, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 584, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 63, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 596, .adv_w = 48, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 598, .adv_w = 63, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 605, .adv_w = 124, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 608, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 54, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 612, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 621, .adv_w = 114, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 133, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 48, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 645, .adv_w = 121, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 654, .adv_w = 90, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 655, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 85, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 668, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 672, .adv_w = 106, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 674, .adv_w = 76, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 675, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 685, .adv_w = 96, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 686, .adv_w = 75, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 688, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 72, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 696, .adv_w = 72, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 699, .adv_w = 63, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 700, .adv_w = 119, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 708, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 58, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 716, .adv_w = 52, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 717, .adv_w = 72, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 719, .adv_w = 88, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 722, .adv_w = 96, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 726, .adv_w = 138, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 155, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 763, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 791, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 129, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 180, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 860, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 871, .adv_w = 108, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 108, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 108, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 898, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 908, .adv_w = 56, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 56, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 918, .adv_w = 56, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 56, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 931, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 135, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 951, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 984, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 102, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1010, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1020, .adv_w = 127, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1031, .adv_w = 127, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1042, .adv_w = 127, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1053, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1063, .adv_w = 119, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1099, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1107, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1115, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1138, .adv_w = 162, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1147, .adv_w = 100, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1155, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1163, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1171, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1179, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1186, .adv_w = 52, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1190, .adv_w = 52, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 52, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1199, .adv_w = 52, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1205, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1213, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1221, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1229, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1237, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 110, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1266, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1273, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1281, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1289, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1304, .adv_w = 97, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1314, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1324, .adv_w = 97, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1335, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1349, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1357, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1371, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1379, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1390, .adv_w = 100, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1398, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1407, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1416, .adv_w = 108, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1425, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1433, .adv_w = 56, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 52, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1444, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1453, .adv_w = 51, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1458, .adv_w = 135, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1469, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1477, .adv_w = 123, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1486, .adv_w = 70, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1491, .adv_w = 118, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1502, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1509, .adv_w = 127, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1520, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1528, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1538, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1546, .adv_w = 117, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1555, .adv_w = 98, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1562, .adv_w = 135, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1572, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1579, .adv_w = 137, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1591, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1598, .adv_w = 129, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1613, .adv_w = 103, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1622, .adv_w = 180, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1640, .adv_w = 162, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1653, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1665, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1674, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1675, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 1676, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1677, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 1678, .adv_w = 105, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1680, .adv_w = 129, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1692, .adv_w = 117, .box_w = 9, .box_h = 10, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 1704, .adv_w = 145, .box_w = 10, .box_h = 10, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 1717, .adv_w = 66, .box_w = 5, .box_h = 10, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 1724, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1734, .adv_w = 128, .box_w = 10, .box_h = 10, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 1747, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1757, .adv_w = 65, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1764, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1773, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1781, .adv_w = 108, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1791, .adv_w = 65, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1795, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1804, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1812, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1820, .adv_w = 158, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1832, .adv_w = 107, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1841, .adv_w = 122, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1852, .adv_w = 81, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1859, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1867, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1881, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1889, .adv_w = 168, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1903, .adv_w = 166, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1916, .adv_w = 168, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1933, .adv_w = 141, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1945, .adv_w = 129, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1958, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1965, .adv_w = 129, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1980, .adv_w = 103, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1989, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2003, .adv_w = 103, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2012, .adv_w = 129, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2027, .adv_w = 103, .box_w = 7, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2037, .adv_w = 129, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2052, .adv_w = 103, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2062, .adv_w = 129, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2077, .adv_w = 103, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2086, .adv_w = 129, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2102, .adv_w = 103, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2111, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2125, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2133, .adv_w = 129, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2147, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2155, .adv_w = 129, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2170, .adv_w = 103, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2179, .adv_w = 129, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2194, .adv_w = 103, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2203, .adv_w = 129, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2219, .adv_w = 103, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2228, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2237, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2245, .adv_w = 108, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2255, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2264, .adv_w = 108, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2273, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2281, .adv_w = 108, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2293, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2303, .adv_w = 108, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2315, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2325, .adv_w = 108, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2335, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2344, .adv_w = 108, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2354, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2363, .adv_w = 108, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2374, .adv_w = 104, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2384, .adv_w = 56, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2389, .adv_w = 52, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2394, .adv_w = 56, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2397, .adv_w = 51, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2400, .adv_w = 132, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2412, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2420, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2432, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2441, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2453, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2463, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2475, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2485, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2497, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2506, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2518, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2527, .adv_w = 132, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2541, .adv_w = 108, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2551, .adv_w = 135, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2563, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2572, .adv_w = 135, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2584, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2593, .adv_w = 135, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2606, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2616, .adv_w = 135, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2628, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2637, .adv_w = 135, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2650, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2659, .adv_w = 127, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2670, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2678, .adv_w = 127, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2690, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2699, .adv_w = 137, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2713, .adv_w = 117, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2722, .adv_w = 137, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2736, .adv_w = 117, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2745, .adv_w = 137, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2760, .adv_w = 117, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2770, .adv_w = 137, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2784, .adv_w = 117, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2793, .adv_w = 137, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2808, .adv_w = 117, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2817, .adv_w = 119, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2829, .adv_w = 97, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2839, .adv_w = 119, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2850, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2858, .adv_w = 119, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2871, .adv_w = 97, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2881, .adv_w = 119, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2893, .adv_w = 97, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2903, .adv_w = 139, .box_w = 11, .box_h = 9, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 2916, .adv_w = 76, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2917, .adv_w = 76, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2918, .adv_w = 121, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2919, .adv_w = 146, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2920, .adv_w = 45, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2922, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 2924, .adv_w = 77, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2926, .adv_w = 78, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 2928, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2935, .adv_w = 111, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2944, .adv_w = 142, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2946, .adv_w = 185, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2959, .adv_w = 31, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2960, .adv_w = 61, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x2, 0xd};

static const uint16_t unicode_list_3[] = {
    0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0xe, 0xf,
    0x16, 0x17, 0x26, 0x27, 0x37, 0x38, 0x41, 0x42,
    0x52, 0x53, 0x58, 0x59, 0x66, 0x67, 0x70, 0x71,
    0x77, 0x78, 0x9e, 0x9f, 0xad, 0xae, 0xf8, 0xf9,
    0xfa, 0xfb, 0xfc, 0xfd, 0x1ff, 0x201, 0x207, 0x221,
    0x283, 0x284, 0x286, 0x287, 0x288, 0x28a, 0x28c, 0x28d,
    0x28e, 0x2aa, 0x2ab, 0x2ac, 0x2ad, 0x2ae, 0x2ca, 0x2cb,
    0x2cc, 0x301, 0x30a, 0x351, 0x35a, 0x1cfe, 0x1cff, 0x1d3c,
    0x1d3d, 0x1d80, 0x1d81};

static const uint16_t unicode_list_5[] = {
    0x0, 0xc3, 0xc4, 0xc6, 0xc7, 0xcb, 0xcc, 0xcf,
    0xd0, 0xd3, 0xd4, 0xd9, 0xe3, 0xe5, 0xe6};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
    {
        {.range_start = 0, .range_length = 14, .glyph_id_start = 1, .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY},
        {.range_start = 32, .range_length = 95, .glyph_id_start = 4, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 160, .range_length = 96, .glyph_id_start = 99, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 258, .range_length = 7554, .glyph_id_start = 195, .unicode_list = unicode_list_3, .glyph_id_ofs_list = NULL, .list_length = 67, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY},
        {.range_start = 7840, .range_length = 90, .glyph_id_start = 262, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 8013, .range_length = 231, .glyph_id_start = 352, .unicode_list = unicode_list_5, .glyph_id_ofs_list = NULL, .list_length = 15, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
    {
        0, 0, 0, 0, 1, 0, 2, 0,
        0, 0, 0, 2, 3, 0, 0, 0,
        4, 0, 4, 5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 6, 7, 8,
        9, 10, 11, 0, 12, 12, 13, 14,
        15, 12, 12, 9, 16, 17, 18, 0,
        19, 13, 20, 21, 22, 23, 24, 25,
        0, 0, 0, 0, 0, 26, 27, 28,
        0, 29, 30, 0, 31, 0, 0, 32,
        0, 33, 33, 34, 27, 0, 35, 0,
        36, 0, 37, 38, 39, 37, 40, 41,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 6, 6, 6, 6, 6,
        6, 0, 8, 10, 10, 10, 10, 12,
        12, 12, 12, 9, 12, 9, 9, 9,
        9, 9, 0, 0, 13, 13, 13, 13,
        23, 0, 0, 26, 26, 26, 26, 26,
        26, 0, 28, 29, 29, 29, 29, 0,
        0, 0, 0, 0, 33, 34, 34, 34,
        34, 34, 0, 0, 0, 0, 0, 0,
        37, 27, 37, 6, 26, 6, 26, 8,
        28, 9, 0, 10, 29, 12, 0, 15,
        0, 12, 33, 0, 35, 0, 0, 13,
        0, 13, 0, 24, 40, 0, 0, 0,
        0, 6, 26, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 6, 10, 12, 12,
        9, 23, 0, 0, 0, 0, 33, 0,
        0, 34, 0, 0, 42, 14, 43, 0,
        6, 26, 12, 33, 21, 0, 6, 26,
        6, 26, 6, 26, 6, 26, 6, 26,
        6, 26, 6, 26, 6, 26, 6, 26,
        6, 26, 6, 26, 6, 26, 10, 29,
        10, 29, 10, 29, 10, 29, 10, 29,
        10, 29, 10, 29, 10, 29, 12, 0,
        12, 0, 9, 34, 9, 34, 9, 34,
        9, 34, 9, 34, 9, 34, 9, 34,
        0, 0, 0, 0, 0, 0, 0, 34,
        0, 0, 13, 0, 13, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        23, 37, 23, 37, 23, 37, 23, 37,
        9, 0, 0, 0, 0, 2, 2, 2,
        2, 0, 0, 4, 0, 2, 2};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
    {
        0, 0, 0, 0, 1, 0, 2, 0,
        0, 0, 3, 2, 0, 4, 5, 0,
        6, 7, 6, 8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 9, 0, 10, 0, 11,
        0, 0, 0, 11, 0, 0, 12, 0,
        0, 0, 0, 11, 0, 11, 0, 13,
        14, 15, 16, 17, 18, 19, 20, 0,
        0, 21, 0, 0, 0, 22, 0, 23,
        23, 23, 24, 23, 0, 0, 0, 0,
        0, 25, 25, 26, 25, 23, 27, 28,
        29, 30, 31, 32, 33, 31, 34, 0,
        0, 35, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 36, 0,
        7, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 37, 0,
        0, 0, 0, 10, 10, 10, 10, 10,
        10, 38, 11, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 11, 11, 11,
        11, 11, 0, 11, 15, 15, 15, 15,
        19, 0, 0, 22, 22, 22, 22, 22,
        22, 39, 23, 23, 23, 23, 23, 0,
        0, 0, 0, 0, 25, 26, 26, 26,
        26, 26, 0, 40, 30, 30, 30, 30,
        31, 0, 31, 10, 22, 10, 22, 11,
        23, 0, 0, 0, 23, 0, 0, 0,
        0, 0, 25, 0, 0, 13, 28, 15,
        30, 15, 30, 20, 34, 11, 23, 41,
        30, 10, 22, 0, 0, 11, 0, 0,
        0, 0, 0, 0, 10, 0, 0, 0,
        11, 19, 0, 0, 23, 0, 25, 0,
        30, 26, 30, 0, 0, 0, 25, 25,
        10, 22, 0, 25, 17, 0, 10, 22,
        10, 22, 10, 22, 10, 22, 10, 22,
        10, 22, 10, 22, 10, 22, 10, 22,
        10, 22, 10, 22, 10, 22, 0, 23,
        0, 23, 0, 23, 0, 23, 0, 23,
        0, 23, 0, 23, 0, 23, 0, 0,
        0, 0, 11, 26, 11, 26, 11, 26,
        11, 26, 11, 26, 11, 26, 11, 26,
        11, 23, 11, 23, 11, 23, 11, 26,
        11, 23, 15, 30, 15, 30, 0, 30,
        0, 30, 0, 30, 0, 30, 0, 30,
        19, 31, 19, 31, 19, 31, 19, 31,
        0, 0, 0, 7, 7, 2, 42, 2,
        2, 0, 0, 6, 0, 2, 2};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
    {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -5, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 2, 3, 0, 2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -23,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -23,
        0, 0, 0, 0, 0, 0, 0, -22,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -11, 0, 0, 0, 0,
        0, 0, -7, 0, -2, 0, 0, -12,
        -2, -7, -5, 0, -12, 0, 0, 0,
        0, 0, -3, -1, 0, 0, -2, -1,
        -5, -3, 0, 1, 0, 0, 0, 0,
        0, 0, -2, -11, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, 0, -2, 0, 0, -5, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, 0, 0,
        0, 0, -1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -11, 0, 0,
        0, -2, 0, 0, 0, -6, 0, -2,
        0, -2, -4, -2, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, -2, 0, -2, 0, 0, 0, -2,
        -2, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -24, 0, 0, 0, -17, 0, -21,
        0, 2, 0, 0, 0, 0, 0, 0,
        0, -3, -2, 0, 0, -2, -2, 0,
        0, -2, -2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, 0, 0, -3, 0, 0, 0, 2,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -12, 0, 0, 0, -3, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, -1, -3, 0, 0, 0, -2,
        -4, -6, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 2, -6, 0,
        0, -21, -3, -18, -10, 0, -25, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, -12, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -35, 0, 0, 0, -15,
        0, -18, 0, 0, 0, 0, 0, -4,
        0, -3, 0, -1, -1, 0, 0, -1,
        0, 0, 1, 0, 1, 0, 0, 0,
        0, 0, 0, -22, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, -3,
        -2, 0, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -6,
        0, -2, 0, 0, -4, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -5, 0, 0, 0,
        0, -23, -24, 0, 0, -10, -3, -21,
        -1, 2, 0, 2, 1, 0, 2, 0,
        0, -14, -9, 0, -9, -16, -6, -8,
        0, -7, -7, -5, -7, -6, 0, -19,
        -16, -17, -9, -9, 0, 0, 0, 0,
        0, 2, 0, -20, -11, 0, 0, -7,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 2, -4, -4, 0, 0, -4,
        -3, 0, 0, -3, -1, 0, 0, 0,
        2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 0, -13, -6, 0,
        0, -4, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, -3, -3, 0,
        0, -3, -2, 0, 0, -2, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -11, 0, 0, 0, -2, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, -2, 0, 0, 0, -2,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -3, 2,
        -5, -21, -11, 0, 0, -12, -3, -9,
        -1, 2, -9, 2, 2, 1, 2, 0,
        2, -6, -6, -2, -4, -6, -4, -5,
        -2, -4, -2, 0, -2, -3, 2, -8,
        -5, -9, -6, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, -2,
        0, 0, 0, -2, -3, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, 0, 0, -2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -1, 0, -1, -1, 0, 0,
        0, 0, 0, 0, 0, -3, 0, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -1,
        0, -1, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -1, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -6, 0, 2, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 2, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 2, 0, 0, 0,
        0, 0, 0, 2, 0, -8, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -9, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -10, 0, -10, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, 0, -2, -1, 0, 0, 0, 0,
        0, 0, 0, -10, 0, 2, 0, 0,
        0, -15, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, -2, 2, 0, -3, 0, 0,
        5, 0, 2, 2, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -3,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, 1, 0, 0, 0, -14, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -1, -1, 1,
        0, -1, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, -12,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -2, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -1, 0, 0, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, 0, 0, -2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -41,
        -43, 0, 0, -19, -6, 0, -4, 1,
        0, 1, 0, 0, 1, 0, 0, -17,
        -16, 0, -17, -15, -13, -16, 0, -14,
        -14, -10, -14, -11, 0, -35, -29, -31,
        -17, -17, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -2, 0, 0, -2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
    {
        .class_pair_values = kern_class_values,
        .left_class_mapping = kern_left_class_mapping,
        .right_class_mapping = kern_right_class_mapping,
        .left_class_cnt = 43,
        .right_class_cnt = 42,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 6,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t roboto_bold_12 = {
#else
lv_font_t roboto_bold_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 16,                              /*The maximum line height required by the font*/
    .base_line = 3,                                 /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif

    .dsc = &font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if ROBOTO_BOLD_12*/
