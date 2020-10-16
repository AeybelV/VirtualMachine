#include "include/utils.h"

char *getProgram(const char *path)
{
    FILE *f = fopen(path,"rb"); // Opens the file

    if(!f)
    {
        printf("Could not open file  '%s'\n",path);
        return NULL;
    }

    // Properties located in the header of the executable being loaded
    char magicNumber[4];
    char byteMode;
    int programStart;

    // Reads the first 4 bytes and checks if the magic number '~CKE' exists to insure it is a valid CakeLang executable
    for(int i=0;i<4;i++)
    {
        magicNumber[i] = (char) fgetc(f);
    }
    if(strncmp (magicNumber,"~CKE",4))
    {
        printf("'%s' is not a valid CakeLang Executable",path);
        return NULL;
    }


    byteMode = (char) fgetc(f); // Sets to bytemode of the program
    programStart = fgetc(f); // The location within the file that the program starts. The VM atm is 8 bits;

    // The end of the header is the value "CKE~"
    for(int i=0;i<4;i++){
        magicNumber[i] = (char) fgetc(f);
    }
    if(strncmp (magicNumber,"CKE~",4)){
        printf("'%s' is not a valid CakeLang Executable",path);
        return NULL;
    }

    int headerEnd = ftell(f); // Stores the position of the end of the header
    fseek(f,programStart,SEEK_CUR); // Sets the file position to the beginning of the actual program. programStart is an offset from the end of the header
    fseek(f,0,SEEK_END);
    int programEnd = ftell(f); // Stores the end position of the program in the file
    int programSize = programEnd-(headerEnd+programStart);
    fseek(f,headerEnd+programStart,SEEK_SET); // Sets the file position back to the beginning of the program

    char *buffer = (char*) malloc(sizeof(char) * (programSize)); // Allocates memory to store the program
    fread(buffer,1,programSize,f); // Reads the program and stores it into memory buffer

    fclose(f);


    // Returns the buffer
    return buffer;
}