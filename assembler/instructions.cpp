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
        case iADD:
            return 0;
            break;
        case iSUB:
            return 0;
            break;
        case iMUL:
            return 0;
            break;
        case iDIV:
            return 0;
            break;
        case iPRINT:
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
    else if(text == "iADD"){
        return iADD;
    }
    else if(text == "iSUB"){
        return iSUB;
    }
    else if(text == "iMUL"){
        return iMUL;
    }
    else if(text == "iDIV"){
        return iDIV;
    }
    else if(text == "iPRINT"){
        return iPRINT;
    }
    return -1;
}