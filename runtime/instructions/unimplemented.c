#include "include/unimplemented.h"

void UnimplementedInstruction(MachineState *vm){
    printf("\n\nERROR: [Unimplemented Instruction at 0x%04X]\n",vm->pc);
    vm->errorFlag = 1; // Error Code 1
}