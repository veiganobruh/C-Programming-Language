// Incluido a Biblioteca
#include<locale.h>
//Alterar o link da biblioteca para o diret�rio correspondente
#include"C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Soma_Dos_Divisores_De_Um_Numero\Soma_Divisor.h"

//Funcao - Faz a soma dos divisores de um n�mero com exce��o dele pr�prio
void Soma_divisor_Numero(int a)
{
    setlocale(LC_ALL,"ptb"); // para colocar acento na palavra - Mudando o Teclado para ABNT
    int i;
    int soma=0;
    printf("\n\nDIVISOR DO N�MERO %d �",a);
    for(i=1; i<a; i++)
    {
        if((a%i)== 0)
        {
            printf(" %d ",i);
            soma =soma+i;
        }
    }
    printf(" = %d\n\n",soma);
}

