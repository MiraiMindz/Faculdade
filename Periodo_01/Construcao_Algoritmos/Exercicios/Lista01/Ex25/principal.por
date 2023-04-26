/**
 *  Exercício 25
 *  Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre:
 *  	1. a hora digitada convertida em minutos;
 *  	2. o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
 *  	3. o total dos minutos convertidos em segundos.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real horas, minutos
		escreva("Esse programa existe com o propósito de calcular uma dada hora, com minutos, e converte-la para minutos e segundos.")
		escreva("Insira as horas: ")
		leia(horas)

		escreva("Insira os minutos: ")
		leia(minutos)

		escreva("A hora digita em minutos é: ", (horas * 60), "\n")
		escreva("O total de minutos é de: ", (minutos + (horas * 60)), "\n")
		escreva("O total de segundos é de: ", ((minutos + (horas * 60)) * 60), "\n")
	}
}

