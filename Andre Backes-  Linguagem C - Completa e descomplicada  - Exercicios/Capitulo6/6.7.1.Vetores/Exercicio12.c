#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i=0,j,contador=0;
    float vetor[10], comparador[10];
    float aux[contador],aux1;
    while(i<10)
    {
        printf("\nVetor[%d]: ",i);
        scanf("%f",&vetor[i]);
        comparador[i]=vetor[i];
        i++;
    }
    printf("\n\nVALORES IGUAIS\n\n");
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if( i != j)
            {
                if (comparador[i]==vetor[j])
                {
                    printf("\nVetor[%d]: %f",j,vetor[j]);
                }

            }
        }
    }


    return 0;
}
