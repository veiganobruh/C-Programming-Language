#include <stdio.h>
#include <stdlib.h>

void Vetor (float *vetor, int quant)
{
    int i;
    for(i=0; i<quant; i++)
    {
        printf("\nVetor[%d]: ",i);
        scanf("%f",&vetor[i]);
    }

}
void Maior ( float *vetor, int quant, float *maior, int *contador )
{
    int i;
    *maior = vetor[0];
    for (i=0; i<quant; i++)
    {
        if ( vetor[i]>= *maior)
        {
            *maior = vetor[i];
        }
    }
    for (i=0; i<quant; i++)
    {
        if ( vetor[i] == *maior)
        {
            *contador = *contador + 1;
        }
    }
}
int main()
{
    int quantidade;
    float maior;
    int contador=0;
    printf("Tamanho do vetor: ");
    scanf("%d",&quantidade);
    float vetor[quantidade];
    Vetor(&vetor,quantidade);
    Maior(&vetor,quantidade,&maior,&contador);
    printf("\n\nMaior valor do vetor: %f", maior);
    printf("\nQuantidade de vezes de ocorrencia: %d", contador);

    return 0;
}
