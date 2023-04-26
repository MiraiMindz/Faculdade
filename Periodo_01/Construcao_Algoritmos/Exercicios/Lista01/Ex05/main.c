/**
 *  Exercício 05
 *  Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
	float precoBase, resultado;
	printf("%s\n", "Esse programa existe com o propósito de calcular 10% de desconto sobre um dado produto.");

	printf("Insira o preço do produto: ");
	scanf("%f", &precoBase);
	resultado = precoBase * 0.9;
	printf("%s %.2f\n", "O resultado é:", resultado);
	return 0;
}
