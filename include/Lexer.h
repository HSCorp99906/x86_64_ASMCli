#ifndef ASM_LEXER_H_
#define ASM_LEXER_H_

#include <string.h>
#include "Token.h"

extern char* commandBuf;

typedef struct Lexer {
    char* currentLine;
    unsigned int pos;
    token_t curTok;
} lexer_t;


void tokenize(tokenlist_t* tokenlist);


#endif
