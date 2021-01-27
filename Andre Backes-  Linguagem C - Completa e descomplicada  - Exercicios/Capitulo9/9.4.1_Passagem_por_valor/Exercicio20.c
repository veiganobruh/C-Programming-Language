#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592654

float Num_neperiano (int e);
int Fatorial( int numero);

int main()
{
    int numero;
    printf("Digite o numero: ");
    scanf("%d",&numero);
    printf("\n\n e = %f",Num_neperiano(numero));
    return 0;
}

int Fatorial( int numero)
{
    int i = 0;
    int fatorial =1;
    for ( i = 1; i<= numero; i++)
    {
        fatorial = fatorial*i;
    }
    return fatorial;
}
float Num_neperiano (int e)
{
    int i;
    float neperiano = 0;
    for(i=0; i<=e; i++)
    {
        neperiano = neperiano + 1/(float)Fatorial(i);
    }
    return neperiano;
}
