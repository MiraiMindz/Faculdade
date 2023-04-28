# Estruturas Condicionais

If-Else (Se-SeNão) & Switch-Case (Escolha)

Identação (Escopo) -> Chaves

Estruturas condicionais são usadas para verificação ou comparação.

If (Se):

- "Se Simples"


```plaintext
se (CONDIÇÃO) então
    {COMANDOS}
fim se
```

exemplo:

```plaintext
x <- 4
se (x > 3) então
    escreva(x + 2)
fim se
```

Operadores Relacionais:
- Maior (>)
- Maior ou Igual (>=)
- Menor (<)
- Menor ou Igual (<=)
- É igual (=) [EM ALGORITMO O IGUAL É COMPARAÇÃO, E A '<-' (SETA) É ATRIBUIÇÃO]
- Diferente (<>) [EM ALGORITMO O DIFERENTE SÃO 'SETAS DIVERGENTES']

exemplo:

```plaintext
x <- 0
y <- 0
se (x + 3 < y + 4) então
    escreva(x, y)
fim se
```

If-Else (se composto)

```plaintext
Se (condição) então
    <Comando se Verdadeiro>
SeNão
    <Comando se Falso>
fim se
```

Em Algoritmo o operador MODULO (%) é chamado de MOD (mod)

4 % 2 => 4 mod 2



Operadores Lógicos

AND:
- Algoritmo: E
- C: &&
- Definição: Ambos devem ser verdade

exemplo: "Para se inscrever na Biblioteca, você deve ter a declaração E a foto."


OR:
- Algoritmo: OU
- C: ||
- Definição: Um ou mais devem ser verdades.


NOT:
- Algoritmo: NÃO
- C: !
- Definição: Inverte o resultado.

Precedencia:
1. NÃO
2. E
3. OU

Pode-se usar parenteses para definir Precedencia

CAPITULO 4 - Exercicios prioridades: 3, 7, 8, 15, 17, 18, 19

--------------------------------------------------------------------------------

Se Encadeado

O "Se encadeado" ignora as outras expressoes quando atinge um VERDADEIRO

```plaintext
se (condição) então

senão
    se (condição) então

    senão
        se (condição) então
        
        senão
        
        fim se
    fim se
fim se
```

EM ALGORITMO NÃO EXISTE (SENÃO SE), O 'SE' DEVE ESTAR NA LINHA ABAIXO.

## Anotações da Tutora

