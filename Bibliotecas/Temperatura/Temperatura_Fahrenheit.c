// incluido biblioteca
//Alterar o link da biblioteca para o diret�rio correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Temperatura\Temperatura_Fahrenheit.h"

// funcao transformando graus Celsius em Fahrenheit
float Transf_Celsius_em_Fahrenheit(float temperatura_celsius){
    int temperatura_fahrenheit;
    temperatura_fahrenheit = (temperatura_celsius*9.0/5.0)+32.0;

    return temperatura_fahrenheit;
}
