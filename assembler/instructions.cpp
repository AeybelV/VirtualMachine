#include "include/instructions.h"

int getNumberOfOperands(int instruction)
{
    switch (instruction)
    {
        case HLT:
            return 0;
            break;
        case NOP:
            return 0;
            break;
        case PUSH:
            return 1;
            break;
        case POP:
            return 0;
            break;
        case ADD:
            return 0;
            break;
        case SUB:
            return 0;
            break;
        case MUL:
            return 0;
            break;
        case DIV:
            return 0;
            break;
        case PRINT:
            return 0;
            break;
        default:
            return -1;
            break;
    }
}

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