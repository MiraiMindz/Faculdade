/**
 *  Exercício 19
 *  Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
	float comprimento, largura, resultado;
	printf("%s\n", "Esse programa existe com o propósito de calcular o consumo total em Watts dado um determinado cômodo, assumindo 18W por m².");

	printf("Insira o comprimento do cômodo: ");
	scanf("%f", &comprimento);

	printf("Insira a largura do cômodo: ");
	scanf("%f", &largura);

	resultado = (comprimento * largura) * 18.0;
	printf("O resultado é de %.2f Watts\n", resultado);

	return 0;
}
