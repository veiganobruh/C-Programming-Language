// incluindo a biblioteca
//Alterar o link da biblioteca para o diretório correspondente
#include"C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Fatorial\Fatorial.h"

// funcao - Calculando o fatorial de um numero

float fatorial(int a)
{
    int i;
    float f=1;
    for(i=1; i<=a; i++)
    {
        f = i*f;
    }
    return f; // retornando o valor f
}

