#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int contadigitos(int a, int b){
int contaDigi, aux;
  contaDigi = 0;
  while (a != 0) {
    aux = a % 10;
    a =  a/10;
    if (aux == b)
      contaDigi++;
  }
  return contaDigi;
}



bool permuta(int a , int b){
    int d;
    for (d = 1; d <= 9; d++){
        if (contadigitos(a,d) != contadigitos(b,d)){
            return false;
        }
    }

    return true;
}

main (){
    int a , b ;
    bool c ;
    scanf("%d %d", &a, &b);
   // c = permuta(3212,2213);
    //c = permuta(1234,123455);
    c = permuta(a,b);
    if (c)
        printf("Eh permutacao");
    else
        printf("Nao Eh permutacao");

    return 0;
}
