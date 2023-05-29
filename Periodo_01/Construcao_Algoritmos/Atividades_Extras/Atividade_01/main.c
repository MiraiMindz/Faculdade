/*******************************************************************************
 * @file main.c
 * @brief Esse arquivo serve para calcular os descontos de um dado contra-cheque
 * @version v0.0.1
 * @author Amanda Nunes
 * @author Bruno Barreto
 * @return int (exit-code)
 *
 *  Este arquivo desconsidera Vales e Faltas, e seu calculo salarial é feito
 *  através do valor de hora trabalhada * total de horas trabalhadas.
 *
 *  Notas, Observações e Informações Pertinentes:
 *
 *  O salário base é dado através do primeiro valor da tabela do INSS e não o
 *  valor contratual, por exemplo, caso o usuário tenha um salário entre
 *  1320.01 e 2571.29, o salário base será 1320.01.  
 *
 *  FGTS:
 *      O desconto para trabalhadores formais do INSS é de 8% (oito porcento);
 *      para trabalhadores domésticos tal valor se é considerado como 11.2%,
 *      sendo 8% destes referentes a titulo de depósito mensal, e 3.2%
 *      a antecipação de recolhimento recisório; e para os trabalhadores com
 *      contratos de Aprendizagem (Jovem-Aprendiz), este valor é reduzido para
 *      2%.
 *
 *  INSS:
 *      Em virtude da Medida Provisória nº 1.172/23 que reajustou o valor do
 *      salário mínimo nacional, em maio de 2023, alterando-o de R$ 1.302,00
 *      para R$ 1.320,00, houve mudança nos valores das faixas contributivas
 *      para o INSS. Dessa forma, para o ano de 2023 há tabelas distintas para
 *      os períodos antes e depois de maio de 2023.
 *
 *      TABELAS VÁLIDAS PARA CONTRIBUIÇÕES ENTRE 01/01/2023 ATÉ 30/04/2023:
 *          Salário de Contribuição (R$)        Alíquota do INSS
 *          Até R$ 1.302,00                     7,5%
 *          De  R$ 1.302,01 a R$ 2.571,29       9%
 *          De  R$ 2.571,30 até R$ 3.856,94     12%
 *          De  R$ 3.856,95 até R$ 7.507,49     14%
 *
 *      TABELAS VÁLIDAS A PARTIR DA COMPETÊNCIA MAIO DE 2023:
 *          Salário de Contribuição (R$)        Alíquota do INSS
 *          Até R$ 1.320,00                     7,5%
 *          De  R$ 1.320,01 a R$ 2.571,29       9%
 *          De  R$ 2.571,30 até R$ 3.856,94     12%
 *          De  R$ 3.856,95 até R$ 7.507,49     14%
 *
 *  IRFP (IRRF):
 *          Base de cálculo (R$)                Alíquota (%) Parcela IRPF (R$)
 *          Até      1.903,98                   NULL                NULL
 *          De       1.903,99 até 2.826,65      7,5                 142,80
 *          De       2.826,66 até 3.751,05      15                  354,80
 *          De       3.751,06 até 4.664,68      22,5                636,13
 *          Acima de 4.664,68                   27,5                869,36
 *
 *  Dados fixos de cabeçalho:
 *      - Nome da empresa
 *      - CNPJ da empresa
 *
 *  Dados informados pelo usuário:
 *      - Nome do funcionario
 *      - Código do funcionario
 *      - Cargo do funcionario
 *      - Mes e ano de referencia do recibo
 *      - Salario por dia
 *      - dias trabalhados
 *
 *  Dados fixos do programa:
 *      - Aliquotas do imposto de renda
 *      - Aliquotas de desconto do INSS
 *      - Aliquota do FGTS
 *
 *******************************************************************************
 *
 *  Bliblografia:
 *      - "Perguntas Frequentes sobre FGTS"; CAIXA. Acessado em 27/05/2023, Disponível em: <https://www.caixa.gov.br/beneficios-trabalhador/fgts/perguntas-frequentes/Paginas/default.aspx#:~:text=O%20valor%20ser%C3%A1%20o%20correspondente,percentual%20%C3%A9%20reduzido%20para%202%25>
 *      - "Tabela de contribuição mensal"; INSS. Acessado em 27/05/2023, Disponível em: <https://www.gov.br/inss/pt-br/direitos-e-deveres/inscricao-e-contribuicao/tabela-de-contribuicao-mensal>
 *      - "IRPF (Imposto sobre a renda das pessoas físicas)"; RECEITA FEDERAL. Acessado em 27/05/2023, Disponível em: <https://www.gov.br/receitafederal/pt-br/assuntos/orientacao-tributaria/tributos/irpf-imposto-de-renda-pessoa-fisica>
 *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>

#define interpriseName "FCEE"
#define interpriseCode "12.345.678/901-23"

/**
 * @union InputValue
 * @typedef InputValue
 * @brief Os possíveis tipos de dado para a função `getInput()`
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
typedef union {
    int intValue;
    float floatValue;
    double doubleValue;
    char charValue;
    char *stringValue;
} InputValue;

/**
 * @fn isInteger
 * @brief Checa se uma string é um int.
 * @param char*: str
 * @return int
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
int isInteger(const char *str) {
    char *endptr;
    strtol(str, &endptr, 10);
    return (*endptr == '\0');
}

/**
 * @fn isFloat
 * @brief Checa se uma string é um float.
 * @param char*: str
 * @return int
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
int isFloat(const char *str) {
    char *endptr;
    strtod(str, &endptr);
    return (*endptr == '\0');
}

/**
 * @fn isDouble
 * @brief Checa se uma string é um double.
 * @param char*: str
 * @return int
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
int isDouble(const char *str) {
    char *endptr;
    strtod(str, &endptr);
    return (*endptr == '\0');
}

/**
 * @fn getInput
 * @brief Coleta a entrada do usuário e converte para um dado tipo..
 * @param char*: prompt
 * @param char*: dataType
 * @return InputValue
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
InputValue getInput(const char *prompt, const char *dataType) {
    InputValue value;
    char *buffer = NULL;
    size_t bufferSize = 0;

    printf("%s", prompt);
    getline(&buffer, &bufferSize, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    if (strcmp(dataType, "int") == 0) {
        if (isInteger(buffer)) {
            value.intValue = atoi(buffer);
        } else {
            printf("│ ERROR: UNABLE TO CONVERT FROM ASCII TO INT.\n");
            free(buffer);
            return getInput(prompt, dataType);
        }
    } else if (strcmp(dataType, "float") == 0) {
        if (isFloat(buffer)) {
            value.floatValue = atof(buffer);
        } else {
            printf("│ ERROR: UNABLE TO CONVERT FROM ASCII TO FLOAT.\n");
            free(buffer);
            return getInput(prompt, dataType);
        }
    } else if (strcmp(dataType, "double") == 0) {
        if (isDouble(buffer)) {
            value.doubleValue = atof(buffer);
        } else {
            printf("│ ERROR: UNABLE TO CONVERT FROM ASCII TO DOUBLE.\n");
            free(buffer);
            return getInput(prompt, dataType);
        }
    } else if (strcmp(dataType, "char") == 0) {
        if (strlen(buffer) == 1) {
            value.charValue = buffer[0];
        } else {
            printf("│ ERROR: INVALID CHAR VALUE.\n");
            free(buffer);
            return getInput(prompt, dataType);
        }
    } else if (strcmp(dataType, "string") == 0) {
        value.stringValue = strdup(buffer);
    } else {
        printf("│ ERROR: INVALID DATA TYPE.\n");
    }

    free(buffer);
    return value;
}

/**
 * @fn containsNumber
 * @brief Checa se uma dada string contém um numero.
 * @param char*: string
 * @return int
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
int containsNumber(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        if (isdigit(string[i])) {
            return 1;
            break;
        }
        i++;
    }

    if (string[i] == '\0') {
        return 0;
    }
}

/**
 * @fn getYesNo
 * @brief Faz uma pergunta de Sim ou Não.
 * @param char*: prompt
 * @return int
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
int getYesNo(const char *prompt) {
    InputValue value;
    char *choice;
    value = getInput(prompt, "string");
    choice = strdup(value.stringValue);
    free(value.stringValue);

    if (choice[0] == *"1" || choice[0] == *"s" || choice[0] == *"y") {
        return 1;
    } else if (choice[0] == *"0" || choice[0] == *"n") {
        return 0;
    } else {
        getYesNo(prompt);
    }
}

/**
 * @fn getPercentage
 * @brief Calcula dada porcentagem
 * @param float: percentage
 * @param float: value
 * @return float
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
float getPercentage(float percentage, float value) {
    return (percentage / 100.0) * value;
}

/**
 * @fn readMonth
 * @brief Lê o mês de referência.
 * @param char*: prompt
 * @return int
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
int readMonth(const char *prompt) {
    InputValue value;
    char *input;
    int month = -1;

    value = getInput(prompt, "string");
    input = strdup(value.stringValue);
    free(value.stringValue);

    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    if (strcmp(input, "janeiro") == 0 ||
        strcmp(input, "jan") == 0 ||
        strcmp(input, "1") == 0) {
        month = 1;
    } else if (strcmp(input, "fevereiro") == 0 ||
             strcmp(input, "fev") == 0 ||
             strcmp(input, "2") == 0) {
        month = 2;
    } else if (strcmp(input, "março") == 0 ||
             strcmp(input, "marco") == 0 ||
             strcmp(input, "mar") == 0 ||
             strcmp(input, "3") == 0) {
        month = 3;
    } else if (strcmp(input, "abril") == 0 ||
             strcmp(input, "abr") == 0 ||
             strcmp(input, "4") == 0) {
        month = 4;
    } else if (strcmp(input, "maio") == 0 ||
             strcmp(input, "mai") == 0 ||
             strcmp(input, "5") == 0) {
        month = 5;
    } else if (strcmp(input, "junho") == 0 ||
             strcmp(input, "jun") == 0 ||
             strcmp(input, "6") == 0) {
        month = 6;
    } else if (strcmp(input, "julho") == 0 ||
             strcmp(input, "jul") == 0 ||
             strcmp(input, "7") == 0) {
        month = 7;
    } else if (strcmp(input, "agosto") == 0 ||
             strcmp(input, "ago") == 0 ||
             strcmp(input, "8") == 0) {
        month = 8;
    } else if (strcmp(input, "setembro") == 0 ||
             strcmp(input, "set") == 0 ||
             strcmp(input, "9") == 0) {
        month = 9;
    } else if (strcmp(input, "outubro") == 0 ||
             strcmp(input, "out") == 0 ||
             strcmp(input, "10") == 0) {
        month = 10;
    } else if (strcmp(input, "novembro") == 0 ||
             strcmp(input, "nov") == 0 ||
             strcmp(input, "11") == 0) {
        month = 11;
    } else if (strcmp(input, "dezembro") == 0 ||
             strcmp(input, "dez") == 0 ||
             strcmp(input, "12") == 0) {
        month = 12;
    } else {
        printf("│ MÊS DESCONHECIDO.\n");
        month = readMonth(prompt);
    }

    return month;
}

/**
 * @fn getRefMonth
 * @brief Coleta o mês de referência.
 * @param int*: mesReferenciaInt
 * @param char**: mesReferenciaStr
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void getRefMonth(int *mesReferenciaInt, char **mesReferenciaStr) {
    *mesReferenciaInt = readMonth("│ Insira seu mês de referência: ");

    switch (*mesReferenciaInt) {
    case 1:
        *mesReferenciaStr = "Janeiro";
        break;

    case 2:
        *mesReferenciaStr = "Fevereiro";
        break;

    case 3:
        *mesReferenciaStr = "Março";
        break;

    case 4:
        *mesReferenciaStr = "Abril";
        break;

    case 5:
        *mesReferenciaStr = "Maio";
        break;

    case 6:
        *mesReferenciaStr = "Junho";
        break;

    case 7:
        *mesReferenciaStr = "Julho";
        break;

    case 8:
        *mesReferenciaStr = "Agosto";
        break;

    case 9:
        *mesReferenciaStr = "Setembro";
        break;

    case 10:
        *mesReferenciaStr = "Outubro";
        break;

    case 11:
        *mesReferenciaStr = "Novembro";
        break;

    case 12:
        *mesReferenciaStr = "Dezembro";
        break;

    default:
        printf("│ ENTRADA ERRADA\n");
        getRefMonth(mesReferenciaInt, mesReferenciaStr);
        break;
    }
}

/**
 * @fn getName
 * @brief Coleta o nome do funcionário
 * @param char**: nomeFuncionario
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void getName(char **nomeFuncionario) {
    InputValue value;
    value = getInput("│ Insira seu nome: ", "string");
    if (containsNumber(value.stringValue) == 0) {
        *nomeFuncionario = strdup(value.stringValue);
        free(value.stringValue);
    } else {
        printf("│ NOMES NÃO PODEM CONTER DIGITOS.\n");
        getName(nomeFuncionario);
    }
}

/**
 * @fn getRole
 * @brief Coleta o cargo do funcionário
 * @param char**: cargoFuncionario
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void getRole(char **cargoFuncionario) {
    InputValue value;
    value = getInput("│ Insira seu cargo: ", "string");
    if (containsNumber(value.stringValue) == 0) {
        *cargoFuncionario = strdup(value.stringValue);
        free(value.stringValue);
    } else {
        printf("│ CARGOS NÃO PODEM CONTER DIGITOS.\n");
        getRole(cargoFuncionario);
    }
}

/**
 * @fn getCode
 * @brief Coleta o código do funcionário
 * @param int*: codRefFuncionario
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void getCode(int *codRefFuncionario) {
    InputValue value;
    value = getInput("│ Insira seu código: ", "int");
    if (value.intValue < 0) {
        printf("%s\n", "│ VALOR INCORRETO, NÃO EXISTE CÓDIGO NEGATIVO.");
        getCode(codRefFuncionario);
    } else {
        *codRefFuncionario = value.intValue;
    }
}

/**
 * @fn getRefYear
 * @brief Coleta o ano de referência
 * @param int*: anoReferencia
 * @deprecated Devido ao aumento exponencial de complexidade, essa função será desativada em prol do valor fixo de 2023.
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void getRefYear(int *anoReferencia) {
    InputValue value;
    value = getInput("│ Insira seu ano de referência: ", "int");
    if (value.intValue != 2023) {
        printf("│ ESSE PROGRAMA CALCULA APENAS OS VALORES REFERENTES AO ANO DE 2023.\n");
        getRefYear(anoReferencia);
    } else {
        *anoReferencia = value.intValue;
    }
}

/**
 * @fn getDayVal
 * @brief Coleta o valor do dia trabalhado
 * @param float*: salarioDia
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void getDayVal(float *salarioDia) {
    InputValue value;
    value = getInput("│ Insira o valor do dia trabalhado: ", "float");
    if (value.floatValue < 0.0) {
        printf("%s\n", "│ VALOR INCORRETO, NÃO EXISTE SALÁRIO NEGATIVO.");
        getDayVal(salarioDia);
    } else {
        *salarioDia = value.floatValue;
    }
}

/**
 * @fn getWorkDays
 * @brief Coleta o total de dias trabalhados
 * @param int*: diasTrabalhados
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void getWorkDays(int *diasTrabalhados) {
    InputValue value;
    value = getInput("│ Insira a quantidade de dias trabalhados: ", "int");
    if (value.intValue < 0) {
        printf("%s\n", "│ VALOR INCORRETO, MESES NÃO TEM DIAS NEGATIVOS.");
        getWorkDays(diasTrabalhados);
    } else if (value.intValue > 31) {
        printf("%s\n", "│ VALOR INCORRETO, MESES SÓ TEM ATÉ 31 DIAS.");
        getWorkDays(diasTrabalhados);
    } else {
        *diasTrabalhados = value.intValue;
    }
}

/**
 * @fn getMonthVal
 * @brief Coleta o salário mensal
 * @param float*: salarioMes
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void getMonthVal(float *salasalarioMes) {
    InputValue value;
    value = getInput("│ Insira seu salário mensal: ", "float");
    if (value.floatValue < 0.0) {
        printf("%s\n", "│ VALOR INCORRETO, NÃO EXISTE SALÁRIO NEGATIVO.");
        getMonthVal(salasalarioMes);
    } else {
        *salasalarioMes = value.floatValue;
    }
}

/**
 * @fn calculateFGTS
 * @brief Calcula a porcentagem do FGTS
 * @param float: salario
 * @param float*: porcentagemFGTS
 * @param float*: aliquotaFGTS
 * @param int: jovemAprendiz
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void calculateFGTS(float salario, int jovemAprendiz, float *porcentagemFGTS, float *aliquotaFGTS) {
    if (jovemAprendiz == 1) {
        *porcentagemFGTS = 2.0;
        *aliquotaFGTS = getPercentage(2.0, salario);
    } else {
        *porcentagemFGTS = 8.0;
        *aliquotaFGTS = getPercentage(8.0, salario);
    }
}

/**
 * @fn calculateIRRF
 * @brief Calcula a porcentagem do IRRF
 * @param float: salario
 * @param float*: porcentagemIRRF
 * @param float*: aliquotaIRRF
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void calculateIRRF(float salario, float *porcentagemIRRF, float *aliquotaIRRF, float *salarioBaseIRRF, int *faixaIRRF) {
    if (salario <= 1903.98) {
        *salarioBaseIRRF = salario;
        *porcentagemIRRF = 0.0;
        *faixaIRRF = 1;
        *aliquotaIRRF = 0.0;
    } else if (salario <= 2826.65) {
        *salarioBaseIRRF = 1903.99;
        *porcentagemIRRF = 7.5;
        *faixaIRRF = 2;
        // *aliquotaIRRF = getPercentage(7.5, salario);
        *aliquotaIRRF = getPercentage(7.5, *salarioBaseIRRF);
    } else if (salario <= 3751.05) {
        *salarioBaseIRRF = 2826.66;
        *porcentagemIRRF = 15.0;
        *faixaIRRF = 3;
        // *aliquotaIRRF = getPercentage(15.0, salario);
        *aliquotaIRRF = getPercentage(15.0, *salarioBaseIRRF);
    } else if (salario <= 4664.68) {
        *salarioBaseIRRF = 3751.06;
        *porcentagemIRRF = 22.5;
        *faixaIRRF = 4;
        // *aliquotaIRRF = getPercentage(22.5, salario);
        *aliquotaIRRF = getPercentage(22.5, *salarioBaseIRRF);
    } else {
        *salarioBaseIRRF = 4664.68;
        *porcentagemIRRF = 27.5;
        *faixaIRRF = 5;
        // *aliquotaIRRF = getPercentage(27.5, salario);
        *aliquotaIRRF = getPercentage(27.5, *salarioBaseIRRF);
    }
}

/**
 * @fn calculateINSS
 * @brief Calcula a porcentagem do INSS
 * @param float: salario
 * @param int: mesReferencia
 * @param float*: porcentagemINSS
 * @param float*: aliquotaINSS
 * @author Amanda Nunes
 * @author Bruno Barreto
 **/
