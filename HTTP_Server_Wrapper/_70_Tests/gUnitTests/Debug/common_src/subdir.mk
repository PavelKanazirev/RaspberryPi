################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/Functor.cpp \
/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/OSAL.cpp \
/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/foo_common.cpp 

OBJS += \
./common_src/Functor.o \
./common_src/OSAL.o \
./common_src/foo_common.o 

CPP_DEPS += \
./common_src/Functor.d \
./common_src/OSAL.d \
./common_src/foo_common.d 


# Each subdirectory must supply rules for building sources it contributes
common_src/Functor.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/Functor.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

common_src/OSAL.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/OSAL.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

common_src/foo_common.o: /home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/private/src/foo_common.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_10_Common/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/api" -I"/home/pavel/Programming/eclipse/workspace/HTTP_/_20_Server/private/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


