#include <stdio.h>

int main(){
    float real, dolar, conversao;
    printf("Digite o valor em Reais: ");
    scanf("%f", &real);
    printf("\nDigite a contacao do Dolar: ");
    scanf("%f", &dolar);
    conversao = real / dolar;
    printf("\n\nConversao = %0.2f", conversao);
    return 0;
}
