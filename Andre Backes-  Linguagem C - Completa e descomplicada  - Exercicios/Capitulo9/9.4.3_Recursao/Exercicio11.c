#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numero;
    printf("Numero: ");
    scanf("%d",&numero);
    printf("\nNumero Invertido: %d", Inversao(numero));

    return 0;
}
int Inversao (int numero){
    if ( numero < 10 ){
        return numero;
    }
    int aux;
    aux = (numero%10)*pow(10,(int)log10(numero))+ Inversao(numero/10);
    return aux;
}
