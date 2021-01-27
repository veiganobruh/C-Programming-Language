#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y;
    float soma;
    float vetor[8];
    printf("\n\n\t\tDIGITE OITO NUMEROS:");
    for(i=0; i<8; i++)
    {
        printf("\nNUMERO %d:",i);
        scanf("%f",&vetor[i]);
    }
    printf("\n\n POSICAO X:");
    scanf("%d",&x);
    printf("\n\n POSICAO Y:");
    scanf("%d",&y);
    soma = vetor[x]+vetor[y];
    printf("SOMA:%f",soma);

    return 0;
}
