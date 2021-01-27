#include <stdio.h>
#include <stdlib.h>
union tipo{
    int numero;
    char letra;
};

int main(){
    union tipo estrutura;
    estrutura.numero = 66;
    printf("%c\n", estrutura.letra);
    return 0;
}
