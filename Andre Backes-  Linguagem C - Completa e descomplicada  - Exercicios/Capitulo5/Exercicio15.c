#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=0;
    float  num;
    float maior= 0, menor = 0;
    while(num>0)
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
        if ( num < menor && num>0 )
            menor = num;

        i++;
    }
    printf("Maior: %0.2f  e Menor: %0.2f",maior, menor);
    return 0;
}
