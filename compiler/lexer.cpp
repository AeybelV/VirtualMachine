#include "include/lexer.h"

bool containsOnlyAlphabetCharacters(std::string text)
{
    // Iterates over each character in the string and check if they fall within the ASCII range 65-90 (The letters A - Z) or 97-122 (The letters a - z)
    for(size_t i = 0; i < text.size(); i++)
    {
        char c = text[i];
        if((c < 65 || c > 90) && (c < 97 || c > 122))
        {
           return false;
        } 
    }
    return true;
}

bool isNumber(std::string text)
{
    // Iterates over each character in the string and check if they fall within the ASCII range  48-57 (Numbers 0-9)
    for(size_t i = 0; i < text.size(); i++)
    {   
        char c = text[i];
        if(c < 48 || c > 57)
        {
            if(i != 0 && text[0] != '$') // Checks to see if the first character is denoting a immediate value
            {
                return false;
            }
        } 
    }
    return true;
}

Token getToken(std::string text){
    Token t;
    int i = isInstruction(text); // Checks if the string corresponds to a instruction, and returns the enum for the instruction.
    if(i != -1) // isInstruction() returns a -1 if the text isn't a instruction
    {
        t.type = TT_INSTRUCTION;  // Sets the token type to instruction
        t.instruction = i; // Sets the code of the instruction.
    }
    else if(containsOnlyAlphabetCharacters(text)) // Checks if the string is a identifier
    {
        t.type = TT_IDENTIFIER; // TODO: Implement storing the identifier name
    }
    else if(isNumber(text)) // Checks if the string is a number
    {
        t.type = TT_NUMBER;
        std::stringstream truncatedString(text.erase(0,1)); // Truncates the string to get the number value.
        truncatedString >> t.data;
    }
    else // If the token could not be resolved, it is considered a unknown.
    {
        t.type = TT_UNKNOWN;
    }
    return t; // Returns the token
}

void tokenizeLine(std::string currentLine,int line)
{
    // Splits the string by spaces and tokenizes each item
    std::string item;
    std::istringstream stringContents(currentLine);
    while (std::getline(stringContents, item, ' '))
    {
        Token t = getToken(item); // Gets the token of the item
        t.line = line; // Sets the line of the token to the line it is located

        // std::cout << item << ": " << t.type << std::endl; // Used for debugging purposes
    }

}

int tokenize(std::vector<std::string> *fileContents,std::vector<Token> *tokens)
{
    int line = 0; // Keeps track of the current line in the source file

    // Iterates over each line from the file
    for(std::vector<std::string>::iterator currentLine = fileContents->begin(); currentLine != fileContents->end(); currentLine++)
    {
        line++; // Increments the line counters
        tokenizeLine(*currentLine,line); // Tokenizes the contents on each line.
    }
    return 0; // Returns 0 if no error in tokenizing
}
