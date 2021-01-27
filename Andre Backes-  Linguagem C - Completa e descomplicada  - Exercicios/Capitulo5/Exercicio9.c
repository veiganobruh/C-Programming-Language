#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=0;
    float  num;
    float maior= 0, menor = 0;
    while(i<10)
    {
        printf("\nNumero %d: ",i);
        scanf("%f",&num);
        if ( i ==0){
            maior = num;
            menor = num;
            i++;
            continue;

        }
        if ( num > maior )
            maior = num;
        if ( num < menor )
            menor = num;

        i++;
    }
    printf("Maior: %f  e Menor: %f",maior, menor);
    return 0;
}
