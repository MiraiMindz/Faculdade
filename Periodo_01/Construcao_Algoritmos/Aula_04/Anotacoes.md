# Anotações

> 05/05/23

<https://dontpad.com/Algoritmo050523>

## "Se" encadeado

Três ou mais condições se usam um "Se encadeado" ou um "Se alinhado".

### Em Algoritmo

```plaintext
se {Condicao} então
    {Codigo}
senao
    se {Condicao} entao
        {Codigo}
    senao
        {Codigo}
    fim se
fim se
```

Em algoritmo, não podemos ter "Senao se" (senao e se na mesma linha)

```c
if (/*Condição*/) {
    // Código
} else if (/*Condição*/) {
    // Código
} else {
    // Código
}
```


## Códigos da Tutora

```plaintext

Resolução de Exercícios
Capítulo 4 - Estrutura Condicional - Simples, Composta e Encadeada

Exercício: 17

Algoritmo Cap4Ex17
   senha: inteiro
Início
   escreva("Senha..: ")
   leia(senha)
   // verificar se digitou a senha correta
   se senha = 4531 então
          Escreva("Tem permissão")
      senão
	  escreva("Não tem acesso")
    fim se
Fim

==========================================================================
Outra forma de fazer - Senha sendo caracter
Algoritmo Cap4Ex17
   senha: caracter
Início
   escreva("Senha..: ")
   leia(senha)
   // verificar se digitou a senha correta
   se senha = "4531" então
          Escreva("Tem permissão")
      senão
	  escreva("Não tem acesso")
    fim se
Fim

//Obs: No portugol não podemos comparar desta forma.

--------------------------------------------------------------------------------------------------------------------------------
Em Portugol - Exercício 17

programa {
  funcao inicio() {
    inteiro senha
    escreva("Senha..: ")
    leia (senha)
    se (senha == 4531)
       {
          escreva("Acesso Liberado")
       }
     senao // só entro no senao se a condição retornar falso
     {
          escreva("Acesso Negado")
     }
  }

}

------------------------------------------------------------------------------------------------------------------------------------
Exercício 15

Algoritmo Cap4Ex15
    reajuste, tipo : inteiro
valor, novo : real
Inicio
   escreva("Qual o seu tipo de investimento: 1- Poupança  2- Renda Fixa")
   leia(tipo)
   escreva("Valor a ser investido")
   leia(valor)
   // verificar o tipo de investimento
   se tipo =1 então
         reajuste = 3
      senao // já sei que é 2
         reajuste = 4   
    fim se
    // calcular o valor com reajuste
    novo <- valor + valor * reajuste / 100
    escreva("Valor com o investimento é de..: ", novo)
Fim

------------------------------ Outra forma de fazer ---------------------------------------
Algoritmo Cap4Ex15
   tipo : inteiro
   valor, novo : real
Inicio
   escreva("Qual o seu tipo de investimento: 1- Poupança  2- Renda Fixa")
   leia(tipo)
   escreva("Valor a ser investido")
   leia(valor)
   // verificar o tipo de investimento
   se tipo = 1 então
          novo = valor + valor * 3/100  // ou novo = valor *1.03
      senão
          novo = valor + valor * 4/100  // ou novo = valor *1.04
    fim se
    escreva("Valor com o investimento é de..: ", novo)
Fim

------------------------------ Outra forma de fazer ---------------------------------------
Algoritmo Cap4Ex15
   tipo : inteiro
   valor: real
Inicio
   escreva("Qual o seu tipo de investimento: 1- Poupança  2- Renda Fixa")
   leia(tipo)
   escreva("Valor a ser investido")
   leia(valor)
   // verificar o tipo de investimento
   se tipo = 1 então
          escreva("Valor com o investimento é de..: ", valor *1.03)
      senão
              escreva("Valor com o investimento é de..: ", valor *1.04)
    fim se

===========================================================================
Exercício 19

Algoritmo Cap4Ex19
     sexo: inteiro
     altura, pesoIdeal: real

Início
      escreva("Sexo  1- Masculino  2- Feminino..: ")
      leia(sexo)
      escreva("Altura..: ")
      leia(altura)
      se sexo = 1 então
              pesoIdeal <- (72.7 * altura) - 58
         senao 
              pesoIdeal <- (62.1 * altura) - 44.7	
       fim se
        escreva("Peso ideal..: " , pesoIdeal , " Kg")
Fim

------------------------------ Outra forma de fazer ---------------------------------------
Algoritmo Cap4Ex19
     sexo: inteiro
     altura, pesoIdeal: real

Início
      escreva("Sexo  1- Masculino  2- Feminino..: ")
      leia(sexo)
      escreva("Altura..: ")
      leia(altura)
      se sexo = 1 então
              escreva("Peso ideal..: " , (72.7 * altura) - 58 , " Kg")
         senão
              escreva("Peso ideal..: " , (62.1 * altura) - 44.7 , " Kg")
       Fim se
Fim

------------------------------ Outra forma de fazer ---------------------------------------

#include <stdio.h>

int main() {
    int sexo;
    float altura;
    printf("Este programa calcula seu peso ideal baseado em seu sexo e sua altura.\n");
    printf("Escolha seu sexo:\n\t(1) - Masculino\n\t(2) - Feminino\n> ");
    scanf("%d", sexo);
    printf("Insira sua altura..:")
    scanf("%f", altura);
    if (sexo == 1) {
        printf("Peso ideal..:%d KG\n", ((72.7 * altura) - 58));
    } else {
        printf("Peso ideal..:%d KG\n", ((62.1 * altura) - 44.7));
    }
    return 0;
}

===========================================================================

Trabalhando com C

Estrutura Básica de um programa em C

#include <stdio.h>

int main() 
{
    
    
    return 0;
}


---- Comandos-----
Entrada de Dados:  scanf("%?", &<variavel>);  // Exemplo: scanf("%f", &peso);  // %f - float  %d - int
Saída de Dados: printf();


declarando variável
<tipo de dados>  <variavel> ;

Exemplo: float peso;
                int idade;
                char email[50]; 




Explicação de variável local e global

#include <stdio.h>

void teste()
{ 
    int x = 34;
    printf("\nDentro de Teste - Mudei..: %d", x); 
    
}


int main() 
{   // declaração de variáeis
    int x = 10;
    printf("Dentro main -Valor de x..:  %d ", x);
    teste();
    printf("\n Dentro main - Valor de x..:  %d ", x);

   
     
    
    
    return 0;
}

Demonstrando um programa sequencial

#include <stdio.h>


int main() 
{   // declaração de variáveis
    int nr, dobro;
    printf("Número..: ");
    scanf("%d", &nr);
    dobro = nr * 2;
    printf("O dobro de %d é %d ", nr, dobro);
     
   return 0;
}

--------------- Estrutura Condicional em C

Exercício 15 cap 4

/*
Capítulo 4
Exercício 15
*/

#include <stdio.h>


int main() 
{   // declaração de variáeis
   int tipo;
   float novo, valor;
   // entrada de dados
   printf("Tipo de Investimento 1- Poupança 2- Renda Fixa..: ");
   scanf("%d", &tipo);
   printf("Valor do Investimento..: ");
   scanf("%f", &valor);
   // verificar o tipo de Investimento
   if (tipo == 1)
     {
      novo = valor + valor * 3/100 ;
     }
    else
     {
      novo = valor + valor * 4/100 ;
     }
     // apresentando o resultado
    printf("Total com o investimento..: %.2f" , novo);
   return 0;
}


------------- Se encadeado
Algoritmo Cap4Ex15
   tipo : inteiro
   valor, novo : real
Inicio
   escreva("Qual o seu tipo de investimento: 1- Poupança  2- Renda Fixa")
   leia(tipo)
   escreva("Valor a ser investido")
   leia(valor)
   // verificar o tipo de investimento
   se tipo = 1 então
          novo = valor + valor * 3/100  // ou novo = valor *1.03
          escreva("Valor com o investimento é de..: ", novo)
      senão
          se tipo = 2 então
                  novo = valor + valor * 4/100  // ou novo = valor *1.04
                  escreva("Valor com o investimento é de..: ", novo)
             senão
                   escreva("Tipo de investimento inválido")
          fim se
    fim se
    
Fim


----- c
/*
Capítulo 4
Exercício 15
*/

#include <stdio.h>


int main() 
{   // declaração de variáeis
   int tipo;
   float novo, valor;
   // entrada de dados
   printf("Tipo de Investimento 1- Poupança 2- Renda Fixa..: ");
   scanf("%d", &tipo);
   printf("Valor do Investimento..: ");
   scanf("%f", &valor);
   // verificar o tipo de Investimento
   if (tipo == 1)
     {
      novo = valor + valor * 3/100 ;
        printf("Total com o investimento..: %.2f" , novo);
     }
    else if (tipo == 2)
             {
                   novo = valor + valor * 4/100 ;
                     printf("Total com o investimento..: %.2f" , novo);
             }
          else
             {
                 printf("Tipo de investimento inválido");
             }
     // apresentando o resultado
  
   return 0;
}
------ melhorando o código
/*
Capítulo 4
Exercício 15
*/

#include <stdio.h>


int main() 
{   // declaração de variáeis
   int tipo;
   float novo, valor;
   // entrada de dados
   printf("Tipo de Investimento 1- Poupança 2- Renda Fixa..: ");
   scanf("%d", &tipo);
   
   // verificar o tipo de Investimento
   if (tipo == 1)
     {
         printf("Valor do Investimento..: ");
         scanf("%f", &valor);
         novo = valor + valor * 3/100 ;
         printf("Total com o investimento..: %.2f" , novo);
     }
    else if (tipo == 2)
             {
                  printf("Valor do Investimento..: ");
                  scanf("%f", &valor);
                  novo = valor + valor * 4/100 ;
                  printf("Total com o investimento..: %.2f" , novo);
             }
          else
             {
                 printf("Tipo de investimento inválido");
             }
     // apresentando o resultado
  
   return 0;
}

-------
Algoritmo Cap4Ex12
     salario, grat, salReceber : real
Início
   escreva("Salário..: ")
   leia (salario)
   se salario <= 350.00 então
          grat <- 100
      senão  // já sei que o salário é maior que 350
           se salario <=600 então
                 grat <- 75
               senão // já sei que o salário é maior que 600
                   se salario <= 900 então
                            grat <- 50
                        senão // já sei que salário é maior que 900
                              grat <- 35
                    fim se
             fim se
      fim se
        salReceber < - salario + grat - (salario *0.07)
        // desconto <- salario * 7 /100
        // sal Receber <- salario + grat - desconto

       escreva("Valor do salário a Receber..: ", salReceber) 

Fim

---- Em C
/*
Capítulo 4
Exercício 12
*/

#include <stdio.h>


int main() 
{   // declaração de variáeis
   
   
   float salario, grat, desconto, salReceber;
   
   // entrada de dados
   printf("Sálario Bruto..: ");
   scanf("%f", &salario);
   // verificando quanto vai receber de gratificação
   if (salario <= 350.00)
   {
       grat = 100;
   }
   else if (salario <= 600.00)
         {
             grat = 75;
          }
          else if (salario <= 900.00)
                {
                    grat = 50;
                }
                else 
                {
                    grat = 35;
                }
  
      desconto = salario * 7 /100;
      salReceber = salario + grat - desconto;
      printf("\n---------------------------------");
      printf("\nValor da Gratificação..: %.2f", grat);
      printf("\nValor do desconto..: %.2f", desconto);
      printf("\nSalario a Receber..: %.2f ", salReceber);
      printf("\n---------------------------------");
   return 0;
}

Exercícios: Prioridades: 13, 14, 22, 23, 24 e 25
```

Exercicios Prioridade: 13, 14, 22, 23, 24, 25
