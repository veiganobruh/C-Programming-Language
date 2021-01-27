#include<stdio.h>
#include<stdlib.h>


void Matriz (int nl, int nc, float *matriz[nl][nc])
{

    int i,j;

    for(i=0; i<nl; i++)
    {
        for( j=0; j<nc; j++)
        {
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }

}
void Matriz_tranposta(int nl, int nc, float matriz[nl][nc], float matriz_trans[nc][nl])
{

    int i,j;

    for(i=0; i<nl; i++)
    {
        for( j=0; j<nc; j++)
        {
            matriz_trans[j][i] = matriz[i][j];
        }
    }

}
void Imprimir ( int nl,int nc, float matriz[nl][nc])
{
    int i;
    int j;

    for(i=0; i<nl; i++)
    {
        for( j=0; j<nc; j++)
        {
            printf("%0.2f\t",matriz[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    float matriz[5][5];
    float matriztransposta[5][5];

    Matriz(5,5,&matriz);
    printf("\n\n\t\tIMPRIMINDO A MATRIZ\n");
    Imprimir(5,5,matriz);
    Matriz_tranposta(5,5,matriz,matriztransposta);
    printf("\n\n\t\tIMPRIMINDO A MATRIZ TRANSPOSTA\n");
    Imprimir(5,5,matriztransposta);


    return 0;
}
