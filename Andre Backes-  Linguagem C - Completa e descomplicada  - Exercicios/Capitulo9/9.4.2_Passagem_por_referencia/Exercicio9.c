#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Aluno
{

    int matricula;
    char nome[20];
    float notas[3];
};
void Cadastro ( struct Aluno *Alunos, int quant);
void Imprimir( struct Aluno *Alunos, int quant, float media[quant]);
void Media( struct Aluno *aluno, int quant, float *media);
void Maior_Media( struct Aluno *aluno, int quant, float media[quant], int *indice);
void Imprimi_maior_media( struct Aluno *Alunos, int indice, float media[indice]);

int main()
{

    int quantidade;
    int indice = 0 ;
inicio:
    printf("\nQuantidade de Alunos: ");
    scanf("%d",&quantidade);

    if (quantidade<0)
    {
        printf("Valor Invalido!");
        goto inicio;
    }
    float media[quantidade];
    struct Aluno Alunos[quantidade];
    Cadastro(&Alunos,quantidade);
    Media(&Alunos,quantidade,&media);
    printf("\n\n\t\tIMPRIMINDO OS ALUNOS\n");
    Imprimir(&Alunos,quantidade,media);
    Maior_Media(&Alunos,quantidade,media,&indice);
    printf("\n\n\t\tMAIOR MEDIA\n");
    Imprimi_maior_media(&Alunos,indice,media);
    return 0;
}




void Cadastro ( struct Aluno *Alunos, int quant)
{
    int i,j;
    for (i=0; i<quant; i++)
    {
        printf("\n\n\t\t ALUNO %d\n",i);
        printf("\nMatricula: ");
        scanf("%d",&Alunos[i].matricula);
        setbuf(stdin,NULL);
        printf("\nNome: ");
        gets(&Alunos[i].nome);
        for(j=0; j<3; j++)
        {
            printf("\nNota[%d]: ",j);
            scanf("%f",&Alunos[i].notas[j]);
        }
    }
}
void Imprimir( struct Aluno *Alunos, int quant, float media[quant])
{
    int i,j;
    for (i=0; i<quant; i++)
    {
        printf("\n\n\t\t ALUNO %d\n",i);
        printf("\nMatricula: %d",Alunos[i].matricula);
        printf("\nNome: %s",Alunos[i].nome);
        for(j=0; j<3; j++)
        {
            printf("\nNota[%d]: %0.2f",j, Alunos[i].notas[j]);
        }
        printf("\nMedia: %f",media[i]);
    }

}

void Media( struct Aluno *aluno, int quant, float *media)
{

    int i,j;
    for (i=0; i<quant; i++)
    {
        media[i]=0;
        for(j=0; j<3; j++)
        {
            media[i] = media[i] + aluno[i].notas[j];
        }
        media[i] = media[i]/3.0;
    }
}
void Maior_Media( struct Aluno *aluno, int quant, float media[quant], int *indice)
{
    int i,j;
    float aux = media[0];
    for (i=0; i<quant; i++)
    {
        if ( media[i] > aux )
        {
            aux = media[i];
            *indice = i;
        }
    }
}
void Imprimi_maior_media( struct Aluno *Alunos, int indice, float media[indice])
{
    int j;
    printf("\n\n\t\t ALUNO %d\n",indice);
    printf("\nMatricula: %d",Alunos[indice].matricula);
    printf("\nNome: %s",Alunos[indice].nome);
    for(j=0; j<3; j++)
    {
        printf("\nNota[%d]: %0.2f",j, Alunos[indice].notas[j]);
    }
    printf("\nMedia: %f",media[indice]);
}



