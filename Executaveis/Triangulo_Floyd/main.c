// Incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

//Alterar o link da biblioteca para o diret�rio correspondente
#include"C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Traingulo_de_Floyd\Floyd.h"

void FLOYD(int );

int main()
{
    int numero;
    setlocale(LC_ALL,"ptb");
    while(1)
    {
        system("cls");
        printf("\n\n\t\t\t TRI�NGULO DE FLOYD");
        printf("\n\n\tDIGITE O N�MERO DE LINHA DO TRI�NGULO DE FLOYD: ");
        scanf("%d",&numero);
        printf("\n\n");
        FLOYD(numero);
        system("pause");
    }
    return 0;
}

