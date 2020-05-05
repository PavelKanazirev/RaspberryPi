################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/templates/cpp_template.cpp 

C_SRCS += \
/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/templates/c_template.c 

OBJS += \
./src/templates/c_template.o \
./src/templates/cpp_template.o 

CPP_DEPS += \
./src/templates/cpp_template.d 

C_DEPS += \
./src/templates/c_template.d 


# Each subdirectory must supply rules for building sources it contributes
src/templates/c_template.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/templates/c_template.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/templates/cpp_template.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/templates/cpp_template.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


