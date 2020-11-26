#include "include/utils.h"

short *getProgram(const char *path)
{
    FILE *f = fopen(path,"rb"); // Opens the file

    if(!f)
    {
        printf("Could not open file  '%s'\n",path);
        return NULL;
    }

    fseek(f,0,SEEK_END);
    int size = ftell(f)/2; // Stores the end position of the program in the file in measurements of 2 bytes
    fseek(f,0L,SEEK_SET);

    short *buffer = (short*) malloc(sizeof(short) * size); // Allocates memory to store the program
    
    // Reads the file byte by byte, and appends every 2 bytes to the buffer.
    int i = 0;
    int n = 0;
    while(i< size){
        short x = ((short) getc(f)) << 8;
        x += (short) getc(f);

        buffer[n] = x;
        i+=1;
        n++;
    }

    fclose(f);

    // Returns the buffer
    return buffer;
}