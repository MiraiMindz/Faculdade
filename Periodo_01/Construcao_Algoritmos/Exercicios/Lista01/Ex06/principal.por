/**
 *  Exercício 06
 *  Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real salarioBruto, valorVendas, comissao, salarioFinal
		escreva("Esse programa existe com o propósito de calcular uma comissão de 4% sobre determinado valor de vendas em um dado salário.\n")
		escreva("Insira o salário bruto: ")
		leia(salarioBruto)

		escreva("Insira o valor total das vendas: ")
		leia(valorVendas)

		comissao = valorVendas * 0.04
		salarioFinal = salarioBruto + comissao

		escreva("A comissão foi de: ", comissao, "\n")
		escreva("O salário final é de: ", salarioFinal)
	}
}

