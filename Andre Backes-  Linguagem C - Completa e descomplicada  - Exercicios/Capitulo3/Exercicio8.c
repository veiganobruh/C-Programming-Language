#include <stdio.h>
#include <stdlib.h>

#include "C:\Users\Other\Documents\Programa LinguagemC\Bibliotecas\Temperatura\Temperatura_Fahrenheit.h"
#include "C:\Users\Other\Documents\Programa LinguagemC\Bibliotecas\Temperatura\Temperatura_Celsius.h"

int main()
{
    float Temp_F,Temp_C;
    printf("\n\nDigite a temperatura em Graus Celsius em [C]:");
    scanf("%f",&Temp_C);
    printf("\nTransformando Grau Celsius para Fahrenheit: %f[F]",Transf_Celsius_em_Fahrenheit(Temp_C));

    printf("\n\n\n\nDigite a temperatura em Fahrenheit em [F]:");
    scanf("%f",&Temp_F);
    printf("\nTransformando Fahrenheit em Graus Celsius: %f[C]",Transf_Fahrenheit_em_Celsius(Temp_F));


    return 0;
}


