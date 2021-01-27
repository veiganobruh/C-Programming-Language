#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    char palavra1[50],palavra2[30], aux[30];
    char *p1,*p2,*p3;

    p1 = &palavra1;
    p2 = &palavra2;
    p3 = &aux;


    printf("STRING 1: ");
    gets(palavra1);
    printf("\n\nSTRING 2: ");
    gets(palavra2);

    for(i=0, j=0; *(p1+i)!='\0'; i++)  // fazer uma varredura na palavra1
    {

        while((*(p1+i)!=' ')&&(*(p1+i)!='\0'))  // Quebrando as palavras  e armazenando em uma variavel aux
        {

            *(p3+j)=*(p1+i);
            j++;
            i++;

        }
        *(p3+j)='\0'; // indicando o final da palavra

        if (strcmp(p3,p2)==0)  // faz a comparação das palavras
        {
            printf("\n\nSTRING2 2 ESTA CONTIDA NA STRING 1");
            return 0;
        }
        else
        {
            j=0; // caso for diferente volta para o laço "for" com o indice i na mesma posição e com o j = 0;
        }

    }

    printf("\n\nSTRING2 2 NAO ESTA CONTIDA NA STRING 1"); //

    return 0;
}
