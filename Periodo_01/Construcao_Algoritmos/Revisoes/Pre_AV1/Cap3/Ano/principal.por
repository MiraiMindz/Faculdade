// Calculo de idade

programa {
    funcao inicio() {
        inteiro anoAtual, anoNascimento, idade

        escreva("Esse programa existe para calcular sua idade.\n")

        escreva("Insira o ano em que você nasceu: ")
        leia(anoNascimento)

        escreva("Insira o ano atual: ")
        leia(anoAtual)

        idade = anoAtual - anoNascimento
        escreva("Sua idade é: ", idade)
    }
}
