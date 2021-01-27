#include <stdio.h>
#include <stdlib.h>


int Soma_Vetor( int *vetor, int quant);
void Vetor ( int *vetor, int quant);
int main()
{
    int quantidade;
    int soma;

    printf("Quantidade de vetores: ");
    scanf("%d",&quantidade);

    int vetor[quantidade];

    Vetor(&vetor,quantidade);
    printf("Soma = %d",Soma_Vetor(&vetor,quantidade-1));


    return 0;
}
void Vetor ( int *vetor, int quant)
{
    int i;
    for(i=0; i<quant; i++)
    {
        printf("Vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

}
int Soma_Vetor( int *vetor, int quant)
{
    if ( quant==0)
        return vetor[0];
    int soma = vetor[quant];
    soma = soma + Soma_Vetor(vetor,quant-1);
    return soma;

}
