/**
 *  Exercício 17
 *  Faça um programa que receba o raio, calcule e mostre:
 *  1. o comprimento de uma esfera; sabe-se que C = 2 \* pi R;
 *  2. a área de uma esfera; sabe-se que A = pi R^2;
 *  3. o volume de uma esfera; sabe-se que V = ¾ \* pi R^3.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real comprimento, raio, PI, area, volume
		PI = 3.14159265
		escreva("esse programa existe com o propósito de calcular a area, o comprimento e o volume de uma esfera dado seu raio.\n")
		escreva("Insira o raio da esfera: ")
		leia(raio)
		escreva("\n")

		comprimento = 2 * PI * raio
		area = PI * (raio * raio)
		volume = ((3 / 4) * (PI * (raio * raio * raio)))

		escreva("O comprimento da esfera é de: ", comprimento, "\n")
		escreva("A area da esfera é de: ", area, "\n")
		escreva("O volume da esfera é de: ", volume, "\n")
	}
}

