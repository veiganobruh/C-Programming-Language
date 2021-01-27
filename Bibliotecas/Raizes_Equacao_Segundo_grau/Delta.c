// incluindo a biblioteca
#include <math.h>
//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Raizes_Equacao_Segundo_grau\Delta.h"

// funcao- calculando o delta
float Calculando_Delta(float a, float b, float c)
{
    float delta;
    delta = pow(b,2)-(4*a*c);
    return delta;
}
