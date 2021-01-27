#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char a;
    setlocale(LC_ALL,"ptb");
    printf("Digite um caracter:");
    scanf("%c",&a);
    printf("\"%c\"",a);

    return 0;
}
