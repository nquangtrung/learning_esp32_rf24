#include "LVGL_Driver.h"
#include "lvgl.h"

void disp_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map)
{
  lv_display_rotation_t rotation = lv_display_get_rotation(disp);
  lv_area_t rotated_area;
  if (rotation != LV_DISPLAY_ROTATION_0)
  {
    lv_color_format_t cf = lv_display_get_color_format(disp);
    /*Calculate the position of the rotated area*/
    rotated_area = *area;
    lv_display_rotate_area(disp, &rotated_area);
    /*Calculate the source stride (bytes in a line) from the width of the area*/
    uint32_t src_stride = lv_draw_buf_width_to_stride(lv_area_get_width(area), cf);
    /*Calculate the stride of the destination (rotated) area too*/
    uint32_t dest_stride = lv_draw_buf_width_to_stride(lv_area_get_width(&rotated_area), cf);
    /*Have a buffer to store the rotated area and perform the rotation*/
    int32_t src_w = lv_area_get_width(area);
    int32_t src_h = lv_area_get_height(area);

    static uint8_t rotated_buf[DRAW_BUF_SIZE]; /*A buffer to store the rotated area. The size is in bytes, so 4 is used for 32 bit color and 20 is used because the original draw buffer is 1/20 screen size*/
    lv_draw_sw_rotate(px_map, rotated_buf, src_w, src_h, src_stride, dest_stride, rotation, cf);
    /*Use the rotated area and rotated buffer from now on*/
    area = &rotated_area;
    px_map = rotated_buf;
  }

  LCD_addWindow(area->x1, area->y1, area->x2, area->y2, (uint16_t *)px_map);
  lv_disp_flush_ready(disp);
}

static uint32_t tick(void)
{
  return millis();
}

lv_display_rotation_t current_rotation = LV_DISPLAY_ROTATION_270;
lv_display_t *disp;

void LVGL_init()
{
  lv_init();
  lv_tick_set_cb(tick);
  disp = lv_display_create(TFT_HOR_RES, TFT_VER_RES);
  lv_display_set_flush_cb(disp, disp_flush);
  lv_display_set_rotation(disp, current_rotation);
  lv_display_set_buffers(disp, draw_buf, NULL, sizeof(draw_buf), LV_DISPLAY_RENDER_MODE_PARTIAL);
}

void next_rotation()
{
  if (current_rotation == LV_DISPLAY_ROTATION_270)
    current_rotation = LV_DISPLAY_ROTATION_0;
  else if (current_rotation == LV_DISPLAY_ROTATION_0)
    current_rotation = LV_DISPLAY_ROTATION_90;
  else if (current_rotation == LV_DISPLAY_ROTATION_90)
    current_rotation = LV_DISPLAY_ROTATION_180;
  else if (current_rotation == LV_DISPLAY_ROTATION_180)
    current_rotation = LV_DISPLAY_ROTATION_270;
}

void previous_rotation()
{
  if (current_rotation == LV_DISPLAY_ROTATION_270)
    current_rotation = LV_DISPLAY_ROTATION_180;
  else if (current_rotation == LV_DISPLAY_ROTATION_0)
    current_rotation = LV_DISPLAY_ROTATION_270;
  else if (current_rotation == LV_DISPLAY_ROTATION_90)
    current_rotation = LV_DISPLAY_ROTATION_0;
  else if (current_rotation == LV_DISPLAY_ROTATION_180)
    current_rotation = LV_DISPLAY_ROTATION_90;
}

void LVGL_loop()
{
  lv_timer_handler();
  // delay(5);
}