/**
 *  Exercício 19
 *  Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
 *  Bruno Barreto
 *  25/04/23
**/

ALGORITMO Ex19
	comprimento, largura, resultado: real
INICIO
	escreva("Esse programa existe com o propósito de calcular o consumo total em Watts dado um determinado cômodo, assumindo 18W por m².")
	
	escreva("Insira o comprimento do cômodo: ")
	leia(comprimento)
	
	escreva("Insira a largura do cômodo: ")
	leia(largura)

	resultado <- (comprimento * largura) * 18
	escreva("O resultado é de ", resultado, " Watts")
FIM


