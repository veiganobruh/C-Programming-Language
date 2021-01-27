#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char palavra1[50];
    printf("STRING 1: ");
    gets(palavra1);
    for ( i=0; palavra1[i]!='\0'; i++)
    {
        if ( palavra1[i]==' ')
            i++;
        palavra1[i]=palavra1[i]+32;
    }
    palavra1[i]='\0';
    printf("\n\n%s",palavra1);

    return 0;
}
C