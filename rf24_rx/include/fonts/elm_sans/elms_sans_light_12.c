/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --stride 1 --align 1 --font ElmsSans-Light.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o elms_sans_light_12.c
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

#ifndef ELMS_SANS_LIGHT_12
#define ELMS_SANS_LIGHT_12 1
#endif

#if ELMS_SANS_LIGHT_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfd,

    /* U+0022 "\"" */
    0xf0,

    /* U+0023 "#" */
    0x11, 0x7f, 0x22, 0x22, 0x24, 0xfe, 0x48, 0x88,

    /* U+0024 "$" */
    0x72, 0xaa, 0x1c, 0x2e, 0x9a, 0x5e,

    /* U+0025 "%" */
    0xf4, 0x94, 0x68, 0x8, 0x16, 0x19, 0x29, 0x26,
    0x40,

    /* U+0026 "&" */
    0x7c, 0x40, 0xfe, 0x28, 0x50, 0xa1, 0x3c,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x34, 0x48, 0x88, 0x88, 0x44, 0x30,

    /* U+0029 ")" */
    0xc2, 0x21, 0x11, 0x11, 0x22, 0xc0,

    /* U+002A "*" */
    0x5f, 0x80,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xa0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0x40,

    /* U+002F "/" */
    0x11, 0x22, 0x24, 0x44, 0x88,

    /* U+0030 "0" */
    0x79, 0x28, 0x61, 0x86, 0x14, 0x9e,

    /* U+0031 "1" */
    0xd5, 0x55,

    /* U+0032 "2" */
    0x74, 0x42, 0x22, 0x22, 0x1f,

    /* U+0033 "3" */
    0x78, 0x43, 0x81, 0x6, 0x18, 0x5e,

    /* U+0034 "4" */
    0x18, 0xa2, 0x92, 0x8b, 0xf0, 0x82,

    /* U+0035 "5" */
    0x7a, 0x7, 0xa1, 0x6, 0x18, 0x5e,

    /* U+0036 "6" */
    0x21, 0x7, 0xa1, 0x86, 0x18, 0x5e,

    /* U+0037 "7" */
    0xf8, 0x42, 0x21, 0x10, 0x88,

    /* U+0038 "8" */
    0x72, 0x28, 0x9c, 0x8e, 0x18, 0x5e,

    /* U+0039 "9" */
    0x7a, 0x18, 0x61, 0xc8, 0xe1, 0x4,

    /* U+003A ":" */
    0xc4,

    /* U+003B ";" */
    0x80, 0x28,

    /* U+003C "<" */
    0x3, 0xc6, 0x10,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0xc, 0x36, 0x80,

    /* U+003F "?" */
    0x70, 0x42, 0x22, 0x10, 0xc,

    /* U+0040 "@" */
    0x1f, 0x8, 0x2d, 0xe6, 0x89, 0xa2, 0x68, 0x99,
    0xda, 0x0, 0x40, 0xe, 0x0,

    /* U+0041 "A" */
    0x10, 0x50, 0xa1, 0x24, 0x4f, 0xa0, 0xc1,

    /* U+0042 "B" */
    0xfa, 0x18, 0x7e, 0x86, 0x18, 0x7e,

    /* U+0043 "C" */
    0x3e, 0x20, 0xa0, 0x10, 0x8, 0x4, 0x5, 0x4,
    0x7c,

    /* U+0044 "D" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x81, 0x82, 0xfc,

    /* U+0045 "E" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0xfe, 0x8, 0x20,

    /* U+0047 "G" */
    0x3e, 0x20, 0xa0, 0x10, 0xf8, 0xc, 0x5, 0x4,
    0x7c,

    /* U+0048 "H" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x4, 0x10, 0x41, 0x4, 0x18, 0xde,

    /* U+004B "K" */
    0x8a, 0x4a, 0x30, 0xa2, 0x48, 0xa1,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x3f,

    /* U+004D "M" */
    0x80, 0xe0, 0xf0, 0x74, 0x5a, 0x2c, 0xa6, 0x53,
    0x11,

    /* U+004E "N" */
    0xc3, 0x86, 0x8c, 0x99, 0x31, 0x61, 0xc3,

    /* U+004F "O" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x4,
    0x7c,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x20,

    /* U+0051 "Q" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x4,
    0x7e, 0x1, 0x80,

    /* U+0052 "R" */
    0xfa, 0x18, 0x61, 0xfa, 0x48, 0xa1,

    /* U+0053 "S" */
    0x72, 0x28, 0x1c, 0xe, 0x18, 0x5e,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+0056 "V" */
    0x83, 0x5, 0x12, 0x22, 0x85, 0xa, 0x8,

    /* U+0057 "W" */
    0x86, 0x18, 0x62, 0x4a, 0x24, 0x92, 0x49, 0x43,
    0x14, 0x31, 0x41, 0x8,

    /* U+0058 "X" */
    0x42, 0x48, 0xa0, 0x81, 0x84, 0x91, 0x41,

    /* U+0059 "Y" */
    0x82, 0x89, 0x11, 0x41, 0x2, 0x4, 0x8,

    /* U+005A "Z" */
    0x7c, 0x10, 0x84, 0x20, 0x84, 0x3f,

    /* U+005B "[" */
    0xf8, 0x88, 0x88, 0x88, 0x88, 0xf0,

    /* U+005C "\\" */
    0x88, 0x44, 0x44, 0x22, 0x21,

    /* U+005D "]" */
    0xf1, 0x11, 0x11, 0x11, 0x11, 0xf0,

    /* U+005E "^" */
    0x56, 0x80,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0xc0,

    /* U+0061 "a" */
    0x7e, 0x18, 0x61, 0x85, 0xf0,

    /* U+0062 "b" */
    0x82, 0xf, 0xa1, 0x86, 0x18, 0x7e,

    /* U+0063 "c" */
    0x7b, 0x18, 0x20, 0xc5, 0xe0,

    /* U+0064 "d" */
    0x4, 0x17, 0xe1, 0x86, 0x18, 0x5f,

    /* U+0065 "e" */
    0x7a, 0x1f, 0xe0, 0x81, 0xe0,

    /* U+0066 "f" */
    0x34, 0xf4, 0x44, 0x44,

    /* U+0067 "g" */
    0x7e, 0x18, 0x61, 0x85, 0xf0, 0x51, 0x38,

    /* U+0068 "h" */
    0x82, 0xb, 0xb1, 0x86, 0x18, 0x61,

    /* U+0069 "i" */
    0xbf,

    /* U+006A "j" */
    0x20, 0x92, 0x49, 0x27, 0x0,

    /* U+006B "k" */
    0x84, 0x25, 0x4c, 0x52, 0x51,

    /* U+006C "l" */
    0xff,

    /* U+006D "m" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x44,

    /* U+006E "n" */
    0xbb, 0x18, 0x61, 0x86, 0x10,

    /* U+006F "o" */
    0x7a, 0x18, 0x61, 0x85, 0xe0,

    /* U+0070 "p" */
    0xfa, 0x18, 0x61, 0x87, 0xe8, 0x20, 0x80,

    /* U+0071 "q" */
    0x7e, 0x18, 0x61, 0x85, 0xf0, 0x41, 0x4,

    /* U+0072 "r" */
    0xf4, 0x61, 0x8, 0x40,

    /* U+0073 "s" */
    0x74, 0x10, 0x78, 0xb8,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x43,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x85, 0xf0,

    /* U+0076 "v" */
    0x86, 0x24, 0x94, 0x30, 0xc0,

    /* U+0077 "w" */
    0x88, 0xcc, 0x95, 0x4a, 0xa6, 0x61, 0x10,

    /* U+0078 "x" */
    0x8a, 0x8c, 0x65, 0x44,

    /* U+0079 "y" */
    0x85, 0x14, 0x92, 0x30, 0x42, 0x8, 0x20,

    /* U+007A "z" */
    0x78, 0x84, 0x44, 0x7c,

    /* U+007B "{" */
    0x34, 0x44, 0x84, 0x44, 0x43,

    /* U+007C "|" */
    0xff, 0xe0,

    /* U+007D "}" */
    0xc2, 0x22, 0x12, 0x22, 0x2c,

    /* U+007E "~" */
    0x4d, 0x80,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xbf, 0x80,

    /* U+00A2 "¢" */
    0x10, 0x73, 0x54, 0x89, 0x1a, 0x1f, 0x8,

    /* U+00A3 "£" */
    0x39, 0x14, 0x3c, 0x41, 0x4, 0x3f,

    /* U+00A4 "¤" */
    0xb7, 0x38, 0x61, 0xce, 0xd0,

    /* U+00A5 "¥" */
    0x82, 0x89, 0x11, 0x47, 0xc2, 0x1f, 0x8,

    /* U+00A6 "¦" */
    0xf7, 0xc0,

    /* U+00A7 "§" */
    0x72, 0x4c, 0x96, 0x8d, 0x2e,

    /* U+00A8 "¨" */
    0xe0,

    /* U+00A9 "©" */
    0x18, 0x7e, 0xc5, 0xc1, 0xc5, 0x99, 0x42, 0x3c,

    /* U+00AA "ª" */
    0x76, 0xf0,

    /* U+00AB "«" */
    0x6a, 0xc6,

    /* U+00AC "¬" */
    0xf8, 0x42,

    /* U+00AE "®" */
    0x27, 0xfb, 0x93, 0x0,

    /* U+00AF "¯" */
    0xe0,

    /* U+00B0 "°" */
    0x69, 0x96,

    /* U+00B1 "±" */
    0x21, 0x3e, 0x42, 0x7c,

    /* U+00B2 "²" */
    0xe7, 0x70,

    /* U+00B3 "³" */
    0xec, 0xf0,

    /* U+00B4 "´" */
    0xc0,

    /* U+00B5 "µ" */
    0x85, 0xa, 0x14, 0x28, 0x5f, 0xe0, 0x40, 0x80,

    /* U+00B6 "¶" */
    0x7f, 0xff, 0xff, 0x7c, 0x30, 0xc3, 0xc,

    /* U+00B7 "·" */
    0xc0,

    /* U+00B8 "¸" */
    0x47, 0x0,

    /* U+00B9 "¹" */
    0xf0,

    /* U+00BA "º" */
    0x56, 0xe0,

    /* U+00BB "»" */
    0xc6, 0x6a,

    /* U+00BC "¼" */
    0x89, 0x22, 0x45, 0xa, 0x4, 0xd2, 0xa7, 0x83,
    0x0,

    /* U+00BD "½" */
    0x91, 0x22, 0x45, 0x2, 0x49, 0x51, 0xa4, 0x8f,
    0x0,

    /* U+00BE "¾" */
    0xe2, 0x22, 0x11, 0x5, 0xc, 0x80, 0x4c, 0x4a,
    0x27, 0x20, 0x90, 0x0,

    /* U+00BF "¿" */
    0x20, 0x8, 0x46, 0x62, 0x12, 0x70,

    /* U+00C0 "À" */
    0x20, 0x20, 0x0, 0x82, 0x85, 0x9, 0x22, 0x7d,
    0x6, 0x8,

    /* U+00C1 "Á" */
    0x8, 0x20, 0x0, 0x82, 0x85, 0x9, 0x22, 0x7d,
    0x6, 0x8,

    /* U+00C2 "Â" */
    0x10, 0x50, 0x0, 0x82, 0x85, 0x9, 0x22, 0x7d,
    0x6, 0x8,

    /* U+00C3 "Ã" */
    0x14, 0x2c, 0x0, 0x8, 0x18, 0x24, 0x24, 0x24,
    0x7e, 0x42, 0x81,

    /* U+00C4 "Ä" */
    0x28, 0x0, 0x0, 0x82, 0x85, 0x9, 0x22, 0x7d,
    0x6, 0x8,

    /* U+00C5 "Å" */
    0x18, 0x18, 0x0, 0x18, 0x18, 0x28, 0x24, 0x24,
    0x7e, 0x42, 0x82,

    /* U+00C6 "Æ" */
    0x1f, 0x18, 0xa, 0x5, 0xe4, 0x83, 0xc2, 0x21,
    0xf,

    /* U+00C7 "Ç" */
    0x3e, 0x20, 0xa0, 0x10, 0x8, 0x4, 0x5, 0x4,
    0x7c, 0x8, 0x2, 0x7, 0x0,

    /* U+00C8 "È" */
    0x20, 0x80, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+00C9 "É" */
    0x10, 0x40, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+00CA "Ê" */
    0x0, 0xc0, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+00CB "Ë" */
    0x50, 0x0, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+00CC "Ì" */
    0x91, 0x55, 0x54,

    /* U+00CD "Í" */
    0x62, 0xaa, 0xa8,

    /* U+00CE "Î" */
    0x54, 0x24, 0x92, 0x49, 0x0,

    /* U+00CF "Ï" */
    0xc1, 0x55, 0x54,

    /* U+00D0 "Ð" */
    0x7e, 0x20, 0x90, 0x3c, 0x14, 0xa, 0x5, 0x4,
    0xfc,

    /* U+00D1 "Ñ" */
    0x20, 0x30, 0x6, 0x1c, 0x34, 0x64, 0xc9, 0x8b,
    0xe, 0x18,

    /* U+00D2 "Ò" */
    0x10, 0x8, 0x2, 0x0, 0x3, 0xe2, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+00D3 "Ó" */
    0x4, 0x4, 0x2, 0x0, 0x3, 0xe2, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+00D4 "Ô" */
    0x8, 0xa, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+00D5 "Õ" */
    0x10, 0x16, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+00D6 "Ö" */
    0x14, 0x0, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+00D7 "×" */
    0x51, 0x88, 0xa0,

    /* U+00D8 "Ø" */
    0x0, 0x1f, 0x90, 0xd0, 0x98, 0x8c, 0x86, 0x82,
    0xc2, 0x7e, 0x0,

    /* U+00D9 "Ù" */
    0x20, 0x40, 0x40, 0x8, 0x30, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00DA "Ú" */
    0x8, 0x20, 0x40, 0x8, 0x30, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00DB "Û" */
    0x10, 0x50, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+00DC "Ü" */
    0x28, 0x0, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+00DD "Ý" */
    0x8, 0x20, 0x4, 0x14, 0x48, 0x8a, 0x8, 0x10,
    0x20, 0x40,

    /* U+00DE "Þ" */
    0x83, 0xe8, 0x61, 0x87, 0xe8, 0x20,

    /* U+00DF "ß" */
    0x72, 0x28, 0xac, 0x8e, 0x18, 0x6e,

    /* U+00E0 "à" */
    0x20, 0x7, 0xe1, 0x86, 0x18, 0x5f,

    /* U+00E1 "á" */
    0x10, 0x7, 0xe1, 0x86, 0x18, 0x5f,

    /* U+00E2 "â" */
    0x30, 0x27, 0xe1, 0x86, 0x18, 0x5f,

    /* U+00E3 "ã" */
    0x29, 0x47, 0xe1, 0x86, 0x18, 0x5f,

    /* U+00E4 "ä" */
    0x28, 0x7, 0xe1, 0x86, 0x18, 0x5f,

    /* U+00E5 "å" */
    0x30, 0x47, 0xe1, 0x86, 0x18, 0x5f,

    /* U+00E6 "æ" */
    0x77, 0x44, 0x5f, 0xf1, 0x8, 0x8f, 0xb8,

    /* U+00E7 "ç" */
    0x39, 0x8e, 0x4, 0xc, 0x2f, 0x84, 0x4, 0x38,

    /* U+00E8 "è" */
    0x20, 0x7, 0xa1, 0xfe, 0x8, 0x1e,

    /* U+00E9 "é" */
    0x10, 0x7, 0xa1, 0xfe, 0x8, 0x1e,

    /* U+00EA "ê" */
    0x31, 0x7, 0xa1, 0xfe, 0x8, 0x1e,

    /* U+00EB "ë" */
    0x28, 0x7, 0xa1, 0xfe, 0x8, 0x1e,

    /* U+00EC "ì" */
    0x85, 0x55,

    /* U+00ED "í" */
    0x4a, 0xaa,

    /* U+00EE "î" */
    0xc5, 0x24, 0x92,

    /* U+00EF "ï" */
    0xc5, 0x55,

    /* U+00F0 "ð" */
    0x18, 0x47, 0xa1, 0x86, 0x18, 0x5e,

    /* U+00F1 "ñ" */
    0x68, 0x4b, 0xb1, 0x86, 0x18, 0x61,

    /* U+00F2 "ò" */
    0x20, 0x7, 0xa1, 0x86, 0x18, 0x5e,

    /* U+00F3 "ó" */
    0x10, 0x7, 0xa1, 0x86, 0x18, 0x5e,

    /* U+00F4 "ô" */
    0x30, 0x7, 0xa1, 0x86, 0x18, 0x5e,

    /* U+00F5 "õ" */
    0x29, 0x47, 0xa1, 0x86, 0x18, 0x5e,

    /* U+00F6 "ö" */
    0x28, 0x7, 0xa1, 0x86, 0x18, 0x5e,

    /* U+00F7 "÷" */
    0x20, 0x3e, 0x2, 0x0,

    /* U+00F8 "ø" */
    0x1, 0xf8, 0xe5, 0xa7, 0x17, 0x80,

    /* U+00F9 "ù" */
    0x20, 0x8, 0x61, 0x86, 0x18, 0x5f,

    /* U+00FA "ú" */
    0x10, 0x8, 0x61, 0x86, 0x18, 0x5f,

    /* U+00FB "û" */
    0x30, 0x8, 0x61, 0x86, 0x18, 0x5f,

    /* U+00FC "ü" */
    0x50, 0x8, 0x61, 0x86, 0x18, 0x5f,

    /* U+00FD "ý" */
    0x10, 0x8, 0x51, 0x49, 0x23, 0x4, 0x20, 0x82,
    0x0,

    /* U+00FE "þ" */
    0x82, 0xf, 0xa1, 0x86, 0x18, 0x7e, 0x82, 0x8,
    0x0,

    /* U+00FF "ÿ" */
    0x28, 0x8, 0x51, 0x49, 0x23, 0x4, 0x20, 0x82,
    0x0,

    /* U+0102 "Ă" */
    0x24, 0x30, 0x0, 0x82, 0x85, 0x9, 0x22, 0x7d,
    0x6, 0x8,

    /* U+0103 "ă" */
    0x48, 0xc7, 0xe1, 0x86, 0x18, 0x5f,

    /* U+0104 "Ą" */
    0x10, 0x28, 0x28, 0x24, 0x44, 0x7c, 0x82, 0x82,
    0x2, 0x4, 0x3,

    /* U+0105 "ą" */
    0x7e, 0x18, 0x61, 0x85, 0xf0, 0x82, 0xc,

    /* U+0106 "Ć" */
    0x4, 0x4, 0x2, 0x0, 0x3, 0xe2, 0xa, 0x1,
    0x0, 0x80, 0x40, 0x50, 0x47, 0xc0,

    /* U+0107 "ć" */
    0x10, 0x47, 0xb1, 0x82, 0xc, 0x5e,

    /* U+0110 "Đ" */
    0x7e, 0x20, 0x90, 0x3c, 0x14, 0xa, 0x5, 0x4,
    0xfc,

    /* U+0111 "đ" */
    0xe, 0x9, 0xf4, 0x28, 0x50, 0xa1, 0x3e,

    /* U+0118 "Ę" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f, 0x8, 0x20,
    0xc0,

    /* U+0119 "ę" */
    0x7a, 0x38, 0x7f, 0x81, 0xe1, 0x8, 0x18,

    /* U+0128 "Ĩ" */
    0x4b, 0x2, 0x22, 0x22, 0x22, 0x20,

    /* U+0129 "ĩ" */
    0x4b, 0x22, 0x22, 0x22,

    /* U+0139 "Ĺ" */
    0x42, 0x0, 0x20, 0x82, 0x8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+013A "ĺ" */
    0x68, 0xaa, 0xaa,

    /* U+0143 "Ń" */
    0x8, 0x20, 0x6, 0x1c, 0x34, 0x64, 0xc9, 0x8b,
    0xe, 0x18,

    /* U+0144 "ń" */
    0x10, 0xb, 0xb1, 0x86, 0x18, 0x61,

    /* U+0154 "Ŕ" */
    0x20, 0x0, 0x3e, 0x86, 0x18, 0x7e, 0x92, 0x28,
    0x40,

    /* U+0155 "ŕ" */
    0x20, 0x3d, 0x18, 0x42, 0x10,

    /* U+015A "Ś" */
    0x10, 0x40, 0x0, 0x72, 0x28, 0x1c, 0xe, 0x18,
    0x5e,

    /* U+015B "ś" */
    0x21, 0x1d, 0x4, 0x1e, 0x2e,

    /* U+0168 "Ũ" */
    0x20, 0x30, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+0169 "ũ" */
    0x68, 0x48, 0x61, 0x86, 0x18, 0x5f,

    /* U+0172 "Ų" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x51, 0x1c, 0x10,
    0x20, 0x20,

    /* U+0173 "ų" */
    0x86, 0x18, 0x61, 0x85, 0xf0, 0x82, 0xc,

    /* U+0179 "Ź" */
    0x10, 0x40, 0x1f, 0x4, 0x21, 0x8, 0x21, 0xf,
    0xc0,

    /* U+017A "ź" */
    0x10, 0x1e, 0x21, 0x11, 0x1f,

    /* U+01A0 "Ơ" */
    0x2, 0x1, 0xf, 0x88, 0x28, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x1f, 0x0,

    /* U+01A1 "ơ" */
    0x5, 0xe8, 0x61, 0x86, 0x17, 0x80,

    /* U+01AF "Ư" */
    0x0, 0x80, 0x60, 0xd0, 0x48, 0x24, 0x12, 0x9,
    0x4, 0x44, 0x1c, 0x0,

    /* U+01B0 "ư" */
    0x2, 0x6, 0x14, 0x28, 0x50, 0xa1, 0x3e,

    /* U+01D7 "Ǘ" */
    0x8, 0x20, 0x41, 0x40, 0x0, 0x20, 0xc1, 0x83,
    0x6, 0xc, 0x14, 0x47, 0x0,

    /* U+01D8 "ǘ" */
    0x10, 0x40, 0x14, 0x2, 0x18, 0x61, 0x86, 0x17,
    0xc0,

    /* U+01EA "Ǫ" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x4,
    0x7c, 0x8, 0x4, 0x1, 0x0,

    /* U+01EB "ǫ" */
    0x7a, 0x18, 0x61, 0x85, 0xe0, 0x8, 0x18,

    /* U+01F4 "Ǵ" */
    0x4, 0x4, 0x2, 0x0, 0x3, 0xe2, 0xa, 0x1,
    0xf, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+01F5 "ǵ" */
    0x10, 0x7, 0xe1, 0x86, 0x18, 0x5f, 0x5, 0x13,
    0x80,

    /* U+01FE "Ǿ" */
    0x4, 0x4, 0x2, 0x0, 0x3, 0xf2, 0x1a, 0x13,
    0x11, 0x90, 0xd0, 0x58, 0x4f, 0xc0,

    /* U+01FF "ǿ" */
    0x10, 0x7, 0xe3, 0x96, 0x9c, 0x5e,

    /* U+0228 "Ȩ" */
    0xfc, 0x21, 0xf8, 0x42, 0x1f, 0x20, 0x8c,

    /* U+0229 "ȩ" */
    0x7a, 0x18, 0x7f, 0x81, 0xe2, 0x4, 0x30,

    /* U+022C "Ȭ" */
    0x1c, 0x0, 0x4, 0x5, 0x80, 0x1, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+022D "ȭ" */
    0x78, 0x2, 0x94, 0x7a, 0x18, 0x61, 0x85, 0xe0,

    /* U+0301 "́" */
    0xc0,

    /* U+0302 "̂" */
    0x54,

    /* U+0303 "̃" */
    0xdb,

    /* U+0306 "̆" */
    0xac,

    /* U+0309 "̉" */
    0x98,

    /* U+031B "̛" */
    0x70,

    /* U+0323 "̣" */
    0x80,

    /* U+1E00 "Ḁ" */
    0x18, 0x18, 0x28, 0x24, 0x24, 0x7e, 0x42, 0x82,
    0x0, 0x18, 0x38,

    /* U+1E01 "ḁ" */
    0x7e, 0x18, 0x61, 0x85, 0xf0, 0x4, 0x30,

    /* U+1E04 "Ḅ" */
    0xfa, 0x18, 0x7e, 0x86, 0x18, 0x7e, 0x0, 0x2,
    0x0,

    /* U+1E05 "ḅ" */
    0x82, 0xf, 0xa1, 0x86, 0x18, 0x7e, 0x0, 0x2,
    0x0,

    /* U+1E08 "Ḉ" */
    0x8, 0x4, 0x0, 0x7, 0xc4, 0x14, 0x2, 0x1,
    0x0, 0x80, 0xa0, 0x8f, 0x81, 0x0, 0x40, 0xe0,

    /* U+1E09 "ḉ" */
    0x10, 0x20, 0xe6, 0x38, 0x10, 0x30, 0xbe, 0x10,
    0x10, 0xe0,

    /* U+1E0C "Ḍ" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x81, 0x82, 0xfc,
    0x0, 0x0, 0x30,

    /* U+1E0D "ḍ" */
    0x4, 0x17, 0xe1, 0x86, 0x18, 0x5f, 0x0, 0x1,
    0x0,

    /* U+1E16 "Ḗ" */
    0x0, 0x40, 0x1e, 0x3, 0xf8, 0x20, 0xfe, 0x8,
    0x20, 0xfc,

    /* U+1E17 "ḗ" */
    0x10, 0x7, 0x80, 0x7a, 0x1f, 0xe0, 0x81, 0xe0,

    /* U+1E18 "Ḙ" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f, 0x0, 0xc4,
    0x80,

    /* U+1E19 "ḙ" */
    0x7a, 0x1f, 0xe0, 0x81, 0xe0, 0xc, 0x40,

    /* U+1E1A "Ḛ" */
    0xfc, 0x21, 0xf8, 0x42, 0x1f, 0x2, 0x6c,

    /* U+1E1B "ḛ" */
    0x7a, 0x18, 0x7f, 0x81, 0xe0, 0xa, 0x58,

    /* U+1E24 "Ḥ" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1, 0x0,
    0x0, 0x40,

    /* U+1E25 "ḥ" */
    0x82, 0xb, 0xb1, 0x86, 0x18, 0x61, 0x0, 0x2,
    0x0,

    /* U+1E2E "Ḯ" */
    0x29, 0x60, 0x12, 0x49, 0x24, 0x80,

    /* U+1E2F "ḯ" */
    0x28, 0x60, 0x92, 0x49, 0x0,

    /* U+1E30 "Ḱ" */
    0x10, 0x80, 0x22, 0x92, 0x8c, 0x28, 0x92, 0x28,
    0x40,

    /* U+1E31 "ḱ" */
    0x44, 0x20, 0x8, 0x42, 0x54, 0xc5, 0x25, 0x10,

    /* U+1E32 "Ḳ" */
    0x8a, 0x4a, 0x30, 0xa2, 0x48, 0xa1, 0x0, 0x2,
    0x0,

    /* U+1E33 "ḳ" */
    0x84, 0x25, 0x4c, 0x52, 0x51, 0x0, 0x10,

    /* U+1E36 "Ḷ" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x3f, 0x0, 0x2,
    0x0,

    /* U+1E37 "ḷ" */
    0x55, 0x55, 0xc,

    /* U+1E38 "Ḹ" */
    0xf8, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x3f, 0x0, 0x0, 0x8,

    /* U+1E39 "ḹ" */
    0xf8, 0x8, 0x42, 0x10, 0x84, 0x21, 0x0, 0x6,
    0x0,

    /* U+1E3E "Ḿ" */
    0x8, 0x4, 0x0, 0x10, 0x1c, 0x1e, 0xe, 0x8b,
    0x45, 0x94, 0xca, 0x62, 0x20,

    /* U+1E3F "ḿ" */
    0x4, 0x4, 0x3d, 0xd1, 0x18, 0x8c, 0x46, 0x23,
    0x11,

    /* U+1E42 "Ṃ" */
    0x80, 0xe0, 0xf0, 0x74, 0x5a, 0x2c, 0xa6, 0x53,
    0x11, 0x0, 0x0, 0x2, 0x0,

    /* U+1E43 "ṃ" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x44, 0x0,
    0x0, 0x8, 0x0,

    /* U+1E46 "Ṇ" */
    0xc3, 0x86, 0x8c, 0x99, 0x31, 0x61, 0xc3, 0x0,
    0x0, 0x40,

    /* U+1E47 "ṇ" */
    0xbb, 0x18, 0x61, 0x86, 0x10, 0x0, 0x20,

    /* U+1E4C "Ṍ" */
    0x4, 0x4, 0x0, 0x2, 0x2, 0xc0, 0x0, 0xf8,
    0x82, 0x80, 0xc0, 0x60, 0x30, 0x14, 0x11, 0xf0,

    /* U+1E4D "ṍ" */
    0x10, 0x0, 0xa, 0x51, 0xe8, 0x61, 0x86, 0x17,
    0x80,

    /* U+1E4E "Ṏ" */
    0x14, 0x0, 0x4, 0x5, 0x80, 0x1, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1E4F "ṏ" */
    0x28, 0x0, 0xa, 0x51, 0xe8, 0x61, 0x86, 0x17,
    0x80,

    /* U+1E52 "Ṓ" */
    0x4, 0x4, 0x0, 0x3, 0x80, 0x1, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1E53 "ṓ" */
    0x10, 0x7, 0x80, 0x7a, 0x18, 0x61, 0x85, 0xe0,

    /* U+1E54 "Ṕ" */
    0x20, 0x80, 0x3e, 0x86, 0x18, 0x7e, 0x82, 0x8,
    0x0,

    /* U+1E55 "ṕ" */
    0x10, 0xf, 0xa1, 0x86, 0x18, 0x7e, 0x82, 0x8,
    0x0,

    /* U+1E5A "Ṛ" */
    0xfa, 0x18, 0x61, 0xfa, 0x48, 0xa1, 0x0, 0x2,
    0x0,

    /* U+1E5B "ṛ" */
    0xf4, 0x61, 0x8, 0x40, 0x0, 0x40,

    /* U+1E5C "Ṝ" */
    0x70, 0xf, 0xa1, 0x86, 0x1f, 0xa4, 0x8a, 0x10,
    0x0, 0x20,

    /* U+1E5D "ṝ" */
    0xf0, 0x3d, 0x18, 0x42, 0x10, 0x0, 0x10,

    /* U+1E62 "Ṣ" */
    0x72, 0x28, 0x1c, 0xe, 0x18, 0x5e, 0x0, 0x1,
    0x0,

    /* U+1E63 "ṣ" */
    0x74, 0x10, 0x78, 0xb8, 0x0, 0x20,

    /* U+1E64 "Ṥ" */
    0x10, 0x0, 0x4, 0x20, 0x7, 0x22, 0x81, 0xc0,
    0xe1, 0x85, 0xe0,

    /* U+1E65 "ṥ" */
    0x10, 0x0, 0x42, 0x3a, 0x8, 0x3c, 0x5c,

    /* U+1E68 "Ṩ" */
    0x10, 0x0, 0x1c, 0x8a, 0x7, 0x3, 0x86, 0x17,
    0x80, 0x0, 0x40,

    /* U+1E69 "ṩ" */
    0x20, 0x1d, 0x4, 0x1e, 0x2e, 0x0, 0x8,

    /* U+1E6C "Ṭ" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x0,
    0x0, 0x40,

    /* U+1E6D "ṭ" */
    0x44, 0xf4, 0x44, 0x43, 0x0, 0x20,

    /* U+1E78 "Ṹ" */
    0x10, 0x20, 0x1, 0x1, 0x80, 0x20, 0xc1, 0x83,
    0x6, 0xc, 0x14, 0x47, 0x0,

    /* U+1E79 "ṹ" */
    0x10, 0x40, 0x1a, 0x12, 0x18, 0x61, 0x86, 0x17,
    0xc0,

    /* U+1E7C "Ṽ" */
    0x28, 0xb0, 0x4, 0x18, 0x50, 0x92, 0x24, 0x48,
    0x60, 0x40,

    /* U+1E7D "ṽ" */
    0x29, 0x68, 0x52, 0x49, 0x23, 0x4,

    /* U+1E7E "Ṿ" */
    0x83, 0x5, 0x12, 0x22, 0x85, 0xa, 0x8, 0x0,
    0x0, 0x40,

    /* U+1E7F "ṿ" */
    0x86, 0x24, 0x94, 0x30, 0xc0, 0x0, 0x30,

    /* U+1E82 "Ẃ" */
    0x2, 0x0, 0x40, 0x0, 0x8, 0x61, 0x86, 0x24,
    0xa2, 0x49, 0x24, 0x94, 0x31, 0x43, 0x14, 0x10,
    0x80,

    /* U+1E83 "ẃ" */
    0x8, 0x0, 0x22, 0x33, 0x25, 0x52, 0xa9, 0x98,
    0x44,

    /* U+1E88 "Ẉ" */
    0x86, 0x18, 0x62, 0x4a, 0x24, 0x92, 0x49, 0x43,
    0x14, 0x31, 0x41, 0x8, 0x0, 0x0, 0x0, 0x4,
    0x0,

    /* U+1E89 "ẉ" */
    0x88, 0xcc, 0x95, 0x4a, 0xa6, 0x61, 0x10, 0x0,
    0x0, 0x8, 0x0,

    /* U+1E92 "Ẓ" */
    0x7c, 0x10, 0x84, 0x20, 0x84, 0x3f, 0x0, 0x1,
    0x0,

    /* U+1E93 "ẓ" */
    0x78, 0x84, 0x44, 0x7c, 0x0, 0x20,

    /* U+1EA0 "Ạ" */
    0x10, 0x50, 0xa1, 0x24, 0x4f, 0xa0, 0xc1, 0x0,
    0x0, 0x40,

    /* U+1EA1 "ạ" */
    0x7e, 0x18, 0x61, 0x85, 0xf0, 0x0, 0x10,

    /* U+1EA2 "Ả" */
    0x10, 0x10, 0x40, 0x1, 0x5, 0xa, 0x12, 0x44,
    0xfa, 0xc, 0x10,

    /* U+1EA3 "ả" */
    0x30, 0x7, 0xe1, 0x86, 0x18, 0x5f,

    /* U+1EA4 "Ấ" */
    0x4, 0x0, 0xe0, 0x1, 0x5, 0xa, 0x12, 0x44,
    0xfa, 0xc, 0x10,

    /* U+1EA5 "ấ" */
    0x8, 0x23, 0x0, 0x7e, 0x18, 0x61, 0x85, 0xf0,

    /* U+1EA6 "Ầ" */
    0x8, 0x10, 0x41, 0x40, 0x2, 0xa, 0x14, 0x24,
    0x89, 0xf4, 0x18, 0x20,

    /* U+1EA7 "ầ" */
    0x10, 0x3, 0x2, 0x7e, 0x18, 0x61, 0x85, 0xf0,

    /* U+1EA8 "Ẩ" */
    0xc, 0x8, 0x1, 0xc0, 0x2, 0xa, 0x14, 0x24,
    0x89, 0xf4, 0x18, 0x20,

    /* U+1EA9 "ẩ" */
    0x8, 0x60, 0x8c, 0x9, 0xf8, 0x61, 0x86, 0x17,
    0xc0,

    /* U+1EAA "Ẫ" */
    0x34, 0x2c, 0x18, 0x0, 0x8, 0x18, 0x24, 0x24,
    0x24, 0x7e, 0x42, 0x81,

    /* U+1EAB "ẫ" */
    0x29, 0x40, 0xc, 0x1, 0xf8, 0x61, 0x86, 0x17,
    0xc0,

    /* U+1EAC "Ậ" */
    0x10, 0x50, 0x0, 0x82, 0x85, 0x9, 0x22, 0x7d,
    0x6, 0x8, 0x0, 0x2, 0x0,

    /* U+1EAD "ậ" */
    0x30, 0x27, 0xe1, 0x86, 0x18, 0x5f, 0x0, 0x1,
    0x0,

    /* U+1EAE "Ắ" */
    0x8, 0x10, 0x1, 0x21, 0x80, 0x4, 0x14, 0x28,
    0x49, 0x13, 0xe8, 0x30, 0x40,

    /* U+1EAF "ắ" */
    0x10, 0x40, 0x12, 0x31, 0xf8, 0x61, 0x86, 0x17,
    0xc0,

    /* U+1EB0 "Ằ" */
    0x20, 0x20, 0x41, 0x21, 0x80, 0x4, 0x14, 0x28,
    0x49, 0x13, 0xe8, 0x30, 0x40,

    /* U+1EB1 "ằ" */
    0x20, 0x0, 0x12, 0x31, 0xf8, 0x61, 0x86, 0x17,
    0xc0,

    /* U+1EB2 "Ẳ" */
    0x18, 0x10, 0x1, 0x21, 0x80, 0x4, 0x14, 0x28,
    0x49, 0x13, 0xe8, 0x30, 0x40,

    /* U+1EB3 "ẳ" */
    0x10, 0xc1, 0x0, 0x48, 0xc7, 0xe1, 0x86, 0x18,
    0x5f,

    /* U+1EB4 "Ẵ" */
    0x14, 0x2c, 0x24, 0x18, 0x0, 0x8, 0x18, 0x24,
    0x24, 0x24, 0x7e, 0x42, 0x81,

    /* U+1EB5 "ẵ" */
    0x29, 0x40, 0x12, 0x31, 0xf8, 0x61, 0x86, 0x17,
    0xc0,

    /* U+1EB6 "Ặ" */
    0x24, 0x30, 0x0, 0x82, 0x85, 0x9, 0x22, 0x7d,
    0x6, 0x8, 0x0, 0x2, 0x0,

    /* U+1EB7 "ặ" */
    0x48, 0xc7, 0xe1, 0x86, 0x18, 0x5f, 0x0, 0x1,
    0x0,

    /* U+1EB8 "Ẹ" */
    0xfe, 0x8, 0x3f, 0x82, 0x8, 0x3f, 0x0, 0x2,
    0x0,

    /* U+1EB9 "ẹ" */
    0x7a, 0x18, 0x7f, 0x81, 0xe0, 0x0, 0x10,

    /* U+1EBA "Ẻ" */
    0x30, 0x42, 0x0, 0xfe, 0x8, 0x3f, 0x82, 0x8,
    0x3f,

    /* U+1EBB "ẻ" */
    0x30, 0x7, 0xa1, 0xfe, 0x8, 0x1e,

    /* U+1EBC "Ẽ" */
    0x68, 0x60, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0,

    /* U+1EBD "ẽ" */
    0x29, 0x47, 0xa1, 0xfe, 0x8, 0x1e,

    /* U+1EBE "Ế" */
    0x8, 0x3, 0x0, 0xfe, 0x8, 0x3f, 0x82, 0x8,
    0x3f,

    /* U+1EBF "ế" */
    0x8, 0x43, 0x0, 0x7a, 0x1f, 0xe0, 0x81, 0xe0,

    /* U+1EC0 "Ề" */
    0x10, 0x40, 0xc, 0x3, 0xf8, 0x20, 0xfe, 0x8,
    0x20, 0xfc,

    /* U+1EC1 "ề" */
    0x10, 0x43, 0x10, 0x7a, 0x1f, 0xe0, 0x81, 0xe0,

    /* U+1EC2 "Ể" */
    0x18, 0x20, 0xc, 0x3, 0xf8, 0x20, 0xfe, 0x8,
    0x20, 0xfc,

    /* U+1EC3 "ể" */
    0x8, 0x61, 0xc, 0x41, 0xe8, 0x7f, 0x82, 0x7,
    0x80,

    /* U+1EC4 "Ễ" */
    0x68, 0x43, 0x0, 0xfe, 0x8, 0x3f, 0x82, 0x8,
    0x3f,

    /* U+1EC5 "ễ" */
    0x69, 0x40, 0xc, 0x1, 0xe8, 0x7f, 0x82, 0x7,
    0x80,

    /* U+1EC6 "Ệ" */
    0x0, 0xc0, 0x3f, 0x82, 0xf, 0xe0, 0x82, 0xf,
    0xc0, 0x0, 0x80,

    /* U+1EC7 "ệ" */
    0x31, 0x7, 0xa1, 0x87, 0xf8, 0x1e, 0x0, 0x1,
    0x0,

    /* U+1EC8 "Ỉ" */
    0x45, 0x4, 0x92, 0x49, 0x20,

    /* U+1EC9 "ỉ" */
    0xe9, 0x24, 0x92,

    /* U+1ECA "Ị" */
    0xff, 0x20,

    /* U+1ECB "ị" */
    0xbf, 0x20,

    /* U+1ECC "Ọ" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x4,
    0x7c, 0x0, 0x0, 0x2, 0x0,

    /* U+1ECD "ọ" */
    0x7a, 0x18, 0x61, 0x85, 0xe0, 0x0, 0x10,

    /* U+1ECE "Ỏ" */
    0x8, 0xa, 0x2, 0x0, 0x3, 0xe2, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+1ECF "ỏ" */
    0x30, 0x7, 0xa1, 0x86, 0x18, 0x5e,

    /* U+1ED0 "Ố" */
    0x4, 0x2, 0x2, 0x2, 0x80, 0x1, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1ED1 "ố" */
    0x8, 0x3, 0x0, 0x7a, 0x18, 0x61, 0x85, 0xe0,

    /* U+1ED2 "Ồ" */
    0x8, 0x2, 0x2, 0x2, 0x80, 0x1, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1ED3 "ồ" */
    0x10, 0x3, 0x0, 0x7a, 0x18, 0x61, 0x85, 0xe0,

    /* U+1ED4 "Ổ" */
    0x4, 0x1, 0x1, 0x3, 0x0, 0x41, 0xf1, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+1ED5 "ổ" */
    0x10, 0x61, 0xc, 0x1, 0xe8, 0x61, 0x86, 0x17,
    0x80,

    /* U+1ED6 "Ỗ" */
    0x3c, 0x4, 0x5, 0x0, 0x3, 0xe2, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+1ED7 "ỗ" */
    0x69, 0x40, 0xc, 0x1, 0xe8, 0x61, 0x86, 0x17,
    0x80,

    /* U+1ED8 "Ộ" */
    0x8, 0xa, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80, 0x0, 0x0, 0x40,

    /* U+1ED9 "ộ" */
    0x30, 0x7, 0xa1, 0x86, 0x18, 0x5e, 0x0, 0x1,
    0x0,

    /* U+1EDA "Ớ" */
    0x0, 0x4, 0x0, 0x80, 0x43, 0xe2, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+1EDB "ớ" */
    0x10, 0x17, 0xa1, 0x86, 0x18, 0x5e,

    /* U+1EDC "Ờ" */
    0x10, 0x8, 0x0, 0x80, 0x43, 0xe2, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+1EDD "ờ" */
    0x20, 0x17, 0xa1, 0x86, 0x18, 0x5e,

    /* U+1EDE "Ở" */
    0x8, 0xc, 0x2, 0x80, 0x43, 0xe2, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+1EDF "ở" */
    0x30, 0x17, 0xa1, 0x86, 0x18, 0x5e,

    /* U+1EE0 "Ỡ" */
    0x14, 0x15, 0x0, 0x87, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x8f, 0x80,

    /* U+1EE1 "ỡ" */
    0x29, 0x57, 0xa1, 0x86, 0x18, 0x5e,

    /* U+1EE2 "Ợ" */
    0x2, 0x1, 0xf, 0x88, 0x28, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x1f, 0x0, 0x0, 0x0, 0x80,

    /* U+1EE3 "ợ" */
    0x5, 0xe8, 0x61, 0x86, 0x17, 0x80, 0x0, 0x40,

    /* U+1EE4 "Ụ" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x51, 0x1c, 0x0,
    0x0, 0x40,

    /* U+1EE5 "ụ" */
    0x86, 0x18, 0x61, 0x85, 0xf0, 0x0, 0x20,

    /* U+1EE6 "Ủ" */
    0x10, 0x10, 0x40, 0x8, 0x30, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+1EE7 "ủ" */
    0x30, 0x8, 0x61, 0x86, 0x18, 0x5f,

    /* U+1EE8 "Ứ" */
    0x8, 0x8, 0x4, 0x20, 0x18, 0x34, 0x12, 0x9,
    0x4, 0x82, 0x41, 0x11, 0x7, 0x0,

    /* U+1EE9 "ứ" */
    0x10, 0x6, 0x14, 0x28, 0x50, 0xa1, 0x3e,

    /* U+1EEA "Ừ" */
    0x0, 0x8, 0x4, 0x20, 0x18, 0x34, 0x12, 0x9,
    0x4, 0x82, 0x41, 0x11, 0x7, 0x0,

    /* U+1EEB "ừ" */
    0x20, 0x6, 0x14, 0x28, 0x50, 0xa1, 0x3e,

    /* U+1EEC "Ử" */
    0x10, 0x4, 0x4, 0x20, 0x18, 0x34, 0x12, 0x9,
    0x4, 0x82, 0x41, 0x11, 0x7, 0x0,

    /* U+1EED "ử" */
    0x30, 0x6, 0x14, 0x28, 0x50, 0xa1, 0x3e,

    /* U+1EEE "Ữ" */
    0x20, 0xc, 0x40, 0x30, 0x68, 0x24, 0x12, 0x9,
    0x4, 0x82, 0x22, 0xe, 0x0,

    /* U+1EEF "ữ" */
    0x28, 0xb6, 0x14, 0x28, 0x50, 0xa1, 0x3e,

    /* U+1EF0 "Ự" */
    0x0, 0x80, 0x60, 0xd0, 0x48, 0x24, 0x12, 0x9,
    0x4, 0x44, 0x1c, 0x0, 0x0, 0x1, 0x0,

    /* U+1EF1 "ự" */
    0x3, 0xa, 0x14, 0x28, 0x50, 0x9f, 0x0, 0x0,
    0x40,

    /* U+1EF2 "Ỳ" */
    0x20, 0x20, 0x4, 0x14, 0x48, 0x8a, 0x8, 0x10,
    0x20, 0x40,

    /* U+1EF3 "ỳ" */
    0x20, 0x8, 0x51, 0x49, 0x23, 0x4, 0x20, 0x82,
    0x0,

    /* U+1EF4 "Ỵ" */
    0x82, 0x89, 0x11, 0x41, 0x2, 0x4, 0x8, 0x0,
    0x0, 0x40,

    /* U+1EF5 "ỵ" */
    0x85, 0x14, 0x92, 0x30, 0x42, 0x8, 0x30,

    /* U+1EF6 "Ỷ" */
    0x10, 0x10, 0x40, 0x8, 0x28, 0x91, 0x14, 0x10,
    0x20, 0x40, 0x80,

    /* U+1EF7 "ỷ" */
    0x30, 0x8, 0x51, 0x49, 0x23, 0x4, 0x20, 0x82,
    0x0,

    /* U+1EF8 "Ỹ" */
    0x24, 0xb0, 0x4, 0x14, 0x48, 0x8a, 0x8, 0x10,
    0x20, 0x40,

    /* U+1EF9 "ỹ" */
    0x29, 0x68, 0x51, 0x48, 0xa3, 0x4, 0x20, 0x82,
    0x0,

    /* U+2013 "–" */
    0xfc,

    /* U+2014 "—" */
    0xff,

    /* U+2018 "‘" */
    0x28,

    /* U+2019 "’" */
    0xa8,

    /* U+201C "“" */
    0x1a, 0xb0,

    /* U+201D "”" */
    0xb9, 0xa0,

    /* U+2020 "†" */
    0x27, 0xc8, 0x42, 0x0,

    /* U+2021 "‡" */
    0x27, 0xc9, 0xf2, 0x0,

    /* U+2026 "…" */
    0x2, 0xb0,

    /* U+2030 "‰" */
    0xf4, 0x9, 0x80, 0x68, 0x0, 0x80, 0x16, 0x61,
    0x99, 0x29, 0x92, 0x66, 0x20, 0x0,

    /* U+2032 "′" */
    0xe0,

    /* U+2033 "″" */
    0xdb, 0x0};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 81, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 51, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 55, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3, .adv_w = 134, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 153, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 26, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 39, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 34, .adv_w = 77, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 40, .adv_w = 77, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 46, .adv_w = 70, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 48, .adv_w = 115, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 52, .adv_w = 53, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 53, .adv_w = 88, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 54, .adv_w = 51, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 69, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 60, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 50, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 101, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 117, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 87, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 51, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 53, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 117, .adv_w = 115, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 120, .adv_w = 115, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 122, .adv_w = 115, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 125, .adv_w = 108, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 188, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 143, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 121, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 148, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 142, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 147, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 142, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 40, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 169, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 154, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 155, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 262, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 145, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 189, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 80, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 333, .adv_w = 65, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 338, .adv_w = 80, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 344, .adv_w = 115, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 346, .adv_w = 111, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 347, .adv_w = 24, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 348, .adv_w = 118, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 105, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 67, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 386, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 36, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 58, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 398, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 34, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 165, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 114, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 110, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 428, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 435, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 72, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 112, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 142, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 89, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 475, .adv_w = 89, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 88, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 484, .adv_w = 39, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 486, .adv_w = 88, .box_w = 4, .box_h = 10, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 491, .adv_w = 115, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 493, .adv_w = 81, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 51, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 496, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 503, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 115, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 514, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 39, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 523, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 42, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 529, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 53, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 539, .adv_w = 84, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 541, .adv_w = 115, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 543, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 547, .adv_w = 78, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 548, .adv_w = 72, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 550, .adv_w = 115, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 53, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 556, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 558, .adv_w = 24, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 559, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 567, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 574, .adv_w = 78, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 575, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 577, .adv_w = 29, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 578, .adv_w = 50, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 580, .adv_w = 85, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 582, .adv_w = 132, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 591, .adv_w = 129, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 600, .adv_w = 157, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 612, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 618, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 121, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 121, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 148, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 148, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 702, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 40, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 40, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 40, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 40, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 142, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 799, .adv_w = 154, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 154, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 154, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 115, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 841, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 884, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 894, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 111, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 111, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 922, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 928, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 934, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 162, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 959, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 967, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 985, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 991, .adv_w = 36, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 993, .adv_w = 36, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 36, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 998, .adv_w = 36, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1000, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1006, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1018, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1024, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1030, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1036, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1042, .adv_w = 115, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1046, .adv_w = 110, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1052, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1058, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1064, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1070, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1076, .adv_w = 100, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1085, .adv_w = 119, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1094, .adv_w = 100, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1103, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1119, .adv_w = 121, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1130, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1137, .adv_w = 148, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1151, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1157, .adv_w = 142, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1166, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1173, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1182, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1189, .adv_w = 40, .box_w = 4, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1195, .adv_w = 36, .box_w = 4, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1199, .adv_w = 100, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1208, .adv_w = 34, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1211, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1221, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1227, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1236, .adv_w = 83, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1241, .adv_w = 106, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1250, .adv_w = 84, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1255, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1265, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1271, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1281, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1288, .adv_w = 107, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1302, .adv_w = 154, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1314, .adv_w = 110, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1320, .adv_w = 145, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1332, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1339, .adv_w = 145, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1352, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1361, .adv_w = 154, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1374, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1381, .adv_w = 147, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1395, .adv_w = 119, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1404, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1418, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1424, .adv_w = 109, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1431, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1438, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1453, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1461, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1462, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1463, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1464, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1465, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1466, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1467, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1468, .adv_w = 121, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1479, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1486, .adv_w = 121, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1495, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1504, .adv_w = 148, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1520, .adv_w = 107, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1530, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1541, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1550, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1560, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1568, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1577, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1584, .adv_w = 109, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1591, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1598, .adv_w = 142, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1608, .adv_w = 114, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1617, .adv_w = 40, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1623, .adv_w = 36, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1628, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1637, .adv_w = 90, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1645, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1654, .adv_w = 90, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1661, .adv_w = 100, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1670, .adv_w = 34, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1673, .adv_w = 100, .box_w = 8, .box_h = 13, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1686, .adv_w = 34, .box_w = 5, .box_h = 13, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1695, .adv_w = 169, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1708, .adv_w = 165, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1717, .adv_w = 169, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1730, .adv_w = 165, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1741, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1751, .adv_w = 114, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1758, .adv_w = 154, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1774, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1783, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1807, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1822, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1830, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1839, .adv_w = 119, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1848, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1857, .adv_w = 83, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1863, .adv_w = 118, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1873, .adv_w = 83, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1880, .adv_w = 106, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1889, .adv_w = 84, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1895, .adv_w = 106, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1906, .adv_w = 84, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1913, .adv_w = 106, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1924, .adv_w = 84, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1931, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1941, .adv_w = 72, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1947, .adv_w = 145, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1960, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1969, .adv_w = 118, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1979, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1985, .adv_w = 118, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1995, .adv_w = 97, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2002, .adv_w = 189, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2019, .adv_w = 142, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2028, .adv_w = 189, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2045, .adv_w = 142, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2056, .adv_w = 107, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2065, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2071, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2081, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2088, .adv_w = 121, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2099, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2105, .adv_w = 121, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2116, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2124, .adv_w = 121, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2136, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2144, .adv_w = 121, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2156, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2165, .adv_w = 121, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2177, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2186, .adv_w = 121, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2199, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2208, .adv_w = 121, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2221, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2230, .adv_w = 121, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2243, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2252, .adv_w = 121, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2265, .adv_w = 118, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2274, .adv_w = 121, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2287, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2296, .adv_w = 121, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2309, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2318, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2327, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2334, .adv_w = 109, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2343, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2349, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2358, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2364, .adv_w = 109, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2373, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2381, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2391, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2399, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2409, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2418, .adv_w = 109, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2427, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2436, .adv_w = 109, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2447, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2456, .adv_w = 40, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2461, .adv_w = 36, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2464, .adv_w = 40, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2466, .adv_w = 36, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2468, .adv_w = 154, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2481, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2488, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2502, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2508, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2523, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2531, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2546, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2554, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2569, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2578, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2592, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2601, .adv_w = 154, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2617, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2626, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2640, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2646, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2660, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2666, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2680, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2686, .adv_w = 154, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2699, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2705, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2720, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2728, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2738, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2745, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2756, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2762, .adv_w = 145, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2776, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2783, .adv_w = 145, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2797, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2804, .adv_w = 145, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2818, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2825, .adv_w = 145, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2838, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2845, .adv_w = 145, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2860, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2869, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2879, .adv_w = 100, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2888, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2898, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2905, .adv_w = 119, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2916, .adv_w = 100, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2925, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2935, .adv_w = 100, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2944, .adv_w = 121, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2945, .adv_w = 154, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2946, .adv_w = 46, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2947, .adv_w = 46, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2948, .adv_w = 82, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2950, .adv_w = 82, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2952, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2956, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2960, .adv_w = 120, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2962, .adv_w = 217, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2976, .adv_w = 41, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2977, .adv_w = 66, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5}};

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
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 2, 0, 0,
        3, 4, 5, 0, 6, 7, 8, 9,
        10, 0, 11, 0, 0, 0, 0, 0,
        12, 0, 13, 14, 0, 15, 0, 16,
        17, 5, 5, 18, 19, 20, 5, 5,
        17, 21, 17, 22, 0, 23, 18, 24,
        24, 25, 26, 0, 0, 0, 0, 0,
        0, 0, 27, 28, 0, 27, 29, 30,
        0, 31, 32, 33, 34, 27, 31, 31,
        28, 28, 35, 36, 0, 37, 27, 38,
        38, 0, 39, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 27, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 40, 13,
        13, 13, 13, 13, 13, 0, 0, 0,
        0, 0, 0, 5, 5, 41, 0, 15,
        5, 17, 17, 17, 17, 17, 0, 17,
        18, 18, 18, 18, 26, 0, 0, 27,
        27, 27, 27, 27, 27, 29, 0, 29,
        29, 29, 29, 32, 42, 41, 43, 0,
        31, 28, 28, 28, 28, 28, 0, 28,
        27, 27, 27, 27, 39, 0, 39, 13,
        27, 13, 27, 0, 0, 15, 0, 0,
        29, 5, 44, 20, 27, 5, 31, 22,
        36, 0, 0, 18, 27, 18, 27, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 17, 28, 0, 29, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 14, 28, 0, 0, 15, 27,
        0, 0, 0, 0, 0, 0, 5, 31,
        0, 43, 0, 0, 0, 0, 20, 27,
        0, 0, 5, 31, 0, 0, 5, 31,
        17, 28, 0, 0, 17, 28, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 23, 45, 0, 0, 0, 0,
        0, 0, 24, 0, 0, 0, 0, 0,
        13, 27, 13, 0, 0, 0, 0, 0,
        0, 0, 13, 0, 13, 27, 13, 0,
        13, 0, 13, 0, 13, 0, 13, 0,
        0, 29, 0, 0, 0, 29, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 29,
        0, 43, 5, 32, 17, 28, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        17, 28, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 18, 27, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 26, 39, 0, 39, 0, 0,
        26, 39, 0, 0, 46, 2, 0, 0,
        0, 0, 0, 0, 0, 0};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
    {
        0, 0, 1, 2, 0, 0, 3, 0,
        2, 0, 0, 0, 0, 4, 0, 5,
        6, 0, 0, 7, 0, 8, 9, 0,
        10, 0, 11, 0, 0, 0, 0, 0,
        12, 0, 13, 0, 14, 0, 0, 0,
        14, 0, 0, 15, 0, 0, 0, 0,
        14, 0, 14, 0, 0, 16, 0, 17,
        17, 0, 18, 0, 0, 19, 0, 0,
        0, 0, 20, 21, 20, 20, 20, 22,
        20, 23, 24, 25, 23, 21, 26, 26,
        20, 27, 20, 26, 28, 29, 30, 31,
        31, 0, 32, 0, 0, 0, 0, 0,
        0, 1, 33, 0, 0, 0, 0, 0,
        0, 0, 20, 0, 0, 0, 0, 3,
        0, 0, 0, 0, 0, 0, 34, 0,
        0, 0, 0, 0, 0, 0, 0, 13,
        13, 13, 13, 13, 13, 13, 14, 0,
        0, 0, 0, 0, 0, 35, 0, 0,
        0, 14, 14, 14, 14, 14, 0, 14,
        0, 0, 0, 0, 18, 0, 21, 20,
        20, 20, 20, 20, 20, 0, 20, 20,
        20, 20, 20, 36, 24, 37, 38, 0,
        26, 20, 20, 20, 20, 20, 0, 20,
        30, 30, 30, 30, 32, 0, 32, 13,
        20, 13, 20, 14, 20, 0, 0, 0,
        20, 0, 39, 0, 23, 0, 26, 0,
        26, 0, 28, 0, 30, 0, 30, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 14, 20, 0, 20, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 21, 14, 0, 0, 20,
        0, 0, 0, 0, 0, 0, 0, 23,
        0, 40, 0, 0, 0, 0, 0, 23,
        0, 0, 0, 26, 0, 0, 0, 26,
        14, 20, 0, 0, 14, 20, 0, 0,
        0, 0, 0, 0, 0, 28, 0, 0,
        0, 0, 16, 29, 0, 0, 0, 0,
        0, 0, 17, 0, 0, 0, 0, 0,
        13, 20, 13, 0, 0, 0, 0, 0,
        0, 0, 13, 0, 13, 20, 13, 0,
        13, 0, 13, 0, 13, 0, 13, 0,
        0, 20, 0, 0, 0, 20, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 20,
        0, 40, 0, 24, 14, 20, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        14, 20, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 30, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 18, 32, 0, 32, 0, 0,
        18, 32, 0, 0, 0, 41, 0, 42,
        0, 0, 5, 0, 0, 0};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
    {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -12, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -10, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 4, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 4, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -7, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -6,
        0, 0, -7, 0, -6, -7, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -12, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, 0, 2,
        0, -10, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -8, -18, 0,
        0, -9, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -8,
        -14, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -6, 0,
        0, 0, 0, -17, 0, 0, 0, 0,
        0, -8, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -12,
        -11, -17, 0, 0, 0, 0, 0, 0,
        -13, 0, 0, 0, 0, 0, -1, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -17, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -8, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -10, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -17, -2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -6, -7, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -16, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -13, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, 0, 0, 0, 0, 0, -4,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -4, -3, -4, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -9,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 2, -10, 0, -12, 0, -16,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -6, 0, 0,
        0, 0, 0, 0, 0, 0, -9, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -4, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -4, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 4, 0,
        0, 2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -10, 0, -19, 0, 0, 0, 0, -16,
        0, 0, 0, -6, -23, -6, 0, -13,
        0, -10, -6, -6, -16, 0, 0, 6,
        0, 0, 0, 0, 6, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -17, 0, 0, 0, 0, 0,
        0, -10, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -4, 0, 0, -10, 0,
        0, 3, 0, 2, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -6,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -15, 0,
        -19, 0, 0, 0, 0, -17, 0, 0,
        0, -4, 0, 0, -15, -15, 0, -8,
        -6, 0, -17, 0, 0, 3, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, -3, 0, 0, -22, 0, 0, 0,
        0, 0, 2, 0, 2, 3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -16, 0, 0,
        0, 0, 0, -3, 0, 0, -21, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        -9, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -10, -10, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -10, 0, -8,
        0, -3, -19, 0, 0, 0, 0, 0,
        0, 0, -10, -10, 0, 1, 0, 4,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -6, 0, 0, -16, 0, 0, 0,
        0, 0, 0, -1, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -2, -4, 0, 5, -23, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -6, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        10, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, -2, 0, 0, 0, 0,
        0, 0, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -4, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -4, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -10, -16, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -16,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -8, -12, 0, -2, -6,
        0, -5, -4, 0, -4, -6, 0, -6,
        -8, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, -12, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        4, 0, 0, -12, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -8,
        -4, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -4, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -17, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 8, 0, 6, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 8, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 7, 0, 7, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 17, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, -12, 0, -2, -6,
        0, -5, -4, 0, -4, -6, 0, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -7, 0, 0, 0, 0, 0,
        0, 0, 0, 0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
    {
        .class_pair_values = kern_class_values,
        .left_class_mapping = kern_left_class_mapping,
        .right_class_mapping = kern_right_class_mapping,
        .left_class_cnt = 46,
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
const lv_font_t elms_sans_light_12 = {
#else
lv_font_t elms_sans_light_12 = {
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

#endif /*#if ELMS_SANS_LIGHT_12*/
