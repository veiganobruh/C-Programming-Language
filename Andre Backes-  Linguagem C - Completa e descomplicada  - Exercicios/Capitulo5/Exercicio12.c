#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=1;
    unsigned int num;
    float aux;
    int soma = 0;
    printf("Digite um Numero: ");
    scanf("%d",&num);
    printf("\n\nOS DIVISORES DO NUMERO %d: ",num);
    while(i<num)
    {
        if ( (num%i)==0){
            printf("%d\t",i);
            soma = soma + i ;
        }
        i++;
    }
    printf("\n\n Soma: %d", soma);
    return 0;
}
