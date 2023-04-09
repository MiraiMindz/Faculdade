# Organização de Computadores

> Tutor(a): Carlos Lemos;

> Data: 29/03/23;

> Aula: 01 - Introdução a Organização de Computadores;

> NOTA: As anotações aqui são retiradas de meu caderno; e podem, posteriormente, serem incrementadas. Então desde já notifico que as anotações aqui serão "dispersas e desconexas".

História dos numeros e o princípio da contagem.

Algebra Booleana.

- Numeros:
  - Inteiros
    - $-\infty\longleftrightarrow\infty$
      - São limitados pelo processador que pode ser de 32 ou 64bits. ($2^{31}$ ou $2^{63}$ pois 1 bit é referente ao sinal) 
  - Reais
- Letras
  - São limitadas, ou seja, são um conjunto FINITO.
- Simbolos
  - São limitados, ou seja, são um conjunto FINITO.

Para todos os conjuntos FINITOS podemos montar uma tabela de codificação.

Tabelas de codificação de texto:
- Ascii
- UTF-8

## Bases numéricas

São responsáveis pelos agrupamentos de valores e pela contagem.

Humanos normalmente usam a base 10 para contagem, porém se existem outras bases, como a Binária (2), Octal (8) e Hexadecimal (16).

- $Base_{2}$ (Binário): Tem 2 simbolos $\longrightarrow$ {0, 1}
- $Base_{8}$ (Octal): Tem 8 simbolos $\longrightarrow$ {0, 1, 2, 3, 4, 5, 6, 7}
- $Base_{10}$ (Decimal): Tem 10 simbolos $\longrightarrow$ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
- $Base_{16}$ (Hexadecimal): Tem 10 simbolos $\longrightarrow$ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F}

Na base 16, usam-se as letras de A até F para representar os valores superiores a 9:
| Simbolo 	| Valor 	|
|:-------:	|:-----:	|
|    A    	|   10  	|
|    B    	|   11  	|
|    C    	|   12  	|
|    D    	|   13  	|
|    E    	|   14  	|
|    F    	|   15  	|

As bases 2, 8 e 16 são relativas entre si devido a exponenciação:
- $2 = 2^{1}$
- $8 = 2^{3}$
- $16 = 2^{4}$

Isto será útil para conversão entre as bases.

### Notação Posicional (De qualquer base, para base 10).

A notação um modo de representação numérica na qual o valor de cada algarismo depende da sua posição relativa na composição do número. O valor do número é a soma de cada algarismo que o compõe, considerando a posição em que ele se encontra. Posição esta que é dada pela exponenciação da base.

Ou seja, para termos o valor total de um numero devemos multiplicar os valores das casas pelas suas respectivas posições na base.

Vejamos um exemplo na base 10:

$375_{10} = 3 \times 10^2 + 7 \times 10^1 + 5 \times 10^0 = 375_{10}$

Nós começamos a contar a partir da casa das unidades (ou casa mais a direta), iniciando a exponeciação em 0 (pois todo numero elevado a 0 é igual a 1 por definição.)

Nota: $375 \ne 375_{10}$, veremos o porque mais a frente.

Agora, vejamos um exemplo em base 8:

$1257_{8} = 1 \times 8^3 + 2 \times 8^2 + 5 \times 8^1 + 7 \times 8^0 = 512 + 128 + 40 + 7 = 687_{10}$

perceba que ao usarmos a notação posicional, convertemos para base 10 automaticamente.

Veja um exemplo em hexadecimal:

$3D_{16} = 3 \times 16^1 + 13 \times 16^0 = 48 + 13 = 61_{10}$

Veja que substituimos o valor do simbolo $D$ por seu valor correspondente em hexadecimal.

Atente-se que $375 \ne 375_{10}$, pois veja bem, o valor arbitrário $375$ não contem nenhuma base e portanto podemos representar seu valor de forma significativa a partir de $n+1$ bases, onde $n$ representa o algarismo (ou simbolo) de maior valor. Ou seja, podemos interpretar o valor de $375$ em todas as bases possiveis a partir da base $8$. Portanto, se faz necessária a identificação da base, mesmo quando se trata da base 10, para que não haja erros de interpretação. 

### Divisão sucessiva (Da base 10 para quaisquer base)

O método da divisão sucessiva consiste em sucessivamente dividir um numero $n_{10}$ pela base $y$ de tal modo a chegar no valor minimo permitido pela base ($x$) e ordenar os restos a obter o valor representativo (exercendo as devidas conversões simbólicas).

Pode ser dado pela fórmula:

