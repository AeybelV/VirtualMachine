#include "include/stack.h"

void PushInstruction(MachineState *vm){
    char val = vm->instruction & 0x00FF;
    PushToStack(vm,val);
}

void PopInstruction(MachineState *vm){
    PopFromStack(vm);
}

void PushToStack(MachineState *vm,char val){
    vm->stack_top += 1;
    if(vm->stack_top > 255){
        vm->stack_top = 0;
    }
    vm->stack[vm->stack_top] = val;
}

char PopFromStack(MachineState *vm){
    char val = vm->stack[vm->stack_top];
    if(vm->stack_top > -1){
        vm->stack_top -= 1;
    }
    return val;
}
char RetrieveFromStack(MachineState *vm){
    char val = vm->stack[vm->stack_top];
    return val;
}