################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../_20_Server_Tests/AllTests.cpp 

OBJS += \
./_20_Server_Tests/AllTests.o 

CPP_DEPS += \
./_20_Server_Tests/AllTests.d 


# Each subdirectory must supply rules for building sources it contributes
_20_Server_Tests/%.o: ../_20_Server_Tests/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


