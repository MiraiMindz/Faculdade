// 3. Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

programa {
    funcao inicio() {
        // Declaração
        real nota1, nota2, nota3
        real peso1, peso2, peso3
        real resultado

        // Lógica
        escreva("Bem-vindo ao programa de cálculo de médias ponderadas\n")
        escreva("Ele recebe 3 notas e 3 pesos e lhe retorna a média final.\n")

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

        resultado = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3)

        escreva("O resultado final é: ", resultado, "\n")
    }
}
