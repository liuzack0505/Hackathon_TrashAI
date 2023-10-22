/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>

#include "fsl_debug_console.h"
#include "lvgl_support.h"
#include "pin_mux.h"
#include "board.h"
#include "lvgl.h"
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"
#include "clock_config.h"
#include "fsl_lpuart.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define DEMO_LPUART            LPUART1
#define DEMO_LPUART_CLK_FREQ   BOARD_DebugConsoleSrcFreq()
#define DEMO_LPUART_IRQn       LPUART1_IRQn
#define DEMO_LPUART_IRQHandler LPUART1_IRQHandler

/*! @brief Ring buffer size (Unit: Byte). */
#define DEMO_RING_BUFFER_SIZE 16
/*******************************************************************************
 * Variables
 ******************************************************************************/
static volatile bool s_lvgl_initialized = false;
static unsigned int counter_1 = 0;
static char buf_1[4];
static unsigned int counter_2 = 0;
static char buf_2[4];
static unsigned int counter_3 = 0;
static char buf_3[4];
static unsigned int counter_4 = 0;
static char buf_4[4];
lv_ui guider_ui;

uint8_t demoRingBuffer[DEMO_RING_BUFFER_SIZE];
volatile uint16_t txIndex; /* Index of the data to send out. */
volatile uint16_t rxIndex; /* Index of the memory to save new arrived data. */

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

#if LV_USE_LOG
static void print_cb(const char *buf)
{
    PRINTF("\r%s\n", buf);
}
#endif


uint8_t data; // mayusheng

static void AppTask(void *param)
{
#if LV_USE_LOG
    lv_log_register_print_cb(print_cb);
#endif

    lv_port_pre_init();
    lv_init();
    lv_port_disp_init();
    lv_port_indev_init();

    s_lvgl_initialized = true;

    setup_ui(&guider_ui);
    events_init(&guider_ui);
    custom_init(&guider_ui);

    for (;;)
    {
        lv_task_handler();

        vTaskDelay(5);
    }
}


void DEMO_LPUART_IRQHandler(void)
{
    uint16_t tmprxIndex = rxIndex;
    uint16_t tmptxIndex = txIndex;

    /* If new data arrived. */
    if ((kLPUART_RxDataRegFullFlag)&LPUART_GetStatusFlags(DEMO_LPUART))
    {
        data = LPUART_ReadByte(DEMO_LPUART);

        /* If ring buffer is not full, add data to ring buffer. */
        if (((tmprxIndex + 1) % DEMO_RING_BUFFER_SIZE) != tmptxIndex)
        {
            demoRingBuffer[rxIndex] = data;
            rxIndex++;
            rxIndex %= DEMO_RING_BUFFER_SIZE;
        }

        switch(data)
        {
        case '1': case 1:
        {
        	//set counter
        	counter_1++;

        	//change scene
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
        case '2': case 2:
        {
        	//set counter
        	counter_2++;

        	//change scene
        	lv_obj_t * act_scr = lv_scr_act();
			lv_disp_t * d = lv_obj_get_disp(act_scr);
			if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
				if (guider_ui.screen_2_del == true) {
					setup_scr_screen_2(&guider_ui);
				}
				lv_scr_load_anim(guider_ui.screen_2, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
				guider_ui.screen_del = true;
			}
			break;
        }
        case '3': case 3:
        {
        	//set counter
        	counter_3++;

        	//change scene
        	lv_obj_t * act_scr = lv_scr_act();
			lv_disp_t * d = lv_obj_get_disp(act_scr);
			if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
				if (guider_ui.screen_3_del == true) {
					setup_scr_screen_3(&guider_ui);
				}
				lv_scr_load_anim(guider_ui.screen_3, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
				guider_ui.screen_del = true;
			}
			break;
        }
        case '4': case 4:
        {
        	//set counter
        	counter_4++;

        	//change scene
        	lv_obj_t * act_scr = lv_scr_act();
			lv_disp_t * d = lv_obj_get_disp(act_scr);
			if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
				if (guider_ui.screen_4_del == true) {
					setup_scr_screen_4(&guider_ui);
				}
				lv_scr_load_anim(guider_ui.screen_4, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
				guider_ui.screen_del = true;
			}
			break;
        }
        case '5': case 5:
        {
        	lv_obj_t * act_scr = lv_scr_act();
        	lv_disp_t * d = lv_obj_get_disp(act_scr);
       		if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
       			if (guider_ui.screen_del == true) {
       				setup_scr_screen(&guider_ui);
       				sprintf(buf_1, "%d", counter_1);
       				sprintf(buf_2, "%d", counter_2);
       				sprintf(buf_3, "%d", counter_3);
       				sprintf(buf_4, "%d", counter_4);
       				lv_label_set_text(guider_ui.screen_label_1, buf_1);
       				lv_label_set_text(guider_ui.screen_label_2, buf_2);
       				lv_label_set_text(guider_ui.screen_label_3, buf_3);
       				lv_label_set_text(guider_ui.screen_label_4, buf_4);
     			}
       			lv_scr_load_anim(guider_ui.screen, LV_SCR_LOAD_ANIM_NONE, 200, 200, true);
       		}
      		break;
        }
        default:
        	break;
        }
    }
    SDK_ISR_EXIT_BARRIER;
}

