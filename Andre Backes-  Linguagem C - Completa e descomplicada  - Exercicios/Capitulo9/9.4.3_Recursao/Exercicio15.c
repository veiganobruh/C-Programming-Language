#include <stdio.h>
#include <stdlib.h>

float Harmonico(int numero);
int main()
{
    int numero;
    printf("Numero: ");
    scanf("%d",&numero);
    printf("Harmonico: %f",Harmonico(numero));
    return 0;
}
float Harmonico(int numero)
{

    if(numero == 1)
    {
        return (float)numero;
    }
    float soma;
    soma = (1/(float)numero);
    soma = soma + Harmonico(numero-1);
    return soma;
}
