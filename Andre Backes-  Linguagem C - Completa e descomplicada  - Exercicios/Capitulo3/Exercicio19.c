#include <stdio.h>

int main()
{
    unsigned int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    printf("\n\nOU EXCLUSIVO: %d\n", n1 ^ n2); //
    printf("\nOU BIT A BIT: %d\n", n1 | n2); //
    printf("\nE BIT A BIT: %d", n1 & n2); //
    return 0;
}