static void lpuartTask(void *param)
{
	lpuart_config_t config;
	uint16_t tmprxIndex = rxIndex;
	uint16_t tmptxIndex = txIndex;

	LPUART_GetDefaultConfig(&config);
	config.baudRate_Bps = BOARD_DEBUG_UART_BAUDRATE;
    config.enableTx     = true;
    config.enableRx     = true;

    LPUART_Init(DEMO_LPUART, &config, DEMO_LPUART_CLK_FREQ);


	/* Enable RX interrupt. */
    LPUART_EnableInterrupts(DEMO_LPUART, kLPUART_RxDataRegFullInterruptEnable);
    EnableIRQ(DEMO_LPUART_IRQn);

    while (1)
    {
            /* Send data only when LPUART TX register is empty and ring buffer has data to send out. */
    	while (kLPUART_TxDataRegEmptyFlag & LPUART_GetStatusFlags(DEMO_LPUART))
        {
    		tmprxIndex = rxIndex;
            tmptxIndex = txIndex;
            if (tmprxIndex != tmptxIndex)
            {
            	LPUART_WriteByte(DEMO_LPUART, demoRingBuffer[txIndex]);
            	txIndex++;
            	txIndex %= DEMO_RING_BUFFER_SIZE;
            }
        }
    	vTaskDelay(5);
    }
}

/*******************************************************************************
 * Code
 ******************************************************************************/
AT_QUICKACCESS_SECTION_CODE(void BOARD_ReconfigFlexSpiRxBuffer(void));

/*
 * When PXP fetch images from FlexSPI flash, the default FlexSPI RX buffer
 * configuration does not meet the PXP bandwidth requirement. Reconfigure
 * here.
 */
void BOARD_ReconfigFlexSpiRxBuffer(void)
{
    uint32_t ahbcr;

    /* Disable I cache and D cache */
    if (SCB_CCR_IC_Msk == (SCB_CCR_IC_Msk & SCB->CCR))
    {
        SCB_DisableICache();
    }

    if (SCB_CCR_DC_Msk == (SCB_CCR_DC_Msk & SCB->CCR))
    {
        SCB_DisableDCache();
    }

    ahbcr = FLEXSPI->AHBCR;

    /* Temporarily disable prefetching while changing the buffer settings */
    FLEXSPI->AHBCR = ahbcr & ~(FLEXSPI_AHBCR_CACHABLEEN_MASK | FLEXSPI_AHBCR_PREFETCHEN_MASK);

    /* Wait for FlexSPI idle to make sure no flash data transfer. */
    while ((FLEXSPI->STS0 & FLEXSPI_STS0_ARBIDLE_MASK) == 0U)
    {
    }

    /* Allocate half of the prefetch buffer to the core */
    FLEXSPI->AHBRXBUFCR0[0] =
        FLEXSPI_AHBRXBUFCR0_PREFETCHEN_MASK | FLEXSPI_AHBRXBUFCR0_MSTRID(0) | FLEXSPI_AHBRXBUFCR0_BUFSZ(0x40);

    /* Disable dedicate prefetch buffer for DMA. */
    FLEXSPI->AHBRXBUFCR0[1] =
        FLEXSPI_AHBRXBUFCR0_PREFETCHEN_MASK | FLEXSPI_AHBRXBUFCR0_MSTRID(1) | FLEXSPI_AHBRXBUFCR0_BUFSZ(0x00);

    /* Disable dedicate prefetch buffer for DCP. */
    FLEXSPI->AHBRXBUFCR0[2] =
        FLEXSPI_AHBRXBUFCR0_PREFETCHEN_MASK | FLEXSPI_AHBRXBUFCR0_MSTRID(2) | FLEXSPI_AHBRXBUFCR0_BUFSZ(0x00);

    /* Other half of the buffer for other masters incl. PXP */
    FLEXSPI->AHBRXBUFCR0[3] =
        FLEXSPI_AHBRXBUFCR0_PREFETCHEN_MASK | FLEXSPI_AHBRXBUFCR0_MSTRID(3) | FLEXSPI_AHBRXBUFCR0_BUFSZ(0x40);

    FLEXSPI->AHBCR = ahbcr; /* Set AHBCR back to the original value */

    /* Enable I cache and D cache */
    SCB_EnableDCache();
    SCB_EnableICache();
}

/*!
 * @brief Main function
 */
int main(void)
{
    BaseType_t stat1, stat2;

    /* Init board hardware. */
    /* Set the eLCDIF read_qos priority high, to make sure eLCDIF
     * can fetch data in time when PXP is used.
     */    *((volatile uint32_t *)0x41044100) = 5;

    BOARD_ConfigMPU();
    BOARD_ReconfigFlexSpiRxBuffer();
    BOARD_InitPins();
    BOARD_InitI2C1Pins();
    BOARD_InitSemcPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
    BOARD_InitBootPins();
    BOARD_InitBootClocks();

    stat1 = xTaskCreate(AppTask, "lvgl", configMINIMAL_STACK_SIZE + 800, NULL, tskIDLE_PRIORITY + 2, NULL);
    stat2 = xTaskCreate(lpuartTask, "lpuart", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1, NULL);
    if (pdPASS != stat1)
    {
        PRINTF("Failed to create lvgl task");
        while (1)
            ;
    }
    if (pdPASS != stat2)
    {
    	PRINTF("Failed to create lpuart task");
        while (1)
            ;
    }

    vTaskStartScheduler();

    for (;;)
    {
    } /* should never get here */
}

/*!
 * @brief Malloc failed hook.
 */
void vApplicationMallocFailedHook(void)
{
    PRINTF("Malloc failed. Increase the heap size.");

    for (;;)
        ;
}

/*!
 * @brief FreeRTOS tick hook.
 */
void vApplicationTickHook(void)
{
    if (s_lvgl_initialized)
    {
        lv_tick_inc(1);
    }
}

/*!
 * @brief Stack overflow hook.
 */
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName)
{
    (void)pcTaskName;
    (void)xTask;

    for (;;)
        ;
}
