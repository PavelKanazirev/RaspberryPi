export OS_RM := -rm
CXX       := g++
CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb

BIN     := ../../_90_Delivery/bins/lib
SRC_DIR := ../private/src

SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
RAW_SRCS := $(notdir $(SOURCES))
OBJECTS	:= $(patsubst %.cpp,%.o,$(SOURCES))
RAW_OBJS := $(notdir $(OBJECTS))
OUT_OBJS := $(patsubst %,$(BIN)/%,$(RAW_OBJS))
INCLUDE := -I../api -I../private/include -I../../_10_Common/third_party/include
LDFLAGS	:= -g -std=c++17
LDLIBS	:=-L/usr/lib/x86_64-linux-gnu -Lc -Lc++
LIB     := ../../_90_Delivery/bins/lib #  where your precompiled files are going to be

OUT_FILE_NAME  := lib_common.a

.PHONY: build

build: clean all

all: dirmake objmake $(OUT_FILE_NAME)

dirmake:
	@mkdir -p $(BIN)

#Compiling every *.cpp to *.o
objmake:
	$(CXX) $(INCLUDE) $(CXX_FLAGS) -c $(SOURCES)
	ls -lah $(SRC_DIR)
	
# Enumerating of every *.cpp as *.o and using that as dependency
$(OUT_FILE_NAME):
	ar -r -o $(BIN)/$(OUT_FILE_NAME) $(RAW_OBJS)
	ls -lah $(BIN)

clean:
	$(RM) -f $(SRC_DIR)/*.o $(BIN)/$(OUT_FILE_NAME) Makefile.bak

