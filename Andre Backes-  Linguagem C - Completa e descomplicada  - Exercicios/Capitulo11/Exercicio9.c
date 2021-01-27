#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* inverter();
int main()
{

    char *letra;

    letra = inverter();
    printf("%s",letra);
    free(letra);
    letra = NULL;
    return 0;
}

char* inverter()
{
    char *palavra, aux[30];
    int i,contador =0 ;
    palavra = (char*)malloc(30*sizeof(char));
    if (palavra == NULL)
    {
        printf("\nMemoria Insuficiente !\n");
        system("pause");
        exit(1);
    }
    printf("\nDIGITE UMA STRING: ");
    setbuf(stdin,NULL);
    gets(palavra);
    for(i=strlen(palavra)-1; i>=0; i--)
    {
        aux[contador]= palavra[i];
        contador++;
    }
    aux[contador]='\0';
    strcpy(palavra,aux);
    return palavra;
}
