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

int writeExecutable(std::vector<char> *instructionList){
    std::ofstream compiledExecutable("./output.cke", std::ios::binary);
    if(!compiledExecutable)
    {
        std::cout << "Compile Error: Could not create file" << std::endl;
        return 1;
    }

    std::ostream_iterator<char> compiledExecutable_iterator(compiledExecutable);
    std::copy(instructionList->begin(),instructionList->end(),compiledExecutable_iterator);

    return 0;
}