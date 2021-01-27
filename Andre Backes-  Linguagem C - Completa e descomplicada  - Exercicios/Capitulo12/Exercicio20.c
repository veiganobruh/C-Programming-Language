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
    int MaisVelho,auxaltura,auxidade;
    float MaisAlto;
    FILE *arquivo;
    int i,controle;
    arquivo = fopen("ArquivoAtleta","rb");
    if(arquivo == NULL)
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    controle = fread(atleta,sizeof(struct Atleta),5,arquivo);
    if ( controle != 5 )
    {
        printf("Erro de leitura!");
        system("pause");
        exit(1);
    }
    else
    {
        MaisAlto = atleta[0].altura;
        MaisVelho = atleta[0].idade;
        for( i=0; i<5; i++)
        {
            printf("\n\t-----------Atleta %d------------\n",(i+1));
            printf("Nome: %s\n", atleta[i].nome);
            printf("Esporte: %s\n",atleta[i].esporte);
            printf("Idade: %d\n",atleta[i].idade);
            printf("Altura: %0.2f\n",atleta[i].altura);

            if (atleta[i].altura >= MaisAlto)
            {
                MaisAlto = atleta[i].altura;
                auxaltura = i;
            }
            if (atleta[i].idade >= MaisVelho)
            {
                MaisVelho = atleta[i].idade;
                auxidade = i;
            }
        }
        printf("\n\n------ MAIS VELHO - ATLETA %d -------\n",(auxidade+1));
        printf("Nome: %s\n", atleta[auxidade].nome);
        printf("Esporte: %s\n",atleta[auxidade].esporte);
        printf("Idade: %d\n",atleta[auxidade].idade);
        printf("Altura: %0.2f\n",atleta[auxidade].altura);


        printf("\n\n------ MAIS ALTO - ATLETA %d --------\n",(auxaltura+1));
        printf("Nome: %s\n", atleta[auxaltura].nome);
        printf("Esporte: %s\n",atleta[auxaltura].esporte);
        printf("Idade: %d\n",atleta[auxaltura].idade);
        printf("Altura: %0.2f\n",atleta[auxaltura].altura);
    }
    fclose(arquivo);
    return 0;
}

