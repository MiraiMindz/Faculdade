/**
 *  Exercício 24
 *  Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. 
 *  Ela vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina.
 *  Sabe-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57.
 *  O programa deve fazer as conversões e mostrá-las.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real valorReal
		escreva("Esse programa existe com o propósito de converter cotações monetárias, em específico do Real para: Marco, Dolar e Libra-esterlina.\n")
		escreva("Insira sua quantia atual em Reais: ")
		leia(valorReal)

		escreva("Sua quantia em Dolar é de: ", (valorReal * 1.80), "\n")
		escreva("Sua quantia em Marco é de: ", (valorReal * 2), "\n")
		escreva("Sua quantia em Libra-esterlina é de: ", (valorReal * 3.57), "\n")
	}
}

