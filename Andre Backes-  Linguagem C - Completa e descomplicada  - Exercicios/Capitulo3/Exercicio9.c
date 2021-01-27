#include <stdio.h>
#include <stdlib.h>

#include "C:\Users\Other\Documents\Programa LinguagemC\Bibliotecas\Angulo\Grau_Para_Radiano.h"
#include "C:\Users\Other\Documents\Programa LinguagemC\Bibliotecas\Angulo\Radiano_Para_Grau.h"

int main()
{
    float radiano, graus;
    printf("\n\nDigite o angulo em graus:");
    scanf("%f",&graus);
    printf("\nConvertendo de graus para radiano: %f[Rad]",Grau_para_Radiano(graus));

    printf("\n\n\nDigite o angulo em radiano:");
    scanf("%f",&radiano);
    printf("\nConvertendo radiano para graus: %f[teta]",Radiano_para_Grau(radiano));
    return 0;
}




