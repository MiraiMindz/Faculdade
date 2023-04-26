/**
 *  Exercício 10
 *  Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real lado
		escreva("Esse programa existe com o propósito de calcular a area de um quadrado, dado um determinado lado.\n")
		escreva("Insira a medida do lado: ")
		leia(lado)

		escreva("O resultado é: ", (lado * lado))
	}
}

