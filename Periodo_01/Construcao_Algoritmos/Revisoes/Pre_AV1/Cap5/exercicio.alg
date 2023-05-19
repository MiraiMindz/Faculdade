//3. Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor.

ALGORIMO Execicio3
    N, numerofatorial, resultadofatorial: inteiro
INICIO
    resultadofatorial <- 1
    escreva("Insira o numero de fatoriais a serem calculados: ")
    leia(N)

    para i de 1 até N passo 1 faça
        escreva("Insira o numero para obter se fatorial: ")
        leia(numerofatorial)

        para i de 1 até numerofatorial passo 1 faça
            resultadofatorial <- resultadofatorial * i
        fim para
        escreva("O resultado do fatorial de ", N, "é: ", resultadofatorial)
    fim para
FIM
