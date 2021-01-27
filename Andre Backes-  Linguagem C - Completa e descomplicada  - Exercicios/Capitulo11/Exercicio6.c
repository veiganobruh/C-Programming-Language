#include <stdio.h>
#include <stdlib.h>


int Matriz(int numero, int linha, int coluna, int *matriz ) ;

int main()
{
    int Linha, Coluna,i,j;
    int procura;
    int *matriz;
    printf("Tamanho Linhas: ");
    scanf("%d",&Linha);
    printf("\nTamanho Colunas: ");
    scanf("%d",&Coluna);

    matriz = (int*)calloc(Linha*Coluna,sizeof(int));
    printf("\n\t\tMATRIZ\n\n");
    for ( i = 0; i < Linha ; i++)
    {
        for ( j = 0; j < Coluna ; j++)
        {
            printf("\nMatriz[%d][%d]: ",i, j);
            scanf("%d",&matriz[i*Coluna+j]);
        }
    }
    printf("\n\n\t\tIMPRIMINDO\n\n");
    for ( i = 0; i < Linha ; i++)
    {
        for ( j = 0; j < Coluna ; j++)
        {
            printf("\t%d\t", matriz[i*Coluna+j]);
        }
        printf("\n");
    }

    printf("Procura Numero: ");
    scanf("%d",&procura);

    if ( Matriz(procura,Linha,Coluna,matriz) == 1 )
    {
        printf("\n\nVALOR CONTIDO!\n");
    }
    else
    {
        if ( Matriz(procura,Linha,Coluna,matriz) == 0 )
            printf("\n\nVALOR NAO CONTIDO!\n");
    }
    return 0;
}

int Matriz(int numero, int linha, int coluna, int *matriz )
{

    int i, j ;
    int aux = 0 ;
    for ( i = 0; i < linha ; i++)
    {
        for ( j = 0; j < coluna ; j++)
        {
            if ( matriz[i*coluna+j] == numero)
            {
                aux = 1 ;

            }
        }
    }
    return aux;
}
