/**
 *  Exercício 10
 *  Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
	float lado;
	printf("%s\n", "Esse programa existe com o propósito de calcular a area de um quadrado, dado um determinado lado.");

	printf("Insira a medida do lado: ");
	scanf("%f", &lado);
	
	printf("%s %.2f\n", "O resultado é:", (lado * lado));
	return 0;
}
