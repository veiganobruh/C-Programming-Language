// incluindo as bibliotecas
//Alterar o link da biblioteca para o diret�rio correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Soma\Soma.h"
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Media_Arit\Media_Arit.h"
// funcao media aritimetica
float media_arit(int n, float vetor[n-1]){
    float media;
    float nn;
    nn= n;
    media = (soma(n,vetor))/nn;
    return media;
}
