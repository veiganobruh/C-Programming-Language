#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j, tamanho;
    int *matriz;

    printf("Valor de Linha e Colunas: ");
    scanf("%d",&tamanho);

    matriz = (int*)malloc(tamanho*tamanho*sizeof(int));
    if ( matriz == NULL)
    {
        printf("\nMemoria Insulficiente!");
        system("pause");
        exit(1);
    }
    for (i=0; i<tamanho; i++)
    {
        for (j=0; j<tamanho; j++)
        {
            if ( i == j )
            {

                matriz[i*tamanho+j] =  0;

            }
            if ( j>i )
            {

                matriz[i*tamanho+j] =  1;

            }
            if ( i > j )
            {

                matriz[i*tamanho+j] =  -1;

            }


        }
    }

    for (i=0; i<tamanho; i++)
    {
        for (j=0; j<tamanho; j++)
        {
            printf("\t  %d\t",matriz[i*tamanho + j]);
        }
        printf("\n");
    }
    free(matriz);
    matriz = NULL;

    return 0;
}
