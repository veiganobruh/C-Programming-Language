#include <stdio.h>
#include <stdlib.h>

float Serie( float numero);
int main()
{
    printf("%f",Serie(5));
    return 0;
}


float Serie( float numero){

    int i;
    float soma = 0;
    for (i=1;i<=numero;i++){
        soma = soma + ((numero*numero)+1)/(numero+3);
    }
    return soma;
}
