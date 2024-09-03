# Define the compiler
CXX = g++
# Define compiler flags:  -Wall for all warnings, -std=c++11 for C++11 standard.
CXXFLAGS = -Wall -std=c++11
# Define the linker flags (if any)
LDFLAGS = 
# Define the build target: The name of the final executable file.
TARGET = shapes
# Define the source files: A list of all source files.
SRCS = main.cpp Circle.cpp Rectangle.cpp Triangle.cpp
# Define the object files: A list of object files, derived from the source files.
OBJS = $(SRCS:.cpp=.o)

# Default target to build
all: $(TARGET)

# Rule to link the object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile each .cpp file into a .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up the build artifacts
clean:
	rm -f $(TARGET) $(OBJS)

# Phony targets: Special target to mark 'all' and 'clean' as phony targets (not actual files).
.PHONY: all clean
