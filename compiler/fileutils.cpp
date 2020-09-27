#include "include/fileutils.h"

int readFile(const char *path,std::vector<std::string> *fileContents){

    std::ifstream sourceFile(path);
    std::string line;
    
    if(sourceFile.is_open())
    {
        while (std::getline(sourceFile, line))
        {
            fileContents->push_back(line); // Reads each line and pushes it to the fileContents vector
        }
        sourceFile.close();
        return 0;
    }
    else{
        std::cout << "Could not open file" << std::endl;
        return 1;
    }
}