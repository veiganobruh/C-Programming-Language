#include<stdio.h>
#include<stdlib.h>

int* Matriz ( int N );

int main()
{
    int i,j, tamanho;
    int *m;
    printf("Valor de Linha e Colunas: ");
    scanf("%d",&tamanho);
    m = Matriz(tamanho);

    for (i=0; i<tamanho; i++)
    {
        for (j=0; j<tamanho; j++)
        {
            printf("\t%d\t",m[i*tamanho + j]);
        }
        printf("\n");
    }
    free(m);
    m = NULL;

    return 0;
}

int* Matriz ( int N )
{
    int i,j;
    int *matriz;

    matriz = (int*)malloc(N*N*sizeof(int));
    if ( matriz == NULL)
    {
        printf("\nMemoria Insulficiente!");
        system("pause");
        exit(1);
    }
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            if ( (i+j) == N -1  )
            {

                matriz[i*N+j] =  1;

            }
            else
            {

                matriz[i*N+j] =  0;
            }

        }
    }

    return matriz;
}
