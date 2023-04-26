/**
 *  Exercício 16
 *  Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
    float cateto1, cateto2, hipotenusa;
    printf("%s\n", "Esse programa existe com o propósito de calcular o teorema de pitágoras, sem retornar a raiz da hipotenusa.");

    printf("Insira o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Insira o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = (cateto1 * cateto1) + (cateto2 * cateto2);
    printf("%s %2.f\n", "O valor da hipotenusa é:", hipotenusa);
    return 0;
}
