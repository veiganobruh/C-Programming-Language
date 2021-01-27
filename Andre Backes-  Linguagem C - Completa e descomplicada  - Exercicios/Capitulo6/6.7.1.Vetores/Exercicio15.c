#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[10],aux;
    int i,j;
    for(i=0; i<10; i++)
    {
        printf("VETOR[%d]: ",i);
        scanf("%f",&vetor[i]);
    }
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if (vetor[i]>vetor[j])
            {
                aux = vetor[j];
                vetor[j]=vetor[i];
                vetor[i] = aux;

            }
        }

    }
    for(i=0; i<10; i++)
    {
        printf("\nVETOR[%d]: %f",i,vetor[i]);

    }
    return 0;
}



