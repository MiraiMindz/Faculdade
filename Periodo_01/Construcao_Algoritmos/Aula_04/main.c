/***************************************
 *            Capitulo  04
 *            Exercicio 15
***************************************/

#include <stdio.h>

int main() {

  float salbruto,resulgrat;

  printf("Insira o valor do seu salário: ");
  scanf("%f", &salbruto);
  
  if (salbruto <= 350.0) {
    resulgrat = salbruto + 100.0;
  } else if (salbruto > 350.0 && salbruto <= 600.0) {
    resulgrat = salbruto + 75.0;
  } else if (salbruto > 600.0 && salbruto <= 900.0) {
    resulgrat = salbruto + 50.0;
  } else {
    resulgrat = salbruto + 35.0;
  }
  printf("O valor junto a gratificação e o desconto de 7% é: %.2f\n", (resulgrat * 0.93));
}



// EX da senha
/*
#include <stdio.h>

int main() {
  int passwd;
  printf("Insira sua senha: ");
  scanf("%d", &passwd);
  if (passwd == 1234) {
    printf("Acesso Liberado\n");
  } else {
    printf("Acesso Negado\n");
  }
  return 0;
}
*/

//#include <stdio.h>

//int main() {
//  float numero;
//  printf("Insira um número: ");
//  scanf("%f", &numero);
//  printf("%s %.2f\n", "Valor dobrado:", (numero * 2.0));
//  return 0;
//}

/****************************************
 * C basic function structure:
 *    return_type name() {
 *      <Code>
 *    }
 *
 ****************************************
 *
 * Global x Local:
 *  
 *  LOCAL:
 *    void test() {
 *      x = 12;
 *      printf("%d", x);
 *    }
 *
 *    int main() {
 *      int x = 10;
 *      printf("%d\n", x);
 *      test();
 *    }
 *
 * GLOBAL:
 *    int x = 10;
 *    void test() {
 *      x = 12;
 *      printf("%d", x);
 *    }
 *
 *    int main() {
 *      printf("%d", x);
 *      test();
 *    }
 *
***************************************/

