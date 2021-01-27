#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao(float *vetor, float *valor );
int main()
{
    float *valor, vetor[10];
    printf("Digite o Valor: ");
    scanf("%f",&valor);

    funcao(&vetor,&valor);

    return 0;
}
void funcao(float *vetor, float *valor )
{
    int i ;
    for (i=0; i<10; i++)
    {
        *(vetor+i)= *valor;
    }
    for (i=0; i<10; i++)
    {
        printf("\nVetor[%d]: %0.2f", i,*(vetor+i));
    }
}
