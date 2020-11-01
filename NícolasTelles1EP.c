//Nicolas Telles
#include <stdio.h>
#include <math.h>
int main (){
//iniciando fat com 1 pois fatorial de 0 = 1
 int x,n,fat=1,aux,result ;
 double r,pi,taylor,soma,parteinteira,partedecimal;;
 pi = 3.1415;
 scanf ("%d",&x);
 r = ((x * pi)/180);
    for(n=0;n<=5;n++){
        aux = 2*n;
        //printf("2 * %d! = %d \n", n , fat);
        taylor = pow(-1,n) * (pow(r,2*n)/fat);
        soma = soma + taylor;
        fat = fat * (aux+1) * (aux+2);
    }
 soma = soma * 1000.0;
 parteinteira = floor(soma);
 partedecimal = soma - parteinteira;
 if(floor(partedecimal*10) > 6)
    soma = soma + 1.0;

 soma = (int)soma;
 soma = soma/1000;
 printf("%.3lf\n",soma);

}
