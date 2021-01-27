//Incluindo as bilbiotecas
#include <stdio.h>
#include <stdlib.h>

//Alterar o link da biblioteca para o diretório correspondente
#include"C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Harmonica\Harmonica.h"

float HARMONICA(int );
int main()
{
    int num;
    printf("\n\n\t\t\tNUMERO HARMONICO\n");
    printf("\t\t Hn = 1 + (1/2) + (1/3) + (1/4) + ...+ (1/n)\n\n");
    printf("\n\tDIGITE O ENESIMO TERMO DA SERIE HARMONICA:");
    scanf("%d",&num);
    printf("\n\n\t\t\tHn = %f",HARMONICA(num));
    return 0;
}

