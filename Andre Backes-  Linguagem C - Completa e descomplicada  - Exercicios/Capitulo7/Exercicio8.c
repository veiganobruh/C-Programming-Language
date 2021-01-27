#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    char palavra1[50],palavra2[30], aux[30];

    printf("STRING 1: ");
    gets(palavra1);
    printf("\n\nSTRING 2: ");
    gets(palavra2);

    for(i=0, j=0; palavra1[i]!='\0'; i++)  // fazer uma varredura na palavra1
    {

        while((palavra1[i]!=' ')&&(palavra1[i]!='\0'))  // Quebrando as palavras  e armazenando em uma variavel aux
        {

            aux[j]=palavra1[i];
            j++;
            i++;

        }
        aux[j]='\0'; // indicando o final da palavra

        if (strcmp(aux,palavra2)==0)  // faz a comparação das palavras
        {
            printf("\n\nSTRING2 2 ESTA CONTIDA NA STRING 1");
            return 0;
        }
        else
        {
            j=0; // caso for diferente volta para o laço "for" com o indice i na mesma posição e com o j = 0;
        }

    }

    printf("\n\nSTRING2 2 NAO ESTA  CONTIDA NA STRING 1"); //

    return 0;
}
