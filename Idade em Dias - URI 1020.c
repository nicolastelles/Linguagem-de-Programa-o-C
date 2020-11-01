#include <stdio.h>
#include <stdlib.h>
int main()
{
  int days;
  int v_aux;

  scanf("%d", &days);
  printf("%d ano(s)\n", days/365);
  v_aux = days%365;

  printf("%d mes(es)\n", v_aux/30);
  v_aux = v_aux%30;

  printf("%d dia(s)\n", v_aux);

 return 0;
}
