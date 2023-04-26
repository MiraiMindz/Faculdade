/**
 *  Exercício 13
 *  Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		inteiro numero
		escreva("Esse programa existe com o propósito de calcular a tabuada de dado número\n")
		escreva("Insira o número desejado: ")
		leia(numero)
		escreva("Seus resultados são: \n")
		para (inteiro i = 1; i <= 10; i++) {
			escreva(numero, " × ", i, " = ", (i * numero), "\n")
		}
	}
}

