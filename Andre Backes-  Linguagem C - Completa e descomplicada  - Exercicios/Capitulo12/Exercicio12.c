#include <stdio.h>
#include <stdlib.h>

void Vetor( float *vetor, int tamanho);
int main()
{

    int i, tamanho;
    float cont;
    printf("Tamanho: ");
    scanf("%d",&tamanho);

    float vetor[tamanho];
    for (i=0; i<tamanho; i++)
    {
        printf("Vetor[%d]:",i);
        scanf("%f",&vetor[i]);
    }

    printf("\n\n\t\t------------IMPRIMINDO O VETOR ------------\n\n");
    for (i=0; i<tamanho; i++)
    {
        printf("Vetor[%d]: %0.2f\n",i,vetor[i]);
    }

    Vetor(&vetor[0],tamanho);

    system("pause");
    return 0;
}

void Vetor( float *vetor, int tamanho)
{
    FILE *arquivo;
    int i;

    arquivo = fopen("vetor.txt","w+");
    if(arquivo == NULL)
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    for (i=0; i<tamanho; i++)
    {
        fprintf(arquivo,"%0.2f\n",vetor[i]);
    }

    fclose(arquivo);
}
