#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    char esporte[20];
    int idade;
    float altura;

} Atleta;

void Comparar_Idade(Atleta pessoa, Atleta *maiorIdade, Atleta *maisAlto);
void Exibe_Pessoas(Atleta *pessoas);
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

void Comparar_Idade(Atleta pessoa, Atleta *maiorIdade, Atleta *maisAlto)
{
    if (maiorIdade->idade < pessoa.idade )
    {
        *maiorIdade = pessoa;
    }
    if ( maisAlto->altura< pessoa.altura)
    {
        *maisAlto = pessoa;
    }
}

void Exibe_Pessoas(Atleta *pessoas)
{
    Atleta maisAlto, maiorIdade;
    int i;
    maiorIdade = pessoas[0];
    maisAlto = pessoas[0];
    for(i = 1; i < 5; i++)
    {
        Comparar_Idade(pessoas[i], &maiorIdade, &maisAlto);
    }
    printf("\nPESSOA MAIS VELHA: %s\nPESSOA MAIS ALTA: %s\n",
           maiorIdade.nome, maisAlto.nome);
}


