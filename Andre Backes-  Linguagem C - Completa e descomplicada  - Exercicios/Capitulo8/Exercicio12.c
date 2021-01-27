#include <stdio.h>
#include <stdlib.h>
enum dia_semana {DOMINGO=1,SEGUNDA,TERCA,QUARTA,QUINTA,SEXTA,SABADO};
int main()
{
    enum dia_semana s;
    int n;
Inicio:
    printf("\nDIGITE O VALOR DE 1 ATE 7: ");
    scanf("%d",&n);
    if ( n>0 && n<8)
    {
        if(DOMINGO == n)
            printf("Domingo\n");
        else if(SEGUNDA == n)
            printf("Segunda\n");
        else if(TERCA == n)
            printf("Terca\n");
        else if(QUARTA == n)
            printf("Quarta\n");
        else if(QUINTA == n)
            printf("Quinta\n");
        else if(SEXTA == n)
            printf("Sexta\n");
        else if(SABADO == n)
            printf("Sabado\n");
    }
    else
    {
        printf("\nNUMERO INVALIDO\n");
        goto Inicio;
    }
    return 0;
}
