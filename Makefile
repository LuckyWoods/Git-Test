# Compiler Version
CC=g++

# Debugging flag -g
DEBUG=-g

# Target
TARGET=list

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

# Makefile syntax:
# target: dependencies
#(tab) system command(s)

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

clean:
	rm *.o *~ $(TARGET)
