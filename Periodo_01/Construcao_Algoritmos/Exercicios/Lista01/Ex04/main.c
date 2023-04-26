/**
 *  Exercício 04
 *  Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda.
 *  Bruno Barreto
 *  25/04/2023
 **/

#include <stdio.h>

int main() {
    float nota1, nota2, peso1, peso2, resultado;
    peso1 = 2.0;
    peso2 = 3.0;
    printf("Esse programa existe com o propósito de calcular a média ponderada de duas notas, sendo considerados peso 2 para a primeira e peso 3 para a segunda.\n");

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    resultado = ((nota1 * peso1) + (nota2 * peso2) / (peso1 + peso2));

    printf("%s %.2f\n", "Seu resultado é: ", resultado);
    return 0;
}
