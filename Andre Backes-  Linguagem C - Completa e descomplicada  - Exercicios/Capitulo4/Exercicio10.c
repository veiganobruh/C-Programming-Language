#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1,num2,num3;
    int media;
    printf("\n\n\t\tMENU\n\n MEDIA: 1 - GEOMETRICA 2 - PONDERADA 3 - HARMONICA 4 - ARITMETICA");
    printf("\n\nDIGITE NUMERO1 : ");
    scanf("%f",&num1);
    printf("\nDIGITE NUMERO2 : ");
    scanf("%f",&num2);
    printf("\nDIGITE NUMERO3 : ");
    scanf("%f",&num3);

    printf("DIGITE O NUMERO DA MEDIA: ");
    scanf("%d",&media);

    if ( media == 1 )
    {
        printf("Media geometrica: %f ",num1*num2*num3);
    }
    if ( media == 2 )
    {
        printf("Media Ponderada: %f ",(num1+2*num2+3*num3)/6);
    }
    if ( media == 3 )
    {
        printf("Media harmonica: %f ",(1/((1/num1)+(1/num2)+(1/num3))));
    }
    if ( media == 4 )
    {
        printf("Media Aritmetica: %f ",(num1+num2+num3)/3);
    }
    return 0 ;
}



