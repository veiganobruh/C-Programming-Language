#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    float valor, desconto, valorVista;
    char palavra1[50];
    printf("NOME DA MERCADORIA: ");
    gets(palavra1);
    printf("VALOR DA MERCADORIA: ");
    scanf("%f",&valor);
    desconto = valor*10/100;
    valorVista= valor-desconto;
    printf("\n\nNOME DA MERCADORIA: %s\nVALOR TOTAL: %0.1f\nDESCONTO: %0.1f\nVALOR A VISTA: %0.1f",palavra1,valor,desconto,valorVista);

    return 0;
}
