/**
 *  Exercício 13
 *  Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
    int numero;
    printf("%s\n", "Esse programa existe com o propósito de calcular a tabuada de dado número.");

    printf("Insira o número desejado: ");
    scanf("%d", &numero);
    printf("%s\n", "Seus resultados são: ");
    for (int i = 0; i <= 10; i++) {
        printf("%d × %d = %d\n", numero, i, (i * numero));
    }

    return 0;
}
