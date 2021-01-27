#include <stdio.h>
#include <stdlib.h>

int Numero_Naturais( int numero);

int main()
{
    int n;
    printf("Numero: ");
    scanf("%d",&n);

    Numero_Naturais(n);
    return 0;
}

int Numero_Naturais( int numero)
{
    if ( numero == 0 )
    {
        printf("%d",numero);
    }
    else
    {
        Numero_Naturais(numero-1);
        printf("\t%d",numero);
    }

}
