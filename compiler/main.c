#include <stdio.h>
#include "include/fileutils.h"
#include "include/lexer.h"
int main(int argc, char** argv){
    if(argc < 2){
        printf("Too few arguments");
        return 1;
    }

    char *input_file = readFile(argv[1]);

    // Terminates program if reading the file encounters a error
    if(input_file == NULL){
        return 1;
    }

    // printf("%s\n",input_file);
    int result = tokenize(input_file);
    
    // Deallocates the file buffer
    free(input_file);
    return 0;
}