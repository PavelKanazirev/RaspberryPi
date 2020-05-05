################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
/home/pavel/Programming/eclipse/workspace/HTTP_/_80_Tools/gtest/googleTestLib/gtest/gtest-all.cc 

CC_DEPS += \
./googleTestLib/gtest/gtest-all.d 

OBJS += \
./googleTestLib/gtest/gtest-all.o 


# Each subdirectory must supply rules for building sources it contributes
googleTestLib/gtest/gtest-all.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_80_Tools/gtest/googleTestLib/gtest/gtest-all.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_50_ClientApps/sample_app/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_30_ServerPlugins/sample_plugin/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_40_ClientLib/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_80_Tools/gtest/googleTestLib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


