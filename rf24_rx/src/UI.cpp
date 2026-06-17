#include "UI.h"
#include <lvgl.h>
#include "drivers/LVGL_Driver.h"
#include "receiver.h"
#include <fonts/roboto/roboto_regular_14.c>

LV_FONT_DECLARE(roboto_regular_14)
lv_obj_t *label;

void UI_init()
{
  label = lv_label_create(lv_screen_active());
  lv_obj_align(label, LV_ALIGN_TOP_LEFT, 0, 0);
  lv_obj_set_width(label, TFT_VER_RES);
  lv_label_set_long_mode(label, LV_LABEL_LONG_MODE_CLIP);
  lv_obj_set_style_bg_color(label, lv_color_make(0, 0, 0), 0);
  lv_obj_set_style_bg_opa(label, LV_OPA_50, 0);
  lv_obj_set_style_pad_all(label, 10, 0);
  lv_obj_set_style_text_color(label, lv_color_make(255, 255, 255), 0);
  lv_obj_set_style_text_font(label, &roboto_regular_14, 0);
}

void UI_loop()
{
  lv_label_set_text(label, receivedData.c_str());
}