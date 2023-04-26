/**
 *  Exercício 17
 *  Faça um programa que receba o raio, calcule e mostre:
 *  1. o comprimento de uma esfera; sabe-se que C = 2 * pi R;
 *  2. a área de uma esfera; sabe-se que A = pi R^2;
 *  3. o volume de uma esfera; sabe-se que V = ¾ * pi R^3.
 *  Bruno Barreto
 *  25/04/23
 **/

#include <stdio.h>

int main() {
    float comprimento, raio, PI, area, volume;
    PI = 3.14159265;
    printf("%s\n", "esse programa existe com o propósito de calcular a area, o comprimento e o volume de uma esfera dado seu raio.");
    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;
    area = PI * (raio * raio);
    volume = ((3.0 / 4.0) * (PI * (raio * raio * raio)));

    printf("%s %.2f\n", "O comprimento da esfera é de:", comprimento);

    printf("%s %.2f\n", "A area da esfera é de:", area);

    printf("%s %.2f\n", "O volume da esfera é de:", volume);

    return 0;
}
