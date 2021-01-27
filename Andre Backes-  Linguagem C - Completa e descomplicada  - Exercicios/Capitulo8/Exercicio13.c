#include <stdio.h>
#include <stdlib.h>
enum Mes_Ano {Janeiro=1,Fevereiro,Marco,Abril,Maio,Junho,Julho,Agosto,Setembro,Outubro,Novembro,Dezembro};
int main()
{
    enum Mes_Ano s;
    int n;
Inicio:
    printf("\nDIGITE O VALOR DE 1 ATE 12: ");
    scanf("%d",&n);
    if ( n>0 && n<13)
    {
        if(Janeiro == n)
            printf("Janeiro - 31 dias\n ");
        else if(Fevereiro == n)
            printf("Fevereiro - 28 dias\n");
        else if(Marco == n)
            printf("Marco - 31 dias\n");
        else if(Abril == n)
            printf("Abril - 30 dias\n");
        else if(Maio == n)
            printf("Maio - 31 dias\n");
        else if(Junho == n)
            printf("Junho - 30 dias\n");
        else if(Julho == n)
            printf("Julho - 31 dias\n");
        else if(Agosto == n)
            printf("Agosto - 31 dias\n");
        else if(Setembro == n)
            printf("Setembro - 30 dias\n");
        else if(Outubro == n)
            printf("Outubro - 31 dias\n");
        else if(Novembro == n)
            printf("Novembro - 30 dias\n");
        else if(Dezembro == n)
            printf("Dezembro - 31 dias\n");
    }
    else
    {
        printf("\nNUMERO INVALIDO\n");
        goto Inicio;
    }
    
    return 0;
}
