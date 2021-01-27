#include<stdio.h>
#include<stdlib.h>

int main()
{

    int variavel1, variavel2;
    int *p1, *p2;
    printf("Variavel 1: ");
    scanf("%d",&variavel1);
    printf("\nVariavel 2: ");
    scanf("%d",&variavel2);
    p1 = &variavel1;
    p2 = &variavel2;

    if (p1>p2)
    {
        printf("O Endereco da variavel 1 = %p eh o maior endereco",p1);
    }
    else
    {
        printf("O Endereco da variavel 2 = %p eh maior endereco",p2);
    }

    return 0;
}
