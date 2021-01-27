#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[5][5],soma_principal=0,soma=0;
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
            if ( i==j)
                soma_principal = soma_principal + matriz[i][j];
            if ((i!=j)&&((j+i)!=4))
                soma = soma + matriz[i][j];
            printf("%0.1f\t",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSOMA DA DIAGONAL PRINCIPAL: %0.1f",soma_principal);
    printf("\n\nSOMA DOS ELEMENTOS QUE NAO PERTENCEM A NENHUMA DAS DIAGONAI: %0.1f",soma);
    printf("\n\n\nA DIFERENCA ENTRE SOMA DA DIAGONAL PRINCIPAL COM A SOMA DO ELEMENT0S QUE NAO PERTENCEM A NENHUMA DAS DIAGONAIS: %0.1f",soma_principal-soma);

    return 0;
}
