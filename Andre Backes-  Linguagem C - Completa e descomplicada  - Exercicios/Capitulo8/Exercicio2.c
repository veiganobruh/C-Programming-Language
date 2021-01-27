#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct coordenada{
    float x;
    float y;
};
int main(){
    struct coordenada cardesiana;
    float distancia;
    printf("INSIRA AS COORDENANDAS\n\n ");
    printf("X : ");
    scanf("%f",&cardesiana.x);
    printf("\nY : ");
    scanf("%f",&cardesiana.y);

    distancia = sqrt((pow(cardesiana.x,2))+pow(cardesiana.y,2));
    printf("\n\nDISTANCIA: %f", distancia);


    return 0;
}
