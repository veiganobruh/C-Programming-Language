#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=1;
    unsigned int num;
    float aux ;
    printf("Digite um Numero: ");
    scanf("%d",&num);
    printf("\n\nOS DIVISORES DO NUMERO %d: ",num);
    while(i<=num)
    {
        if ( (num%i)==0){
            printf("%d\t",i);
        }
        i++;
    }
    return 0;
}
