#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char b,c,d;
    setlocale(LC_ALL,"ptb");
   
    printf("DIGITE TRÊS CARACTERES: ");
    scanf("%c%c%c",&b,&c,&d);
    printf("\nCarater:\n%c\n%c\n%c\n",b,c,d);


    return 0;
}
