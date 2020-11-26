#include "include/display.h"

void PrintInteger(MachineState *vm){
    int val = (int) RetrieveFromStack(vm);
    printf("%i",val);
}
void PrintCharacter(MachineState *vm){
    char val = RetrieveFromStack(vm);
    printf("%c",val);
}