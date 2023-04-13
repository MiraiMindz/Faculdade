# Complementos

Na matemática o método de complementação é usado para codificar uma faixa de números simétrica entre positivos e negativos, de tal forma em que eles consigam usar o mesmo hardware (ou algoritmo) para adição através de toda a faixa numérica.

Para dada faixa numérica $N$ os números positivos são dados por $N/2$ dígitos, enquanto os negativos são dados pelos respectivos *inversos aditivos*; na matemática, os inversos aditivos são quaisquer números que adicionados a um numero resultam em Zero, também são chamados de *números opostos*, *trocadores de sinal* e *negadores*, exemplo:

- o inverso aditivo de $3$ é $-3$, pois $3 + (-3) = 0$

Usando essa propriedade conseguimos exercer N complementos, a fins de aplicabilidade e pesquisa irei me ater ao complemento a 1 e 2 com exemplificação através do complemento a 9 para a base 10.

## O que é o complemento a 1?

O complemento a 1 é apenas uma forma de inverter os números em dada base para descobrir seu equivalente negativo, seu nome no entanto, originou-se desta operação nos binários, pois, ao adicionarmos a negação de um numero binário $x$ (formalmente chamada de '~$x$') para o número originário ($x$) obteríamos apenas 1's.

Para performar uma operação de complemento a 1 em binário, utilizamos o MSB (Most Significant Bit/Bit Mais Significativo) como bit de sinal, sendo 0 para positivo e 1 para negativo. Tendo estabelecido isso, nós invertemos TODOS os bits, não apenas o de sinal, e adicionamos ao número original, antes de partirmos para o cálculo em binário irei exemplificar na base 10 (complemento a 9).

Suponhamos que você quer saber o resultado de $718 - 123$?, veja as etapas abaixo:

- Primeiro achamos o complemento a 9 de $718$, fazendo $999 - 718$, que resulta em $281$
- depois adicionamos esse resultado ao $123$, resultando em $404$
- e por fim, achamos o complemento a 9 de $404$, que resulta em $595$

> *"Caso um restante seja gerado, ele deve ser adicionado no resultado"*
> Veremos que isso resultará no complemento a 2.

Agora vamos fazer em binário, suponhamos que você queira saber o resultado de $3 + (-3)$?

- Primero localizamos a negação de $-3$, que pode ser obtida invertendo todos os bits do numero $3$, incluindo o de sinal, resultando em $(1100)_2$
- Adicionamos esse resultado ao $3$ em binário $(0011)_2 + (1100)_2$, resultando em $(1111)_2$

Ok, é intuitivo pensar que $(1111)_2 = 15$, mas lembre-se que o MSB é usado para sinal e que nós havíamos negado o numero, ou seja, estamos vendo o *aditivo simétrico* do resultado, então vamos negar novamente para obtermos o nosso resultado, ~$(1111)_2 = (0000)_2 = +0$.

Ok, sei que ficou confuso, $+0$? Bom, dado a definição de complemento a 1, todo e quaisquer número tem um aditivo simétrico que resulta em $0$ e o próprio Zero se encaixa nessa denominação, então se existem $+0$ e $-0$ pois, $0$ &pm; $0 = 0$, esse é um *problema inerente a complemento a 1.*

Veremos como solucionar isso usando *Complemento a 2*.

## O que é o complemento a 2?

O complemento a 2 é extremamente parecido com o complemento a 1, porém com o adicional de que caso se tenha um restante devemos exercer uma aritmética extra.

O processo é simples, dada a operação $A - B$:

- Faça o complemento a 1 de $B$
- Some $A + B$
- Caso tenha ocorrido um *overflow*, adicione 1 e descarte o overflow; por fim faça o complemento a 1 do resultado, ele terminará negativo e em sua forma complementar a 2.
- Caso ***NÃO*** tenha ocorrido  um *overflow*, o resultado estará positivo e em sua forma verdadeira.

> Nota: todo esse raciocínio de conceitos, foram gerados por mim enquanto eu refletia e experimentava com cálculos pra descobrir o porque de nós somarmos 1 em complemento a 2, eu queria uma resposta lógica fundamentada na nossa compreensão algébrica, e não algo "tirado do nada". (O professor não nos deu uma explicação do porque, apenas a forma de aplicação.)

O complemento a 2 surgiu para solucionar o problema do &pm;$0$, e ele se usa se baseia no "agrupamento fundamental" da nossa noção de números.

Irei trabalhar com a premissa verbal primeiro,. Nós normalmente trabalhamos com 3 conceitos quando o assunto é contagem: *perder*, *ganhar* e o *nada*.

