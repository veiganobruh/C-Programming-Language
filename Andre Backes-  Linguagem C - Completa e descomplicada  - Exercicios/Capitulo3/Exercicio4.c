#include <stdio.h>
#include <stdlib.h>

#include "C:\Users\Other\Documents\Programa LinguagemC\Bibliotecas\Soma\Soma.h"
#include "C:\Users\Other\Documents\Programa LinguagemC\Bibliotecas\Media_Arit\Media_Arit.h"
int main()
{
    int contador = 0;
    float vetor[contador];
    char condicao;
    do{
        printf("Numero %d:", contador);
        scanf("%f",&vetor[contador]);
        contador = contador +1;
        setbuf(stdin,NULL);
        printf("\n\nQuer Inserir mais um numero: [s/n]:");
        scanf("%c",&condicao);
    } while(condicao!='n');
        printf("\n\nSoma:%f:",soma(contador,vetor));
        printf("\n\nMedia:%f:", media_arit(contador,vetor));

        return 0 ;
}
