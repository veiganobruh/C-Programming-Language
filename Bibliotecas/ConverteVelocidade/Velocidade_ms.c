// incluindo biblioteca
//Alterar o link da biblioteca para o diret�rio correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\ConverteVelocidade\Velocidade_ms.h"

// fun��o
float Velocidade_ms(float vel_km){
    float vel_ms;
    vel_ms = vel_km/3.60; // convertendo de km/h para m/s
    return vel_ms;
}

