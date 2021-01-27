#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[3][3],soma[3]= {0,0,0};
    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("MATRIZ[%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);

        }

    }
printf("\n\n\t-----------MATRIZ---------------\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%0.1f\t",matriz[i][j]);
            soma[j]=soma[j]+matriz[i][j];
        }
        printf("\n");
    }
    printf("\n\n\t----------VETOR GERADO-------------\n\n");
    i = 0;
    while ( i<3){
        printf("%f\t",soma[i]);
        i++;
    }
    return 0;
}
