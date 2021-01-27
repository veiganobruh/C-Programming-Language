//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Traingulo_de_Floyd\Floyd.h"

/*
  i - linha
  j - contagem dos numero coluna
    1 ---linha 1 - 1 numero
    2 3 --- linha 2 - 2 numero
    4 5 6 --- linha 3 - 3 numero ...
    7 8 9 10

*/
void FLOYD(int n){
 int i,j, contador=1;

 for(i=1;i<=n;i++){ // fazer a contagem de linha
    for(j=1;j<=i;j++){ // fazer a contagem dos numero - O numero das colunas tem que se igual os numeros de linha, portanto "j<=i"
        printf("\t%d",contador);
        contador++;// incremento dos numero, ou seja, a contagem 1 2 3 4 5 6 7 8
    }
    printf("\n"); // pular de linha em linha
 }
}

