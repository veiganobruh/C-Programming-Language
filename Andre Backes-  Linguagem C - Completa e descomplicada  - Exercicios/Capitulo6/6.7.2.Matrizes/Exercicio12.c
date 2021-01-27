#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[6][6],soma=0;
    int i,j;

    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            printf("MATRIZ[%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);

        }

    }
    printf("\n\n\t-----------IMPRIMINDO A MATRIZ[6][6]---------------\n\n");
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if (j<i)
            {
                soma = soma + matriz[i][j];
            }
            printf("%0.1f\t",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\nSOMA DOS ELEMENTOS ABAIXO DA DIAGONAL PRINCIPAL: %f",soma);

    return 0;
}
