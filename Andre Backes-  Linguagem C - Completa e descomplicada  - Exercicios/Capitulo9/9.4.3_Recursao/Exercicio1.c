#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float Soma_NCubos( int numero);
int main()
{
    float soma;
    int n;
    printf("Numero: ");
    scanf("%d",&n);
    soma = Soma_NCubos(n);
    printf("\n\nSoma = %f", soma);
    return 0;
}

float Soma_NCubos( int numero)
{
    float soma;
    if ( numero == 1 )
    {
        return soma = pow(numero,3);
    }
    else
    {
        soma = pow(numero,3);
        soma = soma + Soma_NCubos(numero-1);
        return soma;
    }
}
