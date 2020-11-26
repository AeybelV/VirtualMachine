#include "include/parser.h"

int parse(std::vector<Token> *tokens,std::vector<char> *instructionList)
{
    
    std::vector<Token>::iterator t = tokens->begin(); // The current token
    while(t < tokens->end()) // A while loop that ends when t reaches the end of the vector
    {

        // Iterates through the tokens on each line
        std::vector<std::vector<Token>::iterator> lineTokens; // Keeps track of the tokens on the current line
        int currentLine = t-> line;
        while(t->line == currentLine)
        {
            if(t->type == TT_UNKNOWN) // Throws an error if the parser encounters a unknown token.
            {
                std::cout << "Parser Error: Unknown Token on line " << t->line << std::endl; // TODO: Implement a better error message later for unknown tokens
                return 1;
            }
            lineTokens.push_back(t);
            t++; // Increments the current token
        }

        // After extracting the tokens on the lines, they are then parsed.
        if(lineTokens[0]->type == TT_OPCODE) // The first token is checked to see if it is an instruction
        {
            int operands = getNumberOfOperands(lineTokens[0]->instruction); // Gets the number of operands for the instruction
            if(operands == -1) // Handles an error if the function for some reason returns an error.
            {
                std::cout << "Parser Error: Could not get the operands of instruction " << t->instruction << "on line " << t->line << std::endl; 
                return 1;
            }

            // TODO: Implement a better error message for number of operands error
            // Checks if the line has the correct amount of operands for the instruction
            if(lineTokens.size() - 1 < operands)
            {
                std::cout << "Too few operands" << std::endl;
                return 1;
            }
            else if(lineTokens.size() - 1 > operands)
            {
                std::cout << "Too many operands" << std::endl;
                return 1;
            }
        }
        else{
            std::cout << "Invalid Instruction on line " << lineTokens[0]->line << std::endl;
        }

        // TODO: Check if the opcode has the the correct operand types passed to it

        // The instructions that has been parsed on the line then is appended to the instructionList.
        // The instructionList will be then later written to a file after done parsing
        for(int i = 0; i<lineTokens.size();i++)
        {
            // The instruction length of the VM is 16 bits, with the first 8 bits being the actual opcode
            // TODO: In the future, I plan to implement variable instruction length depending on the "bit mode" defined in the executable header
            if(lineTokens[i]->type == TT_OPCODE)
            {
                instructionList->push_back((char) lineTokens[i]->instruction); // Appends the 8 bit opcode 
            }
            else{ // Is followed by the instruction operands
                instructionList->push_back((char) lineTokens[i]->data); // TODO: At the moment, this only account for a single operand as the most operands of the instruction i've so far implemented is 1. However there will be instructions with more than 1 operands.
            }

            if(lineTokens.size() == 1){
                instructionList->push_back('\0'); // Instructions with zero operands have the rest of the instruction length have a padding of zeros
            }
        }
    }
    return 0;
}



