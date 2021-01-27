#include <stdio.h>
#include <stdlib.h>


float HARMONICA(int );
int main()
{
    int num;
    printf("\n\n\t\t\tNUMERO HARMONICO\n\n");
    printf("\n\tDIGITE O ENESIMO TERMO DA SERIE HARMONICA:");
    scanf("%d",&num);
    printf("\n\n\tHn = %f",HARMONICA(num));
    return 0;
}

float HARMONICA(int n){
    int i;
    float hm=1;
    float soma=0;
    for(i=1.0;i<=n;i++){
        soma = soma + hm/i;
    }
    return soma;
}
