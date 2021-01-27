#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[6];
    int i,j;
    printf("\n\n\n\DIGITE 6 NUMERO:\n");
    for(i=0; i<6; i++)
    {
        printf("\nNUMERO[%d]:",i);
        scanf("%f",&vetor[i]);
    }
    for(j=5; j>=0; j--)
    {
        printf("\n\t%f",vetor[j]);
    }
    return 0;
}

