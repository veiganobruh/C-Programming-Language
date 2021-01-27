#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vet[5];
    int *p = vet;
    int i;
    for (i=0; i<5; i++)
    {
        printf("Vetor[%d]: ",i);
        scanf("%d",(p+i));
    }
    for (i=0; i<5; i++)
    {
        printf("Vetor[%d]: %d   ",i,*(p+i)*2);
    }
    return 0;
}
