#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[5], media = 0 ;
    int i,j;
    printf("\n\n\n\DIGITE 6 NUMERO:\n");
    for(i=0; i<5; i++)
    {
        printf("\nNUMERO[%d]:",i);
        scanf("%f",&vetor[i]);
        media = media +vetor[i];
    }
    for(j=0; j<5; i=j++)
    {
        printf("\n%f",vetor[j]);
    }
    printf("\n\n\tMedia:%f", media/5);

    return 0;
}
