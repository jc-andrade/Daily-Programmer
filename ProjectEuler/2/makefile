#Custom makefile for Project Euler stuff

# the compiler: g++ for C++
CC = g++

#compiler flags
# -g	adds debugging information the .exe 
# -Wall	turns on most, but not all, compiler warnings
CFLAGS	= -g -Wall

#the build target executable
TARGET = program

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)
