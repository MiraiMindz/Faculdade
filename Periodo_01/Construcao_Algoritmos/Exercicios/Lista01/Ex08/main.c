/**
 *  Exercício 08
 *  Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
	float peso;
	printf("%s\n", "Esse programa existe com o propósito de converter dado peso para gramas");
	printf("insira o peso: ");
	scanf("%f", &peso);

	printf("%s %.2f\n", "O resultado é:", (peso * 1000.0));
	return 0;
}
