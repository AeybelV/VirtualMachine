#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H
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

int isInstruction(char *text);
#endif