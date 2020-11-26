#ifndef INSTRUCTION_VM_H
#define INSTRUCTION_VM_H
#include "../../include/machine.h"

void HaltInstruction(MachineState *vm);
void NoOpInstruction(MachineState *vm);

#endif