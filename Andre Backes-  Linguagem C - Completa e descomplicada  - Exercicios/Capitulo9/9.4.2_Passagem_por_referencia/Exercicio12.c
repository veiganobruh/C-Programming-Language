#include <stdio.h>
#include <stdlib.h>

void Soma_Pares_Impares( int *vetor, int quant,int *soma_par,int *soma_impar);
void Vetor (int *vetor, int quant);
int main()
{
    int quantidade;
    int par =0;
    int impar=0;
    printf("Tamanho do vetor: ");
    scanf("%d",&quantidade);
    int vetor[quantidade];
    Vetor(&vetor,quantidade);
    Soma_Pares_Impares(&vetor,quantidade,&par,&impar);
    printf("\nSoma dos numeros pares: %d",par);
    printf("\nSoma dos numeros impares: %d",impar);

    return 0;
}

void Soma_Pares_Impares( int *vetor, int quant,int *soma_par,int *soma_impar)
{
    int i;
    for(i=0; i<quant; i++)
    {
        if( vetor[i]%2==0)
        {
            *soma_par = *soma_par + vetor[i];
        }
        else
        {
            *soma_impar = *soma_impar + vetor[i];

        }
    }
}
void Vetor (int *vetor, int quant)
{
    int i;
    for(i=0; i<quant; i++)
    {
        printf("\nVetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

}
