################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include xip/subdir.mk
-include video/subdir.mk
-include utilities/subdir.mk
-include touchpanel/subdir.mk
-include startup/subdir.mk
-include source/subdir.mk
-include lvgl/lvgl/src/widgets/subdir.mk
-include lvgl/lvgl/src/misc/subdir.mk
-include lvgl/lvgl/src/hal/subdir.mk
-include lvgl/lvgl/src/font/subdir.mk
-include lvgl/lvgl/src/extra/widgets/win/subdir.mk
-include lvgl/lvgl/src/extra/widgets/tileview/subdir.mk
-include lvgl/lvgl/src/extra/widgets/tabview/subdir.mk
-include lvgl/lvgl/src/extra/widgets/spinner/subdir.mk
-include lvgl/lvgl/src/extra/widgets/spinbox/subdir.mk
-include lvgl/lvgl/src/extra/widgets/span/subdir.mk
-include lvgl/lvgl/src/extra/widgets/msgbox/subdir.mk
-include lvgl/lvgl/src/extra/widgets/meter/subdir.mk
-include lvgl/lvgl/src/extra/widgets/menu/subdir.mk
-include lvgl/lvgl/src/extra/widgets/list/subdir.mk
-include lvgl/lvgl/src/extra/widgets/led/subdir.mk
-include lvgl/lvgl/src/extra/widgets/keyboard/subdir.mk
-include lvgl/lvgl/src/extra/widgets/imgbtn/subdir.mk
-include lvgl/lvgl/src/extra/widgets/colorwheel/subdir.mk
-include lvgl/lvgl/src/extra/widgets/chart/subdir.mk
-include lvgl/lvgl/src/extra/widgets/calendar/subdir.mk
-include lvgl/lvgl/src/extra/widgets/animimg/subdir.mk
-include lvgl/lvgl/src/extra/themes/mono/subdir.mk
-include lvgl/lvgl/src/extra/themes/default/subdir.mk
-include lvgl/lvgl/src/extra/themes/basic/subdir.mk
-include lvgl/lvgl/src/extra/others/snapshot/subdir.mk
-include lvgl/lvgl/src/extra/others/msg/subdir.mk
-include lvgl/lvgl/src/extra/others/monkey/subdir.mk
-include lvgl/lvgl/src/extra/others/imgfont/subdir.mk
-include lvgl/lvgl/src/extra/others/ime/subdir.mk
-include lvgl/lvgl/src/extra/others/gridnav/subdir.mk
-include lvgl/lvgl/src/extra/others/fragment/subdir.mk
-include lvgl/lvgl/src/extra/libs/sjpg/subdir.mk
-include lvgl/lvgl/src/extra/libs/rlottie/subdir.mk
-include lvgl/lvgl/src/extra/libs/qrcode/subdir.mk
-include lvgl/lvgl/src/extra/libs/png/subdir.mk
-include lvgl/lvgl/src/extra/libs/gif/subdir.mk
-include lvgl/lvgl/src/extra/libs/fsdrv/subdir.mk
-include lvgl/lvgl/src/extra/libs/freetype/subdir.mk
-include lvgl/lvgl/src/extra/libs/ffmpeg/subdir.mk
-include lvgl/lvgl/src/extra/libs/bmp/subdir.mk
-include lvgl/lvgl/src/extra/layouts/grid/subdir.mk
-include lvgl/lvgl/src/extra/layouts/flex/subdir.mk
-include lvgl/lvgl/src/extra/subdir.mk
-include lvgl/lvgl/src/draw/sw/subdir.mk
-include lvgl/lvgl/src/draw/stm32_dma2d/subdir.mk
-include lvgl/lvgl/src/draw/sdl/subdir.mk
-include lvgl/lvgl/src/draw/nxp/vglite/subdir.mk
-include lvgl/lvgl/src/draw/nxp/pxp/subdir.mk
-include lvgl/lvgl/src/draw/subdir.mk
-include lvgl/lvgl/src/core/subdir.mk
-include generated/images/subdir.mk
-include generated/guider_fonts/subdir.mk
-include generated/subdir.mk
-include freertos/freertos-kernel/portable/MemMang/subdir.mk
-include freertos/freertos-kernel/portable/GCC/ARM_CM4F/subdir.mk
-include freertos/freertos-kernel/subdir.mk
-include drivers/subdir.mk
-include device/subdir.mk
-include custom/subdir.mk
-include component/uart/subdir.mk
-include component/serial_manager/subdir.mk
-include component/lists/subdir.mk
-include board/subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := evkbmimxrt1060_lvgl_guider
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: evkbmimxrt1060_lvgl_guider.axf

# Tool invocations
evkbmimxrt1060_lvgl_guider.axf: $(OBJS) $(USER_OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU C++ Linker'
	arm-none-eabi-c++ -nostdlib -Xlinker -no-warn-rwx-segments -Xlinker -Map="evkbmimxrt1060_lvgl_guider.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -Xlinker --cref -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -T evkbmimxrt1060_lvgl_guider_Debug.ld -o "evkbmimxrt1060_lvgl_guider.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) evkbmimxrt1060_lvgl_guider.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "evkbmimxrt1060_lvgl_guider.axf"; # arm-none-eabi-objcopy -v -O binary "evkbmimxrt1060_lvgl_guider.axf" "evkbmimxrt1060_lvgl_guider.bin" ; # checksum -p MIMXRT1062xxxxB -d "evkbmimxrt1060_lvgl_guider.bin";
	-@echo ' '

.PHONY: all clean dependents main-build post-build

-include ../makefile.targets
