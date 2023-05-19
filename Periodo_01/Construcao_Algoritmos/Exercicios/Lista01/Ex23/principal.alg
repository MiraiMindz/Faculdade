/**
 *  Exercício 23
 *  Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus.
 *  Bruno Barreto
 *  25/04/23
**/

ALGORITMO Ex23
	angulo1, angulo2: real
INICIO
	escreva("Esse programa existe com o propósito de calcular o angulo restante em um triângulo dados dois angulos quaisquer.")
	escreva("Insira o primeiro angulo: ")
	leia(angulo1)

	escreva("Insira o segundo angulo: ")
	leia(angulo2)

	escreva("O terceiro angulo vale: ", (180 - (angulo1 + angulo2)))
FIM


