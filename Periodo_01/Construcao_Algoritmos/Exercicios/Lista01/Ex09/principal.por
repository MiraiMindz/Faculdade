/**
 *  Exercício 9
 *  Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: A = ((base maior + base menor) * altura)/2
 *  Bruno Barreto
 *  24/04/23
**/

programa {
	funcao inicio() {
		real baseMenor, baseMaior, altura, area

		escreva("Insira a largura da base menor: ")
		leia(baseMenor)
		escreva("Insira a largura da base maior: ")
		leia(baseMaior)
		escreva("Insira a altura do trapezio: ")
		leia(altura)

		area = ((baseMaior + baseMenor) * altura) / 2
		escreva("A area do trapezio é: ", area)
		}
}

