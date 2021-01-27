#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=0;
    unsigned int num;
    float media, soma = 0, contador = 0;
    while(i<10)
    {
        printf("\nNumero %d: ",i);
        scanf("%d",&num);
        soma = soma + num;
        i++;
        contador = contador+1;
    }
printf("Resultado da media: %f",soma/contador);
    return 0;
}
