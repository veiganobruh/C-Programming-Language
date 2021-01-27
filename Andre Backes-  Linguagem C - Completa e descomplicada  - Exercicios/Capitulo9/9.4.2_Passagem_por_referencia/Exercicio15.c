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
void Maior ( float *vetor, int quant, float *maior )
{
    int i;
    *maior = vetor[0];
    for (i=0; i<quant; i++)
    {
        if ( vetor[i]> *maior)
        {
            *maior = vetor[i];
        }
    }
}
void Menor ( float *vetor, int quant, float *menor )
{
    int i;
    *menor = vetor[0];
    for (i=0; i<quant; i++)
    {
        if ( vetor[i]< *menor)
        {
            *menor = vetor[i];
        }
    }
}

int main()
{
    int quantidade;
    float maior,menor;
    printf("Tamanho do vetor: ");
    scanf("%d",&quantidade);
    float vetor[quantidade];
    Vetor(&vetor,quantidade);
    Maior(&vetor,quantidade,&maior);
    Menor(&vetor,quantidade,&menor);
    printf("\n\nMaior valor do vetor: %f", maior);
    printf("\nMenor valor do vetor: %f", menor);

    return 0;
}
