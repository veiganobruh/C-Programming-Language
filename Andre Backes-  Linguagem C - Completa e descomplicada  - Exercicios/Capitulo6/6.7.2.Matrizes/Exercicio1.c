#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[3][3],aux;
    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("MATRIZ[%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);

        }

    }
    aux = matriz[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if ( aux > matriz[i][j])
            {
                aux = matriz[i][j];
            }
        }

    }
    printf("\n\n\t MENOR VALOR DA MATRIZ: %f",aux);
    return 0;
}
