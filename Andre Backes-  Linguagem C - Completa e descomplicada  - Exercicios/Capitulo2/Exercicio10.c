#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int dia, mes, ano, validacao;
    setlocale(LC_ALL,"ptb");
    inicio:
    printf("\nPor favor, inserir o Dia:");
    scanf("%d",&dia);
    if(dia>=1 && dia<=31){
        inicio1:
        printf("\nPor favor, inserir o Mês:");
        scanf("%d",&mes);
        if(mes>=1 && mes<=12){
            inicio2:
            printf("\nPor favor, inserir o Ano:");
            scanf("%d",&ano);
            if(ano>=1900 && ano<=2020){
               printf("\n\nData: %d \\ %d \\ %d",dia, mes,ano);
               return validacao != 1;
            }else{
                printf("Numero invalido!");
                goto inicio2;
                }
        }else{
            printf("Numero invalido!");
            goto inicio1;
        }
    }else {
        printf("Numero invalido!");
        goto inicio;
    }

    return 0;
}
