//incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Fatorial\Fatorial.h"

int main()
{
    int i,n;
    float f,soma =0 ;
    printf("\n\n\t CALCULANDO: E = (1/1!) + (1/2!) + (1/3!) + (1/4!) +...+ (1/N!)\n\n\n");
    printf("\n\nDIGITE O NUMERO:");
    scanf("%d",&n);
    if (n>0)
    {
        for(i=1; i<=n; i++)
        {
            f = fatorial(i);
            soma = soma + 1/f;
        }
        printf("\n\n\t\tE = %0.6f\n\n",soma);
    }
    else
    {
        return 0;
    }

    return 0;
}


