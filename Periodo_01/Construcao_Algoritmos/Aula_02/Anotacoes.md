# Construção de Algoritmos

> Tutor(a): Adriana Sicsú
> Aula 02: Estrutura Básica
> Data: 14/04/2023

Linguagem Natural (portugues estruturado)

Portugues estruturado começa com verbo, AÇÃO

Fluxograma (Diagrama de processos)

Algoritmo é a tecnica (e o importante é a tecnica (conceito))

Uma prova em C, outra talvez em algoritmo e outra sendo C ou algoritmo

Estrutura Básica (do algoritmo)
- Algoritmo \<nome>
  - Declaração de variaveis
- Inicio
  - Comandos
- Fim
- usamos os mesmos comentários de C

< é usado para boilerplate/placeholder >

Variavel -> armazenar
- Um container que armazena ***um*** conteudo
- para multiplos valores usamos vetores (array), ultimo topico da materia

Estrutura de uma variavel:
- nome: regras de nomeclatura
- tipo de dado
- endereço na memoria (ponteiros)

Boas praticas de programação

Comentários

`//` -> comentário de linha
`/**/` -> comentário de bloco

Tipos de dado

Numeros
- Ints
- Floats

Caracteres (string)
- tem aspas ""

booleano (logico)
- não tem em C
- True or False

C é sensive-case


Declaração de variaveis em algoritmo

NOME_DA_VARIAVEL: TIPO_DA_VARIAVEL

idade: inteiro

PI: real

x, y: inteiro

em C é int (long int, short int, byte) ou float (e double)

pergunta: booleano

comando de algoritmo:
- comando de entrada de dados
  - Tudo que o computador recebe
  - Por enquanto o usuario vai fornecer
  - o comando é `leia` (ou `ler`)a estrutura seria: `leia(<variavel>)`
  - exemplo: `leia(nome)`
- comando de saida de dados
  - O comando é `escreva` (ou `escrever`, ou `ìmprima`)
  - `escreva(conteudo)`, ex: `escreva("media")`
- O sinal de atribuição é uma seta (variaveis)
  - ex: media <- 7.8

Incluir variaveis no `escreva`
- `escreva("Média: ", media)`

Expressões aritméticas

Operadores:
- Aritméticos
  - OPERADOR | ALGORITMO
  - `subtração` | `-`
  - `divisão` | `/`
  - `soma` | `+`
  - `multiplicação` | `*`
  - `resto da divisão (módulo)` | `mod` (`%`)
- Relacionais
  - usados em estruturas condicionais
- Logicos
  - usados em estruturas condicionais
- Atribuição
  - algo: `<-` em C: (`=`)

Estrutura sequencial

transcrever algebra para algoritmo

colchetes é VETOR (array)

o unico elemento de precedencia em programação é parenteses

tem que usar os simbolos de algoritmo, e as expressoes devem estar na mesma linha

em algoritmo não precisa de `;` no final.

PORTUGOL

<http://lite.acad.univali.br/portugol/>

<https://dgadelha.github.io/Portugol-Webstudio/>

<https://visualg3.com.br/>

escreva
leia

(igual C, printf&scanf)

leia individualmente (um comando por variavel)
e execute o `escreva` antes do `leia`

Do livro, a professora cobra os `Exercícios propostos`


Variavel e Constante


Entrada -> processamento -> saida

procura por interação do usuário em uma comanda de questão

paradigmas:
- funcional
- estruturado
- logico
- orientado a objetos


Ela vai requisitar boas praticas

EX de prioridade (faz tudo) (cap 3) do livro de algoritmos
- 7
- 9
- 14
- 15
- 21
- 24
- 25

Nas provas tem os calculos dependendo da complexidade

O primeiro desafio em programação e algoritmos é a interpretação