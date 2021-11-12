#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include "../include/Lexer.h"
#include "../include/Token.h"


#define MAX_SIZE 256

char* commandBuf;
tokenlist_t toklist;


void signal_callback_handler(int sigint) {
    printf("\n\nBye!\n\n");
    free(commandBuf);
    free(toklist.tokens);
    exit(0);
}


int main() {
    printf("\n\n");
    system("../bin/welcome");
    printf("\n\n");

    commandBuf = (char*)malloc(sizeof(char) * MAX_SIZE);
    tokenlist_init(&toklist);

    signal(SIGINT, signal_callback_handler);

    while (1) {
         printf("ASM_CLI:~$ ");
         fgets(commandBuf, MAX_SIZE, stdin);
         tokenize(&toklist);
    }
}
