#include <stdio.h>
#include <stdlib.h>

// prototipo da função

void Matriz_Maior(int, int  );
int main()
{
    int l,c;
inicio:
    system("cls");
    printf("\n\n\n\t\tMATRIZ[L][C] --- MAIOR VALOR DA MATRIZ");
    printf("\n\nDIGITE O NUMERO DE LINHA DA MATRIZ:");
    scanf("%d",&l);
    printf("\n\nDIGITE O NUMERO DE COLUNA DA MATRIZ:");
    scanf("%d",&c);
    if ((l>0) && (c>0))
    {
        Matriz_Maior(l,c);
        system("pause");

    }
    else
    {
        printf("\n\nValores Invalidos! ");
        system("pause");
        goto inicio;
        return 0;
    }

    return 0;
}
void Matriz_Maior (int linha, int coluna )
{
    int i,j;
    float aux;
    float matriz[linha][coluna];
    int ValorI =0,ValorJ= 0;
    aux = matriz[0][0];
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("\nMatriz[%d][%d]:",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            if (matriz[i][j]>aux)
            {
                aux = matriz[i][j];
                ValorI = i;
                ValorJ = j;
            }
        }
    }
    printf("Maior numero da Matriz[%d][%d]:%f\n\n",ValorI,ValorJ,aux);

}
