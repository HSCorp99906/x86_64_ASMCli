#include "../include/Token.h"


void tokenlist_init(tokenlist_t* tok_list) {
    tok_list -> size = 0;
    tok_list -> tokens = (token_t*)malloc(sizeof(struct _Token) * 3);
}


void add_to_tokenlist(tokenlist_t* tok_list, token_t element) {
    tok_list -> tokens[tok_list -> size] = element;
    ++tok_list -> size;
    tok_list -> tokens = (token_t*)realloc(tok_list -> tokens, tok_list -> size + 7);
}


token_t create_token(token_tt type, char __char, char* line) {
    token_t token;
    token.type = type;
    token.char_rep = __char;
    token.line = line;
    return token;
}

