#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


void FLOYD(int );

int main()
{
    int numero;
    setlocale(LC_ALL,"ptb");
    while(1)
    {
        system("cls");
        printf("\n\n\t\t\t TRIÂNGULO DE FLOYD");
        printf("\n\n\tDIGITE O NÚMERO DE LINHA DO TRIÂNGULO DE FLOYD: ");
        scanf("%d",&numero);
        printf("\n\n");
        FLOYD(numero);
        system("pause");
    }
    return 0;
}
// incluindo a função


/*
  i - linha
  j - contagem dos numero coluna
    1 ---linha 1 - 1 numero
    2 3 --- linha 2 - 2 numero
    4 5 6 --- linha 3 - 3 numero ...
    7 8 9 10

*/
void FLOYD(int n)
{
    int i,j, contador=1;

    for(i=1; i<=n; i++) // fazer a contagem de linha
    {
        for(j=1; j<=i; j++) // fazer a contagem dos numero - O numero das colunas tem que se igual os numeros de linha, portanto "j<=i"
        {
            printf("\t%d",contador);
            contador++;// incremento dos numero, ou seja, a contagem 1 2 3 4 5 6 7 8
        }
        printf("\n"); // pular de linha em linha
    }
}



