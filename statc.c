#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void stat(int a,int b,float *ma,float *mg){

    *ma =  (float)(a+b)/2;
    *mg = (float)sqrt(a*b);

}
int main (){

int a,b;
float mediaa,mediag;
scanf("%d %d", &a , &b);
stat(a,b,&mediaa,&mediag);
printf("%f %f\n", mediaa,mediag);

return 0;
}
