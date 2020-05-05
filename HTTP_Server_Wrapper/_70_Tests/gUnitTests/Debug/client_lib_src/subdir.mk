################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/pavel/Programming/eclipse/workspace/HTTP_/_40_ClientLib/private/src/client_lib.cpp 

O_SRCS += \
/home/pavel/Programming/eclipse/workspace/HTTP_/_40_ClientLib/private/src/client_lib.o 

OBJS += \
./client_lib_src/client_lib.o 

CPP_DEPS += \
./client_lib_src/client_lib.d 


# Each subdirectory must supply rules for building sources it contributes
client_lib_src/client_lib.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_40_ClientLib/private/src/client_lib.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_40_ClientLib/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api/server_plugin" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_80_Tools/gtest/googleTestLib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


