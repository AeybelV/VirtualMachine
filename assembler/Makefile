CC = g++
DEBUG_FLAGS = -Wall -fexceptions -g
PROD_FLAGS = -Wall -fexceptions --static -static-libgcc -static-libstdc++

SRC = *.cpp

build_debug:
	$(CC)  $(DEBUG_FLAGS) $(SRC)  -o  cake_assembler_debug.exe
	mv cake_assembler_debug.exe ../assembler_debug.exe


build_production:
	$(CC)  $(PROD_FLAGS) $(SRC)  -o  assembler.exe
	mv assembler.exe ../bake_cake.exe

