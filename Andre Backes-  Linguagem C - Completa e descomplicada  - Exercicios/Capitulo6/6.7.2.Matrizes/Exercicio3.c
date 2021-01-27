#include <stdio.h>
#include <stdlib.h>

// prototipo da função

void Matriz_Diagonal(int, int  );
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
        printf("\n\n \t----------MATRIZ-------------\n\n ");
        Matriz_Diagonal(l,c);
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
void Matriz_Diagonal(int linha, int coluna )
{
    int i,j;
    float matriz[linha][coluna];

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            if(i==j)
            {
                matriz[i][j]=1;
            }
            else
            {
                matriz[i][j]=0;
            }
        }
    }

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("\t%0.1f",matriz[i][j]);
        }
        printf("\n");
    }
}

