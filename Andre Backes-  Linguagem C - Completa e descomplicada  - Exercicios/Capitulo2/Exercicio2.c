#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero;
    setlocale(LC_ALL,"ptb");
    printf("Digite um N�mero Inteiro:");
    scanf("%d",&numero);
    printf("\nO n�mero digitado foi: %d",numero);
    return 0;
}
