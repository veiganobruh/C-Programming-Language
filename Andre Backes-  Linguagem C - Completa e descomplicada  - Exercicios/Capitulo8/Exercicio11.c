#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int dia, mes, ano;
} data;
int RetornaDias ( int *mes );
void Dia_Corrido( data *valido);
int main()
{
    data informacao[2];
    int i;
    for( i=0; i<2; i++)
    {
InicioDia:
        printf("DATA %d",i);
        printf("\nDIA: ");
        scanf("%d",&informacao[i].dia);
        if ( informacao[i].dia >0 && informacao[i].dia<=31)
        {
InicioMes:
            printf("\nMES: ");
            scanf("%d",&informacao[i].mes);
            if (informacao[i].mes >0 && informacao[i].mes<=12 )
            {
InicioAno:
                printf("\nANO:");
                scanf("%d",&informacao[i].ano);
                if (informacao[i].ano<1900 || informacao[i].ano>2019)
                {
                    printf("ANO INVALIDO!");
                    goto InicioAno;
                }

            }
            else
            {
                printf("MES INVALIDO!");
                goto InicioMes;
            }

        }
        else
        {
            printf("DIA INVALIDO!");
            goto InicioDia;
        }
    }
    Dia_Corrido(informacao);
    return 0;
}

void Dia_Corrido( data *valido)
{
    int i;
    int somadia2, somadia1;
    somadia1 = ((valido[0].ano*365)+RetornaDias(valido[0].mes)+valido[0].dia);
    somadia2 = ((valido[1].ano*365)+RetornaDias(valido[1].mes)+valido[1].dia);
    printf("\n\nNUMEROS DE DIAS QUE DECORRERAM: %d DIAS",somadia2-somadia1);
}
int RetornaDias ( int *mes )
{

    if ( mes == 1 )
        return 0;
    if ( mes == 2 )
        return 31;
    if ( mes == 3 )
        return 59;
    if ( mes == 4 )
        return 90;
    if ( mes == 5 )
        return 120;
    if ( mes == 6 )
        return 151;
    if ( mes == 7 )
        return 181;
    if ( mes == 8 )
        return 212;
    if ( mes == 9 )
        return 243;
    if ( mes == 10 )
        return 273;
    if ( mes == 11 )
        return 304;
    if ( mes == 12 )
        return 335;

}
