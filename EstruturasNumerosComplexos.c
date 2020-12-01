//Nicolas Telles
#include <stdio.h>


struct complexo {
  int real;
  int imag;
};

//função soma
struct complexo soma(struct complexo A, struct complexo B){
  struct complexo resposta ;
  resposta.real = A.real + B.real;
  resposta.imag = A.imag + B.imag;
  return resposta;
}

//função multiplicação
struct complexo multi(struct complexo A, struct complexo B){
  struct complexo resposta ;
  resposta.real = ((A.real * B.real)-(A.imag * B.imag));
  resposta.imag = ((A.imag * B.real) + (A.real * B.imag));
 return resposta;

}

int main(void) {

struct complexo A;
struct complexo B;
struct complexo resposta;

printf("Digite o número complexo A: ");
scanf ("%d %d", &A.real, &A.imag);
printf("Digite o número complexo B: ");
scanf ("%d %d", &B.real, &B.imag);
resposta = soma (A,B);
//resposta = multi (A,B);
if (resposta.imag > 0 )
  printf("%d + %di",resposta.real, resposta.imag);
else
  printf("%d %di",resposta.real, resposta.imag);
  return 0;
}
