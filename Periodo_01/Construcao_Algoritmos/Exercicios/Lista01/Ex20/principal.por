/**
 *  Exercício 20
 *  Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar sua ponta.
 *  Bruno Barreto
 *  25/04/23
**/

programa {
	funcao inicio() {
		real altura, base, hipotenusa, baseAngulo, alturaAngulo
		escreva("Este programa existe com o propósito de calcular a medida de uma hipotenusa dado apenas o cateto adjacente e seu angulo.\n")

		escreva("Insira o cateto adjacente: ")
		leia(base)
		
		escreva("Insira o angulo do cateto adjacente: ")
		leia(baseAngulo)

		hipotenusa = (base / cos(baseAngulo))

		escreva("A medida da escada é: ", hipotenusa)
	}
}

