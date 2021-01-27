#include <stdio.h>
#include <stdlib.h>

struct hora
{
    int horas;
    int minutos;
    int segundos;
};

int main()
{
    struct hora horario[5];
    int i, indice;
    int aux[5], auxiliar = 0 ;
    for(i=0; i<5; i++)
    {
InicioHoras:
        printf("\n\n%d - HORARIO---------\n",i);
        printf("DIGITE A HORA: ");
        scanf("%d",&horario[i].horas);
        if ( horario[i].horas>=0 && horario[i].horas<=24 )
        {
InicioMinutos:
            printf("\nDIGITE OS MINUTOS: ");
            scanf("%d",&horario[i].minutos);
            if ( horario[i].minutos>=0 && horario[i].minutos<=60 )
            {
InicioSegundos:
                printf("\nDIGITE OS SEGUNDOS: ");
                scanf("%d",&horario[i].segundos);
                if ( horario[i].minutos>=0 && horario[i].segundos<=60 )
                {

                    aux[i]=(horario[i].horas*60*60)+(horario[i].minutos*60)+ horario[i].segundos;
                    if ( aux[i]> auxiliar)
                    {
                        auxiliar = aux[i];
                        indice = i;
                    }

                }
                else
                {
                    printf("VALOR INVALIDO!");
                    goto InicioSegundos;
                }
            }
            else
            {
                printf("VALOR INVALIDO!");
                goto InicioMinutos;
            }
        }
        else
        {
            printf("VALOR INVALIDO!");
            goto InicioHoras;
        }

    }

    printf("\n\n O HORARIO %d EH O MAIOR\nHORARIO: %d HORAS %d MINUTOS %d SEGUNDOS", indice,horario[indice].horas,horario[indice].minutos,horario[indice].segundos);



    return 0;
}
