#include<stdio.h>
#include<stdlib.h>


void Matriz (int nl, int nc, float matriz[nl][nc])
{

    int i,j;
    int contador = 1;

    for(i=0; i<nl; i++)
    {
        for( j=0; j<nc; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
    }

}
void Soma_Matriz(int nl, int nc, float matriz[nl][nc], float *soma)
{
    int i,j;

    for(i=0; i<nl; i++)
    {
        for( j=0; j<nc; j++)
        {
            *soma = *soma + matriz[i][j];
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
    float soma = 0;
    float matriz[10][10];
    Matriz(10,10,matriz);
    Soma_Matriz(10,10,matriz,&soma);
    printf("\n\n\t\tIMPRIMINDO A MATRIZ \n");
    Imprimir(10,10,matriz);
    printf("\n\nSoma: %f",soma);


    return 0;
}
