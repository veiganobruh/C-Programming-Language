#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero;
    setlocale(LC_ALL,"ptb");
    printf("Digite um Número Inteiro:");
    scanf("%d",&numero);
    printf("\nO número digitado foi: %d",numero);
    return 0;
}