Dado $n\in\mathbb{R}$ sendo $n$ o numero na qual você deseja converter, $x$ o resto da expressão somatória, $y$ a base na qual você se encontra e $z$ o resultado da divisão, tem-se:

$$
\sum_{n}^{x\le1} f(n, x) =
\begin{cases}
  n/y    & \quad \text{if } (x = 0) \text{ and } (n \equiv x \text{ mod } y) \text{ then } n = z \\
  (n-x)/y & \quad \text{else if } (x \ne 0) \text{ and } (n \equiv x \text{ mod } y) \text{ then } n = z 
\end{cases} 
$$

> Nota: Esta fórmula foi escrita por mim por volta das 5 horas da manha, talvez esteja faltando algum pequeno detalhe, mas creio estar correta, vejamos um exemplo de seu objetivo a seguir.

Suponhamos que você queira converter 28 para base 2, bom, isto teria de ser feito da seguinte maneira:

$28/2 = 14 \quad \text{resto = } 0 \quad \text{se o resto for igual a zero então proseguimos com a divisão, caso contrário, subtraimos o resto do dividendo e prosseguimos com a divisão}$

$14/2 = 7 \quad \text{resto = } 0$

$6/2 = 3 \quad \text{resto = } 1 \quad \text{subtraimos } 1 \text{ e prosseguimos com as divisões}$

$3/2 = 1 \quad \text{resto = } 1 \quad \text{subtraimos } 1 \text{ e prosseguimos com as divisões}$

$1/2 = 0 \quad \text{resto = } 1 $

Agora, pegamos os restos na ordem INVERSA a qual começamos a divisão e montamos nosso numero, ou seja, $28$ na base $2$ é equivalente a $11100_2$

Lembra da equivalencia das bases? Então, usamos ela para converter de decimal para Octal ou Hexadecimal, basta converter para binário e "agrupar as casas" de uma forma especifica.

Vejamos o número $31_{10}$, em binário ele é representado por $11111_2$, vamos converte-lo para Octal.

Para isso basta agrupar as casas de 3 em 3 algarismos (pois $8 = 2^3$), e calcular o valor máximo de cada grupo em octal, caso não há como completar os grupos, adicione 0 para ajudar na conversão:

$011 \quad 111\qquad\quad$

$\big\downarrow\quad \quad \big\downarrow\quad\quad\quad$

$3\text{ }\quad\quad 7 = 37_{8}\text{ }$

$37_8$ pois $011_2 = 2 + 1 = 3$ e $111_2 = 4 + 2 + 3 = 7$

Para converter de binário para hexadecimal fazemos o mesmo, porém agrupamos de 4 em 4 algarismos (pois $2^4 = 16$):

veja um exemplo usando o numero $122_{10}$, ele pode ser representado pelo binário $1111010_2$, vejamos a conversão por agrupamento:


$0111 \qquad 1010\qquad\quad\text{ }\text{ }$

$\big\downarrow \qquad\quad \text{ }\text{ }\big\downarrow\qquad\quad\text{ }\text{ }$

$7\qquad\quad\text{ }\text{ }\text{A} = \text{7A}_{16}$

Usamos $\text{A}$ pois $1010_2 = 10$ e $10$ em hexadecimal é representado pelo simbolo $\text{A}$.

Essa questão de conversão por agrupamento funciona para convertermos de octal ou hexadecimal para binário também, basta separa os algarismos e dar as respectivas representações em binário. Veja os exemplos:

Octal:

Vamos converter o numero $67_8$ para binário

$6\text{ }\quad\quad 7\qquad\quad$

$\big\downarrow\quad \quad \big\downarrow\quad\quad\quad$

$110 \quad 111 = 55_{10}\text{ }$

O número $67_8$ pode ser representado em binário através de $110111_2$ e é equivalente a $55_{10}$

Hexadecimal:

Vamos converter o numero $\text{8E}\_{16}$ para binário

$8\qquad\quad\text{ }\text{ }\text{E}\qquad\quad\text{ }\text{ }$

$\big\downarrow \qquad\quad \text{ }\text{ }\big\downarrow\qquad\quad\text{ }\text{ }$

$1000 \qquad 1110  = 142_{10}$

O número $\text{8E}\_{16}$ pode ser representado em binário através de $10001110_{2}$ e é equivalente a $142\_{10}$

### Dicas

Para calcular o valor máximo em decimal de $N$ casas em binário usamos a fórmula: $2^\text{n}-1$.

Exemplo:

o valor máximo de 10 casas em binário é 1023 pois $2^{10}-1 = 1023$.

Lembre-se de sempre evidenciar a base na qual você se encontra.
