#include <stdio.h>
#include <stdlib.h>

float Media ( int *vetor, int quant, int aux);
void Vetor ();
int main()
{
    int tamanho=0;
    int vetor[tamanho];
    printf("Tamanho do vetor: ");
    scanf("%d",&tamanho);
    Vetor(&vetor, tamanho);
    printf("Media = %f",Media(&vetor,tamanho-1,tamanho));

    return 0;
}

float Media ( int *vetor, int quant, int aux)
{
    float media;
    if ( quant == 0 )
        return (float)vetor[0]/aux;
    media = (float)vetor[quant]/aux;
    media = media + Media(vetor,quant-1,aux);

    return media;
}

void Vetor (int *vetor, int tamanho)
{
    int i;
    for (i=0; i<tamanho; i++)
    {
        printf("Vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }
}
