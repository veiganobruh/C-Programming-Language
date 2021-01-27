#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,j=1,contador=0;
    float s=1,soma=0;
    printf("\n\n\t CALCULANDO: 1/1+3/2+5/3+7/4+...+109/55\n\n\n"); // pois no livro está errado
    for(i=1; i<=55; i++)
    {
        printf("\t%0.2f",s);
        printf("/%0.2f",j);
        soma =soma+s/j;
        s=s+2;
        contador++;
        j++;
    }

    printf("\n\n\n\tQuantidade de numero:%f",contador);
    printf("\n\n\n\tS:%f\n\n",soma);
    return 0;
}
