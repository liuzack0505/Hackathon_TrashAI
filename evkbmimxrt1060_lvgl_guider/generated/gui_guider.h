/*
* Copyright 2023 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_img_1;
	lv_obj_t *screen_imgbtn_4;
	lv_obj_t *screen_imgbtn_4_label;
	lv_obj_t *screen_imgbtn_3;
	lv_obj_t *screen_imgbtn_3_label;
	lv_obj_t *screen_imgbtn_2;
	lv_obj_t *screen_imgbtn_2_label;
	lv_obj_t *screen_imgbtn_1;
	lv_obj_t *screen_imgbtn_1_label;
	lv_obj_t *screen_title;
	lv_obj_t *screen_label_1;
	lv_obj_t *screen_label_2;
	lv_obj_t *screen_label_3;
	lv_obj_t *screen_label_4;
	lv_obj_t *screen_1;
	bool screen_1_del;
	lv_obj_t *screen_1_img_1;
	lv_obj_t *screen_1_label_1;
	lv_obj_t *screen_1_imgbtn_1;
	lv_obj_t *screen_1_imgbtn_1_label;
	lv_obj_t *screen_2;
	bool screen_2_del;
	lv_obj_t *screen_2_img_1;
	lv_obj_t *screen_2_label_2;
	lv_obj_t *screen_2_imgbtn_2;
	lv_obj_t *screen_2_imgbtn_2_label;
	lv_obj_t *screen_3;
	bool screen_3_del;
	lv_obj_t *screen_3_img_1;
	lv_obj_t *screen_3_label_1;
	lv_obj_t *screen_3_imgbtn_1;
	lv_obj_t *screen_3_imgbtn_1_label;
	lv_obj_t *screen_4;
	bool screen_4_del;
	lv_obj_t *screen_4_img_1;
	lv_obj_t *screen_4_label_1;
	lv_obj_t *screen_4_imgbtn_1;
	lv_obj_t *screen_4_imgbtn_1_label;
}lv_ui;

void ui_init_style(lv_style_t * style);
void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;

void setup_scr_screen(lv_ui *ui);
void setup_scr_screen_1(lv_ui *ui);
void setup_scr_screen_2(lv_ui *ui);
void setup_scr_screen_3(lv_ui *ui);
void setup_scr_screen_4(lv_ui *ui);
LV_IMG_DECLARE(_background_alpha_480x272);
LV_IMG_DECLARE(_box_alpha_80x80);
LV_IMG_DECLARE(_box_alpha_80x80);
LV_IMG_DECLARE(_box_alpha_80x80);
LV_IMG_DECLARE(_box_alpha_80x80);
LV_IMG_DECLARE(_can_alpha_44x78);
LV_IMG_DECLARE(_can_alpha_44x78);
LV_IMG_DECLARE(_can_alpha_44x78);
LV_IMG_DECLARE(_can_alpha_44x78);
LV_IMG_DECLARE(_paper_alpha_56x78);
LV_IMG_DECLARE(_paper_alpha_56x78);
LV_IMG_DECLARE(_paper_alpha_56x78);
LV_IMG_DECLARE(_paper_alpha_56x78);
LV_IMG_DECLARE(_plastic_alpha_35x84);
LV_IMG_DECLARE(_plastic_alpha_35x84);
LV_IMG_DECLARE(_plastic_alpha_35x84);
LV_IMG_DECLARE(_plastic_alpha_35x84);
LV_IMG_DECLARE(_background_alpha_480x272);
LV_IMG_DECLARE(_plastic_alpha_75x169);
LV_IMG_DECLARE(_plastic_alpha_75x169);
LV_IMG_DECLARE(_plastic_alpha_75x169);
LV_IMG_DECLARE(_plastic_alpha_75x169);
LV_IMG_DECLARE(_background_alpha_480x272);
LV_IMG_DECLARE(_paper_alpha_116x156);
LV_IMG_DECLARE(_paper_alpha_116x156);
LV_IMG_DECLARE(_paper_alpha_116x156);
LV_IMG_DECLARE(_paper_alpha_116x156);
LV_IMG_DECLARE(_background_alpha_480x272);
LV_IMG_DECLARE(_can_alpha_75x169);
LV_IMG_DECLARE(_can_alpha_75x169);
LV_IMG_DECLARE(_can_alpha_75x169);
LV_IMG_DECLARE(_can_alpha_75x169);
LV_IMG_DECLARE(_background_alpha_480x272);
LV_IMG_DECLARE(_box_alpha_170x169);
LV_IMG_DECLARE(_box_alpha_170x169);
LV_IMG_DECLARE(_box_alpha_170x169);
LV_IMG_DECLARE(_box_alpha_170x169);

LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_montserratMedium_20)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_montserratMedium_25)


#ifdef __cplusplus
}
#endif
#endif
