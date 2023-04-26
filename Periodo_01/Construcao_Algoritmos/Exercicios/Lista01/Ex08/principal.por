/**
 *  Exercício 08
 *  Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real peso
		escreva("Esse programa existe com o propósito de converter dado peso para gramas\n")
		escreva("insira o peso: ")
		leia(peso)

		escreva("O resultado é: ", (peso * 1000))
	}
}

