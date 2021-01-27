#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n;
    char e;
    float n1;
    setlocale(LC_ALL,"ptb");
    //ex15
    printf("\nDigite um carecter: ");
    scanf("%c",&e);
    printf("\n\nDigite um n�mero inteiro: ");
    scanf("%d",&n);
    printf("\nDigite um n�mero real: ");
    scanf("%f",&n1);
    printf("\nPrimeira Sequ�ncia: %d\t %.2e\t %c",n,n1,e);
    printf("\nSegunda Sequ�ncia: %.2e\t %d\t %c",n1,n,e);
    printf("\nTerceira Sequ�ncia: %c\t %.2e\t %d",e,n1,n);
    return 0;
}
