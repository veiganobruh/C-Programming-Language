#include <stdio.h>
#include <stdlib.h>


void Matriz(float *matriz,int linha, int coluna);
int main()
{

    int linha,coluna,i,j;
    printf("Linha: ");
    scanf("%d",&linha);
    printf("Coluna: ");
    scanf("%d",&coluna);
    float matriz[linha][coluna];
    for (i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("Matriz[%d][%d]:",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    printf("\n\n\t\t-------IMPRIMINDO A MATRIZ -----------\n\n");
    for (i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%0.2f\t",matriz[i][j]);
        }
        printf("\n");
    }
    Matriz(&matriz[0][0],linha,coluna);

    return 0;
}

void Matriz(float *matriz,int linha, int coluna)
{
    FILE *arquivo;
    int i,j;
    arquivo = fopen("matriz.txt","w+");
    if(arquivo == NULL)
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    for (i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            fprintf(arquivo,"%0.2f\n",matriz[i*coluna+j]);
        }
    }
    fclose(arquivo);
}