```
Resolução de Exercício
Capitulo 3

Exercício 7
Objetivo: Calcular o novo peso da pessoa - engordando e emagrecendo

Entrada: peso
Processamento:  engordando <- peso + 15%
                            emagrecendo <- peso - 20%
Saída: engordando, emagrecendo

Algoritmo Cap3Ex7
// declaração de variáveis
     peso, emagrecendo, engordando: real

Início

// entrada de dados
     escreva("Peso..: ")
     leia(peso)

// processamento
     engordando <- peso + (peso *15 /100)   // ou engordando <- peso * 1.15
     emagrecendo <- peso - (peso * 20 / 100) // ou emagrecendo <- peso * 0.80

// saída de dados
    escreva("Novo peso engordando..: ", engordando)
    escreva("Novo peso emagrecendo..: ", emagrecendo)  
fim

---------------- Em Portugol ---------------
programa {
  funcao inicio() {
    // variáveis
    real peso, engordando, emagrecendo
    // entrada de dados
     escreva("Peso..: ")
     leia(peso)

// processamento
     engordando = peso + (peso *15 /100)   // ou engordando <- peso * 1.15
     emagrecendo = peso - (peso * 20 / 100) // ou emagrecendo <- peso * 0.80

// saída de dados
    escreva("\n------------- Resultado --------------")
    escreva("\nNovo peso engordando..: ", engordando, " KG")
    escreva("\nNovo peso emagrecendo..: ", emagrecendo, " KG") 
    escreva("\n--------------------------------------") 
  }
}

---------------------------------------------------------------------------------------------------------------------------

Exercício: 09
Objetivo: Calcular a área de um trapézio

Entrada: bMaior, bMenor, altura,area
Processamento: area <- ((bMaior + bMenor) * altura )/2
Saída: area

Algoritmo Cap3Ex09
// declaração de variáveis
     bMaior, bMenor, altura, area : real
Início

// entrada de dados
     escreva("Valor da Base Menor..: ")
     leia(bMenor)
     escreva("Valor da Base Maior..: ")
     leia(bMaior)
     escreva("Valor da Altura..: ")
     leia(altura)

// processamento
      area <- ((bMaior + bMenor) * altura )/2
// saída de dados
      escreva("\nÁrea do Trap´zio..: " , area)
fim


---------------- Em Portugol ---------------

programa {
  funcao inicio() {
    // variáveis
    real  bMaior, bMenor, altura, area :
    // entrada de dados
     escreva("Valor da Base Menor..: ")
     leia(bMenor)
     escreva("Valor da Base Maior..: ")
     leia(bMaior)
     escreva("Valor da Altura..: ")
     leia(altura)

// processamento
   
     area = ((bMaior + bMenor) * altura )/2
// saída de dados
    escreva("\n------------- Resultado --------------")
    escreva("\nÁrea do Trapézio..: " , area)
    escreva("\n--------------------------------------") 
  }
}
-------------------------------------------------------------------------------------------------------------------------------


Exercício: 13
Objetivo: apresentar a tabuada de um número

Entrada: nr 
Processamento:  calcular a tabuada 1 a 10
Saída: a tabuada de 1 até 10

Algoritmo Cap3Ex7
// declaração de variáveis
    nr: inteiro
Início

// entrada de dados
   escreva("Numero..: ")
   leia(nr)

// processamento e saída de dados
    Escreva(nr , " x 0 :" , nr* 0 )
 ....

fim

---------------- Em Portugol ---------------

programa {
  funcao inicio() {
    // variáveis
    inteiro nr
    // entrada de dados
   escreva("Número..: ")
   leia(nr)
// processamento e  saída de dados
escreva("\n------------ Tabuada de ", nr , "-----------------")
escreva("\n", nr , " x  0 : ", nr * 0)   
escreva("\n", nr , " x  1 : ", nr * 1)  
escreva("\n", nr , " x  2 : ", nr * 2)  
escreva("\n", nr , " x  3 : ", nr * 3)
escreva("\n", nr , " x  4 : ", nr * 4)  
escreva("\n", nr , " x  5 : ", nr * 5)  
escreva("\n", nr , " x  6 : ", nr * 6) 
escreva("\n", nr , " x  7 : ", nr * 7)  
escreva("\n", nr , " x  8 : ", nr * 8)  
escreva("\n", nr , " x  9 : ", nr * 9) 
escreva("\n", nr , " x 10 : ", nr * 10)    
escreva("\n--------------------------------------------------")  
  }
}

---------------------------------------------------------------------------------------------------------------------------------
Forma mais eficiente de fazer

programa {
  funcao inicio() {
    // variáveis
    inteiro nr, i
    // entrada de dados
   escreva("Número..: ")
   leia(nr)
// processamento e  saída de dados
escreva("\n------------ Tabuada de ", nr , "-----------------")
// para i de 0 até 10 passo 1 faça
para(i = 0 ; i<= 10; i++ )
{
  escreva("\n", nr , " x  ",i, "= ", nr * i) 
} 
escreva("\n--------------------------------------------------")  
  }
}
-------------------------------------------------------------------------------------------------------------------------------



Exercício: 14
Objetivo: Calcular a idade de uma pessoa em anos, meses e dias

Entrada: anoNasc, anoAtual
Processamento: 
      idade = anoAtual - anoNasc   // valor em anos
      meses = idade * 12 // valor em meses
      dias = idade * 365 // valor em dias
      semanas = idade * 52 // valor de semanas

Saída:


Algoritmo Cap3Ex14
// declaração de variáveis
Início

// entrada de dados

// processamento

// saída de dados

fim


---------------------------------------------------------------------------------------------------------------------------------

Exercício: 21
Objetivo:

Entrada:
Processamento: 
Saída:

Algoritmo Cap3Ex7
// declaração de variáveis
Início

// entrada de dados

// processamento

// saída de dados

fim

---------------- Em Portugol ---------------
programa {
  funcao inicio() {
    // variáveis
      real, salMin, valHoraExtra,valHoraTrab, salBruto, valReceberExtra, salReceber
      inteiro hrTrab, hrExtra
    // entrada de dados
    escreva("Valor do Salário Mínimo..: ")
    leia(salMin)
    escreva("Número de Horas trabalhadas..: ")
    leia(hrTrab)
    escreva("Número de Horas Extras..: ")
    leia(hrExtra)
// processamento 
valHoraTrab = salMin /8   // Valor da hora trabalhada
valHoraExtra = salMin /4  // Valor da hora Extra
salBruto = hrTrab * valHoraTrab  // Valor do salário bruto
valReceberExtra = hrExtra * valHoraExtra  // total a receber de horas extras
salReceber = salBruto+ valReceberExtra

// saída de dados

 escreva("Salário a receber R$ ", salReceber)
  }
}
_______________________________________________________________________________

Estrutura Condicional

_______________________________________________________________________________

Estrutura Condicional (VALIDAÇÃO)

1) Se simples
2) Se composto

exercício
Se a base menor for maior que a base maior informar que não foi possível calcular


Algoritmo Cap3Ex09
// declaração de variáveis
     bMaior, bMenor, altura, area : real
Início

// entrada de dados
     escreva("Valor da Base Menor..: ")
     leia(bMenor)
     escreva("Valor da Base Maior..: ")
     leia(bMaior)
     escreva("Valor da Altura..: ")
     leia(altura)

// processamento e saída de dados
  se baseMenor < baseMaior então
        area <- ((bMaior + bMenor) * altura )/2
        escreva("\nÁrea do Trap´zio..: " , area)
    senão
        escreva("Desculpa, não foi possível calcular. A base menor tem que ser menor que a base Maior.")



fim

---------------- Em Portugol ---------------
programa {
  funcao inicio() {
    // variáveis
    real  bMaior, bMenor, altura, area :
    // entrada de dados
     escreva("Valor da Base Menor..: ")
     leia(bMenor)
     escreva("Valor da Base Maior..: ")
     leia(bMaior)
     escreva("Valor da Altura..: ")
     leia(altura)

// processamento
   se (bMenor < bMaior)
    {
        area = ((bMaior + bMenor) * altura )/2
        escreva("\n------------- Resultado --------------")
        escreva("\nÁrea do Trapézio..: " , area)
        escreva("\n--------------------------------------") 
    } // fecha o se (verdade)
    senao
    {
        escreva("\nNão foi possível calcular.")
    } // fecha o senão (falso)

    
  }
}

Resolvendo Exercício
Capítulo 4
Exercício 7

---------------- Em Portugol ---------------
programa {
  funcao inicio() {
    // variáveis
       real sal
    // entrada de dados
    escreva("Salario..: ")
    leia(sal)

  // processamento
     se (sal < 500.00)
      {  
         escreva("Novo  Salário..: ",  sal * 1.30) 
      } 
      senao
       {  
          escreva("Você não teve direito ao aumento.") 
       }
  
  }
} 

```


