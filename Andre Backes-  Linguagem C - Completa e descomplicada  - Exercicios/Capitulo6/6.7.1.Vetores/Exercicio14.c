#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototipo da função

float DESVIOPADRAO(int );

int main()
{
    int n;
inicio:
    printf("\n\n\t\tQUANTIDADE DE NUMERO QUE SERA INSERIDO:");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("\n\n\n  DESVIO PADRAO: %f\n\n",DESVIOPADRAO(n));
    }
    else
    {
        printf("\n\nNUMERO INVALIDO!");
        goto inicio;
    }
    system("pause");
    return 0;
}

// Funcao - calcular o desvio padrao de uma sequencia de valores

float DESVIOPADRAO(int indice)  // indice o tamanho do vetor ;
{
    int i,j,k;
    float contadorM=0.0, contadorVM=0.0;
    float soma =0, media, somaVM=0;
    float vetor[indice];
    float aux;
    float desvio;
    // Armazenando os valores no vetor
    for(i=0; i<indice; i++)
    {
        printf("\nVetor[%d]:",i);
        scanf("%f",&vetor[i]);
    }
    // fazendo a media
    for(j=0; j<indice; j++)
    {
        //printf("\nVetor[%d]:%f",i,vetor[j]);
        soma = soma + vetor[j];
        contadorM++;
    }
    //printf("\nSOMA:%f",soma);
    //printf("\n\nContadorM:%f",contadorM);
    media = soma/contadorM;
    //printf("\n\nMedia:%f",media);
    //  D= 1/(n-1)*somatorio( v[i]-m)| i=0 ate n-1
    for(k=0; k<indice; k++)
    {
        aux = (vetor[k] - media);
        aux = pow(aux,2);
        somaVM = (somaVM + aux );
        //printf("\nSOMAVM[%d]:%f",k,somaVM);
        contadorVM++; // Numero n - Formula
    }
    // resultado do desvio padrao
    desvio = sqrt((1/(contadorVM-1))*somaVM);
    return desvio;
}




