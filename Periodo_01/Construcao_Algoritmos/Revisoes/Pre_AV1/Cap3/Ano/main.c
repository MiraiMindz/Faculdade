#include <stdio.h>

// Calculo da idade
int main() {
    int anoAtual, anoNascimento, idade;
    printf("Esse programa existe para calcular sua idade.\n");

    printf("Insira o ano em que você nasceu: ");
    scanf("%d", &anoNascimento);
    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);
    idade = anoAtual - anoNascimento;
    printf("A sua idade é %d.\n", idade);

    return 0;
}
