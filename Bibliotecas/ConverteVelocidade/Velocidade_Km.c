// incluindo biblioteca
//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\ConverteVelocidade\Velocidade_Km.h"

// função
float Velocidade_Km(float vel_ms){
    float vel_km;
    vel_km = vel_ms*3.60; // convertendo de m/s para Km/h
    return vel_km;
}
