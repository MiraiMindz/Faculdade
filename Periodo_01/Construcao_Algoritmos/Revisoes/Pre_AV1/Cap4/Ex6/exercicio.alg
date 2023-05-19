// 6. Faça um programa que receba um número inteiro e verifique se é par ou ímpar.

//* Para saber se um numéro é par ou impar, basta comparar o resultado
//* do resto da divisão por 2.
//* Se for 0 é par, se for 1 é impar.

ALGORITMO Exercicio6
    numero: inteiro
INICIO
    escreva("Esse programa diz se um número inteiro é impar ou par.")

    escreva("Insira o numero: ")
    leia(numero)

    se numero mod 2 = 0 então
        escreva("O número é par")
    senão
        escreva("O número é impar")
    fim se
FIM
