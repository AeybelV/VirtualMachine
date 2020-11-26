#include "include/arithmetic.h"
void IntegerAddInstruction(MachineState *vm){
    char b = PopFromStack(vm);
    char a = PopFromStack(vm);
    PushToStack(vm,a+b);
}
void IntegerSubtractionInstruction(MachineState *vm){
    char b = PopFromStack(vm);
    char a = PopFromStack(vm);
    PushToStack(vm,a-b);
}
void IntegerMultiplicationInstruction(MachineState *vm){
    char b = PopFromStack(vm);
    char a = PopFromStack(vm);
    PushToStack(vm,a*b);
}
void IntegerDivisionInstruction(MachineState *vm){
    char b = PopFromStack(vm);
    char a = PopFromStack(vm);
    PushToStack(vm,a/b);
}