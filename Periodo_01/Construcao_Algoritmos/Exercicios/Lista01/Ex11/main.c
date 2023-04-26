/**
 *  Exercício 11
 *  Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
	float diagonalMenor, diagonalMaior, resultado;
	printf("%s\n", "Esse programa existe com o propósito de calcular a area de um losango, dado ambas as diagonais.");
	printf("Insira a diagonais menor: ");
	scanf("%f", &diagonalMenor);
	printf("Insira a diagonal maior: ");
	scanf("%f", &diagonalMaior);

	resultado = ((diagonalMaior * diagonalMenor) / 2);

	printf("%s %.2f\n", "O resultado é: ", resultado);
	return 0;
}
