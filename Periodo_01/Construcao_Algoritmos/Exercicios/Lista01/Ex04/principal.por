/**
 *  Exercício 04
 *  Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda.
 *  Bruno Barreto
 *  25/04/2023
**/

programa {
	funcao inicio() {
		real nota1, nota2, peso1, peso2, resultado
		peso1 = 2
		peso2 = 3
		escreva("Esse programa existe com o propósito de calcular a média ponderada de duas notas, sendo considerados peso 2 para a primeira e peso 3 para a segunda.\n")
		escreva("Insira a primeira nota: ")
		leia(nota1)

		escreva("Insira a segunda nota: ")
		leia(nota2)

		resultado = ((nota1 * peso1) + (nota2 * peso2) / (peso1 + peso2))
		escreva("Seu resultado é: ", resultado)
	}
}

