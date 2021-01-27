#include <stdio.h>
#include <stdlib.h>
enum Mes_Ano {Arroz=1,Feijao,Macarrao,Ovo,Azeite,Presunto,Queijo,Alface,Bolacha,Sal,Carne,Soverte};
int main()
{
    enum Mes_Ano s;
    int n;
Inicio:
    printf("\nDIGITE O VALOR DE 1 ATE 12: ");
    scanf("%d",&n);
    if ( n>0 && n<13)
    {
        if(Arroz == n)
            printf("Arroz - Preco: 10.5 Reais\n ");
        else if(Feijao == n)
            printf("Feijao - Preco: 5.75 Reais\n");
        else if(Macarrao == n)
            printf("Macarrao - Preco: 2.5 Reais\n");
        else if(Ovo == n)
            printf("Ovo - Preco: 10 Reais\n");
        else if(Azeite == n)
            printf("Azeite - Preco: 15.0 Reais\n");
        else if(Presunto == n)
            printf("Presunto- Preco: 2.99 Reais\n");
        else if(Queijo == n)
            printf("Queijo - Preco: 4.99 Reais\n ");
        else if(Alface == n)
            printf("Alface - Preco: 2.00 Reais\n ");
        else if(Bolacha == n)
            printf("Bolacha - Preco: 3.50 Reais\n ");
        else if(Sal == n)
            printf("Sal - Preco: 2.99 Reais\n ");
        else if(Carne == n)
            printf("Carne - Preco: 19.99 Reais\n ");
        else if(Soverte == n)
            printf("Soverte - Preco: 12.00 Reais\n ");
    }
    else
    {
        printf("\nNUMERO INVALIDO\n");
        goto Inicio;
    }
    return 0;
}
