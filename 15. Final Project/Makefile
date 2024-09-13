# Folders where the .cpp and .h files are contained:
SRC_FOLDER = .\sources
INCL_FOLDER = .\includes

# Names of the .cpp files for the code:
SRC_NAMES = Book.cpp EBook.cpp Library.cpp
SRCS = $(addprefix $(SRC_FOLDER)/, $(SRC_NAMES)) main.cpp

# Define object files (at the same path as the .cpp files):
OBJS = $(addprefix $(BUILD_FOLDER)/, $(notdir $(SRCS:.cpp=.o)))

# Name of the executable that will be created:
TARGET = library

# Rule for creating .o files from .cpp, considering the corresponding .h file
$(SRC_FOLDER)/%.o: $(SRC_FOLDER)/%.cpp $(INCL_FOLDER)/%.h
	$(CXX) -c $< -o $@ -I$(INCL_FOLDER)

# Linking rule: create the executable from object files
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Clean rule to remove compiled files
clean:
	del /f $(SRC_FOLDER)\*.o $(TARGET).exe