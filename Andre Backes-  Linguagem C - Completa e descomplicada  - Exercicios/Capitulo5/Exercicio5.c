#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=0, n;
    int soma=0;
    printf("\n\n\t\t IMPRIMIR A SOMA DOS 50 NUMEROS PARES ");
    printf("\n\n\tCONTADOR\tNUMERO PARES");
    for(i=0;i<100;i++){
        if((i%2)==0){
            soma = soma+i;
            j++;
            printf("\n\n\t%d\t\t%d",j,i);

        }
    }
    printf("\n\n\tSOMA: %d",soma);
    return 0;
}
