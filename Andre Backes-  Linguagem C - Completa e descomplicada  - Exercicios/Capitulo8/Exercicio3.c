#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct coordenada{
    float x;
    float y;
};
int main(){
    struct coordenada cardesiana1;
    struct coordenada cardesiana2;
    float distancia;
    printf("INSIRA AS COORDENANDAS DO PRIMEIRO PONTO\n");
    printf("X : ");
    scanf("%f",&cardesiana1.x);
    printf("\nY : ");
    scanf("%f",&cardesiana1.y);
    printf("\n\nINSIRA AS COORDENANDAS DO SEGUNDO PONTO\n");
    printf("X : ");
    scanf("%f",&cardesiana2.x);
    printf("\nY : ");
    scanf("%f",&cardesiana2.y);
    distancia = sqrt((pow(cardesiana2.x - cardesiana1.x,2))+pow(cardesiana2.y - cardesiana1.y,2));
    printf("\n\nDISTANCIA: %f", distancia);


    return 0;
}
