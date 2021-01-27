#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Vetor( float n, float *vetor)
{
    int i;
    for( i=0; i<n; i++)
    {
        printf("\nVetor[%d]: ",i);
        scanf("%f",&vetor[i]);
    }
}
float Media ( int n, float *vetor,float *media)
{
    int i;
    for(i=0; i<n; i++)
    {
        *media = *media + (*(vetor+i));
    }
    *media = (float)*media/n;
}
float Somatorio(int n, float *vetor, float media,float *soma)
{
    int i;
    float aux;
    for(i=0; i<n; i++)
    {
        aux = vetor[i]-media;
        *soma = *soma + pow(aux,2);
    }
}
float Desvio_Padrao(float soma, int n, float *desvio)
{

    float aux;
    aux = (float)1/(n-1);
    *desvio = sqrt(aux*soma);
}

int main()
{
    int numero;
    float media = 0;
    float soma = 0;
    float desvio;

    printf("Quantidade de numero: ");
    scanf("%d",&numero);

    float vetor[numero];

    Vetor(numero,&vetor);
    Media(numero,&vetor,&media);
    Somatorio(numero,&vetor,media,&soma);
    Desvio_Padrao(soma,numero,&desvio);
    printf("\n\nDesvio Padrao: %f",desvio);

    return 0;
}
