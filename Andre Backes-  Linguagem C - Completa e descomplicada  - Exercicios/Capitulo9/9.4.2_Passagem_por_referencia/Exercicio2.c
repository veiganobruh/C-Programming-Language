#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define PI 3.141592654

void Esfera( float raio, float *volume, float *area);
int main()
{
    float Raio, Area, Volume;
    printf("Digite o raio da esfera: ");
    scanf("%f",&Raio);
    Esfera(Raio,&Volume,&Area);
    printf("Volume: %f\nArea: %f",Volume,Area);

    return 0;
}

void Esfera( float raio, float *volume, float *area)
{

    *volume=4*PI*pow(raio,3)/3;
    *area = 4*PI*pow(raio,2);
}
