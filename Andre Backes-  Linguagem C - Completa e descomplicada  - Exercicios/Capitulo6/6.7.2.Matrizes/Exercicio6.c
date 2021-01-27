#include <stdio.h>
#include <stdlib.h>

// prototipo da função

void Matriz_Soma_Diagonal(int, int  );
int main()
{
    int l,c;
inicio:
    system("cls");
    printf("\n\n\n\t\tMATRIZ[L][C] --- NUMERO DE LINHA = NUMERO DE COLUNA ");
    printf("\n\nDIGITE O NUMERO DE LINHA DA MATRIZ:");
    scanf("%d",&l);
    printf("\n\nDIGITE O NUMERO DE COLUNA DA MATRIZ:");
    scanf("%d",&c);
    if ((l>0) && (c>0)&&(c==l))
    {
        printf("\n\n \t----------MATRIZ-------------\n\n");
        Matriz_Soma_Diagonal(l,c);
        printf("\n\n");
        system("pause");

    }
    else
    {
        printf("\n\nValores Invalidos!\n\n");
        system("pause");
        goto inicio;
        return 0;
    }

    return 0;
}
void Matriz_Soma_Diagonal(int linha, int coluna )
{
    int i,j;
    float matriz[linha][coluna],soma;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("MATRIZ[%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    printf("\n\n\t--------MATRIZ------------\n\n");
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%f\t",matriz[i][j]);
            if ( i == j )
            {
                soma = soma + matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("\n\n\nSOMA DA DIAGONAL PRINCIPAL: %f",soma);

}

