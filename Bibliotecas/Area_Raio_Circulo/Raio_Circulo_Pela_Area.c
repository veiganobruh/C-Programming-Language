// Incluido a biblioteca
//Alterar o link da biblioteca para o diret�rio correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Area_Raio_Circulo\Raio_Circulo_Pela_Area.h"
#include <math.h>

// definido constante
#define PI 3.141592

// fun��o - Achando a area do circulo pelo raio

float Raio_Circulo_Pela_Area(float AREA){
    float RAIO;
    RAIO = sqrt(AREA / PI );
    return RAIO;
}

