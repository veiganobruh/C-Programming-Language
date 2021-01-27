#include <stdio.h>

int main(){
    int numero1, numero2, aux;
printf("Digite o numero de tres digitos: ");
    scanf("%d", &numero1);
  
    numero2 = numero1 % 10;
    aux = numero1 / 10;
    numero2 = numero2 * 10 + aux % 10;
    aux = aux / 10;
    numero2 = numero2 * 10 + aux % 10;
    printf("\n\nNumero lido: %d\n", numero1);
    printf("\n\nNumero gerado: %d", numero2);

    return 0;
}