- Imagine o seguinte, você tem um lápis, mas decidiu ir na papelaria e comprar um novo, você *ganhou* um lápis (houve diferença).
- Agora, imagine que você não tenha ido a papelaria e acabou esquecendo seu lápis em algum lugar, você *perdeu* um lápis (houve diferença).
- Por fim, imagine que você não foi a papelaria e não esqueceu seu lápis; você nem ganhou e nem perdeu, *nada* aconteceu (houve indiferença).

*"Mas nós podemos ganhar ou perder nada"*, o conceito de *nada* continua sendo a *INDIFERENÇA* em quaisquer operação.

Ou seja, em outras palavras, nossa compreensão de lógica obriga a nós termos 2 conceitos, *diferença* e *indiferença*, sendo a diferença composta por ideias opostas.

Vamos analisar a questão gerada pelo complemento a 1, quando nós exercemos a operação $3 + (-3)$ obtemos $+0$, qual a implicação disso? para mostrar irei usar a reta numérica.

nós temos $-\infty\longleftarrow0\longrightarrow+\infty$, ou seja, nós temos o Zero como conceito de indiferença e $\infty$ como conceito de diferença, pois ele é o único com representações opostas.

Quando nós assumimos a existência de um Zero positivo ($+0$), nós também assumimos a existência de um Zero negativo ($-0$), ou seja, eles se tornam representações de diferença, sendo inclusos no $\infty$, deixando nossa reta assim: $-\infty\longleftrightarrow+\infty$, ou seja, temos *apenas* o conceito de diferença, e nenhum simbolo para representar indiferença; isso por si só já é passível de diversos erros operacionais e de lógica, visto que nós interpretamos a algebra fundamentalmente usando 2 conceitos, (diferença e indiferença).

Para solucionar isso precisamos escolher um simbolo para representar indiferença, vamos ver um exemplo usando $-0$ para exemplificar, e depois um usando $+0$ (nosso simbolo de indiferença será marcado pela presença de colchetes \[ \]).

Vamos fazer 4 operações, sendo elas as seguintes:

- $5-8$
- $(-6)+11$.
- $(-5)-3$
- $5+3$

### Usando $-0$ como simbolo de indiferença

Vamos começar montando nossa tabela para visualizarmos a reta.

| -9  | -8  | -7  | -6  | -5  | -4  | -3  | -2  | -1  | -0  | +0  | +1  | +2  | +3  | +4  | +5  | +6  | +7  | +8  | +9  |
|:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |

> Nota: A existência dessa tabela implica o complemento a 1.

- $5-8$

Vamos iniciar na casa +5 e regredir 8 casas. (desconsiderando o número de *indiferença* como valor)

| -2  | -1  |\[-0\] | +0  | +1  | +2  | +3  | +4  | +5  |
|:--: |:--: |:--:   |:--: |:--: |:--: |:--: |:--: |:--: |

Perceba que nosso resultado seria $-2$ ao invés de $-3$, mas porque isso? Isso se dá pelo fato de considerarmos $+0$ como um numero de diferença, ou seja, é como se tivéssemos adicionado +1 aos números positivos (seria o mesmo que subtrair 1 dos negativos.), por isso $-2$. (seria o mesmo que $6 - 8$ ou $5 - 7$)

- $(-6)+11$.

Vamos iniciar na casa -6 e progredir 11 casas. (desconsiderando o número de *indiferença* como valor)

| -6  | -5  | -4  | -3  | -2  | -1  |\[-0\] | +0  | +1  | +2  | +3  | +4  |
|:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |

Note que nosso resultado seria $+4$ ao invés de $+5$, isso se dá pelo mesmo motivo, pelo fato de estarmos considerando $+0$ como um numero de diferença.

- $(-5)-3$

Para fazermos $(-5)-3$, vamos somar os valores e iniciarmos nossa contagem pelo primeiro numero *anterior* ao nosso simbolo de *indiferença*, ou seja, iremos regredir 8 casas partindo (e excluindo) nosso valor de indiferença.

| -8  | -7  | -6  | -5  | -4  | -3  | -2  | -1  |
|:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |

Perceba que nosso resultado está correto, $(-5)-3$ é de fato $-8$.

- $5+3$

Para esse exemplo, iremos somar os valores e iniciar a contagem no primeiro numero *após* nosso simbolo de *indiferença*, ou seja iremos progredir 8 casas partindo (e excluindo) nosso valor de indiferença.

| +0  | +1  | +2  | +3  | +4  | +5  | +6  | +7  |
|:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |

Perceba que nosso valor está "errado", o correto seria $+8$, porém, estamos considerando $0+$ como um valor de *diferença*, para obtermos o valor original, deveriamos adicionar $+1$ para o valor final. (isso será importante mais a frente)

### Usando $+0$ como simbolo de indiferença

Agora vamos ver os mesmos exemplos, porém usando $+0$ como simbolo de indiferença.

Vamos começar montando nossa tabela para visualizarmos a reta.

