/**
 *  Exercício 12 
 *  Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que esse funcionário ganha.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real salarioMinimo, salarioFuncionario, resultado

		escreva("Esse programa existe com o propósito de calcular quantos salários minimos um funcionário recebe, dados ambos os valores do salário mínimo atual e seu salário.\n")
		escreva("Insira o valor do salário minimo atual: ")
		leia(salarioMinimo)

		escreva("Insira o valor do salário do funcionário: ")
		leia(salarioFuncionario)

		resultado = salarioFuncionario / salarioMinimo
		escreva("O funcionário recebe aproximadamente ", resultado, " salários minimos.\n")
	}
}

