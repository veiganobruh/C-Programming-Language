#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *b;
    int **c;
    int ***d;
    printf("Digite o valor: ");
    scanf("%d", &a);

    b = &a;
    *b = (*b)*2;
    printf("Dobro = %d\n",*b);
    *b = (*b)/2;
    c = &b;
    **c = (**c)*3;
    printf("Triplo = %d\n",**c);
    **c = (**c)/3;
    d = &c;
    ***d = (***d)*4;
    printf("Quadruplo = %d\n",***d);

    return 0;
}

