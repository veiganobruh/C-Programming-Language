#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, peso;
    printf("DIGITE ALTURA: ");
    scanf("%f",&altura);
    printf("\nDIGITE O PESO: ");
    scanf("%f",&peso);


    if(altura<1.2){
        if (peso<=60)
            printf("A");
        if ((peso>60)&&(peso<=90))
            printf("B");
        if (peso>90)
            printf("G");
        }

    if((altura>=1.2)&&(altura<=1.7)){
        if (peso<=60)
            printf("B");
        if ((peso>60)&&(peso<=90))
            printf("E");
        if (peso>90)
            printf("H");
    }

    if(altura>1.7){
        if (peso<=60)
            printf("C");
        if ((peso>60)&&(peso<=90))
            printf("F");
        if (peso>90)
            printf("I");

    }



return 0;
}


