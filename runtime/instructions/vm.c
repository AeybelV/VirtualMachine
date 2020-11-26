#include "include/vm.h"

void HaltInstruction(MachineState *vm){
    vm->haltFlag = 1;
}
void NoOpInstruction(MachineState *vm){
    ;
}