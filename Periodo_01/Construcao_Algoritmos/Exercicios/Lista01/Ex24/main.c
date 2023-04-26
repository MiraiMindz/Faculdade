/**
 *  Exercício 24
 *  Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui.
 *  Ela vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina.
 *  Sabe-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57.
 *  O programa deve fazer as conversões e mostrá-las.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
    float valorReal;
    printf("%s\n", "Esse programa existe com o propósito de converter cotações monetárias, em específico do Real para: Marco, Dolar e Libra-esterlina.");
    printf("Insira sua quantia atual em Reais: ");
    scanf("%f", &valorReal);

    printf("%s %.2f\n", "Sua quantia em Dolar é de:", (valorReal * 1.80));
    printf("%s %.2f\n", "Sua quantia em Marco é de:", (valorReal * 2));
    printf("%s %.2f\n", "Sua quantia em Libra-esterlina é de:", (valorReal * 3.57));

    return 0;
}
