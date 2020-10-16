CC = g++
DEBUG_FLAGS = -Wall -fexceptions -g
PROD_FLAGS = -Wall -fexceptions --static -static-libgcc -static-libstdc++

SRC = *.c

build_debug:
	$(CC)  $(DEBUG_FLAGS) $(SRC)  -o  cake_runtime_debug.exe
	mv cake_runtime_debug.exe ../runtime_debug.exe


build_production:
	$(CC)  $(PROD_FLAGS) $(SRC)  -o  cake.exe
	mv cake.exe ../cake.exe

