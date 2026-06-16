/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --no-compress --stride 1 --align 1 --font Roboto-Regular.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o roboto_regular_10.c
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

#ifndef ROBOTO_REGULAR_10
#define ROBOTO_REGULAR_10 1
#endif

#if ROBOTO_REGULAR_10

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
    0xf9,

    /* U+0022 "\"" */
    0xf0,

    /* U+0023 "#" */
    0x52, 0xbe, 0xa5, 0x7e, 0x94,

    /* U+0024 "$" */
    0x11, 0x9e, 0x94, 0x1b, 0x2f, 0x70, 0x80,

    /* U+0025 "%" */
    0xe1, 0x52, 0xa7, 0x82, 0xc6, 0x54, 0x86,

    /* U+0026 "&" */
    0x72, 0x94, 0xc6, 0x4e, 0x6f,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x89, 0x10,

    /* U+0029 ")" */
    0x89, 0x12, 0x49, 0x29, 0x40,

    /* U+002A "*" */
    0x25, 0x1c, 0xa1, 0x0,

    /* U+002B "+" */
    0x21, 0x9, 0xf2, 0x10, 0x80,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x12, 0x22, 0x44, 0x48, 0x80,

    /* U+0030 "0" */
    0x74, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49,

    /* U+0032 "2" */
    0x72, 0x62, 0x11, 0x11, 0x1f,

    /* U+0033 "3" */
    0x72, 0x42, 0x61, 0x85, 0x2e,

    /* U+0034 "4" */
    0x11, 0x94, 0xa9, 0x7c, 0x42,

    /* U+0035 "5" */
    0x7a, 0x10, 0xe0, 0x85, 0x2e,

    /* U+0036 "6" */
    0x32, 0x21, 0xe8, 0xc7, 0x2e,

    /* U+0037 "7" */
    0xf8, 0x44, 0x22, 0x10, 0x88,

    /* U+0038 "8" */
    0x74, 0x62, 0xe9, 0xc6, 0x2e,

    /* U+0039 "9" */
    0x74, 0xe3, 0x17, 0x84, 0x4c,

    /* U+003A ":" */
    0x84,

    /* U+003B ";" */
    0x8e,

    /* U+003C "<" */
    0x16, 0x86, 0x10,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0x86, 0x16, 0x80,

    /* U+003F "?" */
    0x69, 0x13, 0x24, 0x2,

    /* U+0040 "@" */
    0x3c, 0x62, 0x59, 0xa9, 0xa9, 0xa9, 0xa9, 0xb6,
    0x40, 0x38,

    /* U+0041 "A" */
    0x10, 0x70, 0xa1, 0x44, 0x4f, 0x91, 0x41,

    /* U+0042 "B" */
    0xf4, 0x63, 0xe8, 0xc6, 0x3e,

    /* U+0043 "C" */
    0x73, 0x28, 0x60, 0x82, 0x1c, 0x9c,

    /* U+0044 "D" */
    0xf4, 0xa3, 0x18, 0xc6, 0x7e,

    /* U+0045 "E" */
    0xfc, 0x21, 0xe8, 0x42, 0x1f,

    /* U+0046 "F" */
    0xf8, 0x88, 0xf8, 0x88,

    /* U+0047 "G" */
    0x7b, 0x18, 0x20, 0x9e, 0x14, 0x5e,

    /* U+0048 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x61,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x85, 0x2e,

    /* U+004B "K" */
    0x8a, 0x4a, 0x38, 0xe2, 0x49, 0xa2,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0xc7, 0x8f, 0x1d, 0x5a, 0xb5, 0x64, 0xc9,

    /* U+004E "N" */
    0x87, 0x1e, 0x69, 0x96, 0x78, 0xe1,

    /* U+004F "O" */
    0x7b, 0x28, 0x61, 0x86, 0x1c, 0xde,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x10,

    /* U+0051 "Q" */
    0x7b, 0x28, 0x61, 0x86, 0x1c, 0xde, 0xc,

    /* U+0052 "R" */
    0xf4, 0x63, 0x1f, 0x4a, 0x31,

    /* U+0053 "S" */
    0x74, 0x60, 0x83, 0x6, 0x2e,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x84,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0056 "V" */
    0x85, 0x14, 0x92, 0x28, 0xc3, 0x4,

    /* U+0057 "W" */
    0x88, 0xa4, 0x95, 0x4a, 0xa5, 0x52, 0xb1, 0x88,
    0x44,

    /* U+0058 "X" */
    0x45, 0x23, 0x8c, 0x30, 0xe4, 0x91,

    /* U+0059 "Y" */
    0x8c, 0x54, 0xa2, 0x10, 0x84,

    /* U+005A "Z" */
    0xf8, 0xc4, 0x42, 0x23, 0x1f,

    /* U+005B "[" */
    0xea, 0xaa, 0xac,

    /* U+005C "\\" */
    0x84, 0x44, 0x22, 0x21, 0x10,

    /* U+005D "]" */
    0xd5, 0x55, 0x5c,

    /* U+005E "^" */
    0x26, 0x69,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x72, 0x5e, 0x94, 0xbc,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e,

    /* U+0063 "c" */
    0x74, 0xa1, 0x9, 0x38,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc6, 0x2f,

    /* U+0065 "e" */
    0x74, 0xbd, 0x8, 0x38,

    /* U+0066 "f" */
    0x29, 0x74, 0x92, 0x40,

    /* U+0067 "g" */
    0x7c, 0x63, 0x18, 0xbc, 0x2e,

    /* U+0068 "h" */
    0x88, 0xf9, 0x99, 0x99,

    /* U+0069 "i" */
    0xbf,

    /* U+006A "j" */
    0x45, 0x55, 0x70,

    /* U+006B "k" */
    0x88, 0x9a, 0xca, 0xa9,

    /* U+006C "l" */
    0xff,

    /* U+006D "m" */
    0xff, 0x26, 0x4c, 0x99, 0x32, 0x40,

    /* U+006E "n" */
    0xf9, 0x99, 0x99,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xb8,

    /* U+0070 "p" */
    0xf4, 0x63, 0x18, 0xfa, 0x10,

    /* U+0071 "q" */
    0x7c, 0x63, 0x18, 0xbc, 0x21,

    /* U+0072 "r" */
    0xf2, 0x49, 0x0,

    /* U+0073 "s" */
    0x69, 0xc3, 0x96,

    /* U+0074 "t" */
    0x4b, 0xa4, 0x93,

    /* U+0075 "u" */
    0x99, 0x99, 0x9f,

    /* U+0076 "v" */
    0x8a, 0x94, 0xa2, 0x10,

    /* U+0077 "w" */
    0x93, 0x35, 0xab, 0x66, 0x44, 0x80,

    /* U+0078 "x" */
    0x52, 0x88, 0x45, 0x68,

    /* U+0079 "y" */
    0x92, 0x94, 0xc2, 0x10, 0x98,

    /* U+007A "z" */
    0xf3, 0x24, 0xcf,

    /* U+007B "{" */
    0x29, 0x25, 0x12, 0x48, 0x80,

    /* U+007C "|" */
    0xff, 0xc0,

    /* U+007D "}" */
    0x89, 0x24, 0x52, 0x4a, 0x0,

    /* U+007E "~" */
    0xed, 0xc0,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xbe,

    /* U+00A2 "¢" */
    0x23, 0xb5, 0x8, 0x69, 0xc4,

    /* U+00A3 "£" */
    0x32, 0x50, 0x8e, 0x21, 0x1f,

    /* U+00A4 "¤" */
    0xff, 0x28, 0x61, 0x85, 0x2f, 0xc0,

    /* U+00A5 "¥" */
    0x8a, 0x94, 0xaf, 0xfc, 0x84,

    /* U+00A6 "¦" */
    0xf7, 0x80,

    /* U+00A7 "§" */
    0x74, 0x60, 0x8b, 0x45, 0x26, 0xc, 0x5c,

    /* U+00A8 "¨" */
    0xd0,

    /* U+00A9 "©" */
    0x38, 0xfa, 0xad, 0x1a, 0xb7, 0x51, 0x1c,

    /* U+00AA "ª" */
    0xf7, 0xf0,

    /* U+00AB "«" */
    0x56, 0x65,

    /* U+00AC "¬" */
    0xf1, 0x10,

    /* U+00AD "­" */
    0xe0,

    /* U+00AE "®" */
    0x38, 0xfa, 0xad, 0x5b, 0xb5, 0x51, 0x1c,

    /* U+00AF "¯" */
    0xe0,

    /* U+00B0 "°" */
    0xf7, 0x80,

    /* U+00B1 "±" */
    0x21, 0x3e, 0x42, 0x3, 0xe0,

    /* U+00B2 "²" */
    0xe5, 0x70,

    /* U+00B3 "³" */
    0xec, 0xf0,

    /* U+00B4 "´" */
    0x60,

    /* U+00B5 "µ" */
    0x99, 0x99, 0x9f, 0x88,

    /* U+00B6 "¶" */
    0x7f, 0xff, 0x71, 0x11,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x1c,

    /* U+00B9 "¹" */
    0x75,

    /* U+00BA "º" */
    0xf6, 0xf0,

    /* U+00BB "»" */
    0x65, 0x56,

    /* U+00BC "¼" */
    0xc0, 0x91, 0x42, 0xa6, 0xc6, 0x97, 0x82,

    /* U+00BD "½" */
    0x1, 0x91, 0x42, 0x86, 0xc4, 0x92, 0x7,

    /* U+00BE "¾" */
    0xc0, 0x91, 0x26, 0xa2, 0xc6, 0x97, 0x82,

    /* U+00BF "¿" */
    0x20, 0x24, 0xc8, 0x96,

    /* U+00C0 "À" */
    0x20, 0x20, 0x41, 0xc2, 0x85, 0x11, 0x3e, 0x45,
    0x4,

    /* U+00C1 "Á" */
    0x8, 0x20, 0x41, 0xc2, 0x85, 0x11, 0x3e, 0x45,
    0x4,

    /* U+00C2 "Â" */
    0x18, 0x40, 0x41, 0xc2, 0x85, 0x11, 0x3e, 0x45,
    0x4,

    /* U+00C3 "Ã" */
    0x34, 0xb0, 0x41, 0xc2, 0x85, 0x11, 0x3e, 0x45,
    0x4,

    /* U+00C4 "Ä" */
    0x28, 0x0, 0x41, 0xc2, 0x85, 0x11, 0x3e, 0x45,
    0x4,

    /* U+00C5 "Å" */
    0x30, 0x60, 0xc0, 0x83, 0x85, 0x1a, 0x26, 0x7d,
    0x8a, 0x10,

    /* U+00C6 "Æ" */
    0xf, 0x83, 0x1, 0x40, 0x5e, 0x24, 0xf, 0x4,
    0x43, 0x1f,

    /* U+00C7 "Ç" */
    0x7b, 0x28, 0x60, 0x82, 0x1c, 0x9e, 0x10, 0xc0,

    /* U+00C8 "È" */
    0x41, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+00C9 "É" */
    0x20, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+00CA "Ê" */
    0x22, 0xbf, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+00CB "Ë" */
    0xd0, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+00CC "Ì" */
    0x95, 0x55, 0x50,

    /* U+00CD "Í" */
    0x6a, 0xaa, 0xa0,

    /* U+00CE "Î" */
    0x55, 0x24, 0x92, 0x48,

    /* U+00CF "Ï" */
    0xa1, 0x24, 0x92, 0x48,

    /* U+00D0 "Ð" */
    0x79, 0x24, 0x79, 0x45, 0x14, 0xde,

    /* U+00D1 "Ñ" */
    0x69, 0x68, 0x71, 0xe6, 0x99, 0x67, 0x8e, 0x10,

    /* U+00D2 "Ò" */
    0x20, 0x47, 0xb2, 0x86, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00D3 "Ó" */
    0x10, 0x87, 0xb2, 0x86, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00D4 "Ô" */
    0x31, 0x27, 0xb2, 0x86, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00D5 "Õ" */
    0x78, 0x7, 0xb2, 0x86, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00D6 "Ö" */
    0x50, 0x7, 0xb2, 0x86, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00D7 "×" */
    0xca, 0x88, 0xa0, 0x80,

    /* U+00D8 "Ø" */
    0x7f, 0x28, 0xe5, 0xa6, 0x94, 0xde, 0x80,

    /* U+00D9 "Ù" */
    0x41, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DA "Ú" */
    0x11, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DB "Û" */
    0x22, 0xa3, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DC "Ü" */
    0x50, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DD "Ý" */
    0x11, 0x23, 0x15, 0x28, 0x84, 0x21, 0x0,

    /* U+00DE "Þ" */
    0x84, 0x3d, 0x18, 0xfa, 0x10,

    /* U+00DF "ß" */
    0x74, 0xa5, 0x4b, 0x46, 0x3f,

    /* U+00E0 "à" */
    0x20, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E1 "á" */
    0x10, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E2 "â" */
    0x30, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E3 "ã" */
    0x78, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E4 "ä" */
    0x50, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+00E5 "å" */
    0x32, 0x8c, 0xe4, 0xbd, 0x29, 0x78,

    /* U+00E6 "æ" */
    0x77, 0x24, 0x9f, 0xe9, 0x4, 0x83, 0xb8,

    /* U+00E7 "ç" */
    0x74, 0xa1, 0x9, 0x38, 0x84,

    /* U+00E8 "è" */
    0x40, 0x1d, 0x2f, 0x42, 0xe,

    /* U+00E9 "é" */
    0x20, 0x1d, 0x2f, 0x42, 0xe,

    /* U+00EA "ê" */
    0x22, 0x1d, 0x2f, 0x42, 0xe,

    /* U+00EB "ë" */
    0x50, 0x1d, 0x2f, 0x42, 0xe,

    /* U+00EC "ì" */
    0x95, 0x55,

    /* U+00ED "í" */
    0x6a, 0xaa,

    /* U+00EE "î" */
    0x55, 0x24, 0x92,

    /* U+00EF "ï" */
    0xa1, 0x24, 0x92,

    /* U+00F0 "ð" */
    0x61, 0x84, 0xf8, 0xc6, 0x3b, 0x70,

    /* U+00F1 "ñ" */
    0x70, 0xf9, 0x99, 0x99,

    /* U+00F2 "ò" */
    0x40, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F3 "ó" */
    0x11, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F4 "ô" */
    0x22, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F5 "õ" */
    0x70, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F6 "ö" */
    0x50, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F7 "÷" */
    0x20, 0x1, 0xf0, 0x10,

    /* U+00F8 "ø" */
    0xb, 0xa7, 0x5a, 0xe5, 0xc0,

    /* U+00F9 "ù" */
    0x40, 0x99, 0x99, 0x9f,

    /* U+00FA "ú" */
    0x20, 0x99, 0x99, 0x9f,

    /* U+00FB "û" */
    0x60, 0x99, 0x99, 0x9f,

    /* U+00FC "ü" */
    0xa0, 0x99, 0x99, 0x9f,

    /* U+00FD "ý" */
    0x11, 0x24, 0xa5, 0x30, 0x84, 0x26, 0x0,

    /* U+00FE "þ" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e, 0x84, 0x0,

    /* U+00FF "ÿ" */
    0x50, 0x24, 0xa5, 0x30, 0x84, 0x26, 0x0,

    /* U+0102 "Ă" */
    0x28, 0x70, 0x41, 0xc2, 0x85, 0x19, 0x3e, 0x45,
    0x4,

    /* U+0103 "ă" */
    0x30, 0x1c, 0x97, 0xa5, 0x2f,

    /* U+0104 "Ą" */
    0x10, 0xe2, 0x8a, 0x49, 0xf4, 0x61, 0x8, 0x10,

    /* U+0105 "ą" */
    0x72, 0x5e, 0x94, 0xbc, 0x43,

    /* U+0106 "Ć" */
    0x10, 0x80, 0x1c, 0xca, 0x18, 0x20, 0x87, 0x27,
    0x0,

    /* U+0107 "ć" */
    0x20, 0x1d, 0x28, 0x42, 0x4e,

    /* U+0110 "Đ" */
    0x79, 0x24, 0x79, 0x45, 0x14, 0xde,

    /* U+0111 "đ" */
    0x1c, 0x27, 0xa2, 0x8a, 0x28, 0x9e,

    /* U+0118 "Ę" */
    0xf8, 0x8f, 0x88, 0x8f, 0x21,

    /* U+0119 "ę" */
    0x74, 0xbd, 0x8, 0x38, 0x86,

    /* U+0128 "Ĩ" */
    0xe1, 0x24, 0x92, 0x48,

    /* U+0129 "ĩ" */
    0xe1, 0x24, 0x92,

    /* U+0139 "Ĺ" */
    0x48, 0x88, 0x88, 0x88, 0x8f,

    /* U+013A "ĺ" */
    0x62, 0xaa, 0xa8,

    /* U+0143 "Ń" */
    0x10, 0x88, 0x71, 0xe6, 0x99, 0x67, 0x8e, 0x10,

    /* U+0144 "ń" */
    0x20, 0xf9, 0x99, 0x99,

    /* U+0154 "Ŕ" */
    0x20, 0x3d, 0x18, 0xc7, 0xd2, 0x8c, 0x40,

    /* U+0155 "ŕ" */
    0x43, 0xc9, 0x24,

    /* U+015A "Ś" */
    0x11, 0x1d, 0x18, 0x20, 0xc1, 0x8b, 0x80,

    /* U+015B "ś" */
    0x20, 0x69, 0xc3, 0x96,

    /* U+0168 "Ũ" */
    0x70, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0169 "ũ" */
    0x70, 0x99, 0x99, 0x9f,

    /* U+0172 "Ų" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e, 0x21, 0x80,

    /* U+0173 "ų" */
    0x99, 0x99, 0x9f, 0x23,

    /* U+0179 "Ź" */
    0x11, 0x3e, 0x31, 0x10, 0x88, 0xc7, 0xc0,

    /* U+017A "ź" */
    0x20, 0xf3, 0x24, 0xcf,

    /* U+01A0 "Ơ" */
    0x4, 0xfb, 0x34, 0x28, 0x50, 0xa1, 0x26, 0x78,

    /* U+01A1 "ơ" */
    0x5, 0xe8, 0xa2, 0x8a, 0x27, 0x0,

    /* U+01AF "Ư" */
    0x8b, 0x1a, 0x24, 0x48, 0x91, 0x22, 0x38,

    /* U+01B0 "ư" */
    0x6, 0x69, 0xa4, 0x92, 0x4f, 0x0,

    /* U+01FA "Ǻ" */
    0x8, 0x43, 0x4, 0x30, 0xe2, 0x9a, 0x7d, 0x18,
    0x40,

    /* U+01FB "ǻ" */
    0x11, 0x94, 0xe4, 0xbd, 0x29, 0x78,

    /* U+01FC "Ǽ" */
    0x4, 0x2, 0x0, 0xf8, 0x30, 0x14, 0x5, 0xe2,
    0x40, 0xf0, 0x44, 0x31, 0xf0,

    /* U+01FD "ǽ" */
    0x4, 0x0, 0x1d, 0xc9, 0x27, 0xfa, 0x41, 0x20,
    0xee,

    /* U+01FE "Ǿ" */
    0x8, 0x40, 0x1f, 0xca, 0x39, 0x69, 0xa5, 0x37,
    0xa0,

    /* U+01FF "ǿ" */
    0x20, 0x5d, 0x3a, 0xd7, 0x2e, 0x0,

    /* U+0301 "́" */
    0x60,

    /* U+0303 "̃" */
    0xe0,

    /* U+0309 "̉" */
    0xe0,

    /* U+0323 "̣" */
    0x80,

    /* U+0385 "΅" */
    0x54,

    /* U+0386 "Ά" */
    0x40, 0xa0, 0xe1, 0x42, 0x88, 0x9f, 0x22, 0x82,

    /* U+0388 "Έ" */
    0x81, 0x7c, 0x81, 0x3, 0xc4, 0x8, 0x10, 0x3e,

    /* U+0389 "Ή" */
    0x80, 0xa1, 0x21, 0x21, 0x3f, 0x21, 0x21, 0x21,
    0x21,

    /* U+038A "Ί" */
    0x94, 0x92, 0x49, 0x20,

    /* U+038C "Ό" */
    0x81, 0x79, 0x92, 0x14, 0x28, 0x50, 0xb3, 0x3c,

    /* U+038E "Ύ" */
    0x81, 0x44, 0x88, 0xa1, 0x41, 0x2, 0x4, 0x8,

    /* U+038F "Ώ" */
    0x82, 0xe6, 0xd1, 0x45, 0x14, 0x4a, 0x6c,

    /* U+0390 "ΐ" */
    0x2d, 0x2, 0x22, 0x22, 0x30,

    /* U+03AC "ά" */
    0x21, 0x0, 0xe9, 0x4a, 0x52, 0x78,

    /* U+03AD "έ" */
    0x22, 0xf, 0x8e, 0x89, 0x70,

    /* U+03AE "ή" */
    0x24, 0xf, 0x99, 0x99, 0x91, 0x10,

    /* U+03AF "ί" */
    0xa2, 0xaa, 0xc0,

    /* U+03B0 "ΰ" */
    0x4b, 0x9, 0x99, 0x99, 0x60,

    /* U+03CC "ό" */
    0x21, 0x0, 0xe8, 0xc6, 0x31, 0x70,

    /* U+03CD "ύ" */
    0x44, 0x9, 0x99, 0x99, 0x60,

    /* U+03CE "ώ" */
    0x10, 0x20, 0x4, 0x18, 0x32, 0x64, 0xc9, 0x6c,

    /* U+0403 "Ѓ" */
    0x20, 0xf8, 0x88, 0x88, 0x88,

    /* U+040C "Ќ" */
    0x20, 0x8, 0xa4, 0xa3, 0x8e, 0x24, 0x9a, 0x20,

    /* U+0453 "ѓ" */
    0x29, 0x79, 0x24, 0x80,

    /* U+045C "ќ" */
    0x31, 0x11, 0x2b, 0x53, 0x94, 0x90,

    /* U+1E00 "Ḁ" */
    0x10, 0xc2, 0x8a, 0x69, 0xf4, 0x61, 0x10, 0x40,

    /* U+1E01 "ḁ" */
    0x72, 0x5e, 0x94, 0xbc, 0x84,

    /* U+1E3E "Ḿ" */
    0x8, 0x23, 0x1e, 0x3c, 0x75, 0x6a, 0xd5, 0x93,
    0x24,

    /* U+1E3F "ḿ" */
    0x8, 0x3, 0xfc, 0x99, 0x32, 0x64, 0xc9,

    /* U+1E82 "Ẃ" */
    0x4, 0x4, 0x22, 0x29, 0x25, 0x52, 0xa9, 0x54,
    0xac, 0x62, 0x11, 0x0,

    /* U+1E83 "ẃ" */
    0x8, 0x2, 0x4c, 0xd6, 0xad, 0x99, 0x12,

    /* U+1EA0 "Ạ" */
    0x10, 0x70, 0xa1, 0x44, 0x4f, 0x91, 0x41, 0x0,
    0x20,

    /* U+1EA1 "ạ" */
    0x72, 0x5e, 0x94, 0xbc, 0x4,

    /* U+1EA2 "Ả" */
    0x10, 0x10, 0x40, 0x83, 0x85, 0xa, 0x24, 0x7c,
    0x8a, 0x10,

    /* U+1EA3 "ả" */
    0x11, 0x80, 0xe4, 0xbd, 0x29, 0x78,

    /* U+1EA4 "Ấ" */
    0x2, 0x79, 0x10, 0x83, 0x85, 0xa, 0x22, 0x7c,
    0x8a, 0x8,

    /* U+1EA5 "ấ" */
    0x4, 0x13, 0x0, 0x71, 0x27, 0x92, 0x49, 0xe0,

    /* U+1EA6 "Ầ" */
    0x80, 0xf1, 0x10, 0x83, 0x85, 0xa, 0x22, 0x7c,
    0x8a, 0x8,

    /* U+1EA7 "ầ" */
    0x81, 0x80, 0xe4, 0xbd, 0x29, 0x78,

    /* U+1EA8 "Ẩ" */
    0x4, 0x78, 0xa0, 0x83, 0x85, 0xa, 0x22, 0x7c,
    0x8a, 0x8,

    /* U+1EA9 "ẩ" */
    0x8, 0x13, 0x92, 0x71, 0x27, 0x92, 0x49, 0xe0,

    /* U+1EAA "Ẫ" */
    0x38, 0x20, 0xa0, 0x83, 0x85, 0xa, 0x22, 0x7c,
    0x8a, 0x8,

    /* U+1EAB "ẫ" */
    0x20, 0x8c, 0x7, 0x25, 0xe9, 0x4b, 0xc0,

    /* U+1EAC "Ậ" */
    0x18, 0x40, 0x41, 0xc2, 0x85, 0x11, 0x3e, 0x45,
    0x4, 0x0, 0x80,

    /* U+1EAD "ậ" */
    0x30, 0x1c, 0x97, 0xa5, 0x2f, 0x1, 0x0,

    /* U+1EAE "Ắ" */
    0x8, 0x20, 0xe0, 0x83, 0x85, 0xa, 0x22, 0x7c,
    0x8a, 0x8,

    /* U+1EAF "ắ" */
    0x11, 0x80, 0xe0, 0xbd, 0x29, 0x78,

    /* U+1EB0 "Ằ" */
    0x20, 0x20, 0xe0, 0x83, 0x85, 0xa, 0x22, 0x7c,
    0x8a, 0x8,

    /* U+1EB1 "ằ" */
    0x21, 0x80, 0xe0, 0xbd, 0x29, 0x78,

    /* U+1EB2 "Ẳ" */
    0x18, 0x20, 0xa1, 0xc1, 0x7, 0xa, 0x14, 0x44,
    0xf9, 0x14, 0x10,

    /* U+1EB3 "ẳ" */
    0x11, 0xc, 0x7, 0x5, 0xe9, 0x4b, 0xc0,

    /* U+1EB4 "Ẵ" */
    0x38, 0x50, 0xe0, 0x83, 0x85, 0xa, 0x22, 0x7c,
    0x8a, 0x8,

    /* U+1EB5 "ẵ" */
    0x32, 0x8c, 0x7, 0x5, 0xe9, 0x4b, 0xc0,

    /* U+1EB6 "Ặ" */
    0x28, 0x70, 0x41, 0xc2, 0x85, 0x19, 0x3e, 0x45,
    0x4, 0x0, 0x80,

    /* U+1EB7 "ặ" */
    0x30, 0x1c, 0x97, 0xa5, 0x2f, 0x1, 0x0,

    /* U+1EB8 "Ẹ" */
    0xfc, 0x21, 0xe8, 0x42, 0x1f, 0x3, 0x0,

    /* U+1EB9 "ẹ" */
    0x74, 0xbd, 0x8, 0x38, 0x4,

    /* U+1EBA "Ẻ" */
    0x21, 0x1, 0xf8, 0x43, 0xd0, 0x84, 0x3e,

    /* U+1EBB "ẻ" */
    0x21, 0x0, 0xe9, 0x7a, 0x10, 0x70,

    /* U+1EBC "Ẽ" */
    0x70, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+1EBD "ẽ" */
    0x70, 0x1d, 0x2f, 0x42, 0xe,

    /* U+1EBE "Ế" */
    0xb, 0x25, 0xf8, 0x43, 0xd0, 0x84, 0x3e,

    /* U+1EBF "ế" */
    0x8, 0x58, 0x27, 0x4b, 0xd0, 0x83, 0x80,

    /* U+1EC0 "Ề" */
    0x81, 0xc4, 0x9f, 0x41, 0x7, 0x90, 0x41, 0x7,
    0xc0,

    /* U+1EC1 "ề" */
    0x80, 0xc0, 0x8e, 0x49, 0xe4, 0x10, 0x38,

    /* U+1EC2 "Ể" */
    0xb, 0x95, 0xf8, 0x43, 0xd0, 0x84, 0x3e,

    /* U+1EC3 "ể" */
    0x8, 0x4c, 0xa7, 0x4b, 0xd0, 0x83, 0x80,

    /* U+1EC4 "Ễ" */
    0x61, 0x15, 0xf8, 0x43, 0xd0, 0x84, 0x3e,

    /* U+1EC5 "ễ" */
    0x53, 0x8, 0xa7, 0x4b, 0xd0, 0x83, 0x80,

    /* U+1EC6 "Ệ" */
    0x22, 0xbf, 0x8, 0x7a, 0x10, 0x87, 0xc0, 0xc0,

    /* U+1EC7 "ệ" */
    0x22, 0x1d, 0x2f, 0x42, 0xe, 0x1, 0x0,

    /* U+1EC8 "Ỉ" */
    0xa2, 0xaa, 0xa8,

    /* U+1EC9 "ỉ" */
    0xa2, 0xaa, 0x80,

    /* U+1ECA "Ị" */
    0xff, 0x40,

    /* U+1ECB "ị" */
    0xbf, 0x40,

    /* U+1ECC "Ọ" */
    0x7b, 0x28, 0x61, 0x86, 0x1c, 0xde, 0x0, 0x80,

    /* U+1ECD "ọ" */
    0x74, 0x63, 0x18, 0xb8, 0x4,

    /* U+1ECE "Ỏ" */
    0x10, 0x40, 0x1e, 0xca, 0x18, 0x61, 0x87, 0x37,
    0x80,

    /* U+1ECF "ỏ" */
    0x21, 0x0, 0xe8, 0xc6, 0x31, 0x70,

    /* U+1ED0 "Ố" */
    0x4, 0xe4, 0x9e, 0xca, 0x18, 0x61, 0x87, 0x37,
    0x80,

    /* U+1ED1 "ố" */
    0x4, 0x22, 0x14, 0x72, 0x28, 0xa2, 0x89, 0xc0,

    /* U+1ED2 "Ồ" */
    0x81, 0xc4, 0x9e, 0xca, 0x18, 0x61, 0x87, 0x37,
    0x80,

    /* U+1ED3 "ồ" */
    0x40, 0x42, 0x8e, 0x45, 0x14, 0x51, 0x38,

    /* U+1ED4 "Ổ" */
    0xc, 0xe4, 0x9e, 0xca, 0x18, 0x61, 0x87, 0x37,
    0x80,

    /* U+1ED5 "ổ" */
    0x8, 0x4c, 0xa7, 0x46, 0x31, 0x8b, 0x80,

    /* U+1ED6 "Ỗ" */
    0x30, 0x7, 0x9e, 0xca, 0x18, 0x61, 0x87, 0x37,
    0x80,

    /* U+1ED7 "ỗ" */
    0x53, 0x8, 0xa7, 0x46, 0x31, 0x8b, 0x80,

    /* U+1ED8 "Ộ" */
    0x31, 0x27, 0xb2, 0x86, 0x18, 0x61, 0xcd, 0xe0,
    0x8,

    /* U+1ED9 "ộ" */
    0x22, 0x1d, 0x18, 0xc6, 0x2e, 0x1, 0x0,

    /* U+1EDA "Ớ" */
    0x10, 0x9, 0xf6, 0x68, 0x50, 0xa1, 0x42, 0x4c,
    0xf0,

    /* U+1EDB "ớ" */
    0x10, 0x87, 0xa2, 0x8a, 0x28, 0x9c,

    /* U+1EDC "Ờ" */
    0x20, 0x29, 0xf6, 0x68, 0x50, 0xa1, 0x42, 0x4c,
    0xf0,

    /* U+1EDD "ờ" */
    0x40, 0x87, 0xa2, 0x8a, 0x28, 0x9c,

    /* U+1EDE "Ở" */
    0x10, 0x20, 0x13, 0xec, 0xd0, 0xa1, 0x42, 0x84,
    0x99, 0xe0,

    /* U+1EDF "ở" */
    0x30, 0x80, 0x5e, 0x8a, 0x28, 0xa2, 0x70,

    /* U+1EE0 "Ỡ" */
    0x78, 0x9, 0xf6, 0x68, 0x50, 0xa1, 0x42, 0x4c,
    0xf0,

    /* U+1EE1 "ỡ" */
    0x70, 0x17, 0xa2, 0x8a, 0x28, 0x9c,

    /* U+1EE2 "Ợ" */
    0x4, 0xfb, 0x34, 0x28, 0x50, 0xa1, 0x26, 0x78,
    0x0, 0x40,

    /* U+1EE3 "ợ" */
    0x5, 0xe8, 0xa2, 0x8a, 0x27, 0x0, 0x20,

    /* U+1EE4 "Ụ" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e, 0x1, 0x0,

    /* U+1EE5 "ụ" */
    0x99, 0x99, 0x9f, 0x4,

    /* U+1EE6 "Ủ" */
    0x21, 0x1, 0x18, 0xc6, 0x31, 0x8c, 0x5c,

    /* U+1EE7 "ủ" */
    0x24, 0x9, 0x99, 0x99, 0xf0,

    /* U+1EE8 "Ứ" */
    0x10, 0x42, 0x2c, 0x68, 0x91, 0x22, 0x44, 0x88,
    0xe0,

    /* U+1EE9 "ứ" */
    0x20, 0x9, 0xa6, 0x92, 0x49, 0x3c,

    /* U+1EEA "Ừ" */
    0x20, 0x42, 0x2c, 0x68, 0x91, 0x22, 0x44, 0x88,
    0xe0,

    /* U+1EEB "ừ" */
    0x40, 0x9, 0xa6, 0x92, 0x49, 0x3c,

    /* U+1EEC "Ử" */
    0x30, 0x40, 0x4, 0x58, 0xd1, 0x22, 0x44, 0x89,
    0x11, 0xc0,

    /* U+1EED "ử" */
    0x21, 0x0, 0x66, 0x9a, 0x49, 0x24, 0xf0,

    /* U+1EEE "Ữ" */
    0x70, 0x2, 0x2c, 0x68, 0x91, 0x22, 0x44, 0x88,
    0xe0,

    /* U+1EEF "ữ" */
    0x70, 0x19, 0xa6, 0x92, 0x49, 0x3c,

    /* U+1EF0 "Ự" */
    0x8b, 0x1a, 0x24, 0x48, 0x91, 0x22, 0x38, 0x0,
    0x40,

    /* U+1EF1 "ự" */
    0x6, 0x69, 0xa4, 0x92, 0x4f, 0x0, 0x40,

    /* U+1EF2 "Ỳ" */
    0x41, 0x23, 0x15, 0x28, 0x84, 0x21, 0x0,

    /* U+1EF3 "ỳ" */
    0x41, 0x24, 0xa5, 0x30, 0x84, 0x26, 0x0,

    /* U+1EF4 "Ỵ" */
    0x8c, 0x54, 0xa2, 0x10, 0x84, 0x3, 0x0,

    /* U+1EF5 "ỵ" */
    0x92, 0x94, 0xc2, 0x10, 0x9a,

    /* U+1EF6 "Ỷ" */
    0x20, 0x89, 0x18, 0xa9, 0x44, 0x21, 0x8,

    /* U+1EF7 "ỷ" */
    0x62, 0x40, 0x99, 0xa6, 0x64, 0x48,

    /* U+1EF8 "Ỹ" */
    0x75, 0xa3, 0x15, 0x28, 0x84, 0x21, 0x0,

    /* U+1EF9 "ỹ" */
    0x70, 0x24, 0xa5, 0x30, 0x84, 0x26, 0x0,

    /* U+1F4D "Ὅ" */
    0xaf, 0x4c, 0x84, 0x22, 0x11, 0x8, 0x84, 0x66,
    0x1e,

    /* U+2010 "‐" */
    0xe0,

    /* U+2011 "‑" */
    0xe0,

    /* U+2013 "–" */
    0xf8,

    /* U+2014 "—" */
    0xfc,

    /* U+2018 "‘" */
    0x60,

    /* U+2019 "’" */
    0xc0,

    /* U+201C "“" */
    0x3c,

    /* U+201D "”" */
    0xf0,

    /* U+2020 "†" */
    0x21, 0x3e, 0x42, 0x10, 0x84,

    /* U+2021 "‡" */
    0x21, 0x3e, 0x42, 0x10, 0x9f, 0x21, 0x0,

    /* U+2026 "…" */
    0xa8,

    /* U+2030 "‰" */
    0xe0, 0x52, 0x2a, 0x1e, 0x1, 0xf9, 0x55, 0x2a,
    0x1f,

    /* U+2032 "′" */
    0xc0,

    /* U+2033 "″" */
    0xf0};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 40, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 40, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 41, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 51, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6, .adv_w = 99, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 100, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 28, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 31, .adv_w = 55, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 36, .adv_w = 56, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 41, .adv_w = 69, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 45, .adv_w = 91, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 31, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 51, .adv_w = 44, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 52, .adv_w = 42, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 66, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 58, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 90, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 39, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 34, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 108, .adv_w = 81, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 111, .adv_w = 88, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 113, .adv_w = 84, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 116, .adv_w = 76, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 144, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 130, .adv_w = 104, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 100, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 44, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 88, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 140, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 101, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 221, .adv_w = 99, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 142, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 42, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 275, .adv_w = 66, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 280, .adv_w = 42, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 283, .adv_w = 67, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 285, .adv_w = 72, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 286, .adv_w = 49, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 287, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 56, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 318, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 39, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 38, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 326, .adv_w = 81, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 39, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 140, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 88, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 349, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 354, .adv_w = 54, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 83, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 52, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 88, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 120, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 385, .adv_w = 79, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 54, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 393, .adv_w = 39, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 395, .adv_w = 54, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 400, .adv_w = 109, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 402, .adv_w = 40, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 39, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 404, .adv_w = 88, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 409, .adv_w = 93, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 114, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 84, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 38, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 427, .adv_w = 98, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 434, .adv_w = 67, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 435, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 72, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 444, .adv_w = 75, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 446, .adv_w = 89, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 448, .adv_w = 44, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 449, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 73, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 457, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 459, .adv_w = 86, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 59, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 466, .adv_w = 59, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 468, .adv_w = 50, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 469, .adv_w = 91, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 473, .adv_w = 78, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 42, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 478, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 479, .adv_w = 59, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 480, .adv_w = 73, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 482, .adv_w = 75, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 484, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 76, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 509, .adv_w = 104, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 104, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 104, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 104, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 104, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 150, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 582, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 44, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 44, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 44, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 44, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 114, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 682, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 689, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 724, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 135, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 84, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 777, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 792, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 40, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 799, .adv_w = 40, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 40, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 40, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 846, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 851, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 76, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 874, .adv_w = 92, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 881, .adv_w = 76, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 888, .adv_w = 104, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 897, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 902, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 910, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 915, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 84, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 929, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 91, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 946, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 951, .adv_w = 44, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 955, .adv_w = 40, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 958, .adv_w = 86, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 39, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 966, .adv_w = 114, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 974, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 985, .adv_w = 54, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 83, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1006, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1010, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1017, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1021, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 79, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 110, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1046, .adv_w = 111, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1053, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1059, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 150, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1087, .adv_w = 135, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1096, .adv_w = 110, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1105, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1111, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = 7},
    {.bitmap_index = 1112, .adv_w = 0, .box_w = 3, .box_h = 1, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 1113, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 1114, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 1115, .adv_w = 81, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1116, .adv_w = 104, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1124, .adv_w = 99, .box_w = 7, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 122, .box_w = 8, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1141, .adv_w = 51, .box_w = 3, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1145, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1153, .adv_w = 104, .box_w = 7, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1168, .adv_w = 52, .box_w = 4, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1173, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1179, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1184, .adv_w = 91, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1190, .adv_w = 52, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1193, .adv_w = 87, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1198, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1204, .adv_w = 87, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1209, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1217, .adv_w = 89, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1222, .adv_w = 100, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 67, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1234, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1240, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1248, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1253, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1262, .adv_w = 140, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1269, .adv_w = 142, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1281, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 104, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1297, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1302, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1328, .adv_w = 87, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1336, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1346, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1352, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1362, .adv_w = 87, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1370, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1380, .adv_w = 87, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1387, .adv_w = 104, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1398, .adv_w = 87, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1405, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1415, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1421, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1431, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1437, .adv_w = 104, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1448, .adv_w = 87, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1455, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1465, .adv_w = 87, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1472, .adv_w = 104, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1483, .adv_w = 87, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1490, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1497, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1502, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1509, .adv_w = 85, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1515, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1522, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1527, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1534, .adv_w = 85, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1541, .adv_w = 91, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1550, .adv_w = 85, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1557, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1564, .adv_w = 85, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1571, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1578, .adv_w = 85, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1585, .adv_w = 91, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1593, .adv_w = 85, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1600, .adv_w = 44, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1603, .adv_w = 40, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1606, .adv_w = 44, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1608, .adv_w = 39, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1610, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1618, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1623, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1632, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1638, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1647, .adv_w = 91, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1655, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1664, .adv_w = 91, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1671, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1680, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1687, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1696, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1703, .adv_w = 110, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1712, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1719, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1728, .adv_w = 91, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1734, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1743, .adv_w = 91, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1749, .adv_w = 110, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1759, .adv_w = 91, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1766, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1775, .adv_w = 91, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1781, .adv_w = 110, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1791, .adv_w = 91, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1798, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1805, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1809, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1816, .adv_w = 88, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1821, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1830, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1836, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1845, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1851, .adv_w = 111, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1861, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1868, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1877, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1883, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1892, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1899, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1906, .adv_w = 76, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1913, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1920, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1925, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1932, .adv_w = 76, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1938, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1945, .adv_w = 76, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1952, .adv_w = 116, .box_w = 9, .box_h = 8, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 1961, .adv_w = 44, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1962, .adv_w = 44, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1963, .adv_w = 105, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1964, .adv_w = 125, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1965, .adv_w = 32, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1966, .adv_w = 32, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1967, .adv_w = 57, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1968, .adv_w = 57, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1969, .adv_w = 88, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1974, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1981, .adv_w = 107, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1982, .adv_w = 153, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1991, .adv_w = 28, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1992, .adv_w = 51, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6}};

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
        0, 31, 31, 33, 27, 0, 34, 0,
        35, 0, 36, 37, 38, 36, 39, 40,
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
        0, 0, 0, 0, 31, 33, 33, 33,
        33, 33, 0, 0, 0, 0, 0, 0,
        36, 27, 36, 6, 26, 6, 26, 8,
        28, 9, 0, 10, 29, 12, 0, 15,
        0, 12, 31, 0, 34, 0, 0, 13,
        0, 13, 0, 24, 39, 0, 0, 0,
        0, 6, 26, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 6, 10, 12, 12,
        9, 23, 0, 0, 0, 0, 31, 0,
        0, 33, 0, 0, 41, 14, 38, 0,
        6, 26, 12, 31, 21, 0, 6, 26,
        6, 26, 6, 26, 6, 26, 6, 26,
        6, 26, 6, 26, 6, 26, 6, 26,
        6, 26, 6, 26, 6, 26, 10, 29,
        10, 29, 10, 29, 10, 29, 10, 29,
        10, 29, 10, 29, 10, 29, 12, 0,
        12, 0, 9, 33, 9, 33, 9, 33,
        9, 33, 9, 33, 9, 33, 9, 33,
        0, 0, 0, 0, 0, 0, 0, 33,
        0, 0, 13, 0, 13, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        23, 36, 23, 36, 23, 36, 23, 36,
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
        0, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 2, 1, 0, 2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -13,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -13,
        0, 0, 0, 0, 0, 0, 0, -17,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -9, 0, 0, 0, 0,
        0, 0, -5, 0, -1, 0, 0, -10,
        -1, -7, -5, 0, -7, 0, 0, 0,
        0, 0, 0, -1, 0, 0, -1, -1,
        -4, -3, 0, 1, 0, 0, 0, 0,
        0, 0, -1, -9, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, -2, 0, 0, -4, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, 0, 0, 0, 0,
        0, 0, -1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -8, 0, 0,
        0, -2, 0, 0, 0, -2, 0, -2,
        0, -2, -3, -2, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, -1, 0, -1, 0, 0, 0, -1,
        -2, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -18, 0, 0, 0, -13, 0, -21,
        0, 2, 0, 0, 0, 0, 0, 0,
        0, -3, -2, 0, 0, -2, -2, 0,
        0, -2, -2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, -2, 0, 0, 0, 1,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -5, 0, 0, 0, -2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, -2, -2, 0, 0, 0, -2,
        -3, -5, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 1, -5, 0,
        0, -21, -4, -14, -11, 0, -19, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, -10, -7, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -25, 0, 0, 0, -11,
        0, -16, 0, 0, 0, 0, 0, -2,
        0, -2, 0, -1, -1, 0, 0, -1,
        0, 0, 1, 0, 1, 0, 0, 0,
        0, 0, 0, -8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, -2,
        -2, 0, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -6,
        0, -1, 0, 0, -4, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -3, 0, 0, 0,
        0, -17, -18, 0, 0, -6, -2, -19,
        -1, 1, 0, 1, 1, 0, 1, 0,
        0, -9, -8, 0, -9, -8, -6, -9,
        0, -7, -6, -4, -6, -5, 0, -26,
        -17, -14, -9, -7, 0, 0, 0, 0,
        0, 2, 0, -18, -3, 0, 0, -6,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 1, -4, -3, 0, 0, -4,
        -2, 0, 0, -2, -1, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 0, -10, -5, 0,
        0, -3, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, -3, -2, 0,
        0, -2, -2, 0, 0, -1, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -4, 0, 0, 0, -2, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, -2, 0, 0, 0, -2,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -2, 2,
        -4, -16, -4, 0, 0, -7, -2, -7,
        -1, 1, -7, 1, 1, 1, 1, 0,
        1, -6, -5, -2, -3, -5, -3, -5,
        -2, -3, -2, 0, -2, -2, 1, -6,
        -4, -7, -5, -5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, -2,
        0, 0, 0, -1, -2, -2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -1, 0, 0, -1, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -5, 0, -2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -1, 0, -1, -1, 0, 0,
        0, 0, 0, 0, 0, -2, 0, -1,
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
        0, -6, 0, 1, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 1, 0, -8, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -6, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -11, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -1, 0,
        -2, -1, 0, 0, 0, 0, 0, 0,
        0, -6, 0, 1, 0, 0, 0, -10,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -3,
        -1, 1, 0, -2, 0, 0, 4, 0,
        1, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, -8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -1, -1, 1, 0, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, -10, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, -2, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -1, 0, 0, -1, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, -2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -30, -32, 0,
        0, -15, -5, 0, -4, 1, 0, 1,
        0, 0, 1, 0, 0, -17, -15, 0,
        -16, -15, -11, -17, 0, -14, -11, -9,
        -12, -10, 0, -45, -30, -25, -17, -14,
        0, 0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
    {
        .class_pair_values = kern_class_values,
        .left_class_mapping = kern_left_class_mapping,
        .right_class_mapping = kern_right_class_mapping,
        .left_class_cnt = 41,
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
const lv_font_t roboto_regular_10 = {
#else
lv_font_t roboto_regular_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 15,                              /*The maximum line height required by the font*/
    .base_line = 3,                                 /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif

    .dsc = &font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if ROBOTO_REGULAR_10*/
