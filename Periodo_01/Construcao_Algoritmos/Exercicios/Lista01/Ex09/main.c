/**
 *  Exercício 9
 *  Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: A = ((base maior + base menor) * altura)/2
 *  Bruno Barreto
 *  24/04/23
 **/

#include <stdio.h>

int main()
{
	float baseMenor, baseMaior, altura, area;

	printf("Insira a base maior: ");
	scanf("%f", &baseMaior);

	printf("Insira a base menor: ");
	scanf("%f", &baseMenor);

	printf("Insira a altura: ");
	scanf("%f", &altura);

	area = ((baseMaior + baseMenor) * altura) / 2;

	printf("%s %.2f\n", "A area do trapézio é: ", area);

	return 0;
}
