// Incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
// //Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Raizes_Equacao_Segundo_grau\Raizes.h"
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Raizes_Equacao_Segundo_grau\Delta.h"

int main()
{
    float A,B,C,DELTA;
    setlocale(LC_ALL,"ptb"); // Mudando o Teclado para ABNT
    do
    {
inicio:
        system("cls"); // Pausa o programa
        printf("\t\tCALCULANDO AS RAÍZES DA EQUAÇÃO DO SEGUNDO GRAU!\n\n\n"); // menu do programa
        printf("\t\nOBS:USAR VIRGULA PARA SEPARAR A CASA DECIMAL: 2,5 \n");
        printf("\n\tEQUAÇÃO GENERICA: Ax²+Bx¹+ C = 0 \n");
        printf("\t COEFICIENTES: A , B , C ");

        // Inserindo os coeficientes
        printf("\n\nDIGITE O COEFICIENTE A:");
        scanf("%f",&A);
        printf("\n\nDIGITE O COEFICIENTE B:");
        scanf("%f",&B);
        printf("\n\nDIGITE O COEFICIENTE C:");
        scanf("%f",&C);
        DELTA= Calculando_Delta(A,B,C); // chamando a função DElTa
        printf("\n\nDELTA:%f",DELTA);

        if(A!=0)  // condição para ver se exite raizes reais no sistema
        {
            if (DELTA<0.0)
            {
                printf("\n\nNÃO EXISTE RAIZES REAIS!\n\n");
            }
            else if(DELTA==0)
            {
                printf("\n\n\nRAIZES IGUAIS X1 = X2");
                Calculando_Raizes(A,B,DELTA);
            }
            else
            {
                Calculando_Raizes(A,B,DELTA);
            }
            system("pause");
        }
    }
    while (A != 0 );
    printf("\n\nNÃO É UMA EQUAÇÃO DE SEGUNDO GRAU\n\n");
    system("pause");
    goto inicio;
    return 0;
}
