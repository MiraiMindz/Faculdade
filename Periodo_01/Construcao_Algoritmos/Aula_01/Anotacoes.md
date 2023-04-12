# Construção de Algoritimos

> Tutor(a): Adriana Sicsú;
> Data: 31/03/23;
> Aula: 01 - Racicínio Lógico;

Raciocinio lógico, estruturar a forma de pensar, projetar as ações;

- Torre de Hanoi[USR_LIM=5];
  - Regras
    - (1) Mover apenas um disco por vez;
    - (2) Um disco com diâmetro maior nunca pode ficar sobre um disco com diâmetro menor;
- Jogo do Rio - Jogos 360;
- Canibais e Missionários;

<https://rachacuca.com.br/logica/problemas/teste-de-einstein/>; // -> 3:59m

<https://code.org>;

<https://www.youtube.com/watch?v=cDA3_5982h8&themeRefresh=1>; // Exact Instructions Challenge

Algoritmo -> interpretação;

Algoritmo:

- Linguagem Natural;
- Descrever passo-a-passo o problema;

Cenário:

- sozinho (isolado)
- ovo na geladeira
- sem telefone

```plaintext
INICIO;
    01. SE NÃO ESTIVER EM REPOUSO, SE LOCOMOVER A COZINHA;
    02. LOCALIZAR A GELADEIRA;
    03. DIRIGIR-SE A GELADEIRA;
    04. ABRIR A PORTA DA GELADEIRA;
    05. LOCALIZAR A OS OVOS DENTRO DA GELADEIRA;
    06. PEGAR E RETIRAR 1 OVO DA GELADEIRA E SEGURA-LO;
    07. LOCALIZAR A MARGARINA, CASO NÃO EXISTA, LOCALIZE A MANTEIGA;
    08. PEGUE E RETIRE A MANTEIGA DE DENTRO DA GELADEIRA E SEGURE-A;
    09. CASO AMBAS AS MÃOS ESTEJAM OCUPADAS, UTILIZE OUTRO MEMBRO PARA FECHAR A PORTA DA GELADEIRA;
    10. LOCALIZE UM BALCÃO OU SUPERFICIE FIRME DENTRO DA AREA DA COZINHA PARA APOIAR OS ITENS SEGURADOS;
    11. LOCALIZE UMA AREA DE PANELAS;
    12. COLETE UMA FRIGIDEIRA;
    13. LOCALIZE A AREA DE UTENSILHOS;
    14. COLETE UMA ESPATULA;
    15. LOCALIZE O FOGÃO;
    16. DIRIJA-SE AO FOGÃO;
    17. ESCOLHA APENAS UMA BOCA;
    18. COLOQUE A FRIGIDEIRA COM A PARTE CONCAVA PARA CIMA NA BOCA ESCOLHIDA;
    19. UTILIZE-SE DO ACENDEDOR E O IGNITOR PARA INICIAR AS CHAMAS NA BOCA ESCOLHIDA;
    20. VOLTE AO LOCAL NOS QUAIS OS ITENS FORAM DEIXADOS;
    21. ABRA O POTE CONTENDO MANTEIGA OU MARGARINA;
    22. UTILIZE A ESPATULA PARA RETIRAR APROXIMADAMENTE 30G DE MATERIAL;
    23. TAMPE O POTE;
    24. COLETE O OVO;
    25. DIRIJA-SE NOVAMENTE AO FOGÃO;
    26. DEPOSITE O MATERIAL DA ESPATULA NA FRIGIDEIRA;
    27. QUEBRE O OVO EM CIMA DA FRIGIDEIRA;
    28. AGUARDE O FINAL DO PREPARO DE COZIMENTO;
    29. DESLIGUE A BOCA DO FOGÃO;
    30. DIRIJA-SE A AREA DE PRATOS;
    31. RETIRE UM PRATO;
    32. SEGURE O PRATO;
    33. RETIRE O OVO DA FRIGIDEIRA E O COLOQUE NO PRATO;
    34. DIRIJA-SE A AREA DE TALHERES;
    35. COLETE UMA COLHER;
    36. COMA SEU OVO;
FIM;
```

Faltou o despejo das cascas dos ovos;

Faltou tomperro;

Checar a validade do ovo;

Algoritmo:

- Descrever passo-a-passo como resolver um problema;

Problema:

- Faça um algoritmo que entre com o valor de um produto e ao final informar o valor pago com 5% de desconto;

Livro:

- Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java;

Estruturando o pensamento:

- 01\. Objetivo: Calcular o valor do produto com 5% de desconto (Interpretar o texto);
- 02\. Obter o valor do produto;
  - 02.01. Quem fornece este valor? O Usuário;
  - 02.02. Como eu consigo esse valor do Usuário? através da entrada de dado;
  - 02.03. Guardar numa variável: VALOR;
- 03\. Calcular o valor do produto com desconto;
- 04\. Informar o valor final;

---------------------------------

DADO -> Entrada | Processamento | Saida -> INFORMAÇÂO

Conhecimento é informação aplicada (Experiencia + Informação);

---------------------------------

Conceitos:

- Variavel (Alocação de memória)
  - Atributos:
    - Nome -> Sistemas de nomeclatura;
      - Não pode começar com número;
      - Sem caracteres especiais;
        - Algumas linguagens não aceitam o undeline (_);
      - Não pode ser palavra reservada (keyword/comandos);
      - Nomes semânticos;
    - Endereço;
    - Tipo de Dado;
    - Tempo Execução;
    - XXXXXXX (prof n lembra o 5 atributo);
- Comentários: não são interpretados;

Tipos de dado:

- ALGORITMO:
  - Numericos;
    - Inteiro (sem parte fracionária) [INT];
    - Real (possui parte fracionária) [FLOAT];
  - Caractere e String [CHAR e STR];
    - Aspas duplas;
    - C é um porre com string;
  - Booleano (Logico) [BOOL];
    - Verdadeiro (True);
    - Falso (False);
    - C não tem booleano;
  - Declaração de variaveis:
    - NOME_VAR: TIPO_DE_DADO;
      EX -> NOME: CHAR[50];
