// incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Temperatura\Temperatura_Fahrenheit.h"
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Temperatura\Temperatura_Celsius.h"

int main()
{
    float Temp_F,Temp_C; // declarando as variaveis
    printf("\n\n\t\t\t CONVERSO DE TEMPERATURA\n\n"); // MENU
    printf("\n\nDigite a temperatura em Graus Celsius em [C]:");
    scanf("%f",&Temp_C);
    printf("\nTransformando Grau Celsius para Fahrenheit: %f[F]",Transf_Celsius_em_Fahrenheit(Temp_C)); // transformando celso em fahrenheit

    printf("\n\n\n\nDigite a temperatura em Fahrenheit em [F]:");
    scanf("%f",&Temp_F);
    printf("\nTransformando Fahrenheit em Graus Celsius: %f[C]",Transf_Fahrenheit_em_Celsius(Temp_F));// transformando fahrenheit em celsus

    printf("\n\n");
    system("pause");
    return 0;
}




