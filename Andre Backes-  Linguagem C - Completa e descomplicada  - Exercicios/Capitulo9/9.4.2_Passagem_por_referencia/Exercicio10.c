#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


void Polindromo( char *Ler, char *aux);

int main()
{
    setlocale(LC_ALL,"ptb");
    while(1)
    {
        char Ler[30]="",aux[30]="";
        char letra;
        system("cls");
        printf(" \n\n\t\t\t POLINDROMO É UM PALAVRA QUE TEM A PROPRIEDADE DE PODER \n\t\t\t SER LIDA TANTO DA DIRETA PARA ESQUERDA COMO DA\n\t\t\t ESQUERDA PARA A DIREITA.\n\n ");
        printf("\n\nDIGITE A PALAVRA: ");
        gets(Ler);
        printf("\n\nTAMANHO DA PALAVRA: %d LETRAS \n\n\n",strlen(Ler));
        Polindromo(&Ler,&aux);
        system("pause");
    }
    return 0;
}

void Polindromo( char *Ler, char *aux)
{

    int i,contador=0;
    for(i=(strlen(Ler)-1); i>=0; i--)
    {
        if(Ler[i]!='\0')
        {
            aux[contador] = Ler[i];
            contador++;
        }
    }

    aux[contador]='\0';
    for(i=0; Ler[i]!='\0'; i++)
    {
        printf("\t%c",Ler[i]);
    }
    printf("\n\n");
    for(i=0; aux[i]!='\0'; i++)
    {
        printf("\t%c",aux[i]);
    }
    if (strcmp(Ler,aux)==0)
    {
        printf("\n\nA PALAVRA %s É POLÍNDROMO\n\n",Ler);
    }
    else
    {
        printf("\n\nA palavra %s não é Políndromo\n\n", Ler);
    }

}
