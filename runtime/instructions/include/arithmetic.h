#ifndef INSTRUCTION_ARITHMETIC_H
#define INSTRUCTION_ARITHMETIC_H
#include "../../include/machine.h"
#include "stack.h"

void IntegerAddInstruction(MachineState *vm);
void IntegerSubtractionInstruction(MachineState *vm);
void IntegerMultiplicationInstruction(MachineState *vm);
void IntegerDivisionInstruction(MachineState *vm);

#endif