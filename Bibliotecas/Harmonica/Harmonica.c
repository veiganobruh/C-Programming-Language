//incluindo biblioteca
//Alterar o link da biblioteca para o diret�rio correspondente
#include"C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Harmonica\Harmonica.h"


// fun��o - harmonica da inesima parte n ;
float HARMONICA(int n){
    int i;
    float hm=1;
    float soma=0;
    for(i=1.0;i<=n;i++){
        soma = soma + hm/i;
    }
    return soma;
}
