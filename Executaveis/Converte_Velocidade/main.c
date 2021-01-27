//Incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\ConverteVelocidade\Velocidade_ms.h"
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\ConverteVelocidade\Velocidade_Km.h"
int main()
{

    float vel_km,vel_ms; // declarando as variaveis
    printf("\n\n\t\t CONVERSAO DE Km/h para m/s");
    printf("\n\nVelocidade em Km:");
    scanf("%f",&vel_km);
    printf("\nVelocidade em m/s:%f",Velocidade_ms(vel_km)); // fazendo a conversão de Km/h para m/s

    printf("\n\n\n\t\t CONVERSAO DE m/s para Km/h");
    printf("\n\nVelocidade em m/s:");
    scanf("%f",&vel_ms);
    printf("\nVelocidade em Km/h:%f",Velocidade_Km(vel_ms));// fazendo a conversão de  m/s para km/h

    printf("\n\n");
    system("pause");
    return 0;
}
