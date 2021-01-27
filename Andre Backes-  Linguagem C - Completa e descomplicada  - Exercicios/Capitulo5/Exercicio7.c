#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=0;
    float num;
    float soma = 0;
    while(i<10)
    {
        printf("\nNumero %d: ",i);
        scanf("%f",&num);
        soma = soma + num;
        i++;
    }
printf("Resultado da soma: %f",soma);
    return 0;
}
