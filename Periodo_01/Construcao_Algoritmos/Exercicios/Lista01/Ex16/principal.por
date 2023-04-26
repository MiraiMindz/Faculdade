/**
 *  Exercício 16
 *  Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real cateto1, cateto2, hipotenusa
		escreva("Esse programa existe com o propósito de calcular o teorema de pitágoras, sem retornar a raiz da hipotenusa.\n")
		escreva("Insira o valor do primeiro cateto: ")
		leia(cateto1)
		
		escreva("Insira o valor do segundo cateto: ")
		leia(cateto2)
		
		hipotenusa = (cateto1 * cateto1) + (cateto2 * cateto2)

		escreva("O valor da hipotenusa é: ", hipotenusa)
	}
}

