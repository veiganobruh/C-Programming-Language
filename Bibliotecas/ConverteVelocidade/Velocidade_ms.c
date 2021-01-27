// incluindo biblioteca
//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\ConverteVelocidade\Velocidade_ms.h"

// função
float Velocidade_ms(float vel_km){
    float vel_ms;
    vel_ms = vel_km/3.60; // convertendo de km/h para m/s
    return vel_ms;
}

