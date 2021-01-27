#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char estado;
    float valor;
    printf("\n\n\t\tMENU \n\n ESTADO: Considera --> 'g' para MG\t's' para SP\t'r' para RJ\t'm' para MS");
    printf("\n\nDIGITE O VALOR: ");
    scanf("%f",&valor);
    setbuf(stdin,NULL); // limpando o buffer;
    printf("Digite o estado: ");
    scanf("%s",&estado);
    switch (estado){
    case 'g': {
        valor = valor + ( valor*7/100);
        printf("ESTADO: MG - VALOR: %f ",valor);
    }break;
    case 's': {
        valor = valor + ( valor*12/100);
        printf("ESTADO: SP - VALOR: %f ",valor);
    }break;
    case 'r': {
        valor = valor + ( valor*15/100);
        printf("ESTADO: RJ - VALOR: %f ",valor);
    }break;
    case 'm': {
        valor = valor + ( valor*8/100);
        printf("ESTADO: MS - VALOR: %f ",valor);
    }break;
    default: printf("ESTADO INVALIDO!");
    }
    return 0;
}
