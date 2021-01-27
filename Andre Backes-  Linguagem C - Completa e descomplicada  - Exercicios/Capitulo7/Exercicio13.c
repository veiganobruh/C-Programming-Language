#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j, indice, indiceaux=0;
    char palavra1[50],aux[50];
    printf("PALAVRA: ");
    gets(palavra1);
    printf("INICIO: ");
    scanf("%d",&i);
    printf("FINAL: ");
    scanf("%d",&j);

    for(indice=0; palavra1[indice]!='\0'; indice++)
    {
        if((indice>=i)&&(indice<=j))
        {
            aux[indiceaux]=palavra1[indice];
            indiceaux++;
        }
    }
    aux[indiceaux]='\0';
    printf("\n\n%s",aux);

    return 0;
}
