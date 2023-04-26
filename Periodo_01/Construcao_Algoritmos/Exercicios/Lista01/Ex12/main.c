/**
 *  Exercício 12
 *  Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que esse funcionário ganha.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
	float salarioMinimo, salarioFuncionario, resultado;

	printf("%s \n", "Esse programa existe com o propósito de calcular quantos salários minimos um funcionário recebe, dados ambos os valores do salário mínimo atual e seu salário.");

	printf("Insira o valor do salário minimo atual: ");
	scanf("%f", &salarioMinimo);

	printf("Insira o valor do salário do funcionário: ");
	scanf("%f", &salarioFuncionario);

	resultado = salarioFuncionario / salarioMinimo;
	
	printf("%s %.2f %s\n", "O funcionário recebe aproximadamente", resultado, "salários minimos.");

	return 0;
}
