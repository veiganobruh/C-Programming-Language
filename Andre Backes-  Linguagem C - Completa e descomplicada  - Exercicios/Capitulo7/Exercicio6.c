#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[30],a;
    int i,contador =0;
    printf("STRING: ");
    gets(palavra);
    printf("\nDIGITE O CARACTER: ");
    scanf("%c",&a);
    for(i=0; palavra[i]!='\0'; i++)
    {
        if(( palavra[i]=='a')||(palavra[i]=='e')||(palavra[i]=='i')||(palavra[i]=='o')||(palavra[i]=='u')||( palavra[i]=='A')||(palavra[i]=='E')||(palavra[i]=='I')||(palavra[i]=='O')||(palavra[i]=='U'))
        {
            contador++;
            palavra[i]=a;
        }
    }
    printf("\n\nIMPRIMINDO A NOVA STRING: %s",palavra);
    printf("\nCONTADOR: %d",contador);
    return 0;
}
