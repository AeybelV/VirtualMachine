#ifndef TOKEN_H
#define TOKEN_H

class Token{
    public:
        int type;
        int line;
        union{
            int instruction;
            int data;
        };
    private:
};

enum TokenType{
    TT_OPCODE,
    TT_IDENTIFIER,
    TT_NUMBER,
    TT_UNKNOWN
};

#endif