// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

/**
ETAPAS:
    1. declarar variaveis pras notas
    2. declarar variaveis pros pesos
    3. coletar o valor das notas
        3.1. Coletar do usuário; usando o escreva() e leia()
    4. coletar o valor dos pesos
        4.1. Coletar do usuário; usando o escreva() e leia()
    5. calcular a media ponderada
        5.1. Mp = [(N1 x P1) + (N2 x P2) + ... (Nx x Px)] ÷ (P1 + P2 + P3 + ... Px)
    6. mostrar a média ponderada
        6.1. Mostrar usando o escreva()
**/

ALGORITMO Exercicio3
    // Declara variaveis
    nota1, nota2, nota3: real
    peso1, peso2, peso3: real
    resultado: real
INICIO // Começo da parte lógica
    escreva("Bem-vindo ao programa de cálculo de médias ponderadas")
    escreva("Ele recebe 3 notas e 3 pesos e lhe retorna a média final.")
    // Coleta de variaveis
    // Coleta as notas
    escreva("Insira a primeira nota: ")
    leia(nota1)

    escreva("Insira a segunda nota: ")
    leia(nota2)

    escreva("Insira a terceira nota: ")
    leia(nota3)

    // Coleta os pesos
    escreva("Insira o primeiro peso: ")
    leia(peso1)

    escreva("Insira o segundo peso: ")
    leia(peso2)

    escreva("Insira o terceiro peso: ")
    leia(peso3)

    // Cálculo lógico
    resultado <- ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3)

    escreva("O resultado final é: ", resultado)
FIM
