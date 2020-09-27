#include "include/instructions.h"

int isInstruction(std::string text){
    if(text == "HLT"){
        return HLT;
    }
    else if(text == "NOP"){
        return NOP;
    }
    else if(text == "PUSH"){
        return PUSH;
    }
    else if(text == "POP"){
        return POP;
    }
    else if(text == "ADD"){
        return ADD;
    }
    else if(text == "SUB"){
        return SUB;
    }
    else if(text == "MUL"){
        return MUL;
    }
    else if(text == "DIV"){
        return DIV;
    }
    else if(text == "PRINT"){
        return PRINT;
    }
    return -1;
}