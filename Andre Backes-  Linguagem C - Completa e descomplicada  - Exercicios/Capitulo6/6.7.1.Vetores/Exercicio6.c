#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j;
    int aux;
    int contador=0;
    float vetor[10];
    printf("\n\n\t\tDIGITE 10 NUMEROS:");
    for(i=0; i<10; i++)
    {
        printf("\nNUMERO %d:",i);
        scanf("%f",&vetor[i]);
    }
    for(j=0; j<10; j++)
    {
        aux = vetor[j];
        aux = aux%2;
        if(aux==0)
        {
            contador++;
        }
    }
    printf("\n\nFORAM ARMAZENADOS %d NUMEROS PARES",contador);
    return 0;
}
