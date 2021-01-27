#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char palavra1[100];
    printf("FRASE: ");
    gets(palavra1);
    for(i=0; palavra1[i]!='\0'; i++)
    {
        if(palavra1[i]!=' ')
            palavra1[i]=palavra1[i]+3;

    }
    palavra1[i]='\0';
    printf("\n\n%s",palavra1);

    return 0;
}
