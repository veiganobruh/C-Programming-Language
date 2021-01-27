#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);
    if ( num1 == num2)
    {
        printf("Os dois numero sao iguais. ");
        return 0 ;
    }

    if ( num1> num2)
        printf("O primeiro numero eh o maior.");
    else
        printf("O segundo numero eh o maior.");
    return 0;
}
