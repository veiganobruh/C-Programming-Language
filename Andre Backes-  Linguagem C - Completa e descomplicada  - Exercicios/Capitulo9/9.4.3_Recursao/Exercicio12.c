#include <stdio.h>
#include <stdlib.h>


void Conversao_Para_Binario ( int numero);
int main()
{

    int numero;
    printf("Numero: ");
    scanf("%d",&numero);
    Conversao_Para_Binario(numero);
    return 0;
}

void Conversao_Para_Binario ( int numero)
{

    if ( numero == 1)
    {
        printf("%d",numero%2);
        return 0;
    }
    Conversao_Para_Binario(numero/2);
    printf("%d",numero%2);
}
