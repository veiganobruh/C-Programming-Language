#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j;
    float menor, maior;
    float vetor[10];
    printf("\n\n\t\tDIGITE 10 NUMEROS:");
    for(i=0; i<10; i++)
    {
        printf("\nNUMERO %d:",i);
        scanf("%f",&vetor[i]);
    }
    maior = vetor[0];
    for(j=0; j<10; j++)
    {
        if(vetor[j]>maior)
        {
            maior= vetor[j];
        }
    }
    menor = vetor[0];
    for(j=0; j<10; j++)
    {
        if(vetor[j]<menor)
        {
            menor= vetor[j];
        }
    }
    printf("\n\nMAIOR:%f, MENOR:%f",maior, menor);
    return 0;
}
