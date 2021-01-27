#include <stdio.h>

int main()
{
    int i, aux, qtde, maior = 0, qtdeMaior = 0;
    scanf("%d", &qtde);

    for(i = 0; i < qtde; i++)
    {
        printf("\nNUMERO %d: ",i);
        scanf("%d", &aux);
        if(maior == aux)
        {
            qtdeMaior++;
        }
        if(maior < aux)
        {
            maior = aux;
            qtdeMaior = 0;
            qtdeMaior++;
        }
    }
    printf("\n\nMaior numero lido: %d\n", maior);
    printf("\nQuantas vezes foi lido: %d\n", qtdeMaior);
    return 0;
}
