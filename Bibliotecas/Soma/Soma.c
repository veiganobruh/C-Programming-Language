// Incluindo a biblioteca
//Alterar o link da biblioteca para o diretório correspondente	
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Soma\Soma.h"

// funcao soma
float soma (int n, float vetor[n-1]){
    int i;
    float soma= 0;
    for(i=0;i<n;i++){
        soma = soma + vetor[i];
    }
    return soma;
}
