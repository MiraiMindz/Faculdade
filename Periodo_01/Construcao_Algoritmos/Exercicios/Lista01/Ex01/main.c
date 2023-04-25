/**
 *  Exercício 01
 *  Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.
 *  Bruno Barreto
 *  24/04/23
 **/

#include <stdio.h>

int main()
{
	int numero1, numero2, resultado;
	printf("Esse programa existe com o propósito de coletar dois numeros e exibir a subtração entre eles.\n");
	printf("Insira o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Insira o segundo numero: ");
	scanf("%d", &numero2);

	resultado = numero1 - numero2;
	printf("%s %d\n", "Seu resultado é:", resultado);

	return 0;
}