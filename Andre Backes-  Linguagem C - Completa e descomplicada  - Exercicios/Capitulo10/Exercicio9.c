#include <stdio.h>
#include <stdlib.h>

void Sequencia(int *vetor);
int main()
{
    int *vetor[10];
    Sequencia(&vetor);
    return 0;
}

void Sequencia(int *vetor)
{
    int i;
    for (i=0; i<10; i++)
    {
        *(vetor+i)=i*i;
        printf("\t%0.2d",*(vetor+i));
    }
}
