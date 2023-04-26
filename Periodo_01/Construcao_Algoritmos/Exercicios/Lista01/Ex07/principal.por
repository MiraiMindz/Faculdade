/**
 *  Exercício 07
 *  Faça um programa que receba o peso de uma pessoa, calcule e mostre:
 *  	1. o novo peso, se a pessoa engordar 15% sobre o peso digitado,
 *  	2. o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
 *  Bruno Barreto
 *  24/04/23
**/

programa {
	funcao inicio() {
		real peso
		escreva("Esse programa existe com o propósito de calcular caso a pessoa emagreça 20% ou engorde 15% sobre dado peso.\n")

		escreva("Insira o peso: ")
		leia(peso)

		escreva("Caso você emagreça, seu peso será de: ", (peso - (peso * 0.2)), "\n")
		escreva("Caso você engorde, seu peso será de: ", (peso + (peso * 0.15)))
	}
}

