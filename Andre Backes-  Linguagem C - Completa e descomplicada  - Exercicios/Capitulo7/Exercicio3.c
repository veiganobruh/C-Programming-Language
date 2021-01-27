#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[30];
    int i,contador =0 ;
    printf("DIGITE UMA STRING: ");
    setbuf(stdin,NULL);
    gets(a);

    for(i=0; (a[i]!='\0'); i++)
    {
        if( a[i]==' ')
            contador--;

        contador++;
    }
    printf("\nQUANTIDADE DE CARACTERES: %d",contador);
    return 0;
}
