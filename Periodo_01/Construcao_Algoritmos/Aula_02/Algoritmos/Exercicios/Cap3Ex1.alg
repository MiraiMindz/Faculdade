// Exercício 1: Retorne a subtração de dois numeros

/* Tabelinha de portugol
* Entrada (pelo usuário)        Processamento                       Saida
* Comando: leia(<variavel>)     resultado <- numero1 - numero2      escreva(resultado)
*/

// Implementação do problema em algoritmo
Algoritmo Cap3Ex1
    // Declaração de variaveis
    numero1, numero2, resultado: real

Inicio
    // Entrada de dados
    // Leia o primeiro numero
    escreva("Numero: ")
    leia(numero1)

    // Leia o segundo numero
    escreva("Numero: ")
    leia(numero2)

    // Processamento
    resultado <- numero1 - numero2

    // Saida de dados
    escreva("Resultado: ", resultado)
Fim

// CÓDIGO DA TUTORA
dontpad.com/algoritmo1404

Algoritmo Cap3Ex1
     // declaração de variáveis
     nr1, nr2, resp : real
Inicio
     // entrada de dados
     escreva(“Numero..: “)
     leia(nr1)
     escreva(“Numero..: “)
      leia(nr2)

    // processamento
    resp <- nr1 – nr2

    // saída de dados
    Escreva(“Resultado..: “ , resp)

Fim
//


// Em portugol
programa {
  funcao inicio() {
    inteiro numero1, numero2, resultado
    escreva("Escreva o primeiro número: ")
    leia(numero1)
    escreva("Escreva o segundo número: ")
    leia(numero2)
    resultado = numero1 - numero2
    escreva("O resultado é: ", resultado, "\n")
  }
}


// Estrutura básica em portugol

programa {
  funcao inicio() {
    // declaração de variáveis

    // processamento
    
    // saída de dados
  }
}

// Código da tutora

Resolvido em Portugol
programa {
  funcao inicio() {
    //declaração de variáveis
     real nr1, nr2, resp      // em protugol Primeiro é o tipo de dados depois o nome da variável

     // entrada de dados
     escreva("Numero..: ")
     leia(nr1)
     escreva("Numero..: ")
      leia(nr2)

    // processamento
    resp = nr1 - nr2   // em Protugol atribuição é o =

    // saída de dados
     escreva("Resultado..: " , resp)

  }
}

// Exercício 2 do capitulo 3: multiplique 3 numeros
programa {
  funcao inicio() {
    real numero1, numero2, numero3, resultado
    escreva("Insira o primeiro numero: ")
    leia(numero1)
    escreva("Insira o segundo numero: ")
    leia(numero2)
    escreva("Insira o terceiro numero: ")
    leia(numero3)

    resultado = numero1 * numero2 * numero3
    escreva("O resultado é: ", resultado)
  }
}

// Exercício 4: retorne a media ponderada de duas notas
Mp = [(N1 x P1) + (N2 x P2) + (N3 x P3) + ... (Nx x Px)] ÷ (P1 + P2 + P3 + ... Px)

programa {
  funcao inicio() {
    real nota1, nota2, resultado
    inteiro pesoNota1, pesoNota2
    pesoNota1 = 2
    pesoNota2 = 3
    escreva("Insira a primeira nota: ")
    leia(nota1)
    escreva("Insira a segunda nota: ")
    leia(nota2)

    resultado = ((nota1 * pesoNota1) + (nota2 * pesoNota2))/(pesoNota1 + pesoNota2)
    escreva("O resultado é: ", resultado)
  }
}


// Código da tutora
Exercício 4
programa {
  funcao inicio()
    //variaveis
    real n1, n2, n3, calc

    //entrada de dados
    escreva("coloque um numero..: ")
    leia(n1)
    escreva ("coloque um numero..: ")
    leia(n2)
    escreva("coloque um numero..: ")
    leia(n3)


    //processamento
    calc= n1*n2*n3

    //saida de dados
    escreva("a multiplicação dos numeros são... ", calc)
    
}

