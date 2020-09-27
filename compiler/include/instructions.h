#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include <string>

enum INSTRUCTIONS{
  HLT,
  NOP,
  PUSH,
  POP,
  ADD,
  SUB,
  MUL,
  DIV,
  PRINT  
};

int isInstruction(std::string text);
#endif