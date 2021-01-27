// Incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Alterar o link da biblioteca para o diretório correspon
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Area_Raio_Circulo\Area_Circulo_Pelo_Raio.h"
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Area_Raio_Circulo\Raio_Circulo_Pela_Area.h"



int main()
{
    float raio,area;

    printf("\n\n\t\t\tMENU - ENCONTRAR AREA \n\n\nInforme o Raio do Circulo:");
    scanf("%f",&raio);
    printf("\nCalculando a Area do Circulo: %f",Area_Circulo_Pelo_Raio(raio));
    printf("\n\n\nENCONTRAR RAIO\n\nInforme a Area do Circulo:");
    scanf("%f",&area);
    printf("\nCalculando o Raio do Circulo: %f",Raio_Circulo_Pela_Area(area));
    printf("\n\n");
    system("pause");

    return 0;
}

