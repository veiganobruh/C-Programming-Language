// incluindo biblioteca
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Contagem_Regressiva\Espera.h"

// Função - Esperar a contagem do clock
void ESPERA_SEGUNDO(int Segundos)
{
    // declarando a variavel para fazer a contagem dos segundos
    // clock_t - tipo capaz de representar as contagens clock e suportar operações aritméticas
    clock_t FimClock;
    // Atribuindo na variavel a espera do segundos;
    //clock() - variaveis capaz de fazer contagem e suportar operações
    //CLOCKS_PER_SEC - numeros de pulso de clock em um segundo;
    FimClock = clock()+ Segundos*CLOCKS_PER_SEC;
    while(clock()<FimClock) {}
}
