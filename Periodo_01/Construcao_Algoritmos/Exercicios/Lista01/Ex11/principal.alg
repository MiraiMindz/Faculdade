/**
 *  Exercício 11
 *  Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2.
 *  Bruno Barreto
 *  25/04/23
**/

ALGORITMO Ex11
	diagonalMenor, diagonalMaior, resultado: real
INICIO
	escreva("Esse programa existe com o propósito de calcular a area de um losango, dado ambas as diagonais.")
	escreva("Insira a diagonais menor: ")
	leia(diagonalMenor)
	escreva("Insira a diagonal maior: ")
	leia(diagonalMaior)

	resultado <- ((diagonalMaior * diagonalMenor) / 2)
	escreva("O resultado é: ", resultado)
FIM


