/**
 *  Exercício 21
 *  Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
 *  	1. a hora trabalhada vale 1/8 do salário mínimo;
 *  	2. a hora extra vale 1/4 do salário mínimo;
 *  	3. o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
 *  	4. a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
 *  	5. o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
	float horasTrabalhadas, salarioMinimo, horasExtras, salarioFinal;

	printf("%s\n", "Esse programa existe com o propósito de calcular um salário dado as horas trabalhadas, horas extras e o valor de um salário mínimo.");

	printf("Insira o valor do salário minimo: ");
	scanf("%f", &salarioMinimo);

	printf("Insira o valor das horas trabalhadas: ");
	scanf("%f", &horasTrabalhadas);

	printf("Insira o valor das horas extras trabalhadas: ");
	scanf("%f", &horasExtras);

	salarioFinal = ((horasTrabalhadas * (salarioMinimo / 8)) + (horasExtras * (salarioMinimo / 4)));

	printf("%s %.2f\n", "O salário final a receber é de: ", salarioFinal);

	return 0;
}
