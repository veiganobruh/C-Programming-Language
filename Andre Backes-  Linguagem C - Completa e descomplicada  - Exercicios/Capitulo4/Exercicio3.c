#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num1);
    if ( (num1%2)== 0 )
        printf("Par");
    else
        printf("Impar");

    return 0;
}