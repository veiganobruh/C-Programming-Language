#include <stdio.h>
#include <stdlib.h>

int Verificando_Num_Primo(int numero);
int Maior_Fator_Primo( int numero);
int main()
{
    int n, maior;
    printf("Digite  o numero: ");
    scanf("%d", &n);
    maior = Maior_Fator_Primo(n);
    printf("%d\n", maior);
    return 0;
}

int Verificando_Num_Primo(int numero)
{
    int i;
    int divisor = 0;

    for ( i= 1; i<=numero; i++) // Verificando se o numero eh primo
    {
        if (numero%i ==0)
        {
            divisor++;
        }
        if (divisor>2)
        {
            break;
        }
    }
    if ( divisor>2)  // Retornando o Zero - indica que nao eh primo, Retornando 1 indica que o numero eh primo
    {
        return 0;
    }
    return 1;
}

int Maior_Fator_Primo( int numero)  // Achando o fatores primo e pegando o maior
{
    int i;
    int fator = 1;
    for (i = 2; i<=numero; i++) // os divisores começa com o numero 2
    {
        if ( Verificando_Num_Primo(i) == 1)
        {
            if ( numero%i == 0 )
            {
                fator = i;
            }
        }
    }
    return fator;
}
