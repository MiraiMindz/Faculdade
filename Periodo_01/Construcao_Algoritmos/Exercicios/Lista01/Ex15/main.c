/**
 *  Exercício 15
 *  João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
    float salario, conta1, conta2, resultado;
    printf("%s\n", "Esse programa existe com o propósito de calcular um aumento de 2% sobre duas contas e descontar de um dado salário.");

    printf("Insira o valor do salário: ");
    scanf("%f", &salario);

    printf("Insira o valor da primeira conta: ");
    scanf("%f", &conta1);

    printf("Insira o valor da segunda conta: ");
    scanf("%f", &conta2);

    resultado = (salario - ((conta1 + (conta1 * 0.02)) + (conta2 + (conta2 * 0.02))));

    printf("%s %.2f\n", "O resultado final do desconto é de: ", resultado);

    return 0;
}
