/**
 *  Exercício 14
 *  Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
 *    1. a idade dessa pessoa em anos;
 *    2. a idade dessa pessoa em meses;
 *    3. a idade dessa pessoa em dias;
 *    4. a idade dessa pessoa em semanas.
 *  Bruno Barreto
 *  24/04/23
 **/

#include <stdio.h>

int main() {
    int dias, semanas, meses;
    int anoAtual, anoNascimento;
    int resultadoAnos, resultadoMeses, resultadoDias, resultadoSemanas;

    meses = 12;
    dias = 365;
    semanas = 52;

    printf("%s\n", "Esse programa existe com o propósito de calcular e converter sua idade.");

    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Insira seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    resultadoAnos = anoAtual - anoNascimento;
    resultadoMeses = resultadoAnos * meses;
    resultadoSemanas = resultadoAnos * semanas;
    resultadoDias = resultadoAnos * dias;

    printf("Você tem %d anos de vida.\n", resultadoAnos);
    printf("Você tem %d meses de vida.\n", resultadoMeses);
    printf("Você tem %d semanas de vida.\n", resultadoSemanas);
    printf("Você tem %d dias de vida.\n", resultadoDias);

    return 0;
}
