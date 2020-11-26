#include <stdio.h>
#include "include/utils.h"
#include "include/machine.h"
#include "instructions/instructions.h"

int main(int argc, char** argv){
    // Initalizes the VM State
    MachineState *VMState = (MachineState*) malloc(sizeof(MachineState));
    VMState->pc = -1;
    VMState->stack_top = -1;
    VMState->errorFlag = 0;
    VMState->haltFlag = 0;

    if(argc < 2)
    {
        printf("Too few arguments");
        return 1;
    }

    short *program = getProgram(argv[1]); // Loads the program

    VMState->instruction = program[0]; // Loads first instruction

    while(VMState->haltFlag == 0){ // Machine Loop
        VMState->pc += 1;
        VMState->instruction = program[VMState->pc]; // Fetches instruction

        int op_code = (VMState->instruction) >> 8; // Decodes instruction
        (*VM_INSTRUCTIONS[op_code])(VMState); // Executes Instruction

        if(VMState->errorFlag != 0){ // Handles any error
            printf("\tERROR %i: Halting the VM\n\n",VMState->errorFlag);
            break;
        }
    }

    free(program);
    return 0;
}