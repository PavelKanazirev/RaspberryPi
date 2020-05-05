################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../_10_Common_Tests/Foo_common_Tests.cpp 

OBJS += \
./_10_Common_Tests/Foo_common_Tests.o 

CPP_DEPS += \
./_10_Common_Tests/Foo_common_Tests.d 


# Each subdirectory must supply rules for building sources it contributes
_10_Common_Tests/%.o: ../_10_Common_Tests/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_70_Tests/gUnitTests/googleTestLib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


