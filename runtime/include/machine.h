#ifndef MACHINE_H
#define MACHINE_H
#include <stdio.h>
#include <cstring>

typedef struct MachineState{
    int pc;
    short instruction;

    int errorFlag;
    int haltFlag;
    
    char stack[256];
    int stack_top;

} MachineState;


#endif