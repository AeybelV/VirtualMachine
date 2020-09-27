#ifndef LEXER_H
#define LEXER_H

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

#include "instructions.h"
#include "token.h"

int tokenize(std::vector<std::string> *fileContents,std::vector<Token> *tokens);

#endif