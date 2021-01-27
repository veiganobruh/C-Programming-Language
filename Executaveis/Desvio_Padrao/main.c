//Incluindo a biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Alterar o link da biblioteca para o diretório correspondente
#include"C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\DesvioPadrao\DesvioPadrao.h"

int main()
{
    int n;
inicio:
    printf("\n\n\t\tQUANTIDADE DE NUMERO QUE SERA INSERIDO: ");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("\n\n\n\t\t\t  DESVIO PADRAO: %f\n\n",DESVIOPADRAO(n));
    }
    else
    {
        printf("\n\nNUMERO INVALIDO!");
        goto inicio;
    }
    system("pause");
    return 0;
}
