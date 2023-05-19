#include <stdio.h>

//* %f é para numero real
//* %d é para numero inteiro (digit)
//* %i é para numero inteiro (também)


//? O int faz referencia ao RETURN 0;
int main() {
    // Declaração de variaveis
    //? Nas linhas abaixo o float faz referencia as variaveis.
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float resultado;

    // Lógica
    printf("Bem-vindo ao programa de cálculo de médias ponderadas.\n");
    printf("Ele recebe 3 notas e 3 pesos e lhe retorna a média final.\n");

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    // Coleta os pesos
    printf("Insira o primeiro peso: ");
    scanf("%f", &peso1);

    printf("Insira o segundo peso: ");
    scanf("%f", &peso2);

    printf("Insira o terceiro peso: ");
    scanf("%f", &peso3);

    resultado = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("O resultado deu: %.2f\n", resultado);
    return 0;
}
