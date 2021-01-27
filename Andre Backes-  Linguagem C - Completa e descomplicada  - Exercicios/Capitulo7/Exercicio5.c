#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[30], aux[30];
    int i,contador =0 ;
    printf("DIGITE UMA STRING: ");
    setbuf(stdin,NULL);
    gets(a);
    for(i=strlen(a)-1; i>=0; i--){
        aux[contador]= a[i];
        contador++;
    }
    aux[contador]='\0';
    strcpy(a,aux);
    printf("\nSTRING: %s",a);

    return 0;
}
