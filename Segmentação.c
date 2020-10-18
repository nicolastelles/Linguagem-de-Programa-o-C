#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool encaixa(int a, int b) {

  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return true;
  else
    return false;

}

int main() {
  int a, b, maior, menor;
  bool aux;
  printf("Entre com dois inteiros positivos: ");
  scanf("%d %d", &a, &b);

  if (a > b) {
    maior = a;
    menor = b;
  }
  else {
    maior = b;
    menor = a;
  }

  aux = false;
  while (maior >= menor) {
    if (encaixa(maior,menor))
      aux = true;
    maior = maior/10;
  }
  if (aux)
    printf("o numero eh  %d segmento de %d\n",b,a);
  else
    printf("O numero %d nao eh segmento de %d\n",b,a);

  return 0;
}