| -9  | -8  | -7  | -6  | -5  | -4  | -3  | -2  | -1  | -0  | +0  | +1  | +2  | +3  | +4  | +5  | +6  | +7  | +8  | +9  |
|:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |

> Nota: A existência dessa tabela implica o complemento a 1.

- $5-8$

Vamos iniciar na casa +5 e regredir 8 casas.

| -2  | -1  | -0  |\[+0\]| +1  | +2  | +3  | +4  | +5  |
|:--: |:--: |:--: |:--:  |:--: |:--: |:--: |:--: |:--: |

Perceba que nosso resultado seria $-2$ ao invés de $-3$, mas porque isso? Isso se dá pelo fato de considerarmos $-0$ como um numero de diferença, ou seja, é como se tivéssemos adicionado +1 aos números positivos (seria o mesmo que subtrair 1 dos negativos.), por isso $-2$. (seria o mesmo que $6 - 8$ ou $5 - 7$)

- $(-6)+11$.

Vamos iniciar na casa de posição -6 e progredir 11 casas.

| -6  | -5  | -4  | -3  | -2  | -1  | -0  |\[+0\]| +1  | +2  | +3  | +4  |
|:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--:  |:--: |:--: |:--: |:--: |

Note que nosso resultado seria $+4$ ao invés de $+5$, isso se dá pelo mesmo motivo, pelo fato de estarmos considerando $+0$ como um numero de diferença.

- $(-5)-3$

Para fazermos $(-5)-3$, vamos somar os valores e iniciarmos nossa contagem pelo primeiro numero *anterior* ao nosso simbolo de *indiferença*, ou seja, iremos regredir 8 casas partindo (e excluindo) nosso valor de indiferença.

| -7  | -6  | -5  | -4  | -3  | -2  | -1  | -0  |
|:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |

Perceba que nosso resultado está incorreto, pois estamos considerando $-0$ como valor de diferença, então se faria necessário adicionar $-1$ ao valor para obtermos o correto. (isso será importante mais a frente).

- $5+3$

Para esse exemplo, iremos somar os valores e iniciar a contagem no primeiro numero *após* nosso simbolo de *indiferença*, ou seja iremos progredir 8 casas partindo (e excluindo) nosso valor de indiferença.

| +1  | +2  | +3  | +4  | +5  | +6  | +7  | +8  |
|:--: |:--: |:--: |:--: |:--: |:--: |:--: |:--: |

Perceba que o número está correto, $5+3$ é de fato $8$.

### Conclusão das operações

Perceba que em todas estas operações tivemos o seguinte:

- Independente do simbolo de indiferença precisamos adicionar 1 quando saímos de negativo para positivo e vice-versa.
- caso o simbolo de indiferença seja $-0$ precisaríamos adicionar $+1$ para obter o valor correto nos números positivos.
- caso o simbolo de indiferença seja $+0$ precisaríamos adicionar $-1$ para obter o valor correto nos números negativos.

Por conveniência nas operações com resultados positivos em computadores, usamos o simbolo de indiferença sendo $-0$.

Guarde isso em mente, pois agora irei explicar de onde você recebe esse $1$ para equilibrar os valores.

### Aplicando o que vimos na fórmula.

Quando performamos subtração ou adição usando complemento pode ocorrer algo chamado de *transbordamento* (*overflow*), que é quando temos um "numero excedente" em dado tamanho.

por exemplo, se estamos trabalhando com 4 dígitos e o resultado tem 5 dígitos, temos 1 digito de *overflow*, nos meus testes esse número sempre foi $0$ ou $1$.

usando $+0$ como valor de indiferença, nós devemos adicionar $1$ ao valor absoluto (sem sinal) de um numero negativo. Portanto, sempre que tivermos um *overflow* de $1$ adicionamos $1$, mas lembre-se que no início do complemento a dois nós havíamos feito o complemento a 1 do número $B$.

Então *CASO* tenha se existido um *overflow*, devemos fazer o complemento a 1 do resultado para obtermos o valor correto e somar esse valor de *overflow* "eliminando ele" por tabela.

E *CASO* não tenha existido nenhum overflow, o valor é positivo e em sua forma verdadeira.

O número $1$ que precisamos para normalizar a representação vem do overflow, é por isso também que em binário usamos $0$ para positivo e $1$ para negativo.

> Mas é claro, se estivéssemos usando $-0$ como  valor de indiferença, deveríamos usar $1$ para positivo e $0$ para negativo.

## Qual a diferença entre eles?

Como vimos, o complemento a 1 não leva em consideração nossa compreensão de lógica aritmética e portanto é passível de erros, enquanto no complemento a 2 nós nos utilizamos de operações aritméticas simples com os elementos encontrados nas operações para solucionar os problemas do  complemento a 1.
