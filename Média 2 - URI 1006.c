#include <stdio.h>
//Nícolas Telles
int main() {
 double a,b,c;
 double media;
 scanf("%lf", &a);
 a = a *2;
 scanf("%lf", &b);
 b = b*3;
 scanf("%lf", &c);
 c = c*5;
 media = (a+b+c)/10;
 printf("MEDIA = %.1lf\n",media);
    return 0;
}
