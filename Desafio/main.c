#include <stdio.h>
#include <stdlib.h>

int main()
{ int a, b, c, temp;
  //Leitura dos valores
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  printf("Digite o terceiro numero: ");
  scanf("%d", &c);
  //Ordençaõ em ordem decrescente usando variáveis auxiliares
  if (a < b) {
    temp = a;
    a = b;
    b = temp;
  }
  if (a < c) {
    temp = a;
    a = c;
    c = temp;
  }
  if (b < c) {
    temp = b;
    b = c;
    c = temp;
  }
  //Exibe os valore ordenados
  printf("Valores em ordem decrescente : %d, %d, %d\n", a, b, c);
    return 0;
}
