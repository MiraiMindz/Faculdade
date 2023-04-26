/**
 *  Exercício 22
 *  Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais desse polígono. Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do polígono.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
    int lados;
    printf("%s\n", "Esse programa existe com o propósito de calcular o numero de diagonais de dado o numero de lados de um poligono convexo.");

    printf("Insira o número de lados: ");
    scanf("%d", &lados);

    printf("%s %d\n", "O número de diagonais é de:", ((lados * (lados - 3)) / 2));

    return 0;
}
