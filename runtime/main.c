#include <stdio.h>
#include "include/utils.h"

int main(int argc, char** argv)
{
    if(argc < 2)
    {
        printf("Too few arguments");
        return 1;
    }

    char *program = getProgram(argv[1]); // Loads the program into memory

    // Terminates program if reading the file encounters a error
    if(program == NULL){return 1;}

    free(program);
    return 0;
}