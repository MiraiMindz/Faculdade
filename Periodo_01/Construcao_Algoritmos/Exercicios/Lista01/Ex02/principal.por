/**
 *  Exercício 02
 *  Faça um programa que receba três números, calcule e mostre a multiplicação desses números.
 *  Bruno Barreto
 *  24/04/23
**/

programa {
	funcao inicio() {
		real numero1, numero2, numero3, resultado

		escreva("Esse programa existe com o propósito de coletar três numeros e exibir a multiplicação entre eles.\n")

		escreva("Insira o primeiro numero: ")
		leia(numero1)
		escreva("Insira o segundo numero: ")
		leia(numero2)
		escreva("Insira o terceiro numero: ")
		leia(numero3)

		resultado = numero1 * numero2 * numero3
		escreva("Seu resultado é: ", resultado)
	}
}

