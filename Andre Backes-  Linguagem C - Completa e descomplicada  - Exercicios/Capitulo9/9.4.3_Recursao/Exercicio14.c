#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Menor_Valor( float *vetor, int quant);
void Vetor (float *vetor, int tamanho);
int main()
{
    int tamanho=0;
    printf("Tamanho do vetor: ");
    scanf("%d",&tamanho);
    float vetor[tamanho];
    Vetor(&vetor, tamanho);
    printf("\n\nMenor Valor: %f", Menor_Valor(&vetor,tamanho-1));
    return 0;
}

float Menor_Valor( float *vetor, int quant)
{
    if(quant == 0)
    {
        return vetor[quant];
    }

    float valor = vetor[quant];
    float menor = Menor_Valor(vetor, quant-1);

    if(valor > menor)
        return menor;
    return valor;
}

void Vetor (float *vetor, int tamanho)
{
    int i;
    for (i=0; i<tamanho; i++)
    {
        printf("Vetor[%d]: ",i);
        scanf("%f",&vetor[i]);
    }
}

