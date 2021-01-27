#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;
    printf("DIGITE UM NUMERO: ");
    scanf("%f",&numero);
    if ( numero>= 0 ){
        printf("Numero ao quadrado: %f ",pow(numero,2));
        printf("\nRaiz quadrada: %f", sqrt(numero));
    }else {
        printf("Numero Negativo. Invalido!");
    }

    return 0;
}
