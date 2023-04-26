/**
 *  Exercício 06
 *  Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
	float salarioBruto, valorVendas, comissao, salarioFinal;
	printf("%s\n", "Esse programa existe com o propósito de calcular uma comissão de 4% sobre determinado valor de vendas em um dado salário.");
	printf("Insira o salário bruto: ");
	scanf("%f", &salarioBruto);

	printf("Insira o valor total das vendas: ");
	scanf("%f", &valorVendas);

	comissao = valorVendas * 0.04;
	salarioFinal = salarioBruto + comissao;

	printf("%s %.2f\n", "A comissão foi de:", comissao);
	printf("%s %.2f\n", "O salário final é de:", salarioFinal);

	return 0;
}
