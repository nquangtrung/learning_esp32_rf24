/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --stride 1 --align 1 --font ElmsSans-Bold.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o elms_sans_bold_14.c
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

#ifndef ELMS_SANS_BOLD_14
#define ELMS_SANS_BOLD_14 1
#endif

#if ELMS_SANS_BOLD_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0x30,

    /* U+0022 "\"" */
    0xfd, 0xd0,

    /* U+0023 "#" */
    0x19, 0x88, 0xdf, 0xe6, 0x62, 0x33, 0x11, 0x99,
    0xfe, 0xc4, 0x66, 0x0,

    /* U+0024 "$" */
    0x3c, 0x6e, 0x68, 0x78, 0x3e, 0xf, 0xb, 0x4b,
    0x6e, 0x3c, 0x8,

    /* U+0025 "%" */
    0x61, 0x12, 0x62, 0x48, 0x33, 0x0, 0x40, 0x18,
    0x2, 0x70, 0xd2, 0x12, 0x46, 0x38, 0x80, 0x0,

    /* U+0026 "&" */
    0x7e, 0x60, 0x36, 0x3f, 0x66, 0xc6, 0xc6, 0xc6,
    0x6c, 0x38,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x1b, 0x19, 0x8c, 0x63, 0x18, 0x63, 0x6,

    /* U+0029 ")" */
    0xc3, 0x8c, 0x31, 0x8c, 0x63, 0x33, 0xb0,

    /* U+002A "*" */
    0x4f, 0xf4,

    /* U+002B "+" */
    0x31, 0x8d, 0xf3, 0x18,

    /* U+002C "," */
    0xd8,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x8, 0x61, 0x84, 0x10, 0xc2, 0x8, 0x61, 0x84,
    0x30,

    /* U+0030 "0" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x66, 0x3c,

    /* U+0031 "1" */
    0xed, 0xb6, 0xdb, 0x6c,

    /* U+0032 "2" */
    0x3c, 0xcf, 0x18, 0x71, 0xe7, 0x9c, 0x30, 0xc1,
    0xfc,

    /* U+0033 "3" */
    0x7e, 0x18, 0x61, 0xc0, 0xc0, 0xc1, 0xe3, 0x4c,
    0x70,

    /* U+0034 "4" */
    0xe, 0xe, 0x1e, 0x36, 0x26, 0x66, 0xff, 0x6,
    0x6, 0x6,

    /* U+0035 "5" */
    0x7e, 0x60, 0x60, 0x7c, 0x66, 0x3, 0x3, 0x43,
    0x66, 0x3c,

    /* U+0036 "6" */
    0x10, 0x60, 0x83, 0xe6, 0xf8, 0xf1, 0xe3, 0x6c,
    0x70,

    /* U+0037 "7" */
    0xfc, 0x30, 0x86, 0x18, 0x43, 0xc, 0x61, 0x80,

    /* U+0038 "8" */
    0x79, 0x9b, 0x36, 0x67, 0x9d, 0xf1, 0xe3, 0xee,
    0x70,

    /* U+0039 "9" */
    0x38, 0xdb, 0x1e, 0x3c, 0x6d, 0x8f, 0x4, 0x18,
    0x20,

    /* U+003A ":" */
    0xc0, 0xc,

    /* U+003B ";" */
    0xc0, 0xd, 0x80,

    /* U+003C "<" */
    0x1b, 0xf1, 0xc3, 0x84,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x87, 0x8e, 0xfe, 0x0,

    /* U+003F "?" */
    0x79, 0x8f, 0x18, 0x30, 0xe3, 0x8c, 0x18, 0x0,
    0x60,

    /* U+0040 "@" */
    0xf, 0xc0, 0xc3, 0x8, 0xc, 0x9f, 0x3d, 0x99,
    0xe8, 0xcf, 0x66, 0x59, 0xdc, 0x60, 0x1, 0x80,
    0x7, 0x0,

    /* U+0041 "A" */
    0xc, 0x7, 0x81, 0xe0, 0x48, 0x33, 0xc, 0xc6,
    0x19, 0xfe, 0x61, 0xb0, 0x30,

    /* U+0042 "B" */
    0xfc, 0xc6, 0xc6, 0xc4, 0xfe, 0xc3, 0xc3, 0xc3,
    0xc7, 0xfe,

    /* U+0043 "C" */
    0x1f, 0x1c, 0x66, 0xb, 0x0, 0xc0, 0x30, 0xc,
    0x9, 0x83, 0x71, 0x87, 0xc0,

    /* U+0044 "D" */
    0xfc, 0x63, 0xb0, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x86, 0xc7, 0x7e, 0x0,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,
    0xfc,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1,
    0x80,

    /* U+0047 "G" */
    0x1f, 0x1c, 0x46, 0x3, 0x0, 0xc7, 0xf0, 0x3c,
    0xd, 0x86, 0x73, 0x87, 0x80,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3f, 0xfe, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+0049 "I" */
    0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0xc3,
    0x66, 0x3c,

    /* U+004B "K" */
    0xc7, 0xc6, 0xcc, 0xd8, 0xf0, 0xd8, 0xcc, 0xce,
    0xc6, 0xc3,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0xfc,

    /* U+004D "M" */
    0xe0, 0x7e, 0x7, 0xf0, 0xff, 0xf, 0xd9, 0xbd,
    0x9b, 0xc9, 0x3c, 0xf3, 0xc7, 0x3c, 0x63,

    /* U+004E "N" */
    0xe1, 0xf0, 0xfc, 0x7b, 0x3d, 0x9e, 0x6f, 0x37,
    0x8f, 0xc3, 0xe1, 0xc0,

    /* U+004F "O" */
    0x1e, 0x1c, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0x86, 0x73, 0x87, 0x80,

    /* U+0050 "P" */
    0xfc, 0xc7, 0xc3, 0xc3, 0xc7, 0xfc, 0xc0, 0xc0,
    0xc0, 0xc0,

    /* U+0051 "Q" */
    0x1e, 0x1c, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0x86, 0x73, 0x87, 0xe0, 0xc,

    /* U+0052 "R" */
    0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xd8, 0xcc,
    0xc6, 0xc3,

    /* U+0053 "S" */
    0x3c, 0x66, 0x60, 0x78, 0x3e, 0xf, 0x3, 0x43,
    0x62, 0x3c,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x63, 0x1f, 0x0,

    /* U+0056 "V" */
    0xc1, 0xa0, 0xd8, 0x4c, 0x62, 0x31, 0x90, 0xd8,
    0x2c, 0x1c, 0x6, 0x0,

    /* U+0057 "W" */
    0xc3, 0xf, 0xe, 0x36, 0x78, 0x99, 0xe6, 0x66,
    0x98, 0x93, 0x63, 0xcd, 0xf, 0x1c, 0x18, 0x70,
    0x61, 0x80,

    /* U+0058 "X" */
    0x61, 0x8c, 0xc3, 0x30, 0x78, 0xc, 0x7, 0x83,
    0x60, 0xcc, 0x61, 0xb0, 0x60,

    /* U+0059 "Y" */
    0xc0, 0xd8, 0x63, 0x30, 0xcc, 0x1e, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0,

    /* U+005A "Z" */
    0xfe, 0x1c, 0x30, 0xc1, 0x86, 0x1c, 0x30, 0xc1,
    0xfc,

    /* U+005B "[" */
    0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x3e,

    /* U+005C "\\" */
    0xc2, 0x18, 0xc2, 0x10, 0xc2, 0x10, 0xc6, 0x10,

    /* U+005D "]" */
    0xf8, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xfe,

    /* U+005E "^" */
    0x30, 0xe6, 0x93,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xc0,

    /* U+0061 "a" */
    0x3e, 0xdf, 0x1e, 0x3c, 0x6d, 0xcf, 0x80,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xce, 0xd8, 0xf1, 0xe3, 0xed,
    0xf0,

    /* U+0063 "c" */
    0x3c, 0xcf, 0x6, 0xc, 0xc, 0xcf, 0x0,

    /* U+0064 "d" */
    0x3, 0x3, 0x3, 0x3f, 0x67, 0xc3, 0xc3, 0xc3,
    0x67, 0x3f,

    /* U+0065 "e" */
    0x38, 0xcb, 0x1f, 0xfc, 0xc, 0x8f, 0x0,

    /* U+0066 "f" */
    0x3b, 0x19, 0xf6, 0x31, 0x8c, 0x63, 0x0,

    /* U+0067 "g" */
    0x3f, 0x67, 0xc3, 0xc3, 0xc3, 0x67, 0x3f, 0x3,
    0x66, 0x3c,

    /* U+0068 "h" */
    0xc1, 0x83, 0x7, 0xee, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8c,

    /* U+0069 "i" */
    0xc3, 0xff, 0xf0,

    /* U+006A "j" */
    0x30, 0x3, 0x33, 0x33, 0x33, 0x33, 0xe0,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x6c, 0xdb, 0x3c, 0x6c, 0xcd,
    0x8c,

    /* U+006C "l" */
    0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0xfd, 0xec, 0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x30,

    /* U+006E "n" */
    0xfd, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+006F "o" */
    0x38, 0xdb, 0x1e, 0x3c, 0x6d, 0x8e, 0x0,

    /* U+0070 "p" */
    0xf9, 0xdb, 0x1e, 0x3c, 0x7d, 0xbe, 0x60, 0xc1,
    0x80,

    /* U+0071 "q" */
    0x3f, 0x67, 0xc3, 0xc3, 0xc3, 0x67, 0x3f, 0x3,
    0x3, 0x3,

    /* U+0072 "r" */
    0xfb, 0xbc, 0x30, 0xc3, 0xc, 0x0,

    /* U+0073 "s" */
    0x79, 0x37, 0x1f, 0xf, 0x17, 0x80,

    /* U+0074 "t" */
    0x63, 0x3e, 0xc6, 0x31, 0x8c, 0x38,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x79, 0xdf, 0x80,

    /* U+0076 "v" */
    0xc3, 0x62, 0x66, 0x66, 0x3c, 0x3c, 0x18,

    /* U+0077 "w" */
    0xc6, 0x69, 0xcd, 0xb9, 0x35, 0xe3, 0xbc, 0x73,
    0xc, 0x60,

    /* U+0078 "x" */
    0x66, 0x3c, 0x3c, 0x18, 0x3c, 0x6c, 0xc6,

    /* U+0079 "y" */
    0xc3, 0x62, 0x66, 0x36, 0x3c, 0x1c, 0x18, 0x18,
    0x10, 0x30,

    /* U+007A "z" */
    0x7c, 0x31, 0x8c, 0x73, 0x8f, 0xc0,

    /* U+007B "{" */
    0x3b, 0x18, 0xc6, 0x61, 0x8c, 0x63, 0xe,

    /* U+007C "|" */
    0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xe1, 0x8c, 0x63, 0xc, 0xc6, 0x31, 0xb8,

    /* U+007E "~" */
    0x65, 0xb8,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xc3, 0xff, 0xf0,

    /* U+00A2 "¢" */
    0x10, 0x79, 0xd6, 0x8d, 0x1a, 0x1d, 0x9e, 0x10,

    /* U+00A3 "£" */
    0x3c, 0xcd, 0x9b, 0x6, 0x1f, 0x18, 0x30, 0x41,
    0xfc,

    /* U+00A4 "¤" */
    0x42, 0x7e, 0x66, 0x66, 0x66, 0x66, 0x7e, 0x42,

    /* U+00A5 "¥" */
    0xc0, 0xd8, 0x63, 0x30, 0x78, 0x1e, 0xf, 0xc0,
    0xc0, 0x30, 0x3f, 0x3, 0x0,

    /* U+00A6 "¦" */
    0xff, 0xcf, 0xff,

    /* U+00A7 "§" */
    0x7b, 0x7e, 0x1e, 0xcf, 0xf3, 0x83, 0xcd, 0xe0,

    /* U+00A8 "¨" */
    0xd8,

    /* U+00A9 "©" */
    0x3e, 0x31, 0xb7, 0x74, 0x1a, 0xd, 0x17, 0x76,
    0xc6, 0x3e, 0x0,

    /* U+00AA "ª" */
    0xf6, 0xf0,

    /* U+00AB "«" */
    0x24, 0xdb, 0x63, 0x62, 0x40,

    /* U+00AC "¬" */
    0xfc, 0x30, 0xc0,

    /* U+00AE "®" */
    0xf7, 0x7b, 0xb7, 0x0,

    /* U+00AF "¯" */
    0xf8,

    /* U+00B0 "°" */
    0x6b, 0xb6,

    /* U+00B1 "±" */
    0x31, 0x8d, 0xf3, 0x18, 0x1f,

    /* U+00B2 "²" */
    0x63, 0x7c, 0xf0,

    /* U+00B3 "³" */
    0x72, 0x1d, 0x60,

    /* U+00B4 "´" */
    0xc0,

    /* U+00B5 "µ" */
    0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xce, 0xff, 0xc0,
    0xc0, 0xc0,

    /* U+00B6 "¶" */
    0x3f, 0xbf, 0xdf, 0xef, 0xf7, 0xf9, 0xfc, 0x1e,
    0xf, 0x7, 0x83, 0xc1, 0xe0,

    /* U+00B7 "·" */
    0xc0,

    /* U+00B8 "¸" */
    0x63, 0x60,

    /* U+00B9 "¹" */
    0xd5, 0x40,

    /* U+00BA "º" */
    0xd6, 0xa0,

    /* U+00BB "»" */
    0xd8, 0xd8, 0xdb, 0x6d, 0x80,

    /* U+00BC "¼" */
    0xc3, 0x18, 0x43, 0x18, 0x62, 0xc, 0xc0, 0x10,
    0xc6, 0x18, 0x85, 0x10, 0xe6, 0x4, 0x80, 0x0,

    /* U+00BD "½" */
    0xc3, 0xc, 0x20, 0xc6, 0xc, 0x60, 0xc4, 0x0,
    0xc6, 0x8, 0x31, 0x87, 0x10, 0xc3, 0xf, 0x20,
    0x6, 0x0,

    /* U+00BE "¾" */
    0x70, 0xc1, 0x84, 0x4, 0x61, 0xa2, 0x7, 0x30,
    0x1, 0xc, 0x8, 0x60, 0xc5, 0x4, 0x38, 0x60,
    0x42, 0x0,

    /* U+00BF "¿" */
    0x30, 0x0, 0xc1, 0x87, 0x1c, 0x30, 0x66, 0xcc,
    0xf0,

    /* U+00C0 "À" */
    0x8, 0x0, 0x0, 0xc0, 0x78, 0x1e, 0x4, 0x83,
    0x30, 0xcc, 0x61, 0x9f, 0xe6, 0x1b, 0x3,

    /* U+00C1 "Á" */
    0x4, 0x0, 0x0, 0xc0, 0x78, 0x1e, 0x4, 0x83,
    0x30, 0xcc, 0x61, 0x9f, 0xe6, 0x1b, 0x3,

    /* U+00C2 "Â" */
    0xc, 0x4, 0xc0, 0xc0, 0x78, 0x1e, 0x4, 0x83,
    0x30, 0xcc, 0x61, 0x9f, 0xe6, 0x1b, 0x3,

    /* U+00C3 "Ã" */
    0x1b, 0xd, 0x80, 0x0, 0x30, 0x1e, 0x7, 0x81,
    0x20, 0xcc, 0x33, 0x18, 0x67, 0xf9, 0x86, 0xc0,
    0xc0,

    /* U+00C4 "Ä" */
    0x1e, 0x0, 0x0, 0x0, 0x30, 0xc, 0x4, 0x81,
    0x20, 0xcc, 0x21, 0x8, 0x47, 0xf9, 0x2, 0xc0,
    0xc0,

    /* U+00C5 "Å" */
    0xc, 0x5, 0x0, 0xc0, 0x30, 0x1e, 0x7, 0x81,
    0x20, 0xcc, 0x33, 0x18, 0x67, 0xf9, 0x86, 0xc0,
    0xc0,

    /* U+00C6 "Æ" */
    0x1f, 0xc3, 0x80, 0xf0, 0x1a, 0x2, 0x7c, 0xcc,
    0x19, 0x83, 0xf0, 0xc2, 0x18, 0x7c,

    /* U+00C7 "Ç" */
    0x1f, 0x1c, 0x66, 0xb, 0x0, 0xc0, 0x30, 0xc,
    0x9, 0x83, 0x71, 0x87, 0xc0, 0xc0, 0x18, 0xe,
    0x0,

    /* U+00C8 "È" */
    0x30, 0x3, 0xfe, 0xc, 0x18, 0x3f, 0xe0, 0xc1,
    0x83, 0x7, 0xf0,

    /* U+00C9 "É" */
    0x18, 0x3, 0xfe, 0xc, 0x18, 0x3f, 0xe0, 0xc1,
    0x83, 0x7, 0xf0,

    /* U+00CA "Ê" */
    0x38, 0xdb, 0xfe, 0xc, 0x18, 0x3f, 0xe0, 0xc1,
    0x83, 0x7, 0xf0,

    /* U+00CB "Ë" */
    0x6c, 0x0, 0x7, 0xfc, 0x18, 0x30, 0x7f, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+00CC "Ì" */
    0xc1, 0xb6, 0xdb, 0x6d, 0xb0,

    /* U+00CD "Í" */
    0x63, 0x6d, 0xb6, 0xdb, 0x60,

    /* U+00CE "Î" */
    0x33, 0x33, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc,

    /* U+00CF "Ï" */
    0xf0, 0x6, 0x66, 0x66, 0x66, 0x66, 0x60,

    /* U+00D0 "Ð" */
    0x7e, 0x18, 0xe6, 0x19, 0x83, 0x60, 0xfc, 0x36,
    0xd, 0x86, 0x63, 0x9f, 0x80,

    /* U+00D1 "Ñ" */
    0x3a, 0x17, 0x0, 0x1c, 0x3e, 0x1f, 0x8f, 0x67,
    0xb3, 0xcd, 0xe6, 0xf1, 0xf8, 0x7c, 0x38,

    /* U+00D2 "Ò" */
    0x8, 0x0, 0x0, 0x0, 0x78, 0x73, 0x98, 0x6c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1e,
    0x0,

    /* U+00D3 "Ó" */
    0x4, 0x0, 0x0, 0x0, 0x78, 0x73, 0x98, 0x6c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1e,
    0x0,

    /* U+00D4 "Ô" */
    0xc, 0x3, 0x1, 0x20, 0x78, 0x73, 0x98, 0x6c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1e,
    0x0,

    /* U+00D5 "Õ" */
    0x1b, 0x5, 0x80, 0x0, 0x78, 0x71, 0x98, 0x2c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x9, 0xc6, 0x1e,
    0x0,

    /* U+00D6 "Ö" */
    0x1b, 0x0, 0x0, 0x0, 0x78, 0x73, 0x98, 0x6c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1e,
    0x0,

    /* U+00D7 "×" */
    0x6c, 0xe3, 0x1e, 0xcc,

    /* U+00D8 "Ø" */
    0x1e, 0x9c, 0xe6, 0x3b, 0x1b, 0xc4, 0xf2, 0x3d,
    0x8d, 0xc6, 0x73, 0x97, 0x80,

    /* U+00D9 "Ù" */
    0x18, 0x0, 0x0, 0x18, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+00DA "Ú" */
    0xc, 0x0, 0x0, 0x18, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+00DB "Û" */
    0x8, 0xe, 0xd, 0x98, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+00DC "Ü" */
    0x36, 0x0, 0x0, 0x18, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+00DD "Ý" */
    0x6, 0x0, 0xc, 0xd, 0x86, 0x33, 0xc, 0xc1,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+00DE "Þ" */
    0xc0, 0xc0, 0xfc, 0xc7, 0xc3, 0xc3, 0xc7, 0xfc,
    0xc0, 0xc0,

    /* U+00DF "ß" */
    0x79, 0x9b, 0x36, 0x6d, 0x99, 0xb1, 0xe3, 0xcf,
    0xb0,

    /* U+00E0 "à" */
    0x10, 0x0, 0x1, 0xf6, 0xf8, 0xf1, 0xe3, 0x6e,
    0x7c,

    /* U+00E1 "á" */
    0x8, 0x0, 0x1, 0xf6, 0xf8, 0xf1, 0xe3, 0x6e,
    0x7c,

    /* U+00E2 "â" */
    0x18, 0x50, 0x1, 0xf6, 0xf8, 0xf1, 0xe3, 0x6e,
    0x7c,

    /* U+00E3 "ã" */
    0x34, 0xd8, 0x1, 0xf6, 0xf8, 0xf1, 0xe3, 0x6e,
    0x7c,

    /* U+00E4 "ä" */
    0x6c, 0x0, 0x1, 0xf6, 0xf8, 0xf1, 0xe3, 0x6e,
    0x7c,

    /* U+00E5 "å" */
    0x18, 0x30, 0x61, 0xd6, 0x78, 0x70, 0xe1, 0x66,
    0x74,

    /* U+00E6 "æ" */
    0x7f, 0x91, 0x98, 0x31, 0x3f, 0xe8, 0xc1, 0x1c,
    0x9f, 0xf0,

    /* U+00E7 "ç" */
    0x3c, 0xcf, 0x6, 0xe, 0x6f, 0x8e, 0xc, 0x1c,
    0x30,

    /* U+00E8 "è" */
    0x30, 0x0, 0x1, 0xc6, 0x58, 0xff, 0xe0, 0x64,
    0x78,

    /* U+00E9 "é" */
    0x18, 0x0, 0x1, 0xc6, 0x58, 0xff, 0xe0, 0x64,
    0x78,

    /* U+00EA "ê" */
    0x30, 0x50, 0x1, 0xc6, 0x58, 0xff, 0xe0, 0x64,
    0x78,

    /* U+00EB "ë" */
    0x6c, 0x0, 0x1, 0xc6, 0x58, 0xff, 0xe0, 0x64,
    0x78,

    /* U+00EC "ì" */
    0xc0, 0x36, 0xdb, 0x6c,

    /* U+00ED "í" */
    0x60, 0x6d, 0xb6, 0xd8,

    /* U+00EE "î" */
    0x60, 0x6, 0x66, 0x66, 0x66,

    /* U+00EF "ï" */
    0xf0, 0x6, 0x66, 0x66, 0x66,

    /* U+00F0 "ð" */
    0x18, 0x70, 0xb1, 0xe6, 0xd8, 0xf1, 0xe3, 0x6c,
    0x70,

    /* U+00F1 "ñ" */
    0x74, 0xb8, 0x7, 0xee, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8c,

    /* U+00F2 "ò" */
    0x30, 0x0, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0x6c,
    0x70,

    /* U+00F3 "ó" */
    0x18, 0x0, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0x6c,
    0x70,

    /* U+00F4 "ô" */
    0x10, 0x50, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0x6c,
    0x70,

    /* U+00F5 "õ" */
    0x6c, 0xb0, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0x6c,
    0x70,

    /* U+00F6 "ö" */
    0x6c, 0x0, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0x6c,
    0x70,

    /* U+00F7 "÷" */
    0x30, 0x3e, 0x3, 0x0,

    /* U+00F8 "ø" */
    0x0, 0x7d, 0xb6, 0x7d, 0x7c, 0xdb, 0x7c, 0x0,

    /* U+00F9 "ù" */
    0x30, 0x0, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xce,
    0xfc,

    /* U+00FA "ú" */
    0x18, 0x0, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xce,
    0xfc,

    /* U+00FB "û" */
    0x38, 0x50, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xce,
    0xfc,

    /* U+00FC "ü" */
    0x6c, 0x0, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xce,
    0xfc,

    /* U+00FD "ý" */
    0xc, 0x0, 0x0, 0xc3, 0x62, 0x66, 0x36, 0x3c,
    0x1c, 0x18, 0x18, 0x10, 0x30,

    /* U+00FE "þ" */
    0xc1, 0x83, 0x7, 0xce, 0xd8, 0xf1, 0xe3, 0xed,
    0xf3, 0x6, 0xc, 0x0,

    /* U+00FF "ÿ" */
    0x36, 0x0, 0x0, 0xc, 0x66, 0x31, 0x90, 0xd8,
    0x3c, 0x1c, 0x6, 0x6, 0x3, 0x1, 0x0,

    /* U+0102 "Ă" */
    0x33, 0x7, 0x80, 0x0, 0x30, 0x1e, 0x7, 0x81,
    0x20, 0xcc, 0x33, 0x18, 0x67, 0xf9, 0x86, 0xc0,
    0xc0,

    /* U+0103 "ă" */
    0x2c, 0x70, 0x1, 0xf6, 0xf8, 0xf1, 0xe3, 0x6e,
    0x7c,

    /* U+0104 "Ą" */
    0xc, 0x3, 0xc0, 0x78, 0x9, 0x3, 0x30, 0x66,
    0x1f, 0xe3, 0xc, 0x61, 0x98, 0x18, 0x2, 0x0,
    0xc0, 0xe,

    /* U+0105 "ą" */
    0x3e, 0x6e, 0xc6, 0xc6, 0xc6, 0x6e, 0x3e, 0xc,
    0xc, 0xf,

    /* U+0106 "Ć" */
    0x6, 0x0, 0x0, 0x0, 0x7c, 0x71, 0x98, 0x2c,
    0x3, 0x0, 0xc0, 0x30, 0x26, 0xd, 0xc6, 0x1f,
    0x0,

    /* U+0107 "ć" */
    0x8, 0x0, 0x1, 0xe6, 0x78, 0x30, 0x60, 0x66,
    0x78,

    /* U+0110 "Đ" */
    0x7e, 0x18, 0xe6, 0x19, 0x83, 0x60, 0xfc, 0x36,
    0xd, 0x86, 0x63, 0x9f, 0x80,

    /* U+0111 "đ" */
    0x3, 0x3, 0xc0, 0xc7, 0xe6, 0x76, 0x1b, 0xd,
    0x86, 0x67, 0x1f, 0x80,

    /* U+0118 "Ę" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0, 0xc0, 0xc0,
    0xc0, 0xfe, 0x4, 0xc, 0x7,

    /* U+0119 "ę" */
    0x38, 0x8b, 0x1f, 0xfc, 0xc, 0x8f, 0xc, 0x10,
    0x38,

    /* U+0128 "Ĩ" */
    0x6a, 0xc0, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x63,
    0x0,

    /* U+0129 "ĩ" */
    0x6a, 0xc0, 0x63, 0x18, 0xc6, 0x31, 0x80,

    /* U+0139 "Ĺ" */
    0x40, 0x3, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x7, 0xf0,

    /* U+013A "ĺ" */
    0x60, 0x6d, 0xb6, 0xdb, 0x6c,

    /* U+0143 "Ń" */
    0x4, 0x0, 0x38, 0x7c, 0x3f, 0x1e, 0xcf, 0x67,
    0x9b, 0xcd, 0xe3, 0xf0, 0xf8, 0x70,

    /* U+0144 "ń" */
    0x18, 0x0, 0x7, 0xee, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8c,

    /* U+0154 "Ŕ" */
    0x18, 0x0, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe,
    0xd8, 0xcc, 0xc6, 0xc3,

    /* U+0155 "ŕ" */
    0x10, 0x0, 0x3e, 0xef, 0xc, 0x30, 0xc3, 0x0,

    /* U+015A "Ś" */
    0x8, 0x0, 0x0, 0x3c, 0x66, 0x60, 0x78, 0x3e,
    0xf, 0x3, 0x43, 0x62, 0x3c,

    /* U+015B "ś" */
    0x18, 0x0, 0x1e, 0x4d, 0xc7, 0xc3, 0xc5, 0xe0,

    /* U+0168 "Ũ" */
    0x3a, 0x17, 0x0, 0x18, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+0169 "ũ" */
    0x74, 0xb8, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xce,
    0xfc,

    /* U+0172 "Ų" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x63, 0x1f, 0x2, 0x1, 0x0, 0xe0,

    /* U+0173 "ų" */
    0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xce, 0x7e, 0xc,
    0xc, 0x7,

    /* U+0179 "Ź" */
    0x18, 0x3, 0xf8, 0x70, 0xc3, 0x6, 0x18, 0x70,
    0xc3, 0x7, 0xf0,

    /* U+017A "ź" */
    0x18, 0x0, 0x1f, 0xc, 0x63, 0x1c, 0xe3, 0xf0,

    /* U+01A0 "Ơ" */
    0x0, 0xc0, 0x31, 0xf9, 0xce, 0x61, 0xb0, 0x3c,
    0xf, 0x3, 0xc0, 0xd8, 0x67, 0x38, 0x78,

    /* U+01A1 "ơ" */
    0x3, 0x3, 0x3e, 0x64, 0xc6, 0xc2, 0xc6, 0x64,
    0x38,

    /* U+01AF "Ư" */
    0x0, 0x60, 0xf, 0x7, 0x60, 0xcc, 0x19, 0x83,
    0x30, 0x66, 0xc, 0xc1, 0x98, 0x31, 0x8c, 0x1f,
    0x0,

    /* U+01B0 "ư" */
    0x1, 0x80, 0xf1, 0xd8, 0xcc, 0x66, 0x33, 0x19,
    0x9c, 0x7e, 0x0,

    /* U+01D7 "Ǘ" */
    0xc, 0x0, 0x0, 0x6, 0xc0, 0x0, 0x3, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xd,
    0x8c, 0x7c,

    /* U+01D8 "ǘ" */
    0x18, 0x1, 0xb0, 0x0, 0x18, 0xf1, 0xe3, 0xc7,
    0x8f, 0x3b, 0xf0,

    /* U+01EA "Ǫ" */
    0x1e, 0x1c, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0x86, 0x73, 0x87, 0x80, 0x80, 0x20, 0x6,
    0x0,

    /* U+01EB "ǫ" */
    0x38, 0xdb, 0x1e, 0x3e, 0xef, 0x8e, 0x18, 0x30,
    0x30,

    /* U+01F4 "Ǵ" */
    0x4, 0x0, 0x0, 0x0, 0x7c, 0x71, 0x18, 0xc,
    0x3, 0x1f, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1e,
    0x0,

    /* U+01F5 "ǵ" */
    0xc, 0x0, 0x0, 0x3f, 0x67, 0xc3, 0xc3, 0xc3,
    0x67, 0x3f, 0x3, 0x66, 0x3c,

    /* U+01FE "Ǿ" */
    0x4, 0x0, 0x0, 0x0, 0x7a, 0x73, 0x98, 0xec,
    0x6f, 0x13, 0xc8, 0xf6, 0x37, 0x19, 0xce, 0x5e,
    0x0,

    /* U+01FF "ǿ" */
    0x8, 0x0, 0x1, 0xf6, 0xd9, 0xf5, 0xf3, 0x6d,
    0xf0, 0x0,

    /* U+0228 "Ȩ" */
    0xff, 0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,
    0xfc, 0xc0, 0xc3, 0x80,

    /* U+0229 "ȩ" */
    0x3c, 0x8f, 0xfe, 0xe, 0x4f, 0x8e, 0x1c, 0x1c,
    0x30,

    /* U+022C "Ȭ" */
    0x1f, 0x0, 0x1, 0xd0, 0x5c, 0x0, 0x7, 0x87,
    0x19, 0x82, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0x60,
    0x9c, 0x61, 0xe0,

    /* U+022D "ȭ" */
    0x7c, 0x1, 0xb2, 0xe0, 0x7, 0x1b, 0x63, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+0301 "́" */
    0xc0,

    /* U+0302 "̂" */
    0x66, 0x80,

    /* U+0303 "̃" */
    0xea, 0x60,

    /* U+0306 "̆" */
    0x8e, 0xdc,

    /* U+0309 "̉" */
    0xed, 0x0,

    /* U+031B "̛" */
    0x6f, 0x0,

    /* U+0323 "̣" */
    0xc0,

    /* U+1E00 "Ḁ" */
    0xc, 0x7, 0x81, 0xe0, 0x48, 0x33, 0xc, 0xc7,
    0xf9, 0x86, 0x61, 0xb0, 0x30, 0xc0, 0x50, 0xc,
    0x0,

    /* U+1E01 "ḁ" */
    0x3a, 0xcf, 0xe, 0x1c, 0x2c, 0xce, 0x8c, 0x18,
    0x30,

    /* U+1E04 "Ḅ" */
    0xfc, 0xc6, 0xc6, 0xc4, 0xfe, 0xc3, 0xc3, 0xc3,
    0xc7, 0xfe, 0x0, 0x0, 0x30,

    /* U+1E05 "ḅ" */
    0xc1, 0x83, 0x7, 0xce, 0xd8, 0xf1, 0xe3, 0xed,
    0xf0, 0x0, 0x1, 0x80,

    /* U+1E08 "Ḉ" */
    0x6, 0x0, 0x0, 0x0, 0x7c, 0x71, 0x98, 0x2c,
    0x3, 0x0, 0xc0, 0x30, 0x26, 0xd, 0xc6, 0x1f,
    0x3, 0x0, 0x60, 0x38,

    /* U+1E09 "ḉ" */
    0x18, 0x0, 0x1, 0xe6, 0x78, 0x30, 0x73, 0x7c,
    0x70, 0x60, 0xe1, 0x80,

    /* U+1E0C "Ḍ" */
    0xfc, 0x63, 0xb0, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x86, 0xc7, 0x7e, 0x0, 0x0, 0x1, 0x80,

    /* U+1E0D "ḍ" */
    0x3, 0x3, 0x3, 0x3f, 0x67, 0xc3, 0xc3, 0xc3,
    0x67, 0x3f, 0x0, 0x0, 0x18,

    /* U+1E16 "Ḗ" */
    0x8, 0x0, 0x3, 0xe0, 0x1f, 0xf0, 0x60, 0xc1,
    0xff, 0x6, 0xc, 0x18, 0x3f, 0x80,

    /* U+1E17 "ḗ" */
    0x18, 0x0, 0x3, 0xe0, 0x7, 0x19, 0x63, 0xff,
    0x81, 0x91, 0xe0,

    /* U+1E18 "Ḙ" */
    0xff, 0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,
    0xfc, 0x1, 0xc6, 0x80,

    /* U+1E19 "ḙ" */
    0x38, 0xcb, 0x1f, 0xfc, 0xc, 0x8f, 0x8, 0x38,
    0xd8,

    /* U+1E1A "Ḛ" */
    0xff, 0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,
    0xfc, 0x3, 0xa5, 0xc0,

    /* U+1E1B "ḛ" */
    0x38, 0xcb, 0x1f, 0xfc, 0xc, 0x8f, 0x0, 0x74,
    0xb8,

    /* U+1E24 "Ḥ" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3f, 0xfe, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xc0, 0x0, 0x1, 0x80,

    /* U+1E25 "ḥ" */
    0xc1, 0x83, 0x7, 0xee, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8c, 0x0, 0x3, 0x0,

    /* U+1E2E "Ḯ" */
    0x20, 0xf, 0x0, 0x66, 0x66, 0x66, 0x66, 0x66,

    /* U+1E2F "ḯ" */
    0x20, 0xf0, 0x6, 0x66, 0x66, 0x66,

    /* U+1E30 "Ḱ" */
    0x8, 0x0, 0xc7, 0xc6, 0xcc, 0xd8, 0xf0, 0xd8,
    0xcc, 0xce, 0xc6, 0xc3,

    /* U+1E31 "ḱ" */
    0x60, 0x0, 0x6, 0xc, 0x18, 0x33, 0x66, 0xd9,
    0xe3, 0x66, 0x6c, 0x60,

    /* U+1E32 "Ḳ" */
    0xc6, 0xcc, 0xd8, 0xd0, 0xf0, 0xd0, 0xd8, 0xcc,
    0xc6, 0xc6, 0x0, 0x0, 0x30,

    /* U+1E33 "ḳ" */
    0xc1, 0x83, 0x6, 0x6d, 0x9e, 0x36, 0x6c, 0xcd,
    0x8c, 0x0, 0x3, 0x0,

    /* U+1E36 "Ḷ" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0xfc, 0x0, 0x3, 0x0,

    /* U+1E37 "ḷ" */
    0xff, 0xff, 0xf0, 0xc0,

    /* U+1E38 "Ḹ" */
    0xf8, 0x0, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x60, 0x7f, 0x0, 0x0, 0x18,

    /* U+1E39 "ḹ" */
    0xf8, 0x0, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6,
    0x0, 0xc,

    /* U+1E3E "Ḿ" */
    0x2, 0x0, 0x0, 0xe0, 0x7e, 0x7, 0xf0, 0xff,
    0xf, 0xd9, 0xbd, 0x9b, 0xc9, 0x3c, 0xf3, 0xc7,
    0x3c, 0x63,

    /* U+1E3F "ḿ" */
    0x2, 0x0, 0x0, 0x0, 0xf, 0xde, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c, 0x63,

    /* U+1E42 "Ṃ" */
    0xe0, 0x7e, 0x7, 0xf0, 0xff, 0xf, 0xd9, 0xbd,
    0x9b, 0xc9, 0x3c, 0xf3, 0xc7, 0x3c, 0x63, 0x0,
    0x0, 0x0, 0x6, 0x0,

    /* U+1E43 "ṃ" */
    0xfd, 0xd8, 0xcf, 0x19, 0xe3, 0x3c, 0x67, 0x8c,
    0xf1, 0x98, 0x0, 0x0, 0x0, 0xc0,

    /* U+1E46 "Ṇ" */
    0xe1, 0xf0, 0xfc, 0x7f, 0x3d, 0x9e, 0x6f, 0x37,
    0x8f, 0xc3, 0xe1, 0xc0, 0x0, 0x1, 0x80,

    /* U+1E47 "ṇ" */
    0xfd, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0x80, 0x0,
    0x60,

    /* U+1E4C "Ṍ" */
    0x4, 0x0, 0x1, 0xb0, 0x58, 0x0, 0x7, 0x87,
    0x19, 0x82, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0x60,
    0x9c, 0x61, 0xe0,

    /* U+1E4D "ṍ" */
    0x18, 0x1, 0xb2, 0xc0, 0x7, 0x1b, 0x63, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+1E4E "Ṏ" */
    0x1b, 0x0, 0x0, 0x0, 0x74, 0x17, 0x0, 0x1,
    0xe1, 0xce, 0x61, 0xb0, 0x3c, 0xf, 0x3, 0xc0,
    0xd8, 0x67, 0x38, 0x78,

    /* U+1E4F "ṏ" */
    0x6c, 0x1, 0xd2, 0xe0, 0x7, 0x1b, 0x63, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+1E52 "Ṓ" */
    0x6, 0x0, 0x0, 0x0, 0x7c, 0x0, 0x7, 0x87,
    0x39, 0x86, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0x61,
    0x9c, 0xe1, 0xe0,

    /* U+1E53 "ṓ" */
    0x18, 0x0, 0x3, 0xe0, 0x7, 0x1b, 0x63, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+1E54 "Ṕ" */
    0x18, 0x0, 0xfc, 0xc7, 0xc3, 0xc3, 0xc7, 0xfc,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+1E55 "ṕ" */
    0x10, 0x0, 0x7, 0xce, 0xd8, 0xf1, 0xe3, 0xed,
    0xf3, 0x6, 0xc, 0x0,

    /* U+1E5A "Ṛ" */
    0xfe, 0xc3, 0xc3, 0xc3, 0xfe, 0xd8, 0xcc, 0xce,
    0xc6, 0xc3, 0x0, 0x0, 0x18,

    /* U+1E5B "ṛ" */
    0xfb, 0x3c, 0x30, 0xc3, 0xc, 0x0, 0x1, 0x80,

    /* U+1E5C "Ṝ" */
    0x7c, 0x0, 0x0, 0xfe, 0xc3, 0xc3, 0xc3, 0xfe,
    0xd8, 0xcc, 0xce, 0xc6, 0xc3, 0x0, 0x0, 0x18,

    /* U+1E5D "ṝ" */
    0xf8, 0x0, 0x3e, 0xcf, 0xc, 0x30, 0xc3, 0x0,
    0x0, 0x60,

    /* U+1E62 "Ṣ" */
    0x3c, 0x66, 0x60, 0x78, 0x3e, 0xf, 0x3, 0x43,
    0x62, 0x3c, 0x0, 0x0, 0x18,

    /* U+1E63 "ṣ" */
    0x7b, 0x3f, 0x1f, 0xf, 0x37, 0x80, 0x0, 0xc0,

    /* U+1E64 "Ṥ" */
    0xc, 0x0, 0x0, 0x8, 0x0, 0x0, 0x3c, 0x66,
    0x60, 0x78, 0x3e, 0xf, 0x3, 0x43, 0x62, 0x3c,

    /* U+1E65 "ṥ" */
    0x18, 0x0, 0x4, 0x0, 0x7, 0xb2, 0xf1, 0xf0,
    0xf3, 0x78,

    /* U+1E68 "Ṩ" */
    0x18, 0x0, 0x0, 0x3c, 0x66, 0x60, 0x78, 0x3e,
    0xf, 0x3, 0x43, 0x62, 0x3c, 0x0, 0x0, 0x18,

    /* U+1E69 "ṩ" */
    0x30, 0x0, 0x1e, 0xcf, 0xc7, 0xc3, 0xcd, 0xe0,
    0x0, 0x30,

    /* U+1E6C "Ṭ" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x0, 0x0, 0x18,

    /* U+1E6D "ṭ" */
    0x63, 0x19, 0xe6, 0x31, 0x8c, 0x61, 0xc0, 0x3,
    0x0,

    /* U+1E78 "Ṹ" */
    0x4, 0x0, 0xe, 0x85, 0xc0, 0x6, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1b, 0x18,
    0xf8,

    /* U+1E79 "ṹ" */
    0x18, 0x1, 0xd2, 0xe0, 0x18, 0xf1, 0xe3, 0xc7,
    0x8f, 0x3b, 0xf0,

    /* U+1E7C "Ṽ" */
    0x3a, 0x9, 0x80, 0x3, 0x6, 0x61, 0x98, 0x66,
    0x30, 0xcc, 0x32, 0x5, 0x81, 0xe0, 0x70, 0xc,
    0x0,

    /* U+1E7D "ṽ" */
    0x74, 0x4c, 0x0, 0xc3, 0xc6, 0x66, 0x64, 0x2c,
    0x3c, 0x18,

    /* U+1E7E "Ṿ" */
    0x40, 0xd8, 0x66, 0x18, 0x84, 0x33, 0xc, 0xc1,
    0x20, 0x78, 0xe, 0x3, 0x0, 0x0, 0x0, 0xc,
    0x0,

    /* U+1E7F "ṿ" */
    0xc3, 0x62, 0x66, 0x26, 0x3c, 0x3c, 0x18, 0x0,
    0x0, 0x18,

    /* U+1E82 "Ẃ" */
    0x1, 0x80, 0x0, 0xc, 0x30, 0xf0, 0xe3, 0x67,
    0x89, 0x9e, 0x66, 0x69, 0x89, 0x36, 0x3c, 0xd0,
    0xf1, 0xc1, 0x87, 0x6, 0x18,

    /* U+1E83 "ẃ" */
    0x2, 0x0, 0x0, 0x0, 0x63, 0x34, 0xe6, 0xdc,
    0x9a, 0xf1, 0xde, 0x39, 0x86, 0x30,

    /* U+1E88 "Ẉ" */
    0xc3, 0xf, 0xc, 0x36, 0x78, 0x99, 0xe6, 0x66,
    0x98, 0x93, 0x43, 0xcf, 0xf, 0x1c, 0x18, 0x70,
    0x61, 0x80, 0x0, 0x0, 0x0, 0x3, 0x0,

    /* U+1E89 "ẉ" */
    0x46, 0x26, 0x66, 0x6f, 0x62, 0xf4, 0x39, 0xc3,
    0x9c, 0x19, 0x80, 0x0, 0x0, 0x0, 0x60,

    /* U+1E92 "Ẓ" */
    0xfe, 0x1c, 0x30, 0xc3, 0x86, 0x18, 0x30, 0xc1,
    0xfc, 0x0, 0x3, 0x0,

    /* U+1E93 "ẓ" */
    0x7c, 0x71, 0x8c, 0x63, 0x8f, 0xc0, 0x0, 0xc0,

    /* U+1EA0 "Ạ" */
    0xc, 0x7, 0x81, 0xe0, 0x48, 0x33, 0xc, 0xc7,
    0xf9, 0x86, 0x61, 0xb0, 0x30, 0x0, 0x0, 0xc,
    0x0,

    /* U+1EA1 "ạ" */
    0x3e, 0xdf, 0x1e, 0x3c, 0x6d, 0xcf, 0x80, 0x0,
    0x30,

    /* U+1EA2 "Ả" */
    0xc, 0x1, 0x0, 0x0, 0x30, 0x1e, 0x7, 0x81,
    0x20, 0xcc, 0x33, 0x18, 0x67, 0xf9, 0x86, 0xc0,
    0xc0,

    /* U+1EA3 "ả" */
    0x1c, 0x10, 0x1, 0xd6, 0x78, 0x70, 0xe1, 0x66,
    0x74,

    /* U+1EA4 "Ấ" */
    0x1, 0x3, 0x1, 0xe0, 0x0, 0xc, 0x7, 0x81,
    0xe0, 0x48, 0x33, 0xc, 0xc6, 0x19, 0xfe, 0x61,
    0xb0, 0x30,

    /* U+1EA5 "ấ" */
    0x6, 0x18, 0x28, 0x0, 0x3e, 0x6e, 0xc6, 0xc6,
    0xc6, 0x6e, 0x3e,

    /* U+1EA6 "Ầ" */
    0x3, 0x3, 0x1, 0xe0, 0x0, 0xc, 0x7, 0x81,
    0xe0, 0x48, 0x33, 0xc, 0xc6, 0x19, 0xfe, 0x61,
    0xb0, 0x30,

    /* U+1EA7 "ầ" */
    0xc, 0x30, 0xa0, 0x3, 0xed, 0xf1, 0xe3, 0xc6,
    0xdc, 0xf8,

    /* U+1EA8 "Ẩ" */
    0x3, 0x0, 0x40, 0xf0, 0x78, 0x0, 0x3, 0x1,
    0xe0, 0x78, 0x12, 0xc, 0xc3, 0x31, 0x86, 0x7f,
    0x98, 0x6c, 0xc,

    /* U+1EA9 "ẩ" */
    0xe, 0xc, 0x61, 0x40, 0x7, 0xdb, 0xe3, 0xc7,
    0x8d, 0xb9, 0xf0,

    /* U+1EAA "Ẫ" */
    0x1b, 0xd, 0x80, 0xc0, 0x78, 0x0, 0x3, 0x1,
    0xe0, 0x78, 0x12, 0xc, 0xc3, 0x31, 0x86, 0x7f,
    0x98, 0x6c, 0xc,

    /* U+1EAB "ẫ" */
    0x34, 0xd8, 0x0, 0xc2, 0x80, 0xf, 0xb7, 0xc7,
    0x8f, 0x1b, 0x73, 0xe0,

    /* U+1EAC "Ậ" */
    0xc, 0x7, 0x80, 0x0, 0x30, 0x1e, 0x7, 0x81,
    0x20, 0xcc, 0x33, 0x1f, 0xe6, 0x19, 0x86, 0xc0,
    0xc0, 0x0, 0x0, 0x30,

    /* U+1EAD "ậ" */
    0x18, 0x78, 0x1, 0xf6, 0xf8, 0xf1, 0xe3, 0x6e,
    0x7c, 0x0, 0x1, 0x80,

    /* U+1EAE "Ắ" */
    0x4, 0x0, 0x1, 0x30, 0x78, 0x0, 0x3, 0x1,
    0xe0, 0x78, 0x12, 0xc, 0xc3, 0x31, 0x86, 0x7f,
    0x98, 0x6c, 0xc,

    /* U+1EAF "ắ" */
    0x8, 0x0, 0xb1, 0xc0, 0x7, 0xdb, 0xe3, 0xc7,
    0x8d, 0xb9, 0xf0,

    /* U+1EB0 "Ằ" */
    0x8, 0x0, 0x1, 0x30, 0x78, 0x0, 0x3, 0x1,
    0xe0, 0x78, 0x12, 0xc, 0xc3, 0x31, 0x86, 0x7f,
    0x98, 0x6c, 0xc,

    /* U+1EB1 "ằ" */
    0x10, 0x0, 0xb1, 0xc0, 0x7, 0xdb, 0xe3, 0xc7,
    0x8d, 0xb9, 0xf0,

    /* U+1EB2 "Ẳ" */
    0xc, 0x1, 0x0, 0x0, 0xcc, 0x1e, 0x0, 0x0,
    0xc0, 0x78, 0x1e, 0x4, 0x83, 0x30, 0xcc, 0x61,
    0x9f, 0xe6, 0x1b, 0x3,

    /* U+1EB3 "ẳ" */
    0x18, 0x18, 0x1, 0x23, 0xc0, 0xe, 0xb3, 0xc3,
    0x87, 0xb, 0x33, 0xa0,

    /* U+1EB4 "Ẵ" */
    0x1b, 0xd, 0x83, 0x30, 0x48, 0xe, 0x0, 0x0,
    0xc0, 0x78, 0x1e, 0x4, 0x83, 0x30, 0xcc, 0x61,
    0x9f, 0xe6, 0x1b, 0x3,

    /* U+1EB5 "ẵ" */
    0x34, 0x58, 0xb1, 0xc0, 0x7, 0xdb, 0xe3, 0xc7,
    0x8d, 0xb9, 0xf0,

    /* U+1EB6 "Ặ" */
    0x33, 0x4, 0x80, 0xc0, 0x0, 0xc, 0x7, 0x81,
    0xe0, 0x48, 0x33, 0xc, 0xc7, 0xf9, 0x86, 0x61,
    0xb0, 0x30, 0x0, 0x0, 0xc, 0x0,

    /* U+1EB7 "ặ" */
    0x24, 0x70, 0x1, 0xf6, 0xf8, 0xf1, 0xe3, 0x6e,
    0x7c, 0x0, 0x1, 0x80,

    /* U+1EB8 "Ẹ" */
    0xff, 0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,
    0xfc, 0x0, 0x3, 0x0,

    /* U+1EB9 "ẹ" */
    0x3c, 0xcf, 0xfe, 0xc, 0xc, 0x8f, 0x0, 0x0,
    0x60,

    /* U+1EBA "Ẻ" */
    0x38, 0x30, 0x7, 0xfc, 0x18, 0x30, 0x7f, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+1EBB "ẻ" */
    0x38, 0x30, 0x1, 0xc6, 0x58, 0xff, 0xe0, 0x64,
    0x78,

    /* U+1EBC "Ẽ" */
    0x74, 0xb8, 0x7, 0xfc, 0x18, 0x30, 0x7f, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+1EBD "ẽ" */
    0x64, 0xb8, 0x1, 0xc6, 0x58, 0xff, 0xe0, 0x64,
    0x78,

    /* U+1EBE "Ế" */
    0x6, 0x38, 0x68, 0x0, 0xfe, 0xc0, 0xc0, 0xc0,
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe,

    /* U+1EBF "ế" */
    0x6, 0x30, 0x28, 0x0, 0x38, 0x64, 0xc6, 0xfe,
    0xc0, 0x64, 0x3c,

    /* U+1EC0 "Ề" */
    0xc, 0x71, 0xa0, 0xf, 0xf8, 0x30, 0x60, 0xff,
    0x83, 0x6, 0xc, 0x1f, 0xc0,

    /* U+1EC1 "ề" */
    0xc, 0x60, 0xa0, 0x3, 0x8c, 0xb1, 0xff, 0xc0,
    0xc8, 0xf0,

    /* U+1EC2 "Ể" */
    0xe, 0xc, 0x51, 0x44, 0x1f, 0xf0, 0x60, 0xc1,
    0xff, 0x6, 0xc, 0x18, 0x3f, 0x80,

    /* U+1EC3 "ể" */
    0xe, 0xc, 0xc1, 0x40, 0x7, 0x19, 0x63, 0xff,
    0x81, 0x91, 0xe0,

    /* U+1EC4 "Ễ" */
    0x74, 0xb8, 0x41, 0xc4, 0x1f, 0xf0, 0x60, 0xc1,
    0xff, 0x6, 0xc, 0x18, 0x3f, 0x80,

    /* U+1EC5 "ễ" */
    0x64, 0xb8, 0x1, 0x82, 0x80, 0xe, 0x32, 0xc7,
    0xff, 0x3, 0x23, 0xc0,

    /* U+1EC6 "Ệ" */
    0x30, 0xf0, 0x7, 0xfc, 0x18, 0x30, 0x7f, 0xc1,
    0x83, 0x6, 0xf, 0xe0, 0x0, 0x18,

    /* U+1EC7 "ệ" */
    0x30, 0x70, 0x1, 0xe6, 0x7f, 0xf0, 0x60, 0x64,
    0x78, 0x0, 0x3, 0x0,

    /* U+1EC8 "Ỉ" */
    0x62, 0x6, 0x66, 0x66, 0x66, 0x66, 0x60,

    /* U+1EC9 "ỉ" */
    0x62, 0x6, 0x66, 0x66, 0x66,

    /* U+1ECA "Ị" */
    0xff, 0xff, 0xf0, 0xc0,

    /* U+1ECB "ị" */
    0xc3, 0xff, 0xf0, 0xc0,

    /* U+1ECC "Ọ" */
    0x1e, 0x1c, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0x86, 0x73, 0x87, 0x80, 0x0, 0x0, 0xc,
    0x0,

    /* U+1ECD "ọ" */
    0x38, 0xdb, 0x1e, 0x3c, 0x6d, 0x8e, 0x0, 0x0,
    0x30,

    /* U+1ECE "Ỏ" */
    0xc, 0x1, 0x0, 0xc0, 0x0, 0x1e, 0x1c, 0xe6,
    0x1b, 0x3, 0xc0, 0xf0, 0x3c, 0xd, 0x86, 0x73,
    0x87, 0x80,

    /* U+1ECF "ỏ" */
    0x18, 0x10, 0x1, 0xc6, 0x58, 0xf0, 0xe3, 0x64,
    0x70,

    /* U+1ED0 "Ố" */
    0x1, 0x3, 0x1, 0xe0, 0x0, 0x1e, 0x1c, 0xe6,
    0x1b, 0x3, 0xc0, 0xf0, 0x3c, 0xd, 0x86, 0x73,
    0x87, 0x80,

    /* U+1ED1 "ố" */
    0x6, 0x20, 0xa0, 0x3, 0x8d, 0xb1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+1ED2 "Ồ" */
    0x2, 0x3, 0x1, 0xe0, 0x0, 0x1e, 0x1c, 0xe6,
    0x1b, 0x3, 0xc0, 0xf0, 0x3c, 0xd, 0x86, 0x73,
    0x87, 0x80,

    /* U+1ED3 "ồ" */
    0xc, 0x20, 0xa0, 0x3, 0x8d, 0xb1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+1ED4 "Ổ" */
    0x3, 0x0, 0x40, 0xe0, 0x78, 0x0, 0x7, 0x87,
    0x39, 0x86, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0x61,
    0x9c, 0xe1, 0xe0,

    /* U+1ED5 "ổ" */
    0xe, 0xc, 0x41, 0x40, 0x7, 0x1b, 0x63, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+1ED6 "Ỗ" */
    0x1b, 0x5, 0x80, 0xc0, 0x38, 0x12, 0x7, 0x87,
    0x19, 0x82, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0x60,
    0x9c, 0x61, 0xe0,

    /* U+1ED7 "ỗ" */
    0x6c, 0xb0, 0x0, 0x82, 0x80, 0xe, 0x36, 0xc7,
    0x8f, 0x1b, 0x63, 0x80,

    /* U+1ED8 "Ộ" */
    0xc, 0x7, 0x80, 0x0, 0x78, 0x73, 0x98, 0x6c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1e,
    0x0, 0x0, 0x0, 0x30,

    /* U+1ED9 "ộ" */
    0x18, 0x70, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0x6c,
    0x70, 0x0, 0x1, 0x80,

    /* U+1EDA "Ớ" */
    0x6, 0x0, 0x30, 0xc, 0x7e, 0x73, 0x98, 0x6c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1e,
    0x0,

    /* U+1EDB "ớ" */
    0x8, 0x3, 0x3, 0x3e, 0x64, 0xc6, 0xc2, 0xc6,
    0x64, 0x38,

    /* U+1EDC "Ờ" */
    0x8, 0x0, 0x30, 0xc, 0x7e, 0x73, 0x98, 0x6c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1e,
    0x0,

    /* U+1EDD "ờ" */
    0x30, 0x3, 0x3, 0x3e, 0x64, 0xc6, 0xc2, 0xc6,
    0x64, 0x38,

    /* U+1EDE "Ở" */
    0xc, 0x1, 0x80, 0x4c, 0x3, 0x1f, 0x9c, 0xe6,
    0x1b, 0x3, 0xc0, 0xf0, 0x3c, 0xd, 0x86, 0x73,
    0x87, 0x80,

    /* U+1EDF "ở" */
    0x18, 0x18, 0x3, 0x3e, 0x64, 0xc2, 0xc2, 0xc2,
    0x64, 0x38,

    /* U+1EE0 "Ỡ" */
    0x1d, 0x5, 0xf0, 0xc, 0x7e, 0x71, 0x98, 0x2c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x9, 0xc6, 0x1e,
    0x0,

    /* U+1EE1 "ỡ" */
    0x74, 0x5f, 0x3, 0x3e, 0x64, 0xc6, 0xc2, 0xc6,
    0x64, 0x38,

    /* U+1EE2 "Ợ" */
    0x0, 0xc0, 0x31, 0xf9, 0xce, 0x61, 0xb0, 0x3c,
    0xf, 0x3, 0xc0, 0xd8, 0x67, 0x38, 0x78, 0x0,
    0x0, 0x0, 0xc0,

    /* U+1EE3 "ợ" */
    0x3, 0x3, 0x3e, 0x64, 0xc6, 0xc2, 0xc6, 0x64,
    0x38, 0x0, 0x0, 0x18,

    /* U+1EE4 "Ụ" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x63, 0x1f, 0x0, 0x0, 0x0, 0xc0,

    /* U+1EE5 "ụ" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x79, 0xdf, 0x80, 0x0,
    0x60,

    /* U+1EE6 "Ủ" */
    0x1c, 0x6, 0x2, 0x0, 0xc, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x36, 0x31, 0xf0,

    /* U+1EE7 "ủ" */
    0x38, 0x30, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xce,
    0xfc,

    /* U+1EE8 "Ứ" */
    0x4, 0x0, 0xc, 0x1, 0xe0, 0xec, 0x19, 0x83,
    0x30, 0x66, 0xc, 0xc1, 0x98, 0x33, 0x6, 0x31,
    0x83, 0xe0,

    /* U+1EE9 "ứ" */
    0x18, 0x0, 0xc0, 0x78, 0xec, 0x66, 0x33, 0x19,
    0x8c, 0xce, 0x3f, 0x0,

    /* U+1EEA "Ừ" */
    0x18, 0x0, 0xc, 0x1, 0xe0, 0xec, 0x19, 0x83,
    0x30, 0x66, 0xc, 0xc1, 0x98, 0x33, 0x6, 0x31,
    0x83, 0xe0,

    /* U+1EEB "ừ" */
    0x30, 0x0, 0xc0, 0x78, 0xec, 0x66, 0x33, 0x19,
    0x8c, 0xce, 0x3f, 0x0,

    /* U+1EEC "Ử" */
    0x1c, 0x0, 0x80, 0x21, 0x80, 0x3c, 0x1d, 0x83,
    0x30, 0x66, 0xc, 0xc1, 0x98, 0x33, 0x6, 0x60,
    0xc6, 0x30, 0x7c, 0x0,

    /* U+1EED "ử" */
    0x38, 0xc, 0x0, 0x78, 0xec, 0x66, 0x33, 0x19,
    0x8c, 0xce, 0x3f, 0x0,

    /* U+1EEE "Ữ" */
    0x1a, 0x5, 0xcc, 0x1, 0xe0, 0xec, 0x19, 0x83,
    0x30, 0x66, 0xc, 0xc1, 0x98, 0x33, 0x6, 0x31,
    0x83, 0xe0,

    /* U+1EEF "ữ" */
    0x74, 0x2e, 0xc0, 0x78, 0xec, 0x66, 0x33, 0x19,
    0x8c, 0xce, 0x3f, 0x0,

    /* U+1EF0 "Ự" */
    0x0, 0x60, 0xf, 0x7, 0x60, 0xcc, 0x19, 0x83,
    0x30, 0x66, 0xc, 0xc1, 0x98, 0x31, 0x8c, 0x1f,
    0x0, 0x0, 0x0, 0x3, 0x0,

    /* U+1EF1 "ự" */
    0x1, 0x80, 0xf1, 0xd8, 0xcc, 0x66, 0x33, 0x19,
    0x9c, 0x7e, 0x0, 0x0, 0x6, 0x0,

    /* U+1EF2 "Ỳ" */
    0x18, 0x0, 0xc, 0xd, 0x86, 0x33, 0xc, 0xc1,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+1EF3 "ỳ" */
    0x10, 0x0, 0x0, 0xc3, 0x62, 0x66, 0x36, 0x3c,
    0x1c, 0x18, 0x18, 0x10, 0x30,

    /* U+1EF4 "Ỵ" */
    0xc0, 0xd8, 0x63, 0x30, 0xcc, 0x1e, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0x0, 0x0, 0xc,
    0x0,

    /* U+1EF5 "ỵ" */
    0xc3, 0x62, 0x66, 0x36, 0x3c, 0x1c, 0x18, 0x18,
    0x10, 0x36,

    /* U+1EF6 "Ỷ" */
    0xc, 0x1, 0x0, 0x3, 0x6, 0x61, 0x8c, 0xc3,
    0x70, 0x78, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+1EF7 "ỷ" */
    0x1c, 0x6, 0x0, 0xc, 0x66, 0x31, 0x90, 0xd8,
    0x2c, 0x1c, 0x6, 0x6, 0x3, 0x1, 0x0,

    /* U+1EF8 "Ỹ" */
    0x1a, 0x9, 0x80, 0x3, 0x6, 0x61, 0x8c, 0xc3,
    0x70, 0x78, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+1EF9 "ỹ" */
    0x74, 0x4c, 0x0, 0xc3, 0xc6, 0x66, 0x6c, 0x3c,
    0x38, 0x18, 0x18, 0x30, 0x30,

    /* U+2013 "–" */
    0xfe,

    /* U+2014 "—" */
    0xff, 0x80,

    /* U+2018 "‘" */
    0x7f,

    /* U+2019 "’" */
    0xd8,

    /* U+201C "“" */
    0x47, 0x3c, 0xf3,

    /* U+201D "”" */
    0xcd, 0x18, 0x80,

    /* U+2020 "†" */
    0x31, 0xbe, 0x63, 0x18,

    /* U+2021 "‡" */
    0xf6, 0x6f, 0x60,

    /* U+2026 "…" */
    0xcc, 0xc0,

    /* U+2030 "‰" */
    0x63, 0x1, 0x24, 0x2, 0x58, 0x3, 0x30, 0x0,
    0x40, 0x1, 0x80, 0x2, 0x73, 0xd, 0x2b, 0x12,
    0x56, 0x63, 0x98, 0xc0, 0x0,

    /* U+2032 "′" */
    0xf8,

    /* U+2033 "″" */
    0xd6, 0xac};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 100, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 73, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 103, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 6, .adv_w = 157, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 129, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 29, .adv_w = 186, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 45, .adv_w = 145, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 66, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 56, .adv_w = 98, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 63, .adv_w = 98, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 70, .adv_w = 86, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 72, .adv_w = 134, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 76, .adv_w = 82, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 77, .adv_w = 110, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 78, .adv_w = 81, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 88, .adv_w = 138, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 76, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 129, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 133, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 135, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 107, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 81, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 82, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 180, .adv_w = 134, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 184, .adv_w = 134, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 187, .adv_w = 134, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 191, .adv_w = 150, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 227, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 218, .adv_w = 155, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 173, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 134, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 174, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 62, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 140, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 217, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 172, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 181, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 148, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 405, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 135, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 132, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 179, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 149, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 228, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 155, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 151, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 127, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 105, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 519, .adv_w = 89, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 527, .adv_w = 105, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 534, .adv_w = 134, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 537, .adv_w = 130, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 538, .adv_w = 41, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 539, .adv_w = 140, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 140, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 142, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 596, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 57, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 75, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 615, .adv_w = 129, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 55, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 208, .box_w = 12, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 141, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 131, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 661, .adv_w = 140, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 671, .adv_w = 111, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 677, .adv_w = 110, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 138, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 129, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 181, .box_w = 11, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 122, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 730, .adv_w = 105, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 103, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 743, .adv_w = 61, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 746, .adv_w = 103, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 753, .adv_w = 134, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 755, .adv_w = 100, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 73, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 759, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 767, .adv_w = 133, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 145, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 784, .adv_w = 154, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 61, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 800, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 74, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 809, .adv_w = 164, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 63, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 822, .adv_w = 138, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 827, .adv_w = 134, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 830, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 834, .adv_w = 95, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 835, .adv_w = 84, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 837, .adv_w = 134, .box_w = 5, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 67, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 845, .adv_w = 65, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 848, .adv_w = 41, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 849, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 859, .adv_w = 165, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 872, .adv_w = 119, .box_w = 2, .box_h = 1, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 873, .adv_w = 65, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 875, .adv_w = 39, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 877, .adv_w = 59, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 879, .adv_w = 138, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 884, .adv_w = 197, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 900, .adv_w = 191, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 918, .adv_w = 223, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 936, .adv_w = 150, .box_w = 7, .box_h = 10, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 945, .adv_w = 155, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 155, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 155, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 990, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1007, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1024, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1041, .adv_w = 183, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1055, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1072, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1083, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1094, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1105, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1117, .adv_w = 62, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1122, .adv_w = 62, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1127, .adv_w = 62, .box_w = 6, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1136, .adv_w = 62, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1143, .adv_w = 174, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1156, .adv_w = 172, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1171, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1205, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1222, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1239, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1256, .adv_w = 134, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1260, .adv_w = 181, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1273, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1303, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1333, .adv_w = 151, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1348, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1358, .adv_w = 134, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1367, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1376, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1385, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1394, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1403, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1412, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1421, .adv_w = 186, .box_w = 11, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1431, .adv_w = 124, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1440, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1449, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1458, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1467, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1476, .adv_w = 57, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1480, .adv_w = 57, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1484, .adv_w = 57, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1489, .adv_w = 57, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1494, .adv_w = 129, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1503, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1512, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1521, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1530, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1539, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1548, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1557, .adv_w = 134, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 1561, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1569, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1578, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1587, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1596, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1605, .adv_w = 131, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1618, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1630, .adv_w = 131, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1645, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1671, .adv_w = 155, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1689, .adv_w = 140, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1699, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1716, .adv_w = 124, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1725, .adv_w = 174, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1738, .adv_w = 140, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1750, .adv_w = 136, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1763, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1772, .adv_w = 62, .box_w = 5, .box_h = 13, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1781, .adv_w = 57, .box_w = 5, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1788, .adv_w = 121, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1799, .adv_w = 55, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1804, .adv_w = 172, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1818, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1827, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1839, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1847, .adv_w = 135, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1860, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1868, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1883, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1892, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1907, .adv_w = 138, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1917, .adv_w = 127, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1928, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1936, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1951, .adv_w = 131, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1960, .adv_w = 179, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1977, .adv_w = 138, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1988, .adv_w = 179, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2006, .adv_w = 138, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2017, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2034, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2043, .adv_w = 174, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2060, .adv_w = 142, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2073, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2090, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2100, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2112, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2121, .adv_w = 181, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2140, .adv_w = 131, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2151, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 2152, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 2154, .adv_w = 0, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 2156, .adv_w = 0, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 2158, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2160, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2162, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2163, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2180, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2189, .adv_w = 149, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2202, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2214, .adv_w = 173, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2234, .adv_w = 124, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2246, .adv_w = 174, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2261, .adv_w = 140, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2274, .adv_w = 136, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2288, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2299, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2311, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2320, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2332, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2341, .adv_w = 174, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2356, .adv_w = 141, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2368, .adv_w = 62, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2376, .adv_w = 57, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2382, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2394, .adv_w = 129, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2406, .adv_w = 149, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2419, .adv_w = 129, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2431, .adv_w = 121, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2443, .adv_w = 55, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2447, .adv_w = 121, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2463, .adv_w = 55, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2473, .adv_w = 217, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2491, .adv_w = 208, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2506, .adv_w = 217, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2526, .adv_w = 208, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2540, .adv_w = 172, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2555, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2564, .adv_w = 181, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2583, .adv_w = 131, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2594, .adv_w = 181, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2614, .adv_w = 131, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2625, .adv_w = 181, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2644, .adv_w = 131, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2655, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2667, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2679, .adv_w = 146, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2692, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2700, .adv_w = 146, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2716, .adv_w = 111, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2726, .adv_w = 135, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2739, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2747, .adv_w = 135, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2763, .adv_w = 110, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2773, .adv_w = 135, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2789, .adv_w = 110, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2799, .adv_w = 132, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2812, .adv_w = 97, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2821, .adv_w = 179, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2838, .adv_w = 138, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2849, .adv_w = 149, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2866, .adv_w = 129, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2876, .adv_w = 149, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2893, .adv_w = 129, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2903, .adv_w = 228, .box_w = 14, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2924, .adv_w = 181, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2938, .adv_w = 228, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2961, .adv_w = 181, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2976, .adv_w = 127, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2988, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2996, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3013, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3022, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3039, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3048, .adv_w = 155, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3066, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3077, .adv_w = 155, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3095, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3105, .adv_w = 155, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3124, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3135, .adv_w = 155, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3154, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3166, .adv_w = 155, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3186, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3198, .adv_w = 155, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3217, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3228, .adv_w = 155, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3247, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3258, .adv_w = 155, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3278, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3290, .adv_w = 155, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3310, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3321, .adv_w = 155, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3343, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3355, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3367, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3376, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3388, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3397, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3409, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3418, .adv_w = 136, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3432, .adv_w = 125, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3443, .adv_w = 136, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3456, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3466, .adv_w = 136, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3480, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3491, .adv_w = 136, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3505, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3517, .adv_w = 136, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3531, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3543, .adv_w = 62, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3550, .adv_w = 57, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3555, .adv_w = 62, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3559, .adv_w = 57, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3563, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3580, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3589, .adv_w = 181, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3607, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3616, .adv_w = 181, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3634, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3644, .adv_w = 181, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3662, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3672, .adv_w = 181, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3691, .adv_w = 131, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3702, .adv_w = 181, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3721, .adv_w = 131, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3733, .adv_w = 181, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3753, .adv_w = 131, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3765, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3782, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3792, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3809, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3819, .adv_w = 181, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3837, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3847, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3864, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3874, .adv_w = 181, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3893, .adv_w = 131, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3905, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3920, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3929, .adv_w = 179, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3945, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3954, .adv_w = 179, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3972, .adv_w = 138, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3984, .adv_w = 179, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4002, .adv_w = 138, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4014, .adv_w = 179, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4034, .adv_w = 138, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4046, .adv_w = 179, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4064, .adv_w = 138, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4076, .adv_w = 179, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 4097, .adv_w = 138, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 4111, .adv_w = 151, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4126, .adv_w = 131, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4139, .adv_w = 151, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4156, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4166, .adv_w = 151, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4183, .adv_w = 131, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4198, .adv_w = 151, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4215, .adv_w = 131, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 4228, .adv_w = 142, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 4229, .adv_w = 180, .box_w = 9, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 4231, .adv_w = 67, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4232, .adv_w = 67, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4233, .adv_w = 124, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4236, .adv_w = 124, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4239, .adv_w = 90, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 4243, .adv_w = 90, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4246, .adv_w = 193, .box_w = 10, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4248, .adv_w = 260, .box_w = 15, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 4269, .adv_w = 60, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4270, .adv_w = 101, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 7}};

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
        0, 0, -16, 0, 0, 0, 0, 0,
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
        0, 0, -18, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -11, 0, 0, 0, 0, 0,
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
        0, -12, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -9, 0, 0, -6, 0, -6,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -16, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -8, 0, 0, 0,
        0, -7, -2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -20, -22, 0,
        0, -9, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -4, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -20,
        -20, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -16, 0, 0,
        0, 0, -20, 0, 0, 0, 0, -24,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -11, -11, -18, 0,
        0, 0, 0, 0, 0, -10, 0, 0,
        0, 0, 0, -3, -3, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -4, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -13, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -7, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -7, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -2,
        -13, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 4, 0, 0,
        0, 0, 0, 0, -7, -12, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -11, 0, 0, 0, 0, -7, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -11, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -11, 0, 0, 0, 0, 0, -7, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -4, -3, -7, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -10, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        3, -7, 0, -11, 0, -18, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -7, 0, 0, 0, 0,
        0, 0, 0, 0, -10, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -7, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -7, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -9, 0, -18, 0, 0,
        0, 0, -17, 0, 0, 0, -3, -15,
        -7, 0, -13, 0, -7, -4, -4, -17,
        0, 0, 9, 7, 9, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -18, 0, 0, 0,
        0, 0, 0, -9, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -7, 0, 0,
        -9, 0, 0, 3, 0, 9, 0, 9,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -11, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -17, 0,
        -18, 0, 0, 0, 0, -22, 0, 0,
        0, -7, 0, 0, -18, -20, 0, -11,
        -11, 0, -22, 0, 0, 3, 0, 4,
        0, 0, 0, 0, 0, -9, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -4, 0, 0, -17, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -17, 0, 0, 0, 0,
        0, -6, 0, 0, -13, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -6, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -6, 0, 0, -15, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -13, -13, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, 0, -8, 0, -1, -12, 0,
        0, 0, 0, 0, 0, 0, -8, -13,
        0, 3, 0, 11, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -4, 0, 0, -12,
        0, 0, 0, 0, 0, 0, -3, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, -4, 0, 1,
        -17, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 6, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -7, 0, 0,
        0, 0, 0, -7, 0, 0, 0, 0,
        -3, 0, -7, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -8, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -8, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -13, -27, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, -27, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -8, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -9, -11, 0, -4, -7, 0, -6,
        -7, 0, -6, -7, 0, -11, -9, 0,
        -7, 0, -7, 0, 0, 0, 0, 0,
        0, 0, 0, -9, -20, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 4, 0, 0,
        -20, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -12, -9, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -9, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -20, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -4, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 6, 0, 6, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 9, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 16, 0, 16, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 18, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -9, -11, 0, -4, -7, 0, -6,
        -7, 0, -6, -7, 0, 0, -9, 0,
        -7, 0, -7, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -8,
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
const lv_font_t elms_sans_bold_14 = {
#else
lv_font_t elms_sans_bold_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 19,                              /*The maximum line height required by the font*/
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

#endif /*#if ELMS_SANS_BOLD_14*/
