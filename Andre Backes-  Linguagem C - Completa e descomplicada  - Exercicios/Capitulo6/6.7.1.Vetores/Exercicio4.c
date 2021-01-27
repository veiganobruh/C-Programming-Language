#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vetor[6]= {1,0,5,-2,-5,7};
    int soma ;
    soma= vetor[0]+vetor[1]+vetor[5];
    printf("Soma:%d\n\n",soma);
    vetor[4] = 100;
    for(i=0; i<6; i++)
    {
        printf("\t\t%d\n",vetor[i]);
    }
    return 0;
}
