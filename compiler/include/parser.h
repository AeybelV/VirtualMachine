#ifndef PARSER_H
#define PARSER_H

#include "token.h"
#include "instructions.h"

#include <vector>
#include <iostream>

int parse(std::vector<Token> *tokens,std::vector<short> *instructionList);

#endif