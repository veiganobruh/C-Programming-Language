#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void converte (char *aux);

int main()
{
    FILE *arquivoConv, *arquivoSalvo;
    char nomeConv[30],nomeSalvo[30];
    char aux[500];
    printf("Digite o nome do arquivo a ser convertido:");
    gets(nomeConv);
    printf("\nDigite o nome do arquivo a ser salvo:");
    gets(nomeSalvo);

    arquivoConv = fopen(nomeConv,"r");
    if (arquivoConv == NULL)
    {
        printf("Erro de abertura!\n");
        system("pause");
        exit(1);
    }
    arquivoSalvo = fopen(nomeSalvo,"w+");
    if (arquivoSalvo == NULL)
    {
        printf("Erro de abertura!\n");
        system("pause");
        exit(1);
    }
    fgets(aux,500,arquivoConv);
    while(!feof(arquivoConv))
    {
        if (!feof(arquivoConv))
        {
            converte(aux);
            fprintf(arquivoSalvo,"%s",aux);
            fgets(aux,500,arquivoConv);
        }

    }
    fclose(arquivoConv);
    fclose(arquivoSalvo);
    return 0;
}

void converte (char *aux)
{
    char palavra[500];
    strcpy(palavra, aux);
    int i;
    for(i = 0; palavra[i] != '\0'; i++)
    {
        if(palavra[i] == ' ' || palavra[i] == '\n')
            continue;
        else
            palavra[i] = palavra[i] - 32;
    }
    strcpy(aux, palavra);
}
