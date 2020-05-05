################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/src/foo_api.cpp \
/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/src/foo_local.cpp \
/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/src/srv_foo_common.cpp 

OBJS += \
./src/foo_api.o \
./src/foo_local.o \
./src/srv_foo_common.o 

CPP_DEPS += \
./src/foo_api.d \
./src/foo_local.d \
./src/srv_foo_common.d 


# Each subdirectory must supply rules for building sources it contributes
src/foo_api.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/src/foo_api.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_80_Tools/gtest/googleTestLib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/foo_local.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/src/foo_local.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_80_Tools/gtest/googleTestLib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/srv_foo_common.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/src/srv_foo_common.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/include" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_80_Tools/gtest/googleTestLib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


