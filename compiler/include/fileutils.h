#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <vector>

int readFile(const char *path,std::vector<std::string> *fileContents);

#endif