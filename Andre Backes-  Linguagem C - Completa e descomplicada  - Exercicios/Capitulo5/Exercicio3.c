#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
     printf("\n\n\t\t IMPRIMIR OS N PRIMEIRO NUMERO \
           \t\t \t  NATURAIS CRESCENTE ");
    printf("\n\nDIGITE O NUMERO N:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if((i%2)!=0 ){
            printf("\n%d",i);
        }
    }
   
    return 0;
}
