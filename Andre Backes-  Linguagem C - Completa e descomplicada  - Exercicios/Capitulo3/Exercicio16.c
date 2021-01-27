#include <stdio.h>

int main(){
    int num;
printf("Insira o numero: ");
    scanf("%d", &num);
    printf("numero multiplicado por 2: %d\n", num << 1);
    printf("numero dividido por 2: %d", num >> 1);
    return 0;
}


