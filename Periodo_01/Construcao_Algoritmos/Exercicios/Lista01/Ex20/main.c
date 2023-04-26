/**
 *  Exercício 20
 *  Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar sua ponta.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <math.h>
#include <stdio.h>

int main() {
    float altura, base, hipotenusa, baseAngulo, alturaAngulo;
    printf("%s\n", "Este programa existe com o propósito de calcular a medida de uma hipotenusa dado apenas o cateto adjacente e seu angulo.");

    printf("Insira o cateto adjacente: ");
    scanf("%f", &base);

    printf("Insira o angulo do cateto adjacente: ");
    scanf("%f", &baseAngulo);

    hipotenusa = (base / cos(baseAngulo));

    printf("%s %.2f\n", "A medida da escada é:", hipotenusa);

    return 0;
}
