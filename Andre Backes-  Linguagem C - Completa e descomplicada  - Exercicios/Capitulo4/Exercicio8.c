#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade;
    printf("\n\nDIGITE A IDADE: ");
    scanf("%d",&idade);

    if((idade>=5)&&(idade<=7))
        printf("INFANTIL A");
    if ((idade>=8)&&(idade<=10))
        printf("INFANTIL B");
    if((idade>=11)&&(idade<=13))
        printf("JUVENIL A");
    if((idade>=14)&&(idade<=17))
        printf("JUVENIL B");
    if (idade>=18)
        printf("SENIOR");

    return 0;
}
