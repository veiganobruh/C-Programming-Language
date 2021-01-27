#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n;

    printf("\n\n\t\t IMPRIMIR TODOS OS NUMEROS NATURAIS DE 0 ATE N \
           \t\t \t \tEM ORDEM CRESCENTE ");
    printf("\n\nDIGITE O NUMERO N:");
    scanf("%d",&n);

    while (i<=n){
        printf("\n%d",i);
        i++;
    }

    return 0;
}
