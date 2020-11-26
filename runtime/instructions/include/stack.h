#ifndef INSTRUCTION_STACK_H
#define INSTRUCTION_STACK_H
#include "../../include/machine.h"

// Methods that are used by any instruction that utilizes the machine stack
void PushToStack(MachineState *vm,char val);
char PopFromStack(MachineState *vm);
char RetrieveFromStack(MachineState *vm); // Retrieves the data on top of the stack, does not pop

// The actual Push/Pop Instructions
void PushInstruction(MachineState *vm);
void PopInstruction(MachineState *vm);

#endif