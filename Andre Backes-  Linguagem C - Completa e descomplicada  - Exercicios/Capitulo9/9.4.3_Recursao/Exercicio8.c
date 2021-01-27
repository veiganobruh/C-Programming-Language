#include <stdio.h>
#include <stdlib.h>

float Mulplicacao_Por_Soma( int x, int y);
int main()
{
    int x,y;
    printf("Valor de X: ");
    scanf("%d",&x);
    printf("\nValor de Y: ");
    scanf("%d",&y);
    printf("\n\nResultado: %0.2f", Mulplicacao_Por_Soma(x,y));
    return 0;
}

float Mulplicacao_Por_Soma( int x, int y)
{

    float Mult;
    if ( y == 1 )
        return (float)x;
    Mult = (float)x;
    Mult = Mult + Mulplicacao_Por_Soma(x,y-1);
    return Mult;
}
