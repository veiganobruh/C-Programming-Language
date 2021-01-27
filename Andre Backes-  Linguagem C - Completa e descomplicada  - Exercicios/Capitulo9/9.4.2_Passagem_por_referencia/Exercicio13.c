#include <stdio.h>
#include <stdlib.h>

void Vetor (float *vetor, int quant);
void Ordenacao (float *vetor,int quant);
void Imprimir_Vetor (float*vetor, int quant);
int main()
{
    int quantidade;
    printf("Tamanho do vetor: ");
    scanf("%d",&quantidade);
    int vetor[quantidade];
    Vetor(&vetor,quantidade);
    printf("\n\n\t\tIMPRIMINDO O VETOR\n");
    Imprimir_Vetor(&vetor,quantidade);
    Ordenacao(&vetor,quantidade);
    printf("\n\n\t\tIMPRIMINDO O VETOR ORDENADO\n");
    Imprimir_Vetor(&vetor,quantidade);


    return 0;
}
void Vetor (float*vetor, int quant)
{
    int i;
    for(i=0; i<quant; i++)
    {
        printf("\nVetor[%d]: ",i);
        scanf("%f",&vetor[i]);
    }

}
void Ordenacao(float *vetor,int quant)
{
    int trocou;
    float aux;
    int i;
    while( quant>1)
    {
        trocou = 1;
        i = 0;
        while( i<(quant-1))
        {
            if (vetor[i]>vetor[i+1])
            {
                trocou= 0;
                aux = vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
            i++;
        }
        if ( trocou == 1)
            break;
        quant--;

    }

}
void Imprimir_Vetor (float *vetor, int quant)
{
    int i;
    for(i=0; i<quant; i++)
    {
        printf("\nVetor[%d]: %0.2f",i,vetor[i]);
    }

}

