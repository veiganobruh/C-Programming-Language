#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct retangulo
{
    float x;
    float y;
};
int main()
{
    struct retangulo Superior_Esquerdo;
    struct retangulo Inferior_Direito;
    float a,b;

    printf("SUPERIOR ESQUERDO ");
    printf("\nX: ");
    scanf("%f",&Superior_Esquerdo.x);
    printf("\nY: ");
    scanf("%f",&Superior_Esquerdo.y);
    printf("\n\nINFERIOR DIREITO ");
    printf("\nX: ");
    scanf("%f",&Inferior_Direito.x);
    printf("\nY: ");
    scanf("%f",&Inferior_Direito.y);

    a = sqrt(pow(Superior_Esquerdo.x - Inferior_Direito.x,2));
    b = sqrt(pow(Superior_Esquerdo.y - Inferior_Direito.y,2));

    printf("\n\nAREA: %f\nCOMPRIMENTO DA DIAGONAL: %f\nPERIMETRO: %f",a*b,sqrt(pow(a,2)+pow(b,2)),(2*a+2*b));



    return 0;
}
