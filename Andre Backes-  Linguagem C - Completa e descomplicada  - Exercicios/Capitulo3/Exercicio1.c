#include <stdio.h>
#include <stdlib.h>

int antecessor(int );
int sucessor(int );

int main()
{
    int num;
    int a, b;
    printf("Digite um numero inteiro:");
    scanf("%d",&num);
    printf("Antecessor: %d e Sucessor:%d",antecessor(num),sucessor(num));
    return 0;
}
int antecessor(int a){
    return --a;
}
int sucessor(int a ){
    return ++a;
}

