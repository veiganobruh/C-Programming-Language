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
    float x,y;


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
    printf("\n\n--------PONTO-------------\n\n");
    printf("\nX: ");
    scanf("%f",&x);
    printf("\nY: ");
    scanf("%f",&y);
    if ( (x>= Superior_Esquerdo.x)&&(x<=Inferior_Direito.x)&&(y<= Superior_Esquerdo.y)&&(y>=Inferior_Direito.y) )
    {
        printf("\n\nCOORDENADA(%f,%f) ESTA CONTIDA NO RETANGULO",x,y);
    }
    else
    {
        printf("\n\nCOORDENADA(%f,%f) NAO PERTENCE AO RETANGULO",x,y);
    }
    return 0;
}
