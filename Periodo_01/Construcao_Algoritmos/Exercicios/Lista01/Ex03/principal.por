/**
 *  Exercício 03
 *  Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar com validações.
 *  Bruno Barreto
 *  25/04/2023
**/

programa {
	funcao inicio() {
		real dividendo, divisor, resultado
		escreva("Esse programa existe com o propósito de dividir dois números entre si assumindo que o primeiro seja diferente de 0.\n")
		escreva("Insira o dividendo: ")
		leia(dividendo)

		escreva("Insira o divisor: ")
		leia(divisor)

		resultado = dividendo / divisor
		escreva("O resultado é: ", resultado)
	}
}

