#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    char esporte[20];
    int idade;
    float altura;

} Atleta;

void Exibe_Pessoas(Atleta *pessoas);
void bubble( Atleta *v, int qtd );
int main()
{
    Atleta informacao[5];
    int i;
    for( i=0; i<5; i++)
    {
        setbuf(stdin,NULL);
        printf("\n\nPESSOA %d\nNOME: ",i);
        gets(informacao[i].nome);
        setbuf(stdin,NULL);
        printf("\nESPORTE: ");
        gets(informacao[i].esporte);
        printf("\nIDADE: ");
        scanf("%d",&informacao[i].idade);
        printf("\nALTURA: ");
        scanf("%f",&informacao[i].altura);
        setbuf(stdin,NULL);

    }
    Exibe_Pessoas(informacao);
    return 0;
}

void Exibe_Pessoas(Atleta *pessoas)
{

    int i;
    bubble(pessoas,5);
    for(i = 0; i < 5; i++)
        printf("\nNOME: %s - ESPORTE: %s - IDADE: %d - ALTURA: %f\n",
               pessoas[i].nome, pessoas[i].esporte,
               pessoas[i].idade, pessoas[i].altura);
}

void bubble( Atleta *v, int qtd )
{
    int i;
    int j;
    int aux;
    int k = qtd - 1 ;

    for(i = 0; i < qtd; i++)
    {
        for(j = 0; j < k; j++)
        {
            if(v[j].idade > v[j+1].idade)
            {
                Atleta aux = v[j];
                v[j] = v[j+1];
                v[j+1]=aux;
            }
        }
        k--;
    }
}
