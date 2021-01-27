#include <stdio.h>
#include <stdlib.h>


int Fatorial ( int numero);
int main()
{
    int numero;
    printf("Numero: ");
    scanf("%d",&numero);

    printf("\n\nFatorial(%d): %d ",numero,Fatorial(numero));

    return 0;
}

int Fatorial ( int numero)
{
    int fat;

    if ( numero == 0 )
        return 1;
    fat = numero;
    fat = fat*Fatorial(numero-1);
    return fat;
}
