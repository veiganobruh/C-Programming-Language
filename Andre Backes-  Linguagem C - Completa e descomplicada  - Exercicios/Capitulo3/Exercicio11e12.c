#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
int main()
{
    float raio1, raio2,altura,area_calculo,volume_calculo;
    printf("\n\nInforme o Raio do Circulo:");
    scanf("%f",&raio1);
    area_calculo = PI*raio1*raio1;
    printf("\nCalculando a Area do Circulo: %f",area_calculo);
    printf("\n\n\nInforme altura do cilindro circular:");
    scanf("%f",&altura);
    printf("\nInforme o raio do cilindro circular:");
    scanf("%f",&raio2);
    volume_calculo = PI*altura*raio2*raio2;
    printf("\nCalculando o Raio do Circulo: %f",volume_calculo);

    printf("pause");
    return 0;
}



