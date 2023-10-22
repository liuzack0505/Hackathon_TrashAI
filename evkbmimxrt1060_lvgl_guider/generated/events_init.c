/*
* Copyright 2023 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"


static void screen_imgbtn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_4_del == true) {
	          setup_scr_screen_4(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen_4, LV_SCR_LOAD_ANIM_NONE, 200, 200, false);
	        guider_ui.screen_del = false;
	    }
		break;
	}
	default:
		break;
	}
}
static void screen_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_3_del == true) {
	          setup_scr_screen_3(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen_3, LV_SCR_LOAD_ANIM_NONE, 200, 200, false);
	        guider_ui.screen_del = false;
	    }
		break;
	}
	default:
		break;
	}
}
static void screen_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_2_del == true) {
	          setup_scr_screen_2(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen_2, LV_SCR_LOAD_ANIM_NONE, 200, 200, false);
	        guider_ui.screen_del = false;
	    }
		break;
	}
	default:
		break;
	}
}
static void screen_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_1_del == true) {
	          setup_scr_screen_1(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen_1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
	        guider_ui.screen_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_imgbtn_4, screen_imgbtn_4_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_imgbtn_3, screen_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_imgbtn_2, screen_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_imgbtn_1, screen_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}
static void screen_1_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_del == true) {
	          setup_scr_screen(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
	        guider_ui.screen_1_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_screen_1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_1_imgbtn_1, screen_1_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}
static void screen_2_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_del == true) {
	          setup_scr_screen(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
	        guider_ui.screen_2_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_screen_2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_2_imgbtn_2, screen_2_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}
static void screen_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SCREEN_LOADED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_del == true) {
	          setup_scr_screen(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen, LV_SCR_LOAD_ANIM_NONE, 200, 200, false);
	        guider_ui.screen_3_del = false;
	    }
		break;
	}
	default:
		break;
	}
}
static void screen_3_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_del == true) {
	          setup_scr_screen(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
	        guider_ui.screen_3_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_screen_3(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_3, screen_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_3_imgbtn_1, screen_3_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}
static void screen_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_del == true) {
	          setup_scr_screen(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
	        guider_ui.screen_4_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void screen_4_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.screen_del == true) {
	          setup_scr_screen(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.screen, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
	        guider_ui.screen_4_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_screen_4(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_4, screen_4_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_4_imgbtn_1, screen_4_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}

void events_init(lv_ui *ui)
{

}
