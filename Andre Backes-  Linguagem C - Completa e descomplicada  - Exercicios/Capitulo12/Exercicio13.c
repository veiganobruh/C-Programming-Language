#include <stdio.h>
#include <stdlib.h>


struct Aluno
{
    char nome[20];
    int matricula;
    float nota1,nota2,nota3;
};

int main()
{
    struct Aluno aluno;
    FILE *arquivo;
    char nomearquivo[30];
    printf("Nome do arquivo com a extensao: ");
    gets(nomearquivo);
    arquivo = fopen(nomearquivo,"r");
    if(arquivo == NULL)
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    fscanf(arquivo,"%d",&aluno.matricula);
    fscanf(arquivo,"%s",aluno.nome);
    fscanf(arquivo,"%f",&aluno.nota1);
    fscanf(arquivo,"%f",&aluno.nota2);
    fscanf(arquivo,"%f",&aluno.nota3);

    printf("\n\nMatricula: %d\nNome: %s\nNota1: %0.2f\nNota2: %0.2f\nNota3: %0.2f\n",
           aluno.matricula,aluno.nome,aluno.nota1,aluno.nota2,aluno.nota3);
    fclose(arquivo);
    return 0;

}