void calculateINSS(float salario, int mesReferencia, float *porcentagemINSS, float *aliquotaINSS, float *salarioBaseINSS) {
    float salarioMinimo = mesReferencia < 5 ? 1302.0 : 1320.0;
    if (salario <= salarioMinimo) {
        *salarioBaseINSS = salario;
        *porcentagemINSS = 7.5;
        *aliquotaINSS = getPercentage(7.5, *salarioBaseINSS);
        // *aliquotaINSS = getPercentage(7.5, salario);
    } else if (salario <= 2571.29) {
        *salarioBaseINSS = mesReferencia < 5 ? 1302.01 : 1320.01;
        *porcentagemINSS = 9.0;
        *aliquotaINSS = getPercentage(9.0, *salarioBaseINSS);
        // *aliquotaINSS = getPercentage(9.0, salario);
    } else if (salario <= 3856.94) {
        *salarioBaseINSS = 2571.30;
        *porcentagemINSS = 12.0;
        *aliquotaINSS = getPercentage(12.0, *salarioBaseINSS);
        // *aliquotaINSS = getPercentage(12.0, salario);
    } else if (salario <= 7507.49) {
        *salarioBaseINSS = 3856.95;
        *porcentagemINSS = 14.0;
        *aliquotaINSS = getPercentage(14.0, *salarioBaseINSS);
        // *aliquotaINSS = getPercentage(14.0, salario);
    } else {
        *salarioBaseINSS = salario;
        *porcentagemINSS = 0.0;
        *aliquotaINSS = 0.0;
    }
}

