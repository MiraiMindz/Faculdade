/**
 *  Exercício 01
 *  Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.
 *  Bruno Barreto
 *  24/04/23
**/

programa {
	funcao inicio() {
		real numero1, numero2, resultado
		escreva("Esse programa existe com o propósito de coletar dois numeros e exibir a subtração entre eles.\n")
		escreva("Insira o primeiro numero: ")
		leia(numero1)

		escreva("Insira o segundo numero: ")
		leia(numero2)

		resultado = numero1 - numero2
		escreva("O resultado é: ", resultado)
	}
}