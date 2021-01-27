#include <stdio.h>
#include <stdlib.h>
int Fibinacci ( int numero);

int main()
{

    int numero;
    printf("Numero: ");
    scanf("%d",&numero);

    printf("%d",Fibinacci(numero));

    return 0;
}

int Fibinacci ( int numero)
{
    if ( numero ==0 || numero ==1)
    {
        return numero;
    }
    return Fibinacci(numero-1)+Fibinacci(numero-2);
}
