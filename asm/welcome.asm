global _start


section .data
    welcome db "~~~~~~ ASM CLI ~~~~~~", 0xA, "Created By Ian Moffet", 0xA, "v1.0", 0xA
    len equ $ - welcome


section .text
_start:
    mov eax, 4
    mov ebx, 1
    mov ecx, welcome
    mov edx, len
    int 0x80

    mov eax, 1
    mov ebx, 0
    int 0x80

