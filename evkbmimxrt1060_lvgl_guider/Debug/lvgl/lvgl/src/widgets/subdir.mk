################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/lvgl/src/widgets/lv_arc.c \
../lvgl/lvgl/src/widgets/lv_bar.c \
../lvgl/lvgl/src/widgets/lv_btn.c \
../lvgl/lvgl/src/widgets/lv_btnmatrix.c \
../lvgl/lvgl/src/widgets/lv_canvas.c \
../lvgl/lvgl/src/widgets/lv_checkbox.c \
../lvgl/lvgl/src/widgets/lv_dropdown.c \
../lvgl/lvgl/src/widgets/lv_img.c \
../lvgl/lvgl/src/widgets/lv_label.c \
../lvgl/lvgl/src/widgets/lv_line.c \
../lvgl/lvgl/src/widgets/lv_objx_templ.c \
../lvgl/lvgl/src/widgets/lv_roller.c \
../lvgl/lvgl/src/widgets/lv_slider.c \
../lvgl/lvgl/src/widgets/lv_switch.c \
../lvgl/lvgl/src/widgets/lv_table.c \
../lvgl/lvgl/src/widgets/lv_textarea.c 

C_DEPS += \
./lvgl/lvgl/src/widgets/lv_arc.d \
./lvgl/lvgl/src/widgets/lv_bar.d \
./lvgl/lvgl/src/widgets/lv_btn.d \
./lvgl/lvgl/src/widgets/lv_btnmatrix.d \
./lvgl/lvgl/src/widgets/lv_canvas.d \
./lvgl/lvgl/src/widgets/lv_checkbox.d \
./lvgl/lvgl/src/widgets/lv_dropdown.d \
./lvgl/lvgl/src/widgets/lv_img.d \
./lvgl/lvgl/src/widgets/lv_label.d \
./lvgl/lvgl/src/widgets/lv_line.d \
./lvgl/lvgl/src/widgets/lv_objx_templ.d \
./lvgl/lvgl/src/widgets/lv_roller.d \
./lvgl/lvgl/src/widgets/lv_slider.d \
./lvgl/lvgl/src/widgets/lv_switch.d \
./lvgl/lvgl/src/widgets/lv_table.d \
./lvgl/lvgl/src/widgets/lv_textarea.d 

OBJS += \
./lvgl/lvgl/src/widgets/lv_arc.o \
./lvgl/lvgl/src/widgets/lv_bar.o \
./lvgl/lvgl/src/widgets/lv_btn.o \
./lvgl/lvgl/src/widgets/lv_btnmatrix.o \
./lvgl/lvgl/src/widgets/lv_canvas.o \
./lvgl/lvgl/src/widgets/lv_checkbox.o \
./lvgl/lvgl/src/widgets/lv_dropdown.o \
./lvgl/lvgl/src/widgets/lv_img.o \
./lvgl/lvgl/src/widgets/lv_label.o \
./lvgl/lvgl/src/widgets/lv_line.o \
./lvgl/lvgl/src/widgets/lv_objx_templ.o \
./lvgl/lvgl/src/widgets/lv_roller.o \
./lvgl/lvgl/src/widgets/lv_slider.o \
./lvgl/lvgl/src/widgets/lv_switch.o \
./lvgl/lvgl/src/widgets/lv_table.o \
./lvgl/lvgl/src/widgets/lv_textarea.o 


# Each subdirectory must supply rules for building sources it contributes
lvgl/lvgl/src/widgets/%.o: ../lvgl/lvgl/src/widgets/%.c lvgl/lvgl/src/widgets/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__NEWLIB__ -DCPU_MIMXRT1062DVL6B -DCPU_MIMXRT1062DVL6B_cm7 -DXIP_BOOT_HEADER_DCD_ENABLE=1 -DSKIP_SYSCLK_INIT -DDATA_SECTION_IS_CACHEABLE=1 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DFSL_SDK_DRIVER_QUICK_ACCESS_ENABLE=1 -DLV_CONF_INCLUDE_SIMPLE=1 -DMCUXPRESSO_SDK -DSDK_I2C_BASED_COMPONENT_USED=1 -DSERIAL_PORT_TYPE_UART=1 -DSDK_OS_FREE_RTOS -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\source" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\drivers" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\touchpanel" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\video" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl\src" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\device" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\utilities" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\uart" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\serial_manager" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\lists" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\xip" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\include" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\CMSIS" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\board" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\custom" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_customer_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\evkbmimxrt1060\lvgl_examples\lvgl_guider" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -Wno-format -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lvgl-2f-lvgl-2f-src-2f-widgets

clean-lvgl-2f-lvgl-2f-src-2f-widgets:
	-$(RM) ./lvgl/lvgl/src/widgets/lv_arc.d ./lvgl/lvgl/src/widgets/lv_arc.o ./lvgl/lvgl/src/widgets/lv_bar.d ./lvgl/lvgl/src/widgets/lv_bar.o ./lvgl/lvgl/src/widgets/lv_btn.d ./lvgl/lvgl/src/widgets/lv_btn.o ./lvgl/lvgl/src/widgets/lv_btnmatrix.d ./lvgl/lvgl/src/widgets/lv_btnmatrix.o ./lvgl/lvgl/src/widgets/lv_canvas.d ./lvgl/lvgl/src/widgets/lv_canvas.o ./lvgl/lvgl/src/widgets/lv_checkbox.d ./lvgl/lvgl/src/widgets/lv_checkbox.o ./lvgl/lvgl/src/widgets/lv_dropdown.d ./lvgl/lvgl/src/widgets/lv_dropdown.o ./lvgl/lvgl/src/widgets/lv_img.d ./lvgl/lvgl/src/widgets/lv_img.o ./lvgl/lvgl/src/widgets/lv_label.d ./lvgl/lvgl/src/widgets/lv_label.o ./lvgl/lvgl/src/widgets/lv_line.d ./lvgl/lvgl/src/widgets/lv_line.o ./lvgl/lvgl/src/widgets/lv_objx_templ.d ./lvgl/lvgl/src/widgets/lv_objx_templ.o ./lvgl/lvgl/src/widgets/lv_roller.d ./lvgl/lvgl/src/widgets/lv_roller.o ./lvgl/lvgl/src/widgets/lv_slider.d ./lvgl/lvgl/src/widgets/lv_slider.o ./lvgl/lvgl/src/widgets/lv_switch.d ./lvgl/lvgl/src/widgets/lv_switch.o ./lvgl/lvgl/src/widgets/lv_table.d ./lvgl/lvgl/src/widgets/lv_table.o ./lvgl/lvgl/src/widgets/lv_textarea.d ./lvgl/lvgl/src/widgets/lv_textarea.o

.PHONY: clean-lvgl-2f-lvgl-2f-src-2f-widgets

