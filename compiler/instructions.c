#include "include/instructions.h"

int isInstruction(char *text){
    if(compareString(text,"HLT")){
        return HLT;
    }
    else if(compareString(text,"NOP")){
        return NOP;
    }
    else if(compareString(text,"PUSH")){
        return PUSH;
    }
    else if(compareString(text,"POP")){
        return POP;
    }
    else if(compareString(text,"ADD")){
        return ADD;
    }
    else if(compareString(text,"SUB")){
        return SUB;
    }
    else if(compareString(text,"MUL")){
        return MUL;
    }
    else if(compareString(text,"DIV")){
        return DIV;
    }
    else if(compareString(text,"PRINT")){
        return PRINT;
    }
    return -1;
}