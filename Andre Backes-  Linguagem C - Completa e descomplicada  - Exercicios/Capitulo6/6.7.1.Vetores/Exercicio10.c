#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i=0;
    int contador=0;
    float vetor[100];

    while(contador<100)
    {
        if( (i%7) ==0 )
        {
            i++;
            continue;
        }
        else
        {
            vetor[contador]=i;
            contador++;
            i++;
        }
    }
    for(i=0; i<100; i++)
    {

        printf("\nVetor[%d]: %f",i,vetor[i]);
    }

    return 0;
}
