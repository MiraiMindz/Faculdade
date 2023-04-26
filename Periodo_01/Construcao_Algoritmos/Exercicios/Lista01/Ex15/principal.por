/**
 *  Exercício 15
 *  João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real salario, conta1, conta2, resultado
		escreva("Esse programa existe com o propósito de calcular um aumento de 2% sobre duas contas e descontar de um dado salário.\n")
		escreva("Insira o valor do salário: ")
		leia(salario)

		escreva("Insira o valor da primeira conta: ")
		leia(conta1)

		escreva("Insira o valor da segunda conta: ")
		leia(conta2)

		resultado = (salario - ((conta1 + (conta1 * 0.02)) + (conta2 + (conta2 * 0.02))))

		escreva("O resultado final do desconto é de: ", resultado, "\n")
	}
}

