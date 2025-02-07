# Compiler and Flags
CC = gcc
CFLAGS = -g -Wall -Werror -pedantic-errors
TARGET = gcd

# Source and Object Files
SRCS = iterative.c recursive.c
OBJS = $(patsubst %.c,%.o,$(SRCS))

.PHONY: all clean

# Default target: Build the executable
all: $(TARGET)

# Link object files into final executable
$(TARGET): $(OBJS) gcd.o
	$(CC) $(CFLAGS) $(OBJS) gcd.o -o $@

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean build artifacts
clean:
	rm -f $(OBJS) gcd.o $(TARGET)
