#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
     printf("\n\n\t\t IMPRIMIR TODOS OS NUMEROS NATURAIS DE 0 ATE N \
           \t\t \t \tEM ORDEm DECRESCENTE ");
    printf("\n\nDIGITE O NUMERO N:");
    scanf("%d",&n);
    for(i=n;i>=0;i--){

        printf("\n%d",i);
    }
    return 0;
}
