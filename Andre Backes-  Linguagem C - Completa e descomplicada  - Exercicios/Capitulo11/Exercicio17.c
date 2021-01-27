#include <stdio.h>
#include <stdlib.h>


int* SOMAB(int *matriz, int N);

int main()
{
    int tamanho;
    int i,j ;
    int *vetorc;

    printf("Tamanho : ");
    scanf("%d",&tamanho);
    int matriz[tamanho][tamanho];
    int Vetor[tamanho];


    printf("\n\t\tMATRIZ \n");
    for( i = 0; i < tamanho; i ++)
    {
        for ( j = 0 ; j< tamanho; j++)
        {
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }

    }
    printf("\n\t\tIMPRIMINDO A MATRIZ \n");
    for( i = 0; i < tamanho; i ++)
    {
        for ( j = 0 ; j< tamanho; j++)
        {
            printf("\t%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    vetorc = SOMAB(&matriz,tamanho);

    printf("\n\n\t\tIMPRIMINDO\n\n");
    for( i = 0; i < tamanho; i ++)
    {
        printf("\nC[%d]: %d",i,vetorc[i]);
    }
    free(vetorc);
    vetorc = NULL;
    return 0;

}

int* SOMAB(int *matriz, int N)
{
    int i,j;
    int *C;

    C = (int*)calloc(N,sizeof(int));
    if ( C == NULL )
    {

        printf("\nMemoria Insuficiente!");
        system("pause");
        exit(1);
    }
    for( j = 0; j < N; j++)
    {
        for ( i = 0 ; i < N ; i++)
        {

            C[i] += matriz[j*N+i];
        }
    }
    return C;
}

