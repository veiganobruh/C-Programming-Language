// Incluido a biblioteca
//Alterar o link da biblioteca para o diret�rio correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Temperatura\Temperatura_Celsius.h"

// Fun��o - transformando Fahrenheit em Graus Celsius

float Transf_Fahrenheit_em_Celsius(float t_fahrenheit){
    float t_celsius;
    t_celsius = ((t_fahrenheit - 32.0)*5.0)/9.0;
    return t_celsius;
}
