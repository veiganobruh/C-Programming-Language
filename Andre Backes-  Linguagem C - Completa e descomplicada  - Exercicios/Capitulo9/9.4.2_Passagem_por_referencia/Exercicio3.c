#include <stdio.h>
#include <stdlib.h>


void Soma_array(int linha, float *vetor, float *soma);
int main()
{
    float Vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    float Soma = 0;

    Soma_array(10,&Vetor,&Soma);
    printf("\nSoma: %f",Soma);

    return 0;
}

void Soma_array(int linha, float *vetor, float *soma)
{

    int i;
    printf("\n\n\t\tIMPRIMINDO 0 VETOR\n");
    for (i=0; i<linha; i++)
    {
        printf("\nVetor[%d]: %f ",i,*(vetor+i));
    }
    printf("\n");
    for (i=0; i<linha; i++)
    {
        *soma = *soma + (*(vetor+i));
    }

}
