# Compiler
CC=cc

# Get the SO
UNAME_S := $(shell uname -s)

# Compile flags
CC_FLAGS= -Wall -Wextra -Wpedantic

# Entry
ENTRY=./src/main.c

# Output
NAME=./out/snake

clean:
	$(shell rm -rf out && mkdir out)

build:
	$(CC) $(ENTRY) $(CC_FLAGS) -o $(NAME)

all: | clean build