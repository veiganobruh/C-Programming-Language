//Incluindo a biblioteca
#include <stdio.h>
#include <stdlib.h>

//Alterar o link da biblioteca para o diretório corresponte
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Sequencia_Fibonacci\Fibonacci.h"

int main()
{
    printf("\n\n\t\t SEQUENCIA DE FIBONACCI:");
    int numero;
inicio:
    printf("\n\nDIGITE UM NUMERO INTEIRO, MAIOR OU IGUAL A ZERO:");
    scanf("%d",&numero);
    if ((numero>=0)&(numero<48))
    {
        FIBONNACCI(numero);

    }
    else
    {
        printf("NUMERO INVALIDO!\n\n");
        system("pause");
        printf("\n");
        goto inicio;
    }
    printf("\n\n");
    system("pause");
    return 0;
}


