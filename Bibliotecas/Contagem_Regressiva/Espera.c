// incluindo biblioteca
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

//Alterar o link da biblioteca para o diret�rio correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Contagem_Regressiva\Espera.h"

// Fun��o - Esperar a contagem do clock
void ESPERA_SEGUNDO(int Segundos)
{
    // declarando a variavel para fazer a contagem dos segundos
    // clock_t - tipo capaz de representar as contagens clock e suportar opera��es aritm�ticas
    clock_t FimClock;
    // Atribuindo na variavel a espera do segundos;
    //clock() - variaveis capaz de fazer contagem e suportar opera��es
    //CLOCKS_PER_SEC - numeros de pulso de clock em um segundo;
    FimClock = clock()+ Segundos*CLOCKS_PER_SEC;
    while(clock()<FimClock) {}
}
