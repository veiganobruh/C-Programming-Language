
// incluido a biblioteca
#include <stdio.h>
#include <stdlib.h>

//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Contagem_Regressiva\Contador.h"
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Contagem_Regressiva\Espera.h"

// função- Fazendo a contagem regressiva
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
