// incluindo biblioteca
#include <math.h>
//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Raizes_Equacao_Segundo_grau\Raizes.h"

// funcao - calculando as raizes reais
void Calculando_Raizes(float a, float b, float delta)
{
    float x1,x2;

    if (delta == 0)
    {
        x1 = -b/(2*a);
        x2 = x1;
        printf("\nRAIZES X1 = %f  E  X2 = %f\n\n",x1,x2);
    }
    else
    {
        x1= (-b+sqrt(delta))/(2*a);
        x2= (-b-sqrt(delta))/(2*a);
        printf("\n\nRAIZES X1 = %f  E  X2 = %f\n\n",x1,x2);

    }
    return 0;
}
