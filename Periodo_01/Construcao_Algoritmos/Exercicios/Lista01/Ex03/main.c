/**
 *  Exercício 03
 *  Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar com validações.
 *  Bruno Barreto
 *  25/04/2023
 **/

#include <stdio.h>

int main() {
	float dividendo, divisor, resultado;
	printf("%s\n", "Esse programa existe com o propósito de dividir dois números entre si assumindo que o primeiro seja diferente de 0.");

	printf("Insira o dividendo: ");
	scanf("%f", &dividendo);

	printf("Insira o divisor: ");
	scanf("%f", &divisor);

	resultado = dividendo / divisor;
	printf("%s %.2f\n", "O resultado é:", resultado);

	return 0;
}
