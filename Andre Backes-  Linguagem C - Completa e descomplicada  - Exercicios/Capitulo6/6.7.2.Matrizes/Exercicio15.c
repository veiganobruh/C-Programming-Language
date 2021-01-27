
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prototipo da função


int main()
{
    int LA,CA,LB,CB,LC,CC;
    int i,j,k;
    setlocale(LC_ALL,"ptb");
inicio:
    system("cls");
    printf("\n\n\n\t\tMULTIPLICAÇÃO DA MATRIZ -- C = BxA");
    printf("\n\nDIGITE O NÚMERO DE LINHA DA MATRIZ A:");
    scanf("%d",&LA);
    printf("\nDIGITE O NÚMERO DE COLUNA DA MATRIZ A:");
    scanf("%d",&CA);
    float matrizA[LA][CA];
    if ((LA>0) && (CA>0))
    {
        for(i=0; i<LA; i++)
        {
            for(j=0; j<CA; j++)
            {

                printf("\nMatriz A[%d][%d]:",i,j);
                scanf("%f",&matrizA[i][j]);
            }
        }
        printf("\n\n\n\t\t\t--- MATRIZ A -----\n\n");
        for(i=0; i<LA; i++)
        {
            for(j=0; j<CA; j++)
            {
                printf("\t %f:",matrizA[i][j]);
            }
            printf("\n");
        }

        printf("\n\nDIGITE O NÚMERO DE LINHA DA MATRIZ B:");
        scanf("%d",&LB);
        printf("\nDIGITE O NÚMERO DE COLUNA DA MATRIZ B:");
        scanf("%d",&CB);
        float matrizB[LB][CB];
        float matrizC[LA][CB];
        if ((LB>0)&&(CB>0))
        {
            if(CA==LB)
            {

                for(i=0; i<LB; i++)
                {
                    for(j=0; j<CB; j++)
                    {
                        printf("\nMatriz B[%d][%d]:",i,j);
                        scanf("%f",&matrizB[i][j]);
                    }
                }
                printf("\n\n\n\t\t\t--- MATRIZ B -----\n\n");
                for(i=0; i<LB; i++)
                {
                    for(j=0; j<CB; j++)
                    {
                        printf("\t %f:",matrizB[i][j]);
                    }
                    printf("\n");
                }
                for(i=0; i<LA; i++)
                {
                    for(j=0; j<CB; j++)
                    {
                        matrizC[i][j]= 0;
                    }
                }
                for(i=0; i<LA; i++) // linha de A
                {
                    for(j=0; j<CB; j++) // coluna de B
                    {
                        for(k=0; k<CA; k++)
                        {
                            matrizC[i][j]= matrizC[i][j]+(matrizA[i][k]*matrizB[k][j]);
                        }
                    }
                }
                printf("\n\n\n\t\t\t--- MATRIZ C = MATRIZA X MATRIZB  -----\n\n");
                for(i=0; i<LA; i++)
                {
                    for(j=0; j<CB; j++)
                    {
                        printf("\t %f:",matrizC[i][j]);
                    }
                    printf("\n");
                }

            }
            else
            {
                printf("\n\nIMPOSSIVEL FAZER MULTIPLICACAO COM ESSAS MATRIZES!");
                system("pause");
                goto inicio;
            }
        }
        else
        {
            printf("\n\nVALORES INVÁLIDOS! ");
            system("pause");
            goto inicio;
        }
    }
    else
    {
        printf("\n\nVALORES INVÁLIDOS! ");
        system("pause");
        goto inicio;
    }

    return 0;
}


