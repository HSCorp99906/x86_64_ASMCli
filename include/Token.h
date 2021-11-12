#ifndef ASM_TOKEN_H_
#define ASM_TOKEN_H_

#include <stdlib.h>


typedef enum Token {
    T_PUSH,
    T_POP,
    T_MOV,
    T_SUB,
    T_ADD,
    T_INTERRUPT,
    T_NOP,
    T_INTEGER_LITERAL,
    T_CHAR,
    T_HEX,
} token_tt;


typedef struct _Token {
    token_tt type;
    char* type_str;
    char* line;

    union {
        int int_rep;
        char char_rep;
    };

} token_t;


typedef struct TokenList {
    token_t* tokens;
    size_t size;

} tokenlist_t;


void tokenlist_init(tokenlist_t* tok_list);
void add_to_tokenlist(tokenlist_t* tok_list, token_t element);
token_t create_token(token_tt type, char __char, char* line);

#endif
