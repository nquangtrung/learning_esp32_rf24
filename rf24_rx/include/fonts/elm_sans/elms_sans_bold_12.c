/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --stride 1 --align 1 --font ElmsSans-Bold.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o elms_sans_bold_12.c
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

#ifndef ELMS_SANS_BOLD_12
#define ELMS_SANS_BOLD_12 1
#endif

#if ELMS_SANS_BOLD_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x55, 0x53, 0xc0,

    /* U+0022 "\"" */
    0xb4,

    /* U+0023 "#" */
    0x13, 0x33, 0x7f, 0x26, 0x66, 0x64, 0xfe, 0xcc,
    0xc8,

    /* U+0024 "$" */
    0x10, 0xe5, 0xdc, 0x78, 0x71, 0x55, 0x38,

    /* U+0025 "%" */
    0xe2, 0x5b, 0x39, 0x1, 0x80, 0xb0, 0xec, 0x56,
    0x46, 0x20, 0x0,

    /* U+0026 "&" */
    0x7c, 0xc1, 0xfe, 0x28, 0x50, 0xb3, 0x3c,

    /* U+0027 "'" */
    0xa0,

    /* U+0028 "(" */
    0x36, 0xc8, 0x88, 0x8c, 0x63,

    /* U+0029 ")" */
    0xc2, 0x31, 0x11, 0x13, 0x2c,

    /* U+002A "*" */
    0x79, 0x80,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x18, 0x84, 0x62, 0x11, 0x88, 0x46, 0x0,

    /* U+0030 "0" */
    0x79, 0x28, 0x61, 0x86, 0x14, 0x9e,

    /* U+0031 "1" */
    0xd5, 0x55,

    /* U+0032 "2" */
    0x76, 0x42, 0x37, 0x63, 0x1f,

    /* U+0033 "3" */
    0x7c, 0x63, 0x83, 0x7, 0x1c, 0xde,

    /* U+0034 "4" */
    0x18, 0xe2, 0x9a, 0xcb, 0xf0, 0x82,

    /* U+0035 "5" */
    0x7d, 0xf, 0x93, 0x7, 0x1c, 0xde,

    /* U+0036 "6" */
    0x31, 0x86, 0x3e, 0xce, 0x1c, 0xde,

    /* U+0037 "7" */
    0xf8, 0xc4, 0x23, 0x11, 0x8c,

    /* U+0038 "8" */
    0x7a, 0x79, 0xde, 0xce, 0x1c, 0xde,

    /* U+0039 "9" */
    0x7b, 0x38, 0x73, 0x7c, 0x63, 0x8c,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003B ";" */
    0xf0, 0xf6,

    /* U+003C "<" */
    0x1f, 0xc7, 0x10,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0x8f, 0x3e, 0x80,

    /* U+003F "?" */
    0x79, 0x10, 0x46, 0x30, 0x3, 0xc,

    /* U+0040 "@" */
    0x1f, 0x86, 0x19, 0x7d, 0xe9, 0xbb, 0x35, 0x3b,
    0xb0, 0x3, 0x0, 0x38, 0x0,

    /* U+0041 "A" */
    0x1c, 0xe, 0x5, 0x6, 0xc2, 0x23, 0xf9, 0x8c,
    0x82,

    /* U+0042 "B" */
    0xfa, 0x18, 0x7e, 0x86, 0x18, 0x7e,

    /* U+0043 "C" */
    0x3c, 0x46, 0x82, 0x80, 0x80, 0x82, 0x46, 0x3c,

    /* U+0044 "D" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x81, 0x82, 0xfc,

    /* U+0045 "E" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0xfe, 0x8, 0x20,

    /* U+0047 "G" */
    0x3c, 0x42, 0x80, 0x8f, 0x81, 0x81, 0x42, 0x3c,

    /* U+0048 "H" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x4, 0x10, 0x41, 0x4, 0x1c, 0xde,

    /* U+004B "K" */
    0x8d, 0x32, 0xc7, 0xb, 0x13, 0x22, 0x46,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x3f,

    /* U+004D "M" */
    0xc0, 0xf0, 0x3a, 0x16, 0x85, 0x93, 0x67, 0x99,
    0xe6, 0x31,

    /* U+004E "N" */
    0xc3, 0x86, 0x8c, 0x99, 0x31, 0x61, 0xc3,

    /* U+004F "O" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x4,
    0x7c,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x20,

    /* U+0051 "Q" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x4,
    0x7e, 0x0, 0x80,

    /* U+0052 "R" */
    0xfa, 0x18, 0x61, 0xfa, 0xc9, 0xa1,

    /* U+0053 "S" */
    0x3c, 0x8d, 0x1, 0xe0, 0xe0, 0x50, 0x9e,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0056 "V" */
    0xc3, 0x42, 0x66, 0x66, 0x24, 0x3c, 0x18, 0x18,

    /* U+0057 "W" */
    0xc6, 0x3c, 0x63, 0x4f, 0x26, 0xd2, 0x69, 0x62,
    0x9c, 0x38, 0xc3, 0xc,

    /* U+0058 "X" */
    0x63, 0x26, 0x3c, 0x18, 0x1c, 0x34, 0x66, 0xc3,

    /* U+0059 "Y" */
    0xc6, 0x89, 0xb1, 0x41, 0x2, 0x4, 0x8,

    /* U+005A "Z" */
    0xfc, 0x31, 0x8c, 0x31, 0x8c, 0x3f,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x9c,

    /* U+005C "\\" */
    0xc2, 0x10, 0xc2, 0x10, 0xc6, 0x10, 0x80,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x3c,

    /* U+005E "^" */
    0x72, 0x96,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0xb0,

    /* U+0061 "a" */
    0x77, 0x38, 0x61, 0xcd, 0xd0,

    /* U+0062 "b" */
    0x82, 0x8, 0x2e, 0xce, 0x18, 0x73, 0xb8,

    /* U+0063 "c" */
    0x7b, 0x28, 0x20, 0xcd, 0xe0,

    /* U+0064 "d" */
    0x4, 0x10, 0x5d, 0xce, 0x18, 0x73, 0x74,

    /* U+0065 "e" */
    0x7b, 0x1f, 0xe0, 0xc9, 0xe0,

    /* U+0066 "f" */
    0x3a, 0x11, 0xe4, 0x21, 0x8, 0x40,

    /* U+0067 "g" */
    0x77, 0x38, 0x61, 0xcd, 0xd0, 0x53, 0x38,

    /* U+0068 "h" */
    0x82, 0x8, 0x3e, 0xce, 0x18, 0x61, 0x84,

    /* U+0069 "i" */
    0xff,

    /* U+006A "j" */
    0x24, 0x92, 0x49, 0x27, 0x0,

    /* U+006B "k" */
    0x84, 0x21, 0x3b, 0x72, 0xd2, 0x98,

    /* U+006C "l" */
    0xff, 0x80,

    /* U+006D "m" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x44,

    /* U+006E "n" */
    0xfb, 0x38, 0x61, 0x86, 0x10,

    /* U+006F "o" */
    0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+0070 "p" */
    0xbb, 0x38, 0x61, 0xce, 0xe8, 0x20, 0x80,

    /* U+0071 "q" */
    0x77, 0x38, 0x61, 0xcd, 0xd0, 0x41, 0x4,

    /* U+0072 "r" */
    0xf4, 0xe1, 0x8, 0x40,

    /* U+0073 "s" */
    0x79, 0x27, 0x6, 0xc9, 0xe0,

    /* U+0074 "t" */
    0x42, 0x3c, 0x84, 0x21, 0x7,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0xcd, 0xf0,

    /* U+0076 "v" */
    0xc6, 0x89, 0xb3, 0x43, 0x87, 0x0,

    /* U+0077 "w" */
    0xcc, 0x93, 0x25, 0xd9, 0xdc, 0x33, 0xc, 0xc0,

    /* U+0078 "x" */
    0x4d, 0xa3, 0x8e, 0x6b, 0x30,

    /* U+0079 "y" */
    0xc6, 0x89, 0xb1, 0x63, 0x83, 0x4, 0x18, 0x20,

    /* U+007A "z" */
    0xf8, 0xcc, 0xcc, 0x7c,

    /* U+007B "{" */
    0x3a, 0x10, 0x88, 0x21, 0x8, 0x38,

    /* U+007C "|" */
    0xff, 0xc0,

    /* U+007D "}" */
    0xc1, 0x8, 0x41, 0x90, 0x84, 0xc0,

    /* U+007E "~" */
    0xed, 0xc0,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xf1, 0x55, 0x40,

    /* U+00A2 "¢" */
    0x11, 0xed, 0x64, 0x93, 0x57, 0x84,

    /* U+00A3 "£" */
    0x39, 0x34, 0x3c, 0x41, 0x4, 0x3f,

    /* U+00A4 "¤" */
    0x0, 0xf9, 0x12, 0x24, 0x4f, 0x80, 0x0,

    /* U+00A5 "¥" */
    0xc6, 0x89, 0xb1, 0xc7, 0xc2, 0x1f, 0x8,

    /* U+00A6 "¦" */
    0xf7, 0xc0,

    /* U+00A7 "§" */
    0x76, 0x9c, 0xa7, 0xb, 0x4e,

    /* U+00A8 "¨" */
    0x90,

    /* U+00A9 "©" */
    0x3c, 0x42, 0x9d, 0xa1, 0xa1, 0x9d, 0x42, 0x3c,

    /* U+00AA "ª" */
    0xf7, 0x80,

    /* U+00AB "«" */
    0x6b, 0x4d, 0x1a,

    /* U+00AC "¬" */
    0xf1, 0x10,

    /* U+00AE "®" */
    0xf7, 0x72, 0xe0,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0x6e, 0xe6,

    /* U+00B1 "±" */
    0x21, 0x3e, 0x42, 0x3, 0xe0,

    /* U+00B2 "²" */
    0xe7, 0x70,

    /* U+00B3 "³" */
    0xd9, 0xe0,

    /* U+00B4 "´" */
    0xe0,

    /* U+00B5 "µ" */
    0x85, 0xa, 0x14, 0x2c, 0xdf, 0xe0, 0x40, 0x80,

    /* U+00B6 "¶" */
    0x7b, 0xf7, 0xef, 0xd7, 0xa1, 0x42, 0x85, 0xa,

    /* U+00B7 "·" */
    0xf0,

    /* U+00B8 "¸" */
    0x65, 0x80,

    /* U+00B9 "¹" */
    0xd5,

    /* U+00BA "º" */
    0xf7, 0x80,

    /* U+00BB "»" */
    0xd1, 0xa6, 0xb4,

    /* U+00BC "¼" */
    0xc2, 0x11, 0x4, 0x41, 0x30, 0x8, 0x46, 0x31,
    0x1c, 0x47, 0x20, 0x48, 0x0,

    /* U+00BD "½" */
    0xc2, 0x11, 0x4, 0x41, 0x30, 0x48, 0x6, 0x71,
    0x4, 0x46, 0x21, 0xc8, 0x0,

    /* U+00BE "¾" */
    0xe1, 0xc, 0x40, 0x88, 0x73, 0x0, 0x46, 0x18,
    0xc2, 0x38, 0xc7, 0x10, 0x22, 0x0,

    /* U+00BF "¿" */
    0x30, 0xc0, 0xc, 0x63, 0x8, 0x22, 0x70,

    /* U+00C0 "À" */
    0x10, 0x4, 0x0, 0x3, 0x81, 0xc0, 0xa0, 0xd8,
    0x44, 0x7f, 0x31, 0x90, 0x40,

    /* U+00C1 "Á" */
    0x4, 0x4, 0x0, 0x3, 0x81, 0xc0, 0xa0, 0xd8,
    0x44, 0x7f, 0x31, 0x90, 0x40,

    /* U+00C2 "Â" */
    0x8, 0xa, 0x0, 0x3, 0x81, 0xc0, 0xa0, 0xd8,
    0x44, 0x7f, 0x31, 0x90, 0x40,

    /* U+00C3 "Ã" */
    0x3a, 0x17, 0x0, 0x3, 0x81, 0xc0, 0xa0, 0xd8,
    0x44, 0x7f, 0x31, 0x90, 0x40,

    /* U+00C4 "Ä" */
    0x14, 0xa, 0x0, 0x3, 0x1, 0xc0, 0xa0, 0xd8,
    0x44, 0x7f, 0x31, 0x90, 0x40,

    /* U+00C5 "Å" */
    0x1c, 0xe, 0x0, 0x3, 0x81, 0xc0, 0xa0, 0xd8,
    0x44, 0x7f, 0x31, 0x90, 0x40,

    /* U+00C6 "Æ" */
    0x1f, 0x8c, 0xf, 0x5, 0xf2, 0xc3, 0xe1, 0x11,
    0x8f,

    /* U+00C7 "Ç" */
    0x3e, 0x21, 0xa0, 0x10, 0x8, 0x4, 0x9, 0xc,
    0x7c, 0x1c, 0x2, 0x7, 0x0,

    /* U+00C8 "È" */
    0x60, 0x80, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+00C9 "É" */
    0x10, 0xc0, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+00CA "Ê" */
    0x21, 0xc0, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+00CB "Ë" */
    0x49, 0x20, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+00CC "Ì" */
    0x91, 0x55, 0x54,

    /* U+00CD "Í" */
    0x62, 0xaa, 0xa8,

    /* U+00CE "Î" */
    0x54, 0x24, 0x92, 0x49, 0x0,

    /* U+00CF "Ï" */
    0xb4, 0x24, 0x92, 0x49, 0x0,

    /* U+00D0 "Ð" */
    0x7e, 0x20, 0x90, 0x3c, 0x14, 0xa, 0x5, 0x4,
    0xfc,

    /* U+00D1 "Ñ" */
    0x34, 0xd8, 0x6, 0x1e, 0x34, 0x64, 0xcd, 0x8b,
    0xe, 0x18,

    /* U+00D2 "Ò" */
    0x10, 0xc, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+00D3 "Ó" */
    0x4, 0x6, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+00D4 "Ô" */
    0x8, 0xa, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+00D5 "Õ" */
    0x3a, 0x17, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+00D6 "Ö" */
    0x14, 0xa, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+00D7 "×" */
    0x59, 0x9d, 0xb0,

    /* U+00D8 "Ø" */
    0x3f, 0xa1, 0xa1, 0xb1, 0x99, 0x8d, 0x85, 0x85,
    0xfc,

    /* U+00D9 "Ù" */
    0x30, 0x10, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+00DA "Ú" */
    0xc, 0x8, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+00DB "Û" */
    0x18, 0x3c, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+00DC "Ü" */
    0x24, 0x24, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+00DD "Ý" */
    0x8, 0x20, 0x6, 0x34, 0x4d, 0x8a, 0x8, 0x10,
    0x20, 0x40,

    /* U+00DE "Þ" */
    0x83, 0xe8, 0x61, 0x87, 0xe8, 0x20,

    /* U+00DF "ß" */
    0x72, 0x28, 0xae, 0x8e, 0x18, 0xee,

    /* U+00E0 "à" */
    0x60, 0xc7, 0x73, 0x86, 0x1c, 0xdd,

    /* U+00E1 "á" */
    0x18, 0x47, 0x73, 0x86, 0x1c, 0xdd,

    /* U+00E2 "â" */
    0x31, 0x27, 0x73, 0x86, 0x1c, 0xdd,

    /* U+00E3 "ã" */
    0x69, 0x67, 0x73, 0x86, 0x1c, 0xdd,

    /* U+00E4 "ä" */
    0x28, 0x7, 0x7b, 0xc7, 0x1e, 0xdd,

    /* U+00E5 "å" */
    0x30, 0xc7, 0x73, 0x86, 0x1c, 0xdd,

    /* U+00E6 "æ" */
    0x7f, 0x83, 0x27, 0xff, 0x30, 0xcc, 0x9f, 0xe0,

    /* U+00E7 "ç" */
    0x7a, 0x28, 0x33, 0xf9, 0xe3, 0x6, 0x30,

    /* U+00E8 "è" */
    0x60, 0x87, 0xb1, 0xfe, 0xc, 0x9e,

    /* U+00E9 "é" */
    0x18, 0x47, 0xb1, 0xfe, 0xc, 0x9e,

    /* U+00EA "ê" */
    0x31, 0x27, 0xb1, 0xfe, 0xc, 0x9e,

    /* U+00EB "ë" */
    0x48, 0x7, 0xb1, 0xfe, 0xc, 0x9e,

    /* U+00EC "ì" */
    0x95, 0x55,

    /* U+00ED "í" */
    0x6a, 0xaa,

    /* U+00EE "î" */
    0x55, 0x24, 0x92,

    /* U+00EF "ï" */
    0xa1, 0x24, 0x92,

    /* U+00F0 "ð" */
    0x39, 0xe7, 0xb3, 0x86, 0x1c, 0xde,

    /* U+00F1 "ñ" */
    0x6a, 0xef, 0xb3, 0x86, 0x18, 0x61,

    /* U+00F2 "ò" */
    0x60, 0x87, 0xb3, 0x86, 0x1c, 0xde,

    /* U+00F3 "ó" */
    0x18, 0x47, 0xb3, 0x86, 0x1c, 0xde,

    /* U+00F4 "ô" */
    0x31, 0x27, 0xb3, 0x86, 0x1c, 0xde,

    /* U+00F5 "õ" */
    0x78, 0x7, 0xb3, 0x86, 0x1c, 0xde,

    /* U+00F6 "ö" */
    0x48, 0x7, 0xb3, 0x86, 0x1c, 0xde,

    /* U+00F7 "÷" */
    0x20, 0x3e, 0x2, 0x0,

    /* U+00F8 "ø" */
    0x1, 0xfc, 0xe5, 0xa7, 0x3f, 0xa0,

    /* U+00F9 "ù" */
    0x60, 0x88, 0x61, 0x86, 0x1c, 0xdf,

    /* U+00FA "ú" */
    0x18, 0x48, 0x61, 0x86, 0x1c, 0xdf,

    /* U+00FB "û" */
    0x31, 0x28, 0x61, 0x86, 0x1c, 0xdf,

    /* U+00FC "ü" */
    0x48, 0x8, 0x61, 0x86, 0x1c, 0xdf,

    /* U+00FD "ý" */
    0x8, 0x23, 0x1a, 0x26, 0xc5, 0x8e, 0xc, 0x10,
    0x60, 0x80,

    /* U+00FE "þ" */
    0x82, 0x8, 0x2e, 0xce, 0x18, 0x73, 0xba, 0x8,
    0x20,

    /* U+00FF "ÿ" */
    0x48, 0x8, 0x73, 0x69, 0xe7, 0xc, 0x20, 0x84,
    0x0,

    /* U+0102 "Ă" */
    0x32, 0x1b, 0x7, 0x0, 0x1, 0xc0, 0xe0, 0x50,
    0x6c, 0x22, 0x3f, 0x98, 0xc8, 0x20,

    /* U+0103 "ă" */
    0x48, 0xe0, 0x1d, 0xce, 0x18, 0x73, 0x74,

    /* U+0104 "Ą" */
    0x1c, 0xe, 0x5, 0x6, 0xc2, 0x23, 0xf9, 0x8c,
    0x82, 0x1, 0x1, 0x80, 0x60,

    /* U+0105 "ą" */
    0x75, 0x9a, 0x14, 0x2c, 0xce, 0x82, 0x4, 0x4,

    /* U+0106 "Ć" */
    0x8, 0x18, 0x0, 0x3c, 0x46, 0x82, 0x80, 0x80,
    0x82, 0x46, 0x3c,

    /* U+0107 "ć" */
    0x10, 0x87, 0xb2, 0x82, 0xc, 0xde,

    /* U+0110 "Đ" */
    0x7e, 0x20, 0x90, 0x3c, 0x14, 0xa, 0x5, 0x4,
    0xfc,

    /* U+0111 "đ" */
    0x4, 0x8, 0x3b, 0xac, 0xd0, 0xa1, 0x66, 0x74,

    /* U+0118 "Ę" */
    0xfd, 0x2, 0x7, 0xe8, 0x10, 0x20, 0x7e, 0x8,
    0x30, 0x30,

    /* U+0119 "ę" */
    0x7b, 0x3f, 0xf0, 0xc9, 0xe1, 0xc, 0x18,

    /* U+0128 "Ĩ" */
    0xea, 0x4, 0x44, 0x44, 0x44, 0x40,

    /* U+0129 "ĩ" */
    0xea, 0x44, 0x44, 0x44,

    /* U+0139 "Ĺ" */
    0x42, 0x0, 0x20, 0x82, 0x8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+013A "ĺ" */
    0x6a, 0xaa, 0xa8,

    /* U+0143 "Ń" */
    0x8, 0x30, 0x6, 0x1c, 0x34, 0x64, 0xc9, 0x8b,
    0xe, 0x18,

    /* U+0144 "ń" */
    0x18, 0x4f, 0xb3, 0x86, 0x18, 0x61,

    /* U+0154 "Ŕ" */
    0x30, 0x80, 0x3e, 0x86, 0x18, 0x7e, 0xb2, 0x68,
    0x40,

    /* U+0155 "ŕ" */
    0x23, 0x3d, 0x38, 0x42, 0x10,

    /* U+015A "Ś" */
    0xc, 0x30, 0x1, 0xe4, 0x68, 0xf, 0x7, 0x2,
    0x84, 0xf0,

    /* U+015B "ś" */
    0x10, 0x47, 0x92, 0x70, 0x6c, 0x9e,

    /* U+0168 "Ũ" */
    0x32, 0x6c, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0xc1, 0x42, 0x3c,

    /* U+0169 "ũ" */
    0x66, 0xe8, 0x61, 0x86, 0x1c, 0xdf,

    /* U+0172 "Ų" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,
    0x8, 0x18, 0xe,

    /* U+0173 "ų" */
    0x85, 0xa, 0x14, 0x2c, 0xcf, 0x82, 0x4, 0x6,

    /* U+0179 "Ź" */
    0x18, 0x40, 0x3f, 0xc, 0x63, 0xc, 0x63, 0xf,
    0xc0,

    /* U+017A "ź" */
    0x31, 0x3e, 0x33, 0x33, 0x1f,

    /* U+01A0 "Ơ" */
    0x1, 0x1f, 0x90, 0x50, 0x18, 0xc, 0x6, 0x2,
    0x82, 0x3e, 0x0,

    /* U+01A1 "ơ" */
    0x2, 0xff, 0x34, 0x28, 0x59, 0x9e, 0x0,

    /* U+01AF "Ư" */
    0x0, 0x80, 0x60, 0x70, 0x28, 0x14, 0xa, 0x5,
    0x2, 0x42, 0x1e, 0x0,

    /* U+01B0 "ư" */
    0x3, 0xe, 0x14, 0x28, 0x59, 0x9f, 0x0,

    /* U+01D7 "Ǘ" */
    0xc, 0x18, 0x0, 0x24, 0x24, 0x0, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+01D8 "ǘ" */
    0x18, 0xc0, 0x12, 0x2, 0x18, 0x61, 0x87, 0x37,
    0xc0,

    /* U+01EA "Ǫ" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x4,
    0x7c, 0xc, 0x4, 0x3, 0x80,

    /* U+01EB "ǫ" */
    0x7a, 0x38, 0x73, 0xfd, 0xe3, 0xc, 0x18,

    /* U+01F4 "Ǵ" */
    0xc, 0x8, 0x0, 0x3c, 0x42, 0x80, 0x8f, 0x81,
    0x81, 0x42, 0x3c,

    /* U+01F5 "ǵ" */
    0x18, 0x47, 0x73, 0x86, 0x1c, 0xdd, 0x5, 0x33,
    0x80,

    /* U+01FE "Ǿ" */
    0x4, 0x6, 0x0, 0x7, 0xf4, 0x34, 0x36, 0x33,
    0x31, 0xb0, 0xb0, 0xbf, 0x80,

    /* U+01FF "ǿ" */
    0x18, 0x47, 0xf3, 0x96, 0x9c, 0xfe, 0x80,

    /* U+0228 "Ȩ" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f, 0x30, 0x63,
    0x0,

    /* U+0229 "ȩ" */
    0x7a, 0x1f, 0xf0, 0xfd, 0xe3, 0x2, 0x30,

    /* U+022C "Ȭ" */
    0x3c, 0x0, 0xd, 0x85, 0x80, 0x1, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+022D "ȭ" */
    0x78, 0x7, 0x80, 0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+0301 "́" */
    0xe0,

    /* U+0302 "̂" */
    0x6a,

    /* U+0303 "̃" */
    0xd5, 0x80,

    /* U+0306 "̆" */
    0x93, 0x80,

    /* U+0309 "̉" */
    0xd4,

    /* U+031B "̛" */
    0x5c,

    /* U+0323 "̣" */
    0xf0,

    /* U+1E00 "Ḁ" */
    0x1c, 0xe, 0x5, 0x6, 0xc2, 0x23, 0xf9, 0x8c,
    0x82, 0x0, 0xe, 0x7, 0x0,

    /* U+1E01 "ḁ" */
    0x77, 0x38, 0x61, 0xcd, 0xd0, 0xc, 0x30,

    /* U+1E04 "Ḅ" */
    0xfa, 0x18, 0x7e, 0x86, 0x18, 0x7e, 0x0, 0xc3,
    0x0,

    /* U+1E05 "ḅ" */
    0x82, 0x8, 0x2e, 0xce, 0x18, 0x73, 0xb8, 0x3,
    0xc,

    /* U+1E08 "Ḉ" */
    0xc, 0x4, 0x0, 0x7, 0xc4, 0x34, 0x2, 0x1,
    0x0, 0x81, 0x21, 0x8f, 0x83, 0x80, 0x40, 0xe0,

    /* U+1E09 "ḉ" */
    0x10, 0xc7, 0xa2, 0x83, 0x3f, 0x9e, 0x30, 0x63,
    0x0,

    /* U+1E0C "Ḍ" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x81, 0x82, 0xfc,
    0x0, 0x30, 0x30,

    /* U+1E0D "ḍ" */
    0x4, 0x10, 0x5d, 0xce, 0x18, 0x73, 0x74, 0x3,
    0xc,

    /* U+1E16 "Ḗ" */
    0x10, 0xc0, 0x1e, 0x3, 0xf8, 0x20, 0xfe, 0x8,
    0x20, 0xfc,

    /* U+1E17 "ḗ" */
    0x18, 0x40, 0x1e, 0x1, 0xec, 0x7f, 0x83, 0x27,
    0x80,

    /* U+1E18 "Ḙ" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f, 0x1, 0xc5,
    0x80,

    /* U+1E19 "ḙ" */
    0x7b, 0x1f, 0xe0, 0xc9, 0xe3, 0x1e, 0x48,

    /* U+1E1A "Ḛ" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f, 0x1, 0xab,
    0x80,

    /* U+1E1B "ḛ" */
    0x7b, 0x28, 0x7f, 0xc1, 0xe0, 0x1a, 0x98,

    /* U+1E24 "Ḥ" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1, 0x0,
    0x30, 0x60,

    /* U+1E25 "ḥ" */
    0x82, 0x8, 0x3e, 0xce, 0x18, 0x61, 0x84, 0x3,
    0xc,

    /* U+1E2E "Ḯ" */
    0x28, 0x5a, 0x12, 0x49, 0x24, 0x80,

    /* U+1E2F "ḯ" */
    0x28, 0x50, 0x92, 0x49, 0x0,

    /* U+1E30 "Ḱ" */
    0x10, 0x40, 0x4, 0x69, 0x96, 0x38, 0x58, 0x99,
    0x12, 0x30,

    /* U+1E31 "ḱ" */
    0x44, 0x21, 0x8, 0x4e, 0xdc, 0xb4, 0xa6,

    /* U+1E32 "Ḳ" */
    0x8d, 0x32, 0xc7, 0x8b, 0x93, 0x23, 0x43, 0x0,
    0x60, 0xc0,

    /* U+1E33 "ḳ" */
    0x81, 0x2, 0x4, 0x69, 0x9e, 0x26, 0x4e, 0x8c,
    0x0, 0xc1, 0x80,

    /* U+1E36 "Ḷ" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x3f, 0x1, 0x86,
    0x0,

    /* U+1E37 "ḷ" */
    0xff, 0xb0,

    /* U+1E38 "Ḹ" */
    0xf0, 0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40,
    0xfc, 0x1, 0x83, 0x0,

    /* U+1E39 "ḹ" */
    0xf0, 0x44, 0x44, 0x44, 0x44, 0x40, 0x44,

    /* U+1E3E "Ḿ" */
    0x6, 0x1, 0x0, 0x3, 0x3, 0xc0, 0xe8, 0x5a,
    0x16, 0x4d, 0x9e, 0x67, 0x98, 0xc4,

    /* U+1E3F "ḿ" */
    0xc, 0x4, 0x3d, 0xd1, 0x18, 0x8c, 0x46, 0x23,
    0x11,

    /* U+1E42 "Ṃ" */
    0xc0, 0xf0, 0x3a, 0x16, 0xc5, 0x93, 0x67, 0x98,
    0xe6, 0x31, 0x0, 0x3, 0x0, 0xc0,

    /* U+1E43 "ṃ" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x44, 0x0,
    0x18, 0xc, 0x0,

    /* U+1E46 "Ṇ" */
    0xc3, 0x86, 0x8c, 0x99, 0xb1, 0x61, 0xc3, 0x0,
    0x30, 0x60,

    /* U+1E47 "ṇ" */
    0xfb, 0x38, 0x61, 0x86, 0x10, 0xc, 0x30,

    /* U+1E4C "Ṍ" */
    0x4, 0x6, 0x0, 0x7, 0x42, 0xe0, 0x0, 0xf8,
    0x82, 0x80, 0xc0, 0x60, 0x30, 0x14, 0x11, 0xf0,

    /* U+1E4D "ṍ" */
    0x18, 0x40, 0x1e, 0x1, 0xec, 0xe1, 0x87, 0x37,
    0x80,

    /* U+1E4E "Ṏ" */
    0x16, 0xb, 0x0, 0x3, 0x43, 0x60, 0x0, 0xf8,
    0x82, 0x80, 0xc0, 0x60, 0x30, 0x14, 0x11, 0xf0,

    /* U+1E4F "ṏ" */
    0x59, 0x60, 0x1e, 0x1, 0xec, 0xe1, 0x87, 0x37,
    0x80,

    /* U+1E52 "Ṓ" */
    0xc, 0x4, 0xf, 0x0, 0x0, 0x1, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1E53 "ṓ" */
    0x18, 0x40, 0x1e, 0x1, 0xec, 0xe1, 0x87, 0x37,
    0x80,

    /* U+1E54 "Ṕ" */
    0x30, 0x80, 0x3e, 0x86, 0x18, 0x7e, 0x82, 0x8,
    0x0,

    /* U+1E55 "ṕ" */
    0x18, 0xcb, 0xb3, 0x86, 0x1c, 0xee, 0x82, 0x8,
    0x0,

    /* U+1E5A "Ṛ" */
    0xfa, 0x18, 0x61, 0xfa, 0x48, 0xa1, 0x0, 0xc3,
    0x0,

    /* U+1E5B "ṛ" */
    0xf4, 0xe1, 0x8, 0x40, 0xc, 0x60,

    /* U+1E5C "Ṝ" */
    0x78, 0xf, 0xa1, 0x86, 0x1f, 0xa4, 0x8a, 0x10,
    0xc, 0x30,

    /* U+1E5D "ṝ" */
    0xf0, 0x3d, 0x38, 0x42, 0x10, 0x3, 0x18,

    /* U+1E62 "Ṣ" */
    0x3c, 0x8d, 0x1, 0xe0, 0xe0, 0x50, 0x9e, 0x0,
    0x30, 0x60,

    /* U+1E63 "ṣ" */
    0x7b, 0x27, 0x86, 0xc9, 0xe0, 0xc, 0x30,

    /* U+1E64 "Ṥ" */
    0xc, 0x18, 0x0, 0x61, 0x80, 0xf, 0x23, 0x40,
    0x78, 0x38, 0x14, 0x27, 0x80,

    /* U+1E65 "ṥ" */
    0x18, 0x60, 0x0, 0x18, 0x47, 0x92, 0x78, 0x64,
    0x9e,

    /* U+1E68 "Ṩ" */
    0x18, 0x30, 0x1, 0xe4, 0x68, 0xf, 0x7, 0x2,
    0x84, 0xf0, 0x1, 0x83, 0x0,

    /* U+1E69 "ṩ" */
    0x30, 0xc7, 0xb2, 0x78, 0x6c, 0x9e, 0x0, 0xc3,
    0x0,

    /* U+1E6C "Ṭ" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x0,
    0x20, 0x40,

    /* U+1E6D "ṭ" */
    0x42, 0x3c, 0x84, 0x21, 0x7, 0x1, 0x8c,

    /* U+1E78 "Ṹ" */
    0xc, 0x8, 0x0, 0x32, 0x6c, 0x0, 0x81, 0x81,
    0x81, 0x81, 0x81, 0xc1, 0x42, 0x3c,

    /* U+1E79 "ṹ" */
    0x18, 0x40, 0x19, 0xba, 0x18, 0x61, 0x87, 0x37,
    0xc0,

    /* U+1E7C "Ṽ" */
    0x34, 0x2c, 0x0, 0x43, 0x63, 0x62, 0x26, 0x34,
    0x14, 0x1c, 0x18,

    /* U+1E7D "ṽ" */
    0x68, 0xb3, 0x12, 0x66, 0xcd, 0xe, 0x18,

    /* U+1E7E "Ṿ" */
    0xc3, 0x43, 0x62, 0x66, 0x24, 0x3c, 0x1c, 0x18,
    0x0, 0x18, 0x18,

    /* U+1E7F "ṿ" */
    0x85, 0x99, 0x33, 0xc7, 0x86, 0x0, 0x18, 0x30,

    /* U+1E82 "Ẃ" */
    0x3, 0x0, 0x20, 0x0, 0xc, 0x63, 0xc6, 0x34,
    0xf2, 0x6d, 0x26, 0x96, 0x29, 0xc3, 0x8c, 0x30,
    0xc0,

    /* U+1E83 "ẃ" */
    0x4, 0x1, 0xc, 0xc9, 0x32, 0x5d, 0x9d, 0xc3,
    0x30, 0xcc,

    /* U+1E88 "Ẉ" */
    0xc6, 0x3c, 0x63, 0x4f, 0x24, 0xf2, 0x69, 0x63,
    0x9c, 0x38, 0xc3, 0xc, 0x0, 0x0, 0x60, 0x6,
    0x0,

    /* U+1E89 "ẉ" */
    0xcc, 0xd3, 0x25, 0xe9, 0xfe, 0x33, 0xc, 0xc0,
    0x0, 0x30, 0xc, 0x0,

    /* U+1E92 "Ẓ" */
    0xfc, 0x31, 0x8c, 0x31, 0x8c, 0x3f, 0x0, 0xc3,
    0x0,

    /* U+1E93 "ẓ" */
    0xf9, 0x8c, 0xcc, 0x7c, 0xc, 0x60,

    /* U+1EA0 "Ạ" */
    0x18, 0xe, 0xf, 0x6, 0xc2, 0x63, 0xf9, 0x8c,
    0x82, 0x0, 0xc, 0x6, 0x0,

    /* U+1EA1 "ạ" */
    0x77, 0x38, 0x61, 0xcd, 0xd0, 0xc, 0x30,

    /* U+1EA2 "Ả" */
    0x1c, 0x6, 0x2, 0x0, 0x1, 0xc0, 0xe0, 0x50,
    0x6c, 0x22, 0x3f, 0x98, 0xc8, 0x20,

    /* U+1EA3 "ả" */
    0x38, 0x47, 0x73, 0x86, 0x1c, 0xdd,

    /* U+1EA4 "Ấ" */
    0x3, 0x1, 0x3, 0x2, 0x80, 0x0, 0xe0, 0x70,
    0x28, 0x36, 0x11, 0x1f, 0xcc, 0x64, 0x10,

    /* U+1EA5 "ấ" */
    0x4, 0x13, 0x90, 0x77, 0x38, 0x61, 0xcd, 0xd0,

    /* U+1EA6 "Ầ" */
    0x4, 0x1, 0x3, 0x2, 0x80, 0x0, 0xe0, 0x70,
    0x28, 0x36, 0x11, 0x1f, 0xcc, 0x64, 0x10,

    /* U+1EA7 "ầ" */
    0x8, 0x23, 0x90, 0x77, 0x38, 0x61, 0xcd, 0xd0,

    /* U+1EA8 "Ẩ" */
    0x6, 0x1, 0x2, 0x82, 0x80, 0x0, 0xe0, 0x70,
    0x28, 0x36, 0x11, 0x1f, 0xcc, 0x64, 0x10,

    /* U+1EA9 "ẩ" */
    0xc, 0x13, 0x12, 0x77, 0x38, 0x61, 0xcd, 0xd0,

    /* U+1EAA "Ẫ" */
    0x3a, 0x17, 0x2, 0x3, 0x80, 0x0, 0xe0, 0x70,
    0x28, 0x36, 0x11, 0x1f, 0xcc, 0x64, 0x10,

    /* U+1EAB "ẫ" */
    0x69, 0x60, 0xc, 0x49, 0xdc, 0xe1, 0x87, 0x37,
    0x40,

    /* U+1EAC "Ậ" */
    0x18, 0xe, 0x0, 0x3, 0x1, 0xc1, 0xe0, 0xd8,
    0x4c, 0x7f, 0x31, 0x90, 0x40, 0x1, 0x80, 0xc0,

    /* U+1EAD "ậ" */
    0x31, 0x27, 0x73, 0x86, 0x1c, 0xdd, 0x0, 0xc3,
    0x0,

    /* U+1EAE "Ắ" */
    0x4, 0x4, 0x0, 0x6, 0xc1, 0xc0, 0x0, 0x70,
    0x38, 0x14, 0x1b, 0x8, 0x8f, 0xe6, 0x32, 0x8,

    /* U+1EAF "ắ" */
    0x18, 0x44, 0x8e, 0x1, 0xdc, 0xe1, 0x87, 0x37,
    0x40,

    /* U+1EB0 "Ằ" */
    0x10, 0x4, 0x0, 0x6, 0xc1, 0xc0, 0x0, 0x70,
    0x38, 0x14, 0x1b, 0x8, 0x8f, 0xe6, 0x32, 0x8,

    /* U+1EB1 "ằ" */
    0x60, 0xc4, 0x8e, 0x1, 0xdc, 0xe1, 0x87, 0x37,
    0x40,

    /* U+1EB2 "Ẳ" */
    0x1c, 0x6, 0x0, 0x6, 0xc1, 0xc0, 0x0, 0x70,
    0x38, 0x14, 0x1b, 0x8, 0x8f, 0xe6, 0x32, 0x8,

    /* U+1EB3 "ẳ" */
    0x38, 0x44, 0x8e, 0x1, 0xdc, 0xe1, 0x87, 0x37,
    0x40,

    /* U+1EB4 "Ẵ" */
    0x3e, 0x1b, 0x5, 0x3, 0x80, 0x0, 0xe0, 0x70,
    0x28, 0x36, 0x11, 0x1f, 0xcc, 0x64, 0x10,

    /* U+1EB5 "ẵ" */
    0x69, 0x64, 0x8e, 0x1, 0xdc, 0xe1, 0x87, 0x37,
    0x40,

    /* U+1EB6 "Ặ" */
    0x26, 0x12, 0x7, 0x0, 0x1, 0x80, 0xe0, 0xf0,
    0x6c, 0x26, 0x3f, 0x98, 0xc8, 0x20, 0x0, 0xc0,
    0x60,

    /* U+1EB7 "ặ" */
    0x48, 0xe0, 0x1d, 0xce, 0x18, 0x73, 0x74, 0x3,
    0xc,

    /* U+1EB8 "Ẹ" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f, 0x0, 0xc3,
    0x0,

    /* U+1EB9 "ẹ" */
    0x7b, 0x1f, 0xe0, 0xc9, 0xe0, 0xc, 0x30,

    /* U+1EBA "Ẻ" */
    0x70, 0x42, 0x0, 0xfe, 0x8, 0x3f, 0x82, 0x8,
    0x3f,

    /* U+1EBB "ẻ" */
    0x70, 0xc7, 0xb1, 0xfe, 0xc, 0x9e,

    /* U+1EBC "Ẽ" */
    0x6a, 0xe0, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+1EBD "ẽ" */
    0x78, 0x7, 0xb1, 0xfe, 0xc, 0x9e,

    /* U+1EBE "Ế" */
    0x4, 0x33, 0x16, 0x3, 0xf8, 0x20, 0xfe, 0x8,
    0x20, 0xfc,

    /* U+1EBF "ế" */
    0x4, 0x13, 0x12, 0x7b, 0x1f, 0xe0, 0xc9, 0xe0,

    /* U+1EC0 "Ề" */
    0x18, 0x23, 0x16, 0x3, 0xf8, 0x20, 0xfe, 0x8,
    0x20, 0xfc,

    /* U+1EC1 "ề" */
    0x8, 0x23, 0x12, 0x7b, 0x1f, 0xe0, 0xc9, 0xe0,

    /* U+1EC2 "Ể" */
    0x1c, 0x33, 0x96, 0x3, 0xf8, 0x20, 0xfe, 0x8,
    0x20, 0xfc,

    /* U+1EC3 "ể" */
    0xc, 0x10, 0xcc, 0x49, 0xec, 0x7f, 0x83, 0x27,
    0x80,

    /* U+1EC4 "Ễ" */
    0x6a, 0xe2, 0x1c, 0x3, 0xf8, 0x20, 0xfe, 0x8,
    0x20, 0xfc,

    /* U+1EC5 "ễ" */
    0x6a, 0xe0, 0xc, 0x49, 0xec, 0x7f, 0x83, 0x27,
    0x80,

    /* U+1EC6 "Ệ" */
    0x31, 0xe0, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0, 0x30, 0xc0,

    /* U+1EC7 "ệ" */
    0x31, 0x27, 0xb1, 0xfe, 0xc, 0x9e, 0x0, 0xc3,
    0x0,

    /* U+1EC8 "Ỉ" */
    0x4d, 0x4, 0x92, 0x49, 0x20,

    /* U+1EC9 "ỉ" */
    0x49, 0x24, 0x92,

    /* U+1ECA "Ị" */
    0xff, 0x60,

    /* U+1ECB "ị" */
    0xff, 0x60,

    /* U+1ECC "Ọ" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x4,
    0x7c, 0x0, 0xc, 0x6, 0x0,

    /* U+1ECD "ọ" */
    0x7b, 0x38, 0x61, 0xcd, 0xe0, 0xc, 0x30,

    /* U+1ECE "Ỏ" */
    0x1c, 0x6, 0x2, 0x0, 0x3, 0xe2, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+1ECF "ỏ" */
    0x30, 0xc7, 0xb3, 0x86, 0x1c, 0xde,

    /* U+1ED0 "Ố" */
    0x1, 0x1, 0x87, 0x2, 0x82, 0x21, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1ED1 "ố" */
    0x4, 0x13, 0x12, 0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+1ED2 "Ồ" */
    0x6, 0x1, 0x7, 0x2, 0x82, 0x21, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1ED3 "ồ" */
    0x8, 0x23, 0x12, 0x7b, 0x38, 0x61, 0xcd, 0xe0,

    /* U+1ED4 "Ổ" */
    0x7, 0x1, 0x82, 0x83, 0x82, 0x21, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1ED5 "ổ" */
    0xc, 0x10, 0xcc, 0x49, 0xec, 0xe1, 0x87, 0x37,
    0x80,

    /* U+1ED6 "Ỗ" */
    0x3a, 0x17, 0x2, 0x3, 0x83, 0x61, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1ED7 "ỗ" */
    0x6a, 0x60, 0xc, 0x49, 0xec, 0xe1, 0x87, 0x37,
    0x80,

    /* U+1ED8 "Ộ" */
    0x18, 0x1e, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80, 0x1, 0x80, 0xc0,

    /* U+1ED9 "ộ" */
    0x31, 0x27, 0xb3, 0x86, 0x1c, 0xde, 0x0, 0xc3,
    0x0,

    /* U+1EDA "Ớ" */
    0xc, 0x4, 0x0, 0x47, 0xe4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+1EDB "ớ" */
    0x18, 0x21, 0xfe, 0x68, 0x50, 0xb3, 0x3c,

    /* U+1EDC "Ờ" */
    0x10, 0xc, 0x0, 0x47, 0xe4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+1EDD "ờ" */
    0x60, 0x41, 0xfe, 0x68, 0x50, 0xb3, 0x3c,

    /* U+1EDE "Ở" */
    0x18, 0x6, 0x2, 0x0, 0x23, 0xf2, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+1EDF "ở" */
    0x30, 0x65, 0xfe, 0x68, 0x50, 0xb3, 0x3c,

    /* U+1EE0 "Ỡ" */
    0x3a, 0x16, 0x80, 0x47, 0xe4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+1EE1 "ỡ" */
    0x7c, 0x5, 0xfe, 0x68, 0x50, 0xb3, 0x3c,

    /* U+1EE2 "Ợ" */
    0x1, 0x1f, 0x90, 0x50, 0x18, 0xc, 0x6, 0x2,
    0x82, 0x3e, 0x0, 0x6, 0x3, 0x0,

    /* U+1EE3 "ợ" */
    0x2, 0xff, 0x34, 0x28, 0x59, 0x9e, 0x0, 0x30,
    0x60,

    /* U+1EE4 "Ụ" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,
    0x0, 0x18, 0x18,

    /* U+1EE5 "ụ" */
    0x86, 0x18, 0x61, 0xcd, 0xf0, 0xc, 0x30,

    /* U+1EE6 "Ủ" */
    0x18, 0x8, 0x18, 0x0, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+1EE7 "ủ" */
    0x70, 0xc8, 0x61, 0x86, 0x1c, 0xdf,

    /* U+1EE8 "Ứ" */
    0xc, 0x4, 0x40, 0x30, 0x38, 0x14, 0xa, 0x5,
    0x2, 0x81, 0x21, 0xf, 0x0,

    /* U+1EE9 "ứ" */
    0x18, 0x26, 0x1c, 0x28, 0x50, 0xb3, 0x3e,

    /* U+1EEA "Ừ" */
    0x30, 0xc, 0x40, 0x30, 0x38, 0x14, 0xa, 0x5,
    0x2, 0x81, 0x21, 0xf, 0x0,

    /* U+1EEB "ừ" */
    0x60, 0x46, 0x1c, 0x28, 0x50, 0xb3, 0x3e,

    /* U+1EEC "Ử" */
    0x18, 0x6, 0x2, 0x20, 0x18, 0x1c, 0xa, 0x5,
    0x2, 0x81, 0x40, 0x90, 0x87, 0x80,

    /* U+1EED "ử" */
    0x38, 0x66, 0x1c, 0x28, 0x50, 0xb3, 0x3e,

    /* U+1EEE "Ữ" */
    0x32, 0x37, 0x40, 0x30, 0x38, 0x14, 0xa, 0x5,
    0x2, 0x81, 0x21, 0xf, 0x0,

    /* U+1EEF "ữ" */
    0x65, 0x36, 0x1c, 0x28, 0x50, 0xb3, 0x3e,

    /* U+1EF0 "Ự" */
    0x0, 0x80, 0x60, 0x70, 0x28, 0x14, 0xa, 0x5,
    0x2, 0x42, 0x1e, 0x0, 0x3, 0x1, 0x80,

    /* U+1EF1 "ự" */
    0x2, 0x6, 0x1c, 0x28, 0x50, 0xb3, 0x3e, 0x0,
    0x60, 0xc0,

    /* U+1EF2 "Ỳ" */
    0x20, 0x20, 0x6, 0x34, 0x4d, 0x8a, 0x8, 0x10,
    0x20, 0x40,

    /* U+1EF3 "ỳ" */
    0x20, 0x23, 0x1a, 0x26, 0xc5, 0x8e, 0xc, 0x10,
    0x60, 0x80,

    /* U+1EF4 "Ỵ" */
    0xc6, 0x89, 0xb1, 0x41, 0x2, 0x4, 0x8, 0x0,
    0x20, 0x40,

    /* U+1EF5 "ỵ" */
    0xc7, 0x89, 0xb3, 0x43, 0x87, 0xc, 0x18, 0x2c,

    /* U+1EF6 "Ỷ" */
    0x10, 0x30, 0x40, 0xc, 0x68, 0x9b, 0x14, 0x10,
    0x20, 0x40, 0x80,

    /* U+1EF7 "ỷ" */
    0x38, 0x23, 0x1a, 0x26, 0xc5, 0x8e, 0xc, 0x10,
    0x60, 0x80,

    /* U+1EF8 "Ỹ" */
    0x3c, 0x2c, 0x0, 0xc2, 0x46, 0x6c, 0x28, 0x10,
    0x10, 0x10, 0x10,

    /* U+1EF9 "ỹ" */
    0x68, 0xb3, 0x12, 0x66, 0xc5, 0xe, 0x8, 0x10,
    0x60, 0x80,

    /* U+2013 "–" */
    0xfc,

    /* U+2014 "—" */
    0xff,

    /* U+2018 "‘" */
    0x6f,

    /* U+2019 "’" */
    0xf6,

    /* U+201C "“" */
    0x4c, 0xb7, 0xb0,

    /* U+201D "”" */
    0xde, 0xd3, 0x20,

    /* U+2020 "†" */
    0x5d, 0x24,

    /* U+2021 "‡" */
    0xeb, 0xa0,

    /* U+2026 "…" */
    0xdb, 0xdb,

    /* U+2030 "‰" */
    0xe2, 0x5, 0xa0, 0x39, 0x0, 0x18, 0x0, 0xb3,
    0xe, 0xec, 0x57, 0x66, 0x66, 0x20, 0x0,

    /* U+2032 "′" */
    0xa8,

    /* U+2033 "″" */
    0xba, 0xa0};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 85, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 62, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 88, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 159, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 32, .adv_w = 124, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 57, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 40, .adv_w = 84, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 84, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 50, .adv_w = 73, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 52, .adv_w = 115, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 56, .adv_w = 70, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 57, .adv_w = 94, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 58, .adv_w = 69, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 66, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 65, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 111, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 69, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 70, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 124, .adv_w = 115, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 127, .adv_w = 115, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 129, .adv_w = 115, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 132, .adv_w = 129, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 194, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 151, .adv_w = 133, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 117, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 149, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 53, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 127, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 186, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 148, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 156, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 127, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 161, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 272, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 153, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 127, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 195, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 133, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 130, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 90, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 345, .adv_w = 76, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 352, .adv_w = 90, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 356, .adv_w = 115, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 358, .adv_w = 111, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 359, .adv_w = 35, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 360, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 106, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 76, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 402, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 49, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 65, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 415, .adv_w = 110, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 47, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 178, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 121, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 113, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 447, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 454, .adv_w = 95, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 83, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 118, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 110, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 155, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 105, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 113, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 500, .adv_w = 90, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 52, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 512, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 115, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 520, .adv_w = 85, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 62, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 524, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 530, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 543, .adv_w = 132, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 52, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 552, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 558, .adv_w = 141, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 54, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 568, .adv_w = 118, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 571, .adv_w = 115, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 573, .adv_w = 77, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 576, .adv_w = 81, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 577, .adv_w = 72, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 579, .adv_w = 115, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 58, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 586, .adv_w = 56, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 588, .adv_w = 35, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 589, .adv_w = 129, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 597, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 605, .adv_w = 102, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 606, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 608, .adv_w = 34, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 609, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 611, .adv_w = 118, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 614, .adv_w = 169, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 627, .adv_w = 164, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 640, .adv_w = 191, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 654, .adv_w = 129, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 661, .adv_w = 133, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 133, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 133, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 133, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 133, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 133, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 157, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 748, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 761, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 788, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 53, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 53, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 803, .adv_w = 53, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 53, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 149, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 148, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 871, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 884, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 897, .adv_w = 115, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 900, .adv_w = 156, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 931, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 981, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 987, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 993, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1011, .adv_w = 159, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1026, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 49, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1052, .adv_w = 49, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 49, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 49, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1060, .adv_w = 111, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1066, .adv_w = 121, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1072, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1078, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1084, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1090, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1096, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1102, .adv_w = 115, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1106, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1112, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1124, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1136, .adv_w = 113, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1146, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1155, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1164, .adv_w = 133, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1178, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 133, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1198, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1206, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1217, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1223, .adv_w = 149, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1232, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1240, .adv_w = 117, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1250, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1257, .adv_w = 53, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1263, .adv_w = 49, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1267, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1276, .adv_w = 47, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1279, .adv_w = 148, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1289, .adv_w = 121, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1295, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1304, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1309, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1319, .adv_w = 94, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1325, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1336, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1342, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1353, .adv_w = 118, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1361, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1370, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1375, .adv_w = 156, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 113, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1393, .adv_w = 153, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1405, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1412, .adv_w = 153, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1426, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1435, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1448, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1455, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1466, .adv_w = 121, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1475, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1488, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1495, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1504, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1511, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1526, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1534, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1535, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1536, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1538, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1540, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1541, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1542, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1543, .adv_w = 133, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1556, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1563, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1572, .adv_w = 120, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1581, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1597, .adv_w = 106, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1606, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1617, .adv_w = 120, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1626, .adv_w = 117, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1636, .adv_w = 107, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1645, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1654, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1661, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1670, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1677, .adv_w = 149, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1687, .adv_w = 121, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1696, .adv_w = 53, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1702, .adv_w = 49, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1707, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1717, .adv_w = 110, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1724, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1734, .adv_w = 110, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1745, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1754, .adv_w = 47, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1756, .adv_w = 104, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1768, .adv_w = 47, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1775, .adv_w = 186, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1789, .adv_w = 178, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 186, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1812, .adv_w = 178, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1823, .adv_w = 148, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1833, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1840, .adv_w = 156, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1856, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1865, .adv_w = 156, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1881, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1890, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1905, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1914, .adv_w = 127, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1923, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1932, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1941, .adv_w = 95, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1947, .adv_w = 126, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1957, .adv_w = 95, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1964, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1974, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1981, .adv_w = 116, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1994, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2003, .adv_w = 116, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2016, .adv_w = 94, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2025, .adv_w = 113, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2035, .adv_w = 83, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2042, .adv_w = 153, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2056, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2065, .adv_w = 127, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2076, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2083, .adv_w = 127, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2094, .adv_w = 110, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2102, .adv_w = 195, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2119, .adv_w = 155, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2129, .adv_w = 195, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2146, .adv_w = 155, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2158, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2167, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2173, .adv_w = 133, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2186, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2193, .adv_w = 133, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2207, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2213, .adv_w = 133, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2228, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2236, .adv_w = 133, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2251, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2259, .adv_w = 133, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2274, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2282, .adv_w = 133, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2297, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2306, .adv_w = 133, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2322, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2331, .adv_w = 133, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2347, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2356, .adv_w = 133, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2372, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2381, .adv_w = 133, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2397, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2406, .adv_w = 133, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2421, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2430, .adv_w = 133, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2447, .adv_w = 120, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2456, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2465, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2472, .adv_w = 117, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2481, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2487, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2496, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2502, .adv_w = 117, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2512, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2520, .adv_w = 117, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2530, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2538, .adv_w = 117, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2548, .adv_w = 107, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2557, .adv_w = 117, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2567, .adv_w = 107, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2576, .adv_w = 117, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2587, .adv_w = 107, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2596, .adv_w = 53, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2601, .adv_w = 49, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2604, .adv_w = 53, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2606, .adv_w = 49, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2608, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2621, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2628, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2642, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2648, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2663, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2671, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2686, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2694, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2709, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2718, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2733, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2742, .adv_w = 156, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2758, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2767, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2780, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2787, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2800, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2807, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2821, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2828, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2841, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2848, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2862, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2871, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2882, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2889, .adv_w = 153, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2901, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2907, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2920, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2927, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2940, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2947, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2961, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2968, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2981, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2988, .adv_w = 153, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3003, .adv_w = 118, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3013, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3023, .adv_w = 113, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3033, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3043, .adv_w = 113, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3051, .adv_w = 130, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3062, .adv_w = 113, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3072, .adv_w = 130, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3083, .adv_w = 113, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3093, .adv_w = 121, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 3094, .adv_w = 154, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 3095, .adv_w = 57, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3096, .adv_w = 57, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 3097, .adv_w = 106, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3100, .adv_w = 106, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 3103, .adv_w = 77, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 3105, .adv_w = 77, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 3107, .adv_w = 165, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3109, .adv_w = 223, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3124, .adv_w = 51, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3125, .adv_w = 87, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_3[] = {
    0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0xe, 0xf,
    0x16, 0x17, 0x26, 0x27, 0x37, 0x38, 0x41, 0x42,
    0x52, 0x53, 0x58, 0x59, 0x66, 0x67, 0x70, 0x71,
    0x77, 0x78, 0x9e, 0x9f, 0xad, 0xae, 0xd5, 0xd6,
    0xe8, 0xe9, 0xf2, 0xf3, 0xfc, 0xfd, 0x126, 0x127,
    0x12a, 0x12b, 0x1ff, 0x200, 0x201, 0x204, 0x207, 0x219,
    0x221, 0x1cfe, 0x1cff, 0x1d02, 0x1d03, 0x1d06, 0x1d07, 0x1d0a,
    0x1d0b, 0x1d14, 0x1d15, 0x1d16, 0x1d17, 0x1d18, 0x1d19, 0x1d22,
    0x1d23, 0x1d2c, 0x1d2d, 0x1d2e, 0x1d2f, 0x1d30, 0x1d31, 0x1d34,
    0x1d35, 0x1d36, 0x1d37, 0x1d3c, 0x1d3d, 0x1d40, 0x1d41, 0x1d44,
    0x1d45, 0x1d4a, 0x1d4b, 0x1d4c, 0x1d4d, 0x1d50, 0x1d51, 0x1d52,
    0x1d53, 0x1d58, 0x1d59, 0x1d5a, 0x1d5b, 0x1d60, 0x1d61, 0x1d62,
    0x1d63, 0x1d66, 0x1d67, 0x1d6a, 0x1d6b, 0x1d76, 0x1d77, 0x1d7a,
    0x1d7b, 0x1d7c, 0x1d7d, 0x1d80, 0x1d81, 0x1d86, 0x1d87, 0x1d90,
    0x1d91};

