#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int i=1;
    int anterior = 0;
    int atual = 1, aux = 0;
    int num;


    printf("DIGITE O NUMERO: ");
    scanf("%d",&num);
    printf("\n\n\t\t\tFREQUENCIA DE FIBONACCI: ");
    if ( num == 0){
        printf("   %d", 0 );
        return 0;
    }
    if( num == 1 ){
           printf("   %d   %d",0,1);
           return 0;
        }

    printf("   %d   %d",0,1);
    while ( i<num  ){
        aux = atual;
        atual = aux + anterior;
        anterior = aux;
        printf("   %d", atual );
        i++;
    }

    return 0;
}
