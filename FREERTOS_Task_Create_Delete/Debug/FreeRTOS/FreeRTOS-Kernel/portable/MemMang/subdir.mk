################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../FreeRTOS/FreeRTOS-Kernel/portable/MemMang/heap_4.c 

C_DEPS += \
./FreeRTOS/FreeRTOS-Kernel/portable/MemMang/heap_4.d 

OBJS += \
./FreeRTOS/FreeRTOS-Kernel/portable/MemMang/heap_4.o 


# Each subdirectory must supply rules for building sources it contributes
FreeRTOS/FreeRTOS-Kernel/portable/MemMang/%.o FreeRTOS/FreeRTOS-Kernel/portable/MemMang/%.su FreeRTOS/FreeRTOS-Kernel/portable/MemMang/%.cyclo: ../FreeRTOS/FreeRTOS-Kernel/portable/MemMang/%.c FreeRTOS/FreeRTOS-Kernel/portable/MemMang/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -I"/Users/naveensagar/Desktop/STM32_WORKS/STM32_CPP_BARE_METAL/FREERTOS_Task_Create_Delete/FreeRTOS/FreeRTOS-Kernel/include" -I"/Users/naveensagar/Desktop/STM32_WORKS/STM32_CPP_BARE_METAL/FREERTOS_Task_Create_Delete/FreeRTOS/FreeRTOS-Kernel/portable/GCC/ARM_CM4F" -I"/Users/naveensagar/Desktop/STM32_WORKS/STM32_CPP_BARE_METAL/FREERTOS_Task_Create_Delete/FreeRTOS/FreeRTOS-Kernel/portable/MemMang" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-FreeRTOS-2f-FreeRTOS-2d-Kernel-2f-portable-2f-MemMang

clean-FreeRTOS-2f-FreeRTOS-2d-Kernel-2f-portable-2f-MemMang:
	-$(RM) ./FreeRTOS/FreeRTOS-Kernel/portable/MemMang/heap_4.cyclo ./FreeRTOS/FreeRTOS-Kernel/portable/MemMang/heap_4.d ./FreeRTOS/FreeRTOS-Kernel/portable/MemMang/heap_4.o ./FreeRTOS/FreeRTOS-Kernel/portable/MemMang/heap_4.su

.PHONY: clean-FreeRTOS-2f-FreeRTOS-2d-Kernel-2f-portable-2f-MemMang