static const uint16_t unicode_list_5[] = {
    0x0, 0x1, 0x5, 0x6, 0x9, 0xa, 0xd, 0xe,
    0x13, 0x1d, 0x1f, 0x20};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
    {
        {.range_start = 32, .range_length = 95, .glyph_id_start = 1, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 160, .range_length = 13, .glyph_id_start = 96, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 174, .range_length = 82, .glyph_id_start = 109, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 258, .range_length = 7570, .glyph_id_start = 191, .unicode_list = unicode_list_3, .glyph_id_ofs_list = NULL, .list_length = 113, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY},
        {.range_start = 7840, .range_length = 90, .glyph_id_start = 304, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 8211, .range_length = 33, .glyph_id_start = 394, .unicode_list = unicode_list_5, .glyph_id_ofs_list = NULL, .list_length = 12, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
    {
        0, 0, 1, 2, 0, 0, 0, 0,
        2, 0, 0, 0, 0, 3, 0, 0,
        4, 5, 6, 0, 7, 8, 9, 10,
        11, 12, 13, 0, 0, 0, 0, 0,
        14, 0, 15, 16, 0, 17, 0, 18,
        19, 6, 6, 20, 21, 22, 6, 6,
        19, 23, 19, 24, 0, 25, 20, 26,
        26, 27, 28, 0, 0, 0, 0, 0,
        0, 0, 29, 30, 0, 29, 31, 32,
        0, 33, 34, 35, 36, 29, 33, 33,
        30, 30, 37, 38, 39, 40, 29, 41,
        41, 0, 42, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 29, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 43, 15,
        15, 15, 15, 15, 15, 0, 0, 0,
        0, 0, 0, 6, 6, 44, 0, 17,
        6, 19, 19, 19, 19, 19, 0, 19,
        20, 20, 20, 20, 28, 0, 0, 29,
        29, 29, 29, 29, 29, 31, 0, 31,
        31, 31, 31, 34, 45, 44, 46, 0,
        33, 30, 30, 30, 30, 30, 0, 30,
        29, 29, 29, 29, 42, 0, 42, 15,
        29, 15, 29, 0, 0, 17, 0, 0,
        31, 6, 47, 22, 29, 6, 33, 24,
        38, 0, 39, 20, 29, 20, 29, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 19, 30, 0, 31, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 16, 30, 0, 0, 17, 29,
        0, 0, 0, 0, 0, 0, 6, 33,
        0, 46, 0, 0, 0, 0, 22, 29,
        0, 0, 6, 33, 0, 0, 6, 33,
        19, 30, 0, 0, 19, 30, 0, 0,
        0, 0, 0, 0, 0, 39, 0, 0,
        0, 0, 25, 48, 0, 0, 0, 0,
        0, 0, 26, 0, 0, 0, 0, 0,
        15, 29, 15, 0, 0, 0, 0, 0,
        0, 0, 15, 0, 15, 29, 15, 0,
        15, 0, 15, 0, 15, 0, 15, 0,
        0, 31, 0, 0, 0, 31, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 31,
        0, 46, 6, 34, 19, 30, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        19, 30, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 20, 29, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 28, 42, 0, 42, 0, 0,
        28, 42, 0, 0, 49, 3, 0, 0,
        0, 0, 0, 0, 0, 0};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
    {
        0, 0, 1, 2, 0, 0, 3, 0,
        2, 0, 0, 0, 0, 4, 0, 5,
        6, 0, 0, 7, 0, 8, 7, 0,
        9, 0, 10, 0, 0, 0, 0, 0,
        11, 0, 12, 0, 13, 0, 0, 0,
        13, 0, 0, 14, 0, 0, 0, 0,
        13, 0, 13, 0, 0, 15, 0, 16,
        16, 0, 17, 0, 0, 18, 0, 0,
        0, 0, 19, 20, 19, 19, 19, 21,
        19, 22, 23, 24, 22, 20, 25, 25,
        19, 26, 19, 25, 27, 28, 29, 30,
        30, 0, 31, 0, 0, 0, 0, 0,
        0, 1, 32, 0, 0, 0, 0, 0,
        0, 0, 19, 0, 0, 0, 0, 3,
        0, 0, 0, 0, 0, 0, 33, 0,
        0, 0, 0, 0, 0, 0, 0, 12,
        12, 12, 12, 12, 12, 12, 13, 0,
        0, 0, 0, 0, 0, 34, 0, 0,
        0, 13, 13, 13, 13, 13, 0, 13,
        0, 0, 0, 0, 17, 0, 20, 19,
        19, 19, 19, 19, 19, 0, 19, 19,
        19, 19, 19, 35, 23, 36, 37, 0,
        25, 19, 19, 19, 19, 19, 0, 19,
        29, 29, 29, 29, 31, 0, 31, 12,
        19, 12, 19, 13, 19, 0, 0, 0,
        19, 0, 38, 0, 22, 0, 25, 0,
        25, 0, 27, 0, 29, 0, 29, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 13, 19, 0, 19, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 20, 13, 0, 0, 19,
        0, 0, 0, 0, 0, 0, 0, 22,
        0, 39, 0, 0, 0, 0, 0, 22,
        0, 0, 0, 25, 0, 0, 0, 25,
        13, 19, 0, 0, 13, 19, 0, 0,
        0, 0, 0, 0, 0, 27, 0, 0,
        0, 0, 15, 28, 0, 0, 0, 0,
        0, 0, 16, 0, 0, 0, 0, 0,
        12, 19, 12, 0, 0, 0, 0, 0,
        0, 0, 12, 0, 12, 19, 12, 0,
        12, 0, 12, 0, 12, 0, 12, 0,
        0, 19, 0, 0, 0, 19, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 19,
        0, 39, 0, 23, 13, 19, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        13, 19, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 29, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 17, 31, 0, 31, 0, 0,
        17, 31, 0, 0, 0, 40, 0, 41,
        0, 0, 5, 0, 0, 0};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
    {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -13, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -4, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -15, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -10, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 4, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 4, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -11, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -8, 0, 0, -5, 0, -5,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -13, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -7, 0, 0, 0,
        0, -6, -2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -17, -19, 0,
        0, -8, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -4, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -17,
        -17, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -13, 0, 0,
        0, 0, -17, 0, 0, 0, 0, -20,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -10, -10, -16, 0,
        0, 0, 0, 0, 0, -9, 0, 0,
        0, 0, 0, -3, -3, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -4, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -12, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -6, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -6, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -2,
        -12, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 4, 0, 0,
        0, 0, 0, 0, -6, -11, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -10, 0, 0, 0, 0, -6, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -10, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -10, 0, 0, 0, 0, 0, -6, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, -2, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -9, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        3, -6, 0, -10, 0, -15, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        0, 0, 0, 0, -9, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -6, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -6, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -8, 0, -15, 0, 0,
        0, 0, -14, 0, 0, 0, -3, -12,
        -6, 0, -12, 0, -6, -4, -4, -14,
        0, 0, 8, 6, 8, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -15, 0, 0, 0,
        0, 0, 0, -8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -6, 0, 0,
        -8, 0, 0, 3, 0, 8, 0, 8,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -10, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -14, 0,
        -15, 0, 0, 0, 0, -19, 0, 0,
        0, -6, 0, 0, -15, -17, 0, -10,
        -10, 0, -19, 0, 0, 3, 0, 4,
        0, 0, 0, 0, 0, -8, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -4, 0, 0, -14, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -14, 0, 0, 0, 0,
        0, -5, 0, 0, -12, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -5, 0, 0, -12, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -12, -12, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -7, 0, -7, 0, -1, -11, 0,
        0, 0, 0, 0, 0, 0, -7, -12,
        0, 3, 0, 10, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -4, 0, 0, -11,
        0, 0, 0, 0, 0, 0, -3, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, -4, 0, 1,
        -14, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 5, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -6, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        -3, 0, -6, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -7, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -7, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -12, -23, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, -23, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -7, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, -10, 0, -4, -6, 0, -5,
        -6, 0, -5, -6, 0, -10, -8, 0,
        -6, 0, -6, 0, 0, 0, 0, 0,
        0, 0, 0, -8, -17, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 4, 0, 0,
        -17, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -11, -8, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -17, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -4, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 5, 0, 5, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 8, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 13, 0, 13, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 15, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, -10, 0, -4, -6, 0, -5,
        -6, 0, -5, -6, 0, 0, -8, 0,
        -6, 0, -6, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -7,
        0, 0, 0, 0, 0, 0, 0, 0,
        0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
    {
        .class_pair_values = kern_class_values,
        .left_class_mapping = kern_left_class_mapping,
        .right_class_mapping = kern_right_class_mapping,
        .left_class_cnt = 49,
        .right_class_cnt = 41,
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
const lv_font_t elms_sans_bold_12 = {
#else
lv_font_t elms_sans_bold_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 17,                              /*The maximum line height required by the font*/
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

#endif /*#if ELMS_SANS_BOLD_12*/
