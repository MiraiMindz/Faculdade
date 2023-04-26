/**
 *  Exercício 18
 *  Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit. Sabe-se que F = 180*(C + 32)/100.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
    float temperaturaCelsius;
    printf("%s\n", "Esse programa existe com o propósito de converter uma temperatura em Celsius para Fahrenheit.");
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);

    printf("%s %f\n", "A temperatura em Fahrenheit é de: ", ((180 * (temperaturaCelsius + 32)) / 100));
    return 0;
}
