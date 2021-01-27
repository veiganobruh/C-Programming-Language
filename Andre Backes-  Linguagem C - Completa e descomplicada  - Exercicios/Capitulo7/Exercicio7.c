#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[30],aux[30];
    int i,contador=0;
    printf("PALAVRA: ");
    gets(palavra);
    for (i=strlen(palavra)-1; i>=0; i--)
    {
        aux[contador]=palavra[i];
        contador++;
    }
    aux[contador]='\0';
    if ( strcmp(palavra,aux)==0)
    {
        printf("\n\nPALAVRA %s EH PALINDROMO!",aux);
    }
    else
    {
        printf("\n\nPALAVRA %s NAO EH PALINDROMO!",palavra);
    }
    return 0;
}
