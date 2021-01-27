#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592654


int Fatorial( int numero);
float Serie (float grau);
int main()
{
    float angulo;
    printf("Digite o Angulo: ");
    scanf("%f",&angulo);
    printf("\n\n Seno(%f) = %f",angulo,Serie(angulo));
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
float Serie (float grau)
{
    int i;
    float seno = 0;
    float radiano;
    radiano = grau*PI/180.0;
    for ( i=0; i<=5; i++)
    {
        seno = seno + ((pow(-1,i)*pow(radiano,2*i+1))/(Fatorial(2*i+1)));
    }
    return seno;
}
