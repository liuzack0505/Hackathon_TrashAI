################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generated/images/_background_alpha_480x272.c \
../generated/images/_box_alpha_170x169.c \
../generated/images/_box_alpha_80x80.c \
../generated/images/_can_alpha_44x78.c \
../generated/images/_can_alpha_75x169.c \
../generated/images/_glass_alpha_44x78.c \
../generated/images/_glass_alpha_88x156.c \
../generated/images/_paper_alpha_116x156.c \
../generated/images/_paper_alpha_56x78.c \
../generated/images/_plastic_alpha_35x84.c \
../generated/images/_plastic_alpha_75x169.c \
../generated/images/images.c 

C_DEPS += \
./generated/images/_background_alpha_480x272.d \
./generated/images/_box_alpha_170x169.d \
./generated/images/_box_alpha_80x80.d \
./generated/images/_can_alpha_44x78.d \
./generated/images/_can_alpha_75x169.d \
./generated/images/_glass_alpha_44x78.d \
./generated/images/_glass_alpha_88x156.d \
./generated/images/_paper_alpha_116x156.d \
./generated/images/_paper_alpha_56x78.d \
./generated/images/_plastic_alpha_35x84.d \
./generated/images/_plastic_alpha_75x169.d \
./generated/images/images.d 

OBJS += \
./generated/images/_background_alpha_480x272.o \
./generated/images/_box_alpha_170x169.o \
./generated/images/_box_alpha_80x80.o \
./generated/images/_can_alpha_44x78.o \
./generated/images/_can_alpha_75x169.o \
./generated/images/_glass_alpha_44x78.o \
./generated/images/_glass_alpha_88x156.o \
./generated/images/_paper_alpha_116x156.o \
./generated/images/_paper_alpha_56x78.o \
./generated/images/_plastic_alpha_35x84.o \
./generated/images/_plastic_alpha_75x169.o \
./generated/images/images.o 


# Each subdirectory must supply rules for building sources it contributes
generated/images/%.o: ../generated/images/%.c generated/images/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__NEWLIB__ -DCPU_MIMXRT1062DVL6B -DCPU_MIMXRT1062DVL6B_cm7 -DXIP_BOOT_HEADER_DCD_ENABLE=1 -DSKIP_SYSCLK_INIT -DDATA_SECTION_IS_CACHEABLE=1 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DFSL_SDK_DRIVER_QUICK_ACCESS_ENABLE=1 -DLV_CONF_INCLUDE_SIMPLE=1 -DMCUXPRESSO_SDK -DSDK_I2C_BASED_COMPONENT_USED=1 -DSERIAL_PORT_TYPE_UART=1 -DSDK_OS_FREE_RTOS -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\source" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\drivers" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\touchpanel" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\video" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl\lvgl\src" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\lvgl" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\device" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\utilities" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\uart" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\serial_manager" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\component\lists" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\xip" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\include" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\freertos\freertos-kernel\portable\GCC\ARM_CM4F" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\CMSIS" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\board" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\custom" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_customer_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\generated\guider_fonts" -I"D:\NTHU\NXP\Workspace\evkbmimxrt1060_lvgl_guider\evkbmimxrt1060\lvgl_examples\lvgl_guider" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -Wno-format -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-generated-2f-images

clean-generated-2f-images:
	-$(RM) ./generated/images/_background_alpha_480x272.d ./generated/images/_background_alpha_480x272.o ./generated/images/_box_alpha_170x169.d ./generated/images/_box_alpha_170x169.o ./generated/images/_box_alpha_80x80.d ./generated/images/_box_alpha_80x80.o ./generated/images/_can_alpha_44x78.d ./generated/images/_can_alpha_44x78.o ./generated/images/_can_alpha_75x169.d ./generated/images/_can_alpha_75x169.o ./generated/images/_glass_alpha_44x78.d ./generated/images/_glass_alpha_44x78.o ./generated/images/_glass_alpha_88x156.d ./generated/images/_glass_alpha_88x156.o ./generated/images/_paper_alpha_116x156.d ./generated/images/_paper_alpha_116x156.o ./generated/images/_paper_alpha_56x78.d ./generated/images/_paper_alpha_56x78.o ./generated/images/_plastic_alpha_35x84.d ./generated/images/_plastic_alpha_35x84.o ./generated/images/_plastic_alpha_75x169.d ./generated/images/_plastic_alpha_75x169.o ./generated/images/images.d ./generated/images/images.o

.PHONY: clean-generated-2f-images

