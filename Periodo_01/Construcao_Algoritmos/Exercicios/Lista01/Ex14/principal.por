/**
 *  Exercício 14
 *  Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
 *	  1. a idade dessa pessoa em anos;
 *	  2. a idade dessa pessoa em meses;
 *	  3. a idade dessa pessoa em dias;
 *	  4. a idade dessa pessoa em semanas.
 *  Bruno Barreto
 *  24/04/23
**/

programa {
	funcao inicio() {
		inteiro dias, semanas, meses
		inteiro anoAtual, anoNascimento
		inteiro resultadoAnos, resultadoMeses, resultadoDias, resultadoSemanas

		meses = 12
		dias = 365
		semanas = 52
		escreva("Esse programa existe com o propósito de calcular e converter sua idade.\n")

		escreva("Insira o ano atual: ")
		leia(anoAtual)
		escreva("Insira seu ano de nascimento: ")
		leia(anoNascimento)

		resultadoAnos = anoAtual - anoNascimento
		resultadoMeses = resultadoAnos * meses
		resultadoSemanas = resultadoAnos * semanas
		resultadoDias = resultadoAnos * dias

		escreva("Você tem ", resultadoAnos, " anos de vida.\n")
		escreva("Você tem ", resultadoMeses, " meses de vida.\n")
		escreva("Você tem ", resultadoSemanas, " semanas de vida.\n")
		escreva("Você tem ", resultadoDias, " dias de vida.\n")
	}
}

