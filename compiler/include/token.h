#ifndef TOKEN_H
#define TOKEN_H

struct _Token{
    int type; // Token type
    int line; // The line the token is located
    union{ // If the token isa instruction, it will store the enum for that specific instruction or the arguments for a instruction
        int instruction;
        int data;
    };
};

enum TokenType{
    TT_INSTRUCTION,
    TT_IDENTIFIER,
    TT_DOLLAR,
    TT_NUMBER,
    TT_UNKNOWN
};

typedef struct _Token Token;

#endif