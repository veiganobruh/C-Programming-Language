#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[6];
    int i;
    printf("\n\n\n\DIGITE 6 NUMERO:\n");
    for(i=0; i<6; i++)
    {
        printf("\nNUMERO[%d]:",i);
        scanf("%f",&vetor[i]);
    }
    for(i=0; i<6; i++)
    {
        printf("\n\t%f",vetor[i]);
    }
    return 0;
}
