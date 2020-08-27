#define PRINT_TOKENS 1
#include "include/lexer.h"
#include <string.h>

enum CHARACTER_TYPE{
    NONE,
    ALPHABET,
    NUMBER,
    DOLLAR,
};

// A function that compares two character arrays of different sizes to check if they have same content. Returns 1 if same
int compareString(char text[],char comparison[]){
    int size = strlen(comparison);
    for(int i =0; i<size;i++){
        if(comparison[i] != text[i]){
            return 0;
        }
    }
    return 1;
}


// For now the function gets the token of form the lexed text. 
void getToken(char *buffer,unsigned char characterType,int token_start, int token_end,int line){
    int size = token_end-token_start;
    char text[size];

    // Copies the text from the file buffer to a array
    strncpy(text,buffer+token_start,size);

    
    // If Printing tokens is enabled, the compiler will print out the tokens 
    #if PRINT_TOKENS == 1
    if(characterType == ALPHABET){
        printf("IDENTIFIER:[");
    }
    else if(characterType == DOLLAR){
        printf("DOLLAR:[");
    }
    else if(characterType == NUMBER){
        printf("NUMBER:[");
    }
    #endif

    #if PRINT_TOKENS == 1
    printf("%s]\n",text);
    #endif

    // Create a token and stores the line in the file the token is located
    Token newTok;
    newTok.line = line;

    // Assigns the token type based on what the text is
    switch(characterType){
        // If the text is comprised of alphabet characters
        case ALPHABET: {
            // Checks if the string is a instruction, if so it will return the enum for that instruction, else -1
            int i = isInstruction(&text);
            if(i == -1){
                newTok.type = TT_IDENTIFIER;  // If not, then the string is a identifier
            }
            else{
                newTok.type = TT_INSTRUCTION; // If the string is a opcode for a instruction
                newTok.instruction = i; // Assigns the enum for that instruction to the token
            }
            break;}
        case DOLLAR: newTok.type = TT_DOLLAR; break; // If the string is a '$'
        case NUMBER: newTok.type = TT_NUMBER; break; // If the stirng comprises of numbers
        default: newTok.type = TT_UNKNOWN; break; // If the symbol cannot be resolved
    }
    
}

int tokenize(char *source){
    int i = 0; // Index of current character
    int line = 1; // Keeps track of the current line

    int token_start = 0; // Index of the beggining of a new token
    unsigned char currentCharacterType = NONE;

    // Loops through every character in the buffer until it reaches a null terminator
    while(source[i] != '\0'){

        // Ignores spaces, tabs, and carriage returns
        if(source[i] != ' ' && source[i] != '\t' && source[i] != '\r'){
            
            // Increment line counter when reaches newline character
            if(source[i] == '\n'){
                line++;
            }
            else if(source[i] == '$'){ // If the character is a '$', return the dollar token
                token_start = i;
                currentCharacterType = DOLLAR;
                getToken(source,currentCharacterType,token_start,i+1,line);
            }
            else if(source[i] >= 65 && source[i] <= 90){ // If the current character falls in the ASCII range 65-90 (A-Z), it is a alphabet character
                // Monitors all alphabet characters from this index onward
                if(currentCharacterType != ALPHABET){
                    token_start = i;
                    currentCharacterType = ALPHABET;
                }
            }
            else if(source[i] >= 48 && source[i] <= 57){ //If the current character falls in the ASCII range 48-57 (numbers 0-9), it is a number character
                if(currentCharacterType != NUMBER){
                    token_start = i;
                    currentCharacterType = NUMBER;
                }
            }
            else{ //Exit tokenizer if we encounter a unknown symbol
                printf("Unknown symbol %c on line %i",source[i],line);
                return 1;
            }
        }
        else{ // If we encounter a space or carriage return, return the token of the characters we just iterated through
            if(token_start != i){
                getToken(source,currentCharacterType,token_start,i,line);
                currentCharacterType = NONE;
            }
        }
       
        i++;  // Increments the character index
    }

    return 0;
}

