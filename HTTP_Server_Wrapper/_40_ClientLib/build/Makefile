CXX       := g++
CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb

BIN     := ../../_90_Delivery/bins/lib
SRC_DIR := ../private/src

SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS	:= $(patsubst %.cpp,%.o,$(SOURCES))
INCLUDE := -I../../_10_Common/api -I../api -I../private/include -I../../_10_Common/third_party/include
LDFLAGS	:= -g -std=c++17
LDLIBS	:=-L/usr/lib/x86_64-linux-gnu -Lc -Lc++
LIB     := ../../_90_Delivery/bins/lib #  where your precompiled files are going to be

OUT_FILE_NAME  := lib_client.a

all: dirmake objmake $(OUT_FILE_NAME)

dirmake:
	@mkdir -p $(BIN)

#Compiling every *.cpp to *.o
objmake:
	$(CXX) -c $(INCLUDE) $(CXX_FLAGS) -o $(OBJECTS) $(SOURCES)
	ls -lah $(SRC_DIR)
	
# Enumerating of every *.cpp as *.o and using that as dependency
$(OUT_FILE_NAME):
	ar -r -o $(BIN)/$(OUT_FILE_NAME) $(OBJECTS)
	ls -lah $(BIN)

clean:
	-rm -f $(SRC_DIR)/*.o $(BIN)/$(OUT_FILE_NAME) Makefile.bak