/**
 * @fn main
 * @brief Função principal
 * @return int (exit-code)
 **/
int main() {
    InputValue value;
    float aliquotaFGTS;
    float aliquotaINSS;
    float aliquotaIRRF;
    float porcentagemFGTS;
    float porcentagemINSS;
    float porcentagemIRRF;
    float salarioBaseIRRF;
    float salarioBaseINSS;
    int faixaIRRF;
    char *nomeFuncionario;
    int codRefFuncionario;
    char *cargoFuncionario;
    float salarioBruto;
    float salarioLiquido;
    float salarioMes;
    float salarioDia;
    char *mesReferenciaStr;
    int mesReferenciaInt;
    int diaReferencia;
    int diasTrabalhados;
    int jovemAprendiz;
    int anoReferencia = 2023;

    printf("%s\n", "┌──────────────────────────────");
    getName(&nomeFuncionario);
    getCode(&codRefFuncionario);
    getRole(&cargoFuncionario);
    getRefMonth(&mesReferenciaInt, &mesReferenciaStr);

    if (getYesNo(
        "│ Seu salário é a base de valor diário * dias trabalhados (S/N)? "
        ) == 1) {
        getDayVal(&salarioDia);
        getWorkDays(&diasTrabalhados);
        salarioBruto = (float)diasTrabalhados * salarioDia;
    } else {
        getMonthVal(&salarioMes);
        diasTrabalhados = 30;
        salarioDia = salarioMes / (float)diasTrabalhados;
        salarioBruto = salarioMes;
    }

    jovemAprendiz = getYesNo(
        "│ O seu contra-cheque é de Jovem Aprendiz (S/N)? ");

    calculateFGTS(salarioBruto, jovemAprendiz, &porcentagemFGTS, &aliquotaFGTS);
    calculateINSS(salarioBruto, mesReferenciaInt, &porcentagemINSS, &aliquotaINSS, &salarioBaseINSS);
    calculateIRRF(salarioBruto, &porcentagemIRRF, &aliquotaIRRF, &salarioBaseIRRF, &faixaIRRF);
    salarioLiquido = salarioBruto - (aliquotaINSS + aliquotaIRRF);

    printf("%s\n", "├──────────────────────────────");
    printf("│ %s LTDA\n", interpriseName);
    printf("│ CNPJ: %s\n", interpriseCode);
    printf("│ %s %s de %d\n", "Recibo de pagamento de salário referente a", mesReferenciaStr, anoReferencia);
    printf("├─────\n");
    printf("│ Nome: %s\n", nomeFuncionario);
    printf("│ Código: %d\n", codRefFuncionario);
    printf("│ Cargo: %s\n", cargoFuncionario);
    printf("├─────\n");
    printf("│ CÓD\tDESCRIÇÃO\t\tREFERÊNCIA\tVENCIMENTOS\tDESCONTOS\n");
    printf("│ 101\tSALARIO\t\t\t%dd\t\t%.2f\n", diasTrabalhados, salarioBruto);
    printf("│ 937\tINSS\t\t\t%.2f\t\t\t\t%.2f\n", porcentagemINSS, aliquotaINSS);
    printf("│ 987\tIRRF S. SALARIO\t\t%.2f\t\t\t\t%.2f\n", porcentagemIRRF, aliquotaIRRF);
    printf("├─────\n");
    printf("│ Salário Base: %.2f\n", salarioBaseINSS);
    printf("│ Salário Base Contr. INSS: %.2f\n", salarioBaseINSS);
    printf("│ Salário Base Calc. FGTS: %.2f\n", salarioBaseINSS);
    printf("│ FGTS do Mês: %.2f\n", aliquotaFGTS);
    printf("│ Base Cálc. IRRF: %.2f\n", salarioBaseIRRF);
    printf("│ Faixa IRRF: %d\n", faixaIRRF);
    printf("├─────\n");
    printf("│ Total de descontos: %.2f\n", (aliquotaINSS + aliquotaIRRF));
    printf("│ Salário Liquido: %.2f\n", salarioLiquido);
    printf("%s\n", "└──────────────────────────────");

    return 0;
}
