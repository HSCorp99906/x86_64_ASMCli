#include "../include/Lexer.h"


void tokenize(tokenlist_t* tokenlist) {
    char matchBuf[50];


    for (int i = 0; i < strlen(commandBuf); ++i) {
        matchBuf[i] = commandBuf[i];

        switch (commandBuf[i]) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                add_to_tokenlist(tokenlist, create_token(T_INTEGER_LITERAL, commandBuf[i], commandBuf));
                break;
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                add_to_tokenlist(tokenlist, create_token(T_CHAR, commandBuf[i], commandBuf));
                break;
        }
    }

    char* match;

    if (match = strstr(matchBuf, "0x")) {
        add_to_tokenlist(tokenlist, create_token(T_HEX, '\0', match));
    }
}
