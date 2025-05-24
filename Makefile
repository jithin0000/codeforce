# Compiler settings
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

# Project files
SRCS = word_capitalization.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = main

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
