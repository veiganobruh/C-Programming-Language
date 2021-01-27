#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>

void CONTAGEM_REGRESSIVA(void );
void ESPERA_SEGUNDO(int );

int main(){

    printf("\n\n\t\tCONTAGEM REGRESSIVA\n\n");
    system("pause");
    CONTAGEM_REGRESSIVA();
    return 0;
}

void CONTAGEM_REGRESSIVA(void )
{
    int i;
    for(i=10; i>=0; i--)
    {
        printf("\n\n\t\t\t%d",i);
        //1 segundo para retornar, ou seja, 1 segundo de espera
        ESPERA_SEGUNDO(1);
    }
    printf("\nFIM\n\n");

}
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

