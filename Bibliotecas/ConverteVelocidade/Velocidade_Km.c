// incluindo biblioteca
//Alterar o link da biblioteca para o diret�rio correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\ConverteVelocidade\Velocidade_Km.h"

// fun��o
float Velocidade_Km(float vel_ms){
    float vel_km;
    vel_km = vel_ms*3.60; // convertendo de m/s para Km/h
    return vel_km;
}
