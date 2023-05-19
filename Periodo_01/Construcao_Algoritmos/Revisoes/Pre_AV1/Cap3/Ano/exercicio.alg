// Calculo de idade

ALGORITMO CalculoIdade
    anoNascimento, anoAtual, idade: inteiro
INICIO
    escreva("Esse programa existe para calcular sua idade.")

    escreva("Insira o ano em que você nasceu: ")
    leia(anoNascimento)

    escreva("Insira o ano atual: ")
    leia(anoAtual)

    idade <- anoAtual - anoNascimento
    escreva("Sua idade é: ", idade)
FIM
