#include <stdio.h>

int main(){
    char a;
    int conversao;
printf("Insira uma letra maiuscula: ");
    scanf("%c", &a);
    conversao = a; 
    conversao = a + 32; 
    printf("%c", conversao);
    return 0;
}

