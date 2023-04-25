/**
 *  Exercício 02
 *  Faça um programa que receba três números, calcule e mostre a multiplicação desses números.
 *  Bruno Barreto
 *  24/04/23
 **/

#include <stdio.h>

int main()
{
	int numero1, numero2, numero3, resultado;

	printf("Esse programa existe com o propósito de coletar três numeros e exibir a multiplicação entre eles.\n");

	printf("Insira o primeiro numero: ");
	scanf("%d", &numero1);

	printf("Insira o segundo numero: ");
	scanf("%d", &numero2);

	printf("Insira o terceiro numero: ");
	scanf("%d", &numero3);

	resultado = numero1 * numero2 * numero3;

	printf("%s %d\n", "Seu resultado é:", resultado);

	return 0;
}
