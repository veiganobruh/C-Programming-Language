#include <stdio.h>
#include <stdlib.h>


void Divisao_Numero (float numero, int *inteiro, float *fracionado);
int main()
{
    float num;
    int inteiro ;
    float fracionario;

    printf("Digite o numero: ");
    scanf("%f",&num);

    Divisao_Numero(num,&inteiro,&fracionario);
    printf("Numero real: %f \nParte Inteira: %d\nParte Fracionaria: %f",num,inteiro,fracionario);

    return 0;
}


void Divisao_Numero (float numero, int *inteiro, float *fracionado)
{
    *inteiro = numero;
    *fracionado = numero-*inteiro;
}
