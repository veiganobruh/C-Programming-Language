#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float S(int numero);
int main()
{
    int numero;
    printf("Numero: ");
    scanf("%d",&numero);
    printf("S: %f",S(numero));
    return 0;
}
float S(int numero)
{

    if(numero == 1)
    {
        return (float)((1+pow(numero,2))/numero);
    }
    float soma;
    soma = (float)(1+pow(numero,2))/numero;
    soma = soma + S(numero-1);
    return soma;
}
