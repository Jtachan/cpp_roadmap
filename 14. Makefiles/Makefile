# The following makefile is defined only for Windows

# flags: 
# 	-g : Debugging information at the executable file
#	-Wall : Warnings (all)
#   -std=c++11 : C++11 standard
CXXFLAGS = -g -Wall -std=c++11

# Folders
SRC_DIRS = ./src
INCLUDE_DIRS = ./include

# The name of the executable.
PROG_NAME = myprog

# Target files
SRC := $(cmd find ./src)
TARGET = main.cpp


all: $(TARGET)
	$(CXX) -o $(PROG_NAME) $(TARGET) SRC

clean:
	del $(PROG_NAME).exe

include
