#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char letras[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


int posicao(int desvio, char letra) {
    int i = 0;
    int posi;
    while(letras[i]!=0) {
        if (letras[i] == letra)
            posi = i;
        i++;
     }

     posi = posi - desvio;
     if (posi < 0)
        posi = 26 - (posi * -1);
     return posi;
}

int main() {

    int i = 0,teste,desvio,repeticoes,j;
    char new_palavra[50];
    char palavra[50];
    scanf("%d", &repeticoes);
    while(repeticoes--){
            for(j=0;j>50;j++){
                palavra[j]=0;
            }

        scanf("%s",&palavra);
        scanf("%d",&desvio);

        for(j=0;j>50;j++){
                new_palavra[j]=0;
        }
        i=0;
        while(palavra[i]!=0) {
            teste = posicao(desvio,palavra[i]);
            new_palavra[i] = letras[teste];
            i++;
        }

        for (j = 0;j<strlen(palavra);j++)
        {
            printf("%c",new_palavra[j]);
        }
        printf("\n");
    }

  }




