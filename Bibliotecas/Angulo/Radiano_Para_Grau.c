// incluir biblioteca
// alterar o link da biblioteca para o diret�rio correspondente 
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Angulo\Radiano_Para_Grau.h"

// constante
#define PI 3.141592

// funcao - Transformando radiano para graus
float Radiano_para_Grau(float Rad){
    float Grau;
    Grau = Rad*180/PI;
    return Grau;
}
