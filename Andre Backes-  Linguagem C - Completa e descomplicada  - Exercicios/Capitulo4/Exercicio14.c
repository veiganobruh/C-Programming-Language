#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if ((numero%3)== 0 )
        printf("Esse eh divisivel por 3");
    if ((numero%5) == 0 )
        printf("Esse eh divisivel por 5");
    return 0;
}
