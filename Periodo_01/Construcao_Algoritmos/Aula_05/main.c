/**
 *  Aula: 05
 *  Data: 02/06/2023
**/

#include <stdio.h>

int main() {
    printf("Hello World!\n");
    int x = 0;
    while (x < 9) {
        printf("%d\n", x);
        x++;
    }

    float y = 0.0;
    do {
        printf("%.2f\n", y);
        y += 0.01;
    } while (y < 3);
    return 0;
}

/* While in x86_NASM

section .text
global _start
_start:
    mov eax, 0

L1:
    inc eax
    cmp eax, 10
    jne L1
    ret

*/

