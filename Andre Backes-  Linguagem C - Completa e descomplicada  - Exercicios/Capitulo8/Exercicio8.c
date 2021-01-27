#include <stdio.h>
#include <stdlib.h>



typedef struct
{
    char nome[50];
    int dia, mes, ano;
} Pessoa;
void Comparar_Idade(Pessoa pessoa, Pessoa *menorIdade, Pessoa *maiorIdade);
void Exibe_Pessoas(Pessoa *pessoas);
int main()
{
    Pessoa informacao[6];
    int i;
    for( i=0; i<6; i++)
    {
        setbuf(stdin,NULL);
        printf("\n\nPESSOA %d\nNOME: ",i);
        gets(informacao[i].nome);
InicioDia:
        printf("\nDIA DO NASCIMENTO: ");
        scanf("%d",&informacao[i].dia);
        if ( informacao[i].dia >0 && informacao[i].dia<=31)
        {
InicioMes:
            printf("\nMES DO NASCIMENTO: ");
            scanf("%d",&informacao[i].mes);
            if (informacao[i].mes >0 && informacao[i].mes<=12 )
            {
InicioAno:
                printf("\nANO DO NASCIMENTO: ");
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
    Exibe_Pessoas(informacao);
    return 0;
}

void Comparar_Idade(Pessoa pessoa, Pessoa *menorIdade, Pessoa *maiorIdade)
{

    if(menorIdade->ano <= pessoa.ano)
    {
        if(menorIdade->ano < pessoa.ano)
            *menorIdade = pessoa;
        else
        {
            if(menorIdade->mes <= pessoa.mes)
            {
                if(menorIdade->mes == pessoa.mes)
                {
                    if(menorIdade->dia < pessoa.mes)
                        *menorIdade = pessoa;
                }
                else
                    *menorIdade = pessoa;
            }
        }
    }

    if(maiorIdade->ano >= pessoa.ano)
    {
        if(maiorIdade->ano > pessoa.ano)
            *maiorIdade = pessoa;
        else
        {
            if(maiorIdade->mes >= pessoa.mes)
            {
                if(maiorIdade->mes == pessoa.mes)
                {
                    if(maiorIdade->dia > pessoa.mes)
                        *maiorIdade = pessoa;
                }
                else
                    *maiorIdade = pessoa;
            }
        }
    }
}

void Exibe_Pessoas(Pessoa *pessoas)
{
    Pessoa menorIdade, maiorIdade;
    int i;
    menorIdade = pessoas[0];
    maiorIdade = pessoas[0];
    for(i = 1; i < 6; i++)
    {
        Comparar_Idade(pessoas[i], &menorIdade, &maiorIdade);
    }
    printf("\nPESSOA MAIS NOVA: %s\nPESSOA MAIS VELHA: %s\n",
           menorIdade.nome, maiorIdade.nome);
}


