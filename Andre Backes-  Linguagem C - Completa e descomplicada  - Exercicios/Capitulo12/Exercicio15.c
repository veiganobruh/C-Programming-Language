#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Imprimir(int *vetor);
int *EncontrarPalavra( FILE *arquivo1);
int main()
{

    FILE *arquivo;
    char nome[30];
    int *p;
    printf("Nome do arquivo com a extensao: ");
    gets(nome);
    arquivo = fopen(nome,"r");

    if (arquivo == NULL )
    {
        printf("Erro de abertura!\n");
        system("pause");
        exit(1);
    }
    p = EncontrarPalavra(arquivo);
    Imprimir(p);

    fclose(arquivo);
    return 0;
}
void Imprimir(int *vetor)
{
    int i;
    printf("\n\n\t\t-------QUANTIDADE DE LETRA NO ARQUIVO --------\n");
    for(i = 0; i <= 25; i++)
    {
        if ( vetor[i] == 1 )
        {
            printf(" %c | %c : %d vez \n", i+65, i+97, vetor[i]);
        }
        else
        {
            if (vetor[i]==0)
            {
                printf(" %c | %c : %d (Nulo) \n", i+65, i+97, vetor[i]);
            }
            else
            {
                printf(" %c | %c : %d vezes \n", i+65, i+97, vetor[i]);
            }

        }
    }
}
int *EncontrarPalavra( FILE *arquivo)
{

    char letra[30];
    int alfabeto=26,i;
    int *vetor, localizacao, tabela;

    vetor = (int *)calloc(alfabeto,sizeof(int));

    while(!feof(arquivo))
    {
        fscanf(arquivo,"%s",letra);
        if (letra[strlen(letra)-1]=='\n')
            letra[strlen(letra)-1]='\0';
        for(i=0; i<strlen(letra); i++)
        {
            for ( tabela = 97,localizacao=0; tabela<122,localizacao<alfabeto; tabela++,localizacao++)
            {
                if ( letra[i] == tabela || letra[i]== tabela -32)
                {
                    if (!feof(arquivo))
                    {
                        vetor[localizacao]++;
                    }
                }
            }

        }

    }

    return vetor;

}


