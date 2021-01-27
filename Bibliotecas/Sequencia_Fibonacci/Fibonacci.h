
//Alterar o link da biblioteca para o diretório corresponte
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Sequencia_Fibonacci\Fibonacci.c"

void FIBONNACCI(int a )
{
    int i,j;
    int soma=0;
    int anterior =0, atual = 1;
    printf("SEQUENCIA:\n");
    for(i=0; i<2; i++)
        printf("\t%d,",i);
    for(j=1; j<a-1; j++)
    {
        soma = anterior+atual;
        anterior = atual;
        atual = soma;
        printf("\t%d,",soma);
    }
}
