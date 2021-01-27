#include <stdio.h>

int main(){
    
    unsigned char x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);
    y = ~x; // "~" eh operador bit a bit
    printf("O complemento eh: %d", y);
    return 0;
}
