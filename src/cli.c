#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    printf("\n\n");
    system("../bin/welcome");
    printf("\n\n");

    char commandBuf[256];

    while (strcmp(commandBuf, "quit") != 0) {
         printf("ASM_CLI:~$ ");
         scanf("%s", commandBuf);
    }
}
