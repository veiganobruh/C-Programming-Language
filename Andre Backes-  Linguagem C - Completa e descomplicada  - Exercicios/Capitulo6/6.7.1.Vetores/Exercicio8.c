#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j,k;
    float soma=0;
    int menor=0, maior = 0;
    float vetor[10];
    printf("\n\n\t\tDIGITE 10 NUMEROS:");
    for(i=0; i<10; i++)
    {
        printf("\nNUMERO %d:",i);
        scanf("%f",&vetor[i]);
    }
    printf("\n\nValores negativos:");

    for(j=0; j<10; j++)
    {
        if(vetor[j]<0)
        {
            printf("\n\t%f",vetor[j]);
            menor++;
        }
    }
    printf("\nQuantidade de numeros negativos:%d",menor);

    printf("\n\nValores positivos:");
    for(k=0; k<10; k++)
    {
        if(vetor[k]>0)
        {
            printf("\n\t%f",vetor[k]);
            soma = soma +vetor[k];
            maior++;
        }
    }
    printf("\nQuantidade de numeros positivo:%d",maior);
    printf("\n\nSoma dos numeros positivo:%f",soma);
    return 0;
}
