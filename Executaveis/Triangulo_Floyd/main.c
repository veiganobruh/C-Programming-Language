// Incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

//Alterar o link da biblioteca para o diretório correspondente
#include"C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Traingulo_de_Floyd\Floyd.h"

void FLOYD(int );

int main()
{
    int numero;
    setlocale(LC_ALL,"ptb");
    while(1)
    {
        system("cls");
        printf("\n\n\t\t\t TRIÂNGULO DE FLOYD");
        printf("\n\n\tDIGITE O NÚMERO DE LINHA DO TRIÂNGULO DE FLOYD: ");
        scanf("%d",&numero);
        printf("\n\n");
        FLOYD(numero);
        system("pause");
    }
    return 0;
}

