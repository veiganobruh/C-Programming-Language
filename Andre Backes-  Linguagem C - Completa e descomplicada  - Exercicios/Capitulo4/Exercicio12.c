#include <stdio.h>
#include <stdlib.h>


int main()
{
    int dia;
    printf("Digite um numero de 1 a 7:");
    scanf("%d",&dia);
    switch (dia){
    case 1: {
        printf("Domingo");
    }break;
    case 2: {
        printf("Segunda-Feira");
    }break;
    case 3: {
        printf("Terca-Feira");
    }break;
    case 4: {
        printf("Quarta-Feira");
    }break;
    case 5: {
        printf("Quinta-Feira");
    }break;
    case 6: {
        printf("Sexta-Feira");
    }break;
    case 7: {
        printf("Sabado");
    }break;
    default: printf("NUMERO INVALIDO!");
    }
    return 0;
}
