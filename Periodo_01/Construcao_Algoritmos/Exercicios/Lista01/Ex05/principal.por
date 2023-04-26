/**
 *  Exercício 05
 *  Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real precoBase, resultado
		escreva("Esse programa existe com o propósito de calcular 10% de desconto sobre um dado produto.\n")
		escreva("Insira o preço do produto: ")
		leia(precoBase)

		resultado = precoBase * 0.9
		escreva("O resultado é: ", resultado)
	}
}

