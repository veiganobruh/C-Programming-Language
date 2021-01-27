#include<stdio.h>
#include<stdlib.h>

void Soma_Diagonal( int nl,int nc, float matriz[nl][nc],float *soma_principal, float *soma_secundaria);
void Imprimir ( int nl,int nc, float matriz[nl][nc]);
void Matriz (int nl, int nc, float matriz[nl][nc]);

int main()
{
    float matriz[6][6];
    float Principal=0,Secundaria=0;
    Matriz(6,6,matriz);
    printf("\n\n\t\tIMPRIMINDO A MATRIZ[6][6]\n\n");
    Imprimir(6,6,matriz);
    Soma_Diagonal(6,6,matriz,&Principal,&Secundaria);
    printf("\n\nSoma da Diagonal Principal: %f", Principal);
    printf("\nSoma da Diagonal Secundaria: %f", Secundaria);


    return 0;
}

void Soma_Diagonal( int nl,int nc, float matriz[nl][nc],float *soma_principal, float *soma_secundaria)
{
    int i,j;
    for(i=0; i<nl; i++)
    {
        for( j=0; j<nc; j++)
        {
            if ( i==j)
            {
                *soma_principal = *soma_principal + matriz[i][j];
            }
            if ((i+j)== nl-1)
            {
                *soma_secundaria = *soma_secundaria + matriz[i][j];
            }
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

void Matriz (int nl, int nc, float matriz[nl][nc])
{

    int i,j;

    for(i=0; i<nl; i++)
    {
        for( j=0; j<nc; j++)
        {
            matriz[i][j] = rand()%10;
        }
    }

}
