/**
 *  Exercício 18
 *  Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit. Sabe-se que F = 180*(C + 32)/100.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real temperaturaCelsius
		escreva("Esse programa existe com o propósito de converter uma temperatura em Celsius para Fahrenheit.\n")
		escreva("Insira a temperatura em Celsius: ")
		leia(temperaturaCelsius)

		escreva("A temperatura em Fahrenheit é de: ", ((180 * (temperaturaCelsius + 32)) / 100), "\n")
	}
}

