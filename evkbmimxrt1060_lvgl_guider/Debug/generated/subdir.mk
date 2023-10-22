################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generated/events_init.c \
../generated/gui_guider.c \
../generated/setup_scr_screen.c \
../generated/setup_scr_screen_1.c \
../generated/setup_scr_screen_2.c \
../generated/setup_scr_screen_3.c \
../generated/setup_scr_screen_4.c \
../generated/widgets_init.c 

C_DEPS += \
./generated/events_init.d \
./generated/gui_guider.d \
./generated/setup_scr_screen.d \
./generated/setup_scr_screen_1.d \
./generated/setup_scr_screen_2.d \
./generated/setup_scr_screen_3.d \
./generated/setup_scr_screen_4.d \
./generated/widgets_init.d 

OBJS += \
./generated/events_init.o \
./generated/gui_guider.o \
./generated/setup_scr_screen.o \
./generated/setup_scr_screen_1.o \
./generated/setup_scr_screen_2.o \
./generated/setup_scr_screen_3.o \
./generated/setup_scr_screen_4.o \
./generated/widgets_init.o 


# Each subdirectory must supply rules for building sources it contributes
generated/%.o: ../generated/%.c generated/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__NEWLIB__ -DCPU_MIMXRT1062DVL6B -DCPU_MIMXRT1062DVL6B_cm7 -DXIP_BOOT_HEADER_DCD_ENABLE=1 -DSKIP_SYSCLK_INIT -DDATA_SECTION_IS_CACHEABLE=1 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DFSL_SDK_DRIVER_QUICK_ACCESS_ENABLE=1 -DLV_CONF_INCLUDE_SIMPLE=1 -DMCUXPRESSO_SDK -DSDK_I2C_BASED_COMPONENT_USED=1 -DSERIAL_PORT_TYPE_UART=1 -DSDK_OS_FREE_RTOS -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\source" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\drivers" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\touchpanel" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\video" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl\src" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\device" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\utilities" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\uart" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\serial_manager" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\lists" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\xip" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\include" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\CMSIS" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\board" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\custom" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_customer_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\evkbmimxrt1060\lvgl_examples\lvgl_guider" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -Wno-format -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-generated

clean-generated:
	-$(RM) ./generated/events_init.d ./generated/events_init.o ./generated/gui_guider.d ./generated/gui_guider.o ./generated/setup_scr_screen.d ./generated/setup_scr_screen.o ./generated/setup_scr_screen_1.d ./generated/setup_scr_screen_1.o ./generated/setup_scr_screen_2.d ./generated/setup_scr_screen_2.o ./generated/setup_scr_screen_3.d ./generated/setup_scr_screen_3.o ./generated/setup_scr_screen_4.d ./generated/setup_scr_screen_4.o ./generated/widgets_init.d ./generated/widgets_init.o

.PHONY: clean-generated

