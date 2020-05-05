################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AllTests.cpp 

OBJS += \
./AllTests.o 

CPP_DEPS += \
./AllTests.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_50_ClientApps/sample_app/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_30_ServerPlugins/sample_plugin/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_40_ClientLib/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_80_Tools/gtest/googleTestLib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


