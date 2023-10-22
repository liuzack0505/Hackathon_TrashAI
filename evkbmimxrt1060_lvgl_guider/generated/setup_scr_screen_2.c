/*
* Copyright 2023 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"


void setup_scr_screen_2(lv_ui *ui)
{
	//Write codes screen_2
	ui->screen_2 = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_2, 480, 272);

	//Write style for screen_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_1
	ui->screen_2_img_1 = lv_img_create(ui->screen_2);
	lv_obj_add_flag(ui->screen_2_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_1, &_background_alpha_480x272);
	lv_img_set_pivot(ui->screen_2_img_1, 50,50);
	lv_img_set_angle(ui->screen_2_img_1, 0);
	lv_obj_set_pos(ui->screen_2_img_1, 0, 0);
	lv_obj_set_size(ui->screen_2_img_1, 480, 272);

	//Write style for screen_2_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_label_2
	ui->screen_2_label_2 = lv_label_create(ui->screen_2);
	lv_label_set_text(ui->screen_2_label_2, "Paper !");
	lv_label_set_long_mode(ui->screen_2_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_2_label_2, 183, 218);
	lv_obj_set_size(ui->screen_2_label_2, 123, 32);

	//Write style for screen_2_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_label_2, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_2_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_imgbtn_2
	ui->screen_2_imgbtn_2 = lv_imgbtn_create(ui->screen_2);
	lv_obj_add_flag(ui->screen_2_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->screen_2_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_paper_alpha_116x156, NULL);
	lv_imgbtn_set_src(ui->screen_2_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_paper_alpha_116x156, NULL);
	lv_imgbtn_set_src(ui->screen_2_imgbtn_2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_paper_alpha_116x156, NULL);
	lv_imgbtn_set_src(ui->screen_2_imgbtn_2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_paper_alpha_116x156, NULL);
	ui->screen_2_imgbtn_2_label = lv_label_create(ui->screen_2_imgbtn_2);
	lv_label_set_text(ui->screen_2_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->screen_2_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_2_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_2_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->screen_2_imgbtn_2, 182, 43);
	lv_obj_set_size(ui->screen_2_imgbtn_2, 116, 156);

	//Write style for screen_2_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_2_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_2_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->screen_2_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->screen_2_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->screen_2_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for screen_2_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->screen_2_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->screen_2_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->screen_2_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->screen_2_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for screen_2_imgbtn_2, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
	lv_obj_set_style_img_opa(ui->screen_2_imgbtn_2, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_2);

	
	//Init events for screen.
	events_init_screen_2(ui);
}
