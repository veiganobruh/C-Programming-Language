// incluir biblioteca
// alterar o link da biblioteca para o diret�rio correspondente 
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Angulo\Grau_Para_Radiano.h"

// constante
#define PI 3.141592


// funcao - Transformando graus para radiano
float Grau_para_Radiano(float grau){
    float radiano;
    radiano = grau*PI/180;
    return radiano;
}
