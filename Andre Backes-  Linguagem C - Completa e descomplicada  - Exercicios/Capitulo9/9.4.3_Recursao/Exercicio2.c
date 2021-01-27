#include <stdio.h>
#include <stdlib.h>


int Somatorio( int numero);
int main()
{
    int soma ;
    int n;
    printf("Numero: ");
    scanf("%d",&n);
    soma = Somatorio(n);
    printf("\n\nSomatorio: %d",soma);
    return 0;
}

int Somatorio( int numero)
{
    float soma;
    if ( numero == 1)
    {
        return 1;
    }
    else
    {
        soma = numero + Somatorio(numero-1);
        return soma;
    }
}
