#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,maiorab;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    maiorab = (a+b + abs(a-b))/2;
    maiorab = (maiorab+c + abs(maiorab-c))/2;
    printf("%d eh o maior\n",maiorab);

  return 0 ;
}
