#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[5][5],soma=0;
    int i,j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("MATRIZ[%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);

        }

    }
    printf("\n\n\t-----------IMPRIMINDO A MATRIZ[5][5]---------------\n\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if (j>i){
                soma = soma + matriz[i][j];
            }
            printf("%0.1f\t",matriz[i][j]);
        }
        printf("\n");
    }
   printf("\n\n\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL: %f",soma);

    return 0;
}
