#include <stdio.h>

int main() {
 double a,b;
 double media;
 scanf("%lf", &a);
 a = a *3.5;
 scanf("%lf", &b);
 b = b*7.5;
 media = (a+b)/11;
 printf("MEDIA = %.5lf\n",media);
    return 0;
}
