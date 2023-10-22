################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_cache.c \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_common_arm.c \
../drivers/fsl_elcdif.c \
../drivers/fsl_gpio.c \
../drivers/fsl_lpi2c.c \
../drivers/fsl_lpuart.c \
../drivers/fsl_pxp.c 

C_DEPS += \
./drivers/fsl_cache.d \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_common_arm.d \
./drivers/fsl_elcdif.d \
./drivers/fsl_gpio.d \
./drivers/fsl_lpi2c.d \
./drivers/fsl_lpuart.d \
./drivers/fsl_pxp.d 

OBJS += \
./drivers/fsl_cache.o \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_common_arm.o \
./drivers/fsl_elcdif.o \
./drivers/fsl_gpio.o \
./drivers/fsl_lpi2c.o \
./drivers/fsl_lpuart.o \
./drivers/fsl_pxp.o 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__NEWLIB__ -DCPU_MIMXRT1062DVL6B -DCPU_MIMXRT1062DVL6B_cm7 -DXIP_BOOT_HEADER_DCD_ENABLE=1 -DSKIP_SYSCLK_INIT -DDATA_SECTION_IS_CACHEABLE=1 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DFSL_SDK_DRIVER_QUICK_ACCESS_ENABLE=1 -DLV_CONF_INCLUDE_SIMPLE=1 -DMCUXPRESSO_SDK -DSDK_I2C_BASED_COMPONENT_USED=1 -DSERIAL_PORT_TYPE_UART=1 -DSDK_OS_FREE_RTOS -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\source" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\drivers" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\touchpanel" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\video" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl\src" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\device" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\utilities" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\uart" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\serial_manager" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\lists" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\xip" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\include" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\CMSIS" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\board" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\custom" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_customer_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\evkbmimxrt1060\lvgl_examples\lvgl_guider" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -Wno-format -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-drivers

clean-drivers:
	-$(RM) ./drivers/fsl_cache.d ./drivers/fsl_cache.o ./drivers/fsl_clock.d ./drivers/fsl_clock.o ./drivers/fsl_common.d ./drivers/fsl_common.o ./drivers/fsl_common_arm.d ./drivers/fsl_common_arm.o ./drivers/fsl_elcdif.d ./drivers/fsl_elcdif.o ./drivers/fsl_gpio.d ./drivers/fsl_gpio.o ./drivers/fsl_lpi2c.d ./drivers/fsl_lpi2c.o ./drivers/fsl_lpuart.d ./drivers/fsl_lpuart.o ./drivers/fsl_pxp.d ./drivers/fsl_pxp.o

.PHONY: clean-drivers

