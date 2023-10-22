################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite.c \
../lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.c \
../lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.c \
../lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_line.c \
../lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.c \
../lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_buf.c \
../lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_utils.c 

C_DEPS += \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite.d \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.d \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.d \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_line.d \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.d \
./lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_buf.d \
./lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_utils.d 

OBJS += \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite.o \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.o \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.o \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_line.o \
./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.o \
./lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_buf.o \
./lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_utils.o 


# Each subdirectory must supply rules for building sources it contributes
lvgl/lvgl/src/draw/nxp/vglite/%.o: ../lvgl/lvgl/src/draw/nxp/vglite/%.c lvgl/lvgl/src/draw/nxp/vglite/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__NEWLIB__ -DCPU_MIMXRT1062DVL6B -DCPU_MIMXRT1062DVL6B_cm7 -DXIP_BOOT_HEADER_DCD_ENABLE=1 -DSKIP_SYSCLK_INIT -DDATA_SECTION_IS_CACHEABLE=1 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DFSL_SDK_DRIVER_QUICK_ACCESS_ENABLE=1 -DLV_CONF_INCLUDE_SIMPLE=1 -DMCUXPRESSO_SDK -DSDK_I2C_BASED_COMPONENT_USED=1 -DSERIAL_PORT_TYPE_UART=1 -DSDK_OS_FREE_RTOS -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\source" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\drivers" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\touchpanel" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\video" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl\src" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\device" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\utilities" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\uart" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\serial_manager" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\lists" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\xip" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\include" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\CMSIS" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\board" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\custom" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_customer_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\evkbmimxrt1060\lvgl_examples\lvgl_guider" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -Wno-format -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lvgl-2f-lvgl-2f-src-2f-draw-2f-nxp-2f-vglite

clean-lvgl-2f-lvgl-2f-src-2f-draw-2f-nxp-2f-vglite:
	-$(RM) ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite.d ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite.o ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.d ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_arc.o ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.d ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_blend.o ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_line.d ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_line.o ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.d ./lvgl/lvgl/src/draw/nxp/vglite/lv_draw_vglite_rect.o ./lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_buf.d ./lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_buf.o ./lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_utils.d ./lvgl/lvgl/src/draw/nxp/vglite/lv_vglite_utils.o

.PHONY: clean-lvgl-2f-lvgl-2f-src-2f-draw-2f-nxp-2f-vglite

