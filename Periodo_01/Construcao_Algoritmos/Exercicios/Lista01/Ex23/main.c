/**
 *  Exercício 23
 *  Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
    float angulo1, angulo2;
    printf("%s\n", "Esse programa existe com o propósito de calcular o angulo restante em um triângulo dados dois angulos quaisquer.");

    printf("Insira o primeiro angulo: ");
    scanf("%f", &angulo1);

    printf("Insira o segundo angulo: ");
    scanf("%f", &angulo2);

    printf("%s %.2f\n", "O terceiro angulo vale: ", (180.0 - (angulo1 + angulo2)));

    return 0;
}
