CC=cc # Compiler
CC_FLAGS= vendor/raylib/src/libraylib.a -lGL -lm -lpthread -ldl -lrt -lX11 -Wall -Wextra -Wpedantic # Compile flags
ENTRY=src/main.c # Entry
NAME=out/snake # Output

clean:
	$(shell rm -rf out && mkdir out)

build:
	$(CC) $(ENTRY) $(CC_FLAGS) -o $(NAME)

all: | clean build