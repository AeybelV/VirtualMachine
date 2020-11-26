#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <iterator>
#include <vector>

int readFile(const char *path,std::vector<std::string> *fileContents);
int writeExecutable(std::vector<char> *instructionList);

#endif