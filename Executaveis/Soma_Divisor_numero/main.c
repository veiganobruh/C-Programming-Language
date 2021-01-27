// Incluindo a bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>


//Alterar o link da biblioteca para o diretório correspon
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Soma_Dos_Divisores_De_Um_Numero\Soma_Divisor.h"

int main()
{
    setlocale(LC_ALL,"ptb");
    int numero;
    while(1){
    setbuf(stdin,NULL);
    system("cls");
    printf("\n\n\t\t\t SOMA DE TODOS OS DIVISORES DE UM NÚMERO");
    printf("\n\nDIGITE O NÚMERO:");
    scanf("%d",&numero);
    Soma_divisor_Numero(numero);
    system("pause");
    }

    return 0;
}
