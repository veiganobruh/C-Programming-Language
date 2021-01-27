#include <stdio.h>
#include <stdlib.h>


int **Alocar( int linha, int coluna );
int** Deslocar(int **matriz, int linhas);
int** MULTC(int **matrizA,int **matrizB,int linhaA,int colunaA, int linhaB, int colunaB);


int main()
{
    int linhaA,linhaB,colunaA,colunaB;
    int i,j ;

    printf("\n\t\tMATRIZ A  \n");
    printf("Tamanho Linha A: ");
    scanf("%d",&linhaA);
    printf("\nTamanho Coluna A: ");
    scanf("%d",&colunaA);

    printf("\n\t\tMATRIZ B  \n");
    printf("Tamanho Linha B: ");
    scanf("%d",&linhaB);
    printf("\nTamanho Coluna B: ");
    scanf("%d",&colunaB);


    int **matrizc,**matrizb,**matriza;
    matriza = Alocar(linhaA,colunaA);
    matrizb = Alocar(linhaB,colunaB);


    printf("\n\t\tMATRIZ A  \n");
    for( i = 0; i < linhaA; i ++)
    {
        for ( j = 0 ; j< colunaA; j++)
        {
            printf("MatrizA[%d][%d]: ",i,j);
            scanf("%d",&matriza[i][j]);
        }

    }
    printf("\n\t\tMATRIZ A \n");
    for( i = 0; i < linhaB; i ++)
    {
        for ( j = 0 ; j< colunaB; j++)
        {
            printf("MatrizB[%d][%d]: ",i,j);
            scanf("%d",&matrizb[i][j]);
        }

    }

    printf("\n\tIMPRIMINDO MATRIZ A \n\n");
    for( i = 0; i < linhaA; i ++)
    {
        for ( j = 0 ; j< colunaA; j++)
        {
            printf("\t%d\t",matriza[i][j]);
        }
        printf("\n");
    }
    printf("\n\tIMPRIMINDO MATRIZ B\n\n");
    for( i = 0; i < linhaB; i ++)
    {
        for ( j = 0 ; j< colunaB; j++)
        {
            printf("\t%d\t",matrizb[i][j]);
        }
        printf("\n");
    }


    matrizc = MULTC(matriza,matrizb,linhaA,colunaA,linhaB,colunaB);
    if ( colunaA == linhaB)
    {
        printf("\n\tIMPRIMINDO MATRIZ C\n\n");
        for( i = 0; i < linhaA; i ++)
        {
            for ( j = 0 ; j< colunaB; j++)
            {
                printf("\t%d\t",matrizc[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Impossivel fazer o Calculo!");
    }

    matriza = Deslocar(matriza,linhaA);
    matrizb = Deslocar(matrizb,linhaB);
    matrizc = Deslocar(matrizc,linhaB);
    matriza = NULL;
    matrizb = NULL;
    matrizc = NULL;
    return 0;
}

int** MULTC(int **matrizA,int **matrizB,int linhaA,int colunaA, int linhaB, int colunaB)
{
    int **matrizC;
    int i,j,k;
    if ( colunaA != linhaB)
    {
        return matrizC;
    }

    matrizC = Alocar(linhaA,colunaB);

    for(i=0; i<linhaA; i++) // linha de A
    {
        for(j=0; j<linhaA; j++) // coluna de B
        {
            for(k=0; k<colunaA; k++)
            {
                matrizC[i][j]= matrizC[i][j]+(matrizA[i][k]*matrizB[k][j]);
            }
        }
    }

    return matrizC;
}
int **Alocar( int linha, int coluna )
{

    int **matriz;
    int i ;
    matriz = (int**)calloc(linha,sizeof(int*));

    if ( matriz == NULL)
    {
        printf("\nMemoria Insuficiente!");
        system("pause");
        exit(1);
    }
    for (i = 0; i< linha; i++)
    {
        matriz[i] = (int*)calloc(coluna,sizeof(int));
    }

    return matriz;
}
int** Deslocar(int **matriz, int linhas)
{
    int i;
    for(i = 0; i < linhas; i++)
        free(matriz[i]);
    free(matriz);
    return matriz;
}








