//Nícolas Telles
#include <stdio.h>
int main()
{
int x,i,j,n=0,aux = 0,p1 = 0,p2;
char letras[52] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','d','e','f','g','h','i','j','j','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

while (n == 0 || n >52){
  scanf ("%d",&n);
}
p2 = 2*n+1;
char MA [2*n+1][2*n+1];
//printf ("%d\n", 2*n+1);
for (x = n ; x >= 1 ; x--){
   for (i=p1;i<p2;i++){
        for (j=p1;j<p2;j++){
                if (i == p2-1 || i == p1 || j == p2-1 || j == p1 )
                    MA [i][j] = letras[aux];
        }
    }
    p2--;
    p1++;
    aux++;
}


//nao é n+1 pelo fato da matriz começar com o 0
MA [n][n] = '*';

for (i=0;i<2*n+1;i++){
    for (j=0;j < 2*n+1;j++){
               printf("%c ", MA [i][j]);
    }
    printf(" \n");
}


}
