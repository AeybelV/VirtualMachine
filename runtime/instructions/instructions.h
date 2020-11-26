#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "../include/machine.h"
#include "include/vm.h"
#include "include/stack.h"
#include "include/unimplemented.h"
#include "include/arithmetic.h"
#include "include/display.h"

// Table of function pointers for each instruction
void (*VM_INSTRUCTIONS[256])(MachineState *vm) = {
    HaltInstruction,
    NoOpInstruction,
    PushInstruction,
    PopInstruction,
    IntegerAddInstruction,
    IntegerSubtractionInstruction,
    IntegerMultiplicationInstruction,
    IntegerDivisionInstruction,
    PrintInteger,
    PrintCharacter,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
    UnimplementedInstruction,
};
#endif