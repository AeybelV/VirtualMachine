#include "include/fileutils.h"

char *readFile(const char *path){
    // Opens the file in read mode
    FILE *f = fopen(path,"r");

    // Handles file open error
    if(!f){
        printf("Could not open file  '%s'\n",path);
        return NULL;
    }

    // Gets the File Size
    fseek(f,0,SEEK_END);
    int size = ftell(f);
    fseek(f,0,SEEK_SET);

    // Allocates memory to store file contents
    char *buffer = (char*) malloc(sizeof(char) * (size+1));

    // Reads the file into the buffer and adds a null terminator
    fread(buffer,1,size,f);
    buffer[size] = '\0';
    fclose(f);

    // Returns the buffer address
    return buffer;
}