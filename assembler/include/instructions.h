#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include <string>

enum INSTRUCTIONS{
  HLT,
  NOP,
  PUSH,
  POP,
  iADD,
  iSUB,
  iMUL,
  iDIV,
  iPRINT,
  cPRINT
};

int isInstruction(std::string text);
int getNumberOfOperands(int instruction);
#endif