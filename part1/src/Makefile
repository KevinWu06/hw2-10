# Compiler and Flags
CC = gcc
CFLAGS = -g -Wall -Werror -pedantic-errors
TARGET = gcd

# Source and Object Files
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c,%.o,$(SRCS))

.PHONY: all clean

# Default target: Build the executable
all: $(TARGET)

# Link object files into final executable
$(TARGET): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $@
%.o: %.c %.h
	$(CC) $(CFLAGS) -c -o $@ $<
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
# Clean build artifacts
clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe
