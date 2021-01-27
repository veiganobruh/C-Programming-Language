#include <stdio.h>
#include <stdlib.h>


struct Atleta
{
    char nome[20];
    char esporte[20];
    int idade;
    float altura;
};
int main()
{
    struct Atleta atleta[5];
    FILE *arquivo;
    int i,controle;
    arquivo = fopen("ArquivoAtleta","wb+");
    if(arquivo == NULL)
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    for( i=0; i<5; i++)
    {
        printf("\n\t-----------Atleta %d------------\n",(i+1));
        setbuf(stdin,NULL);
        printf("Nome:");
        gets(atleta[i].nome);
        setbuf(stdin,NULL);
        printf("Esporte:");
        gets(atleta[i].esporte);
        printf("Idade: ");
        scanf("%d",&atleta[i].idade);
        printf("Altura: ");
        scanf("%f",&atleta[i].altura);
    }
    controle = fwrite(atleta,sizeof(struct Atleta),5,arquivo);
    if ( controle != 5 )
    {
        printf("Erro de gravacao!");
        system("pause");
        exit(1);
    }

    fclose(arquivo);
    return 0;
}
