/**
 *  Exercício 06
 *  Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final.
 *  Bruno Barreto
 *  25/04/23
**/

ALGORITMO Ex06
	salarioBruto, valorVendas, comissao, salarioFinal: real
INICIO
	escreva("Esse programa existe com o propósito de calcular uma comissão de 4% sobre determinado valor de vendas em um dado salário.")
	escreva("Insira o salário bruto: ")
	leia(salarioBruto)

	escreva("Insira o valor total das vendas: ")
	leia(valorVendas)

	comissao <- valorVendas * 0.04
	salarioFinal <- salarioBruto + comissao

	escreva("A comissão foi de: ", comissao)
	escreva("O salário final é de: ", salarioFinal)
FIM
