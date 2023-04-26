/**
 *  Exercício 25
 *  Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre:
 *  	1. a hora digitada convertida em minutos;
 *  	2. o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
 *  	3. o total dos minutos convertidos em segundos.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
    int horas, minutos;
    printf("%s\n", "Esse programa existe com o propósito de calcular uma dada hora, com minutos, e converte-la para minutos e segundos.");

    printf("Insira as horas: ");
    scanf("%d", &horas);

    printf("Insira os minutos: ");
    scanf("%d", &minutos);

    printf("%s %d\n", "A hora digita em minutos é:", (horas * 60));
    printf("%s %d\n", "O total de minutos é de:", (minutos + (horas * 60)));
    printf("%s %d\n", "O total de segundos é de:", ((minutos + (horas * 60)) * 60));

    return 0;
}
