// Incluindo a biblioteca
//Alterar o link da biblioteca para o diret�rio correspondente	
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Soma\Soma.h"

// funcao soma
float soma (int n, float vetor[n-1]){
    int i;
    float soma= 0;
    for(i=0;i<n;i++){
        soma = soma + vetor[i];
    }
    return soma;
}
