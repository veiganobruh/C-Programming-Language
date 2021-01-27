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
        if (*(p+i)%2 == 0)
        {
            printf("Vetor[%d]: %d - Endereco: %p   ",i,*(p+i),(p+i));
        }
    }
    return 0;
}