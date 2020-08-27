CC = gcc
DEBUG_FLAGS = -Wall -fexceptions -g
PROD_FLAGS = -Wall -fexceptions --static -static-libgcc -static-libstdc++

SRC = *.c

build_debug:
	$(CC)  $(DEBUG_FLAGS) $(SRC)  -o  compiler_debug.exe
	mv cake_compiler_debug.exe ../compiler_debug.exe


build_production:
	$(CC)  $(PROD_FLAGS) $(SRC)  -o  compiler.exe
	mv compiler.exe ../compiler.exe

