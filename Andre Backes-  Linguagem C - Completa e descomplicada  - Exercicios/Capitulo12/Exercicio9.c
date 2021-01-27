#include <stdio.h>
#include <stdlib.h>


int Vogais( char *nomearquivo );
int Contagem ( char *palavra);

int main()
{
    char *nome[30];
    int vogal;
    printf("Digite o nome do arquivo com a extensao: ");
    gets(nome);
    vogal = Vogais(nome);
    printf("Total de vogal: %d",vogal);

    return 0;
}

int Vogais( char *nomearquivo )
{

    FILE *arquivo;
    char controle[500];
    int cont = 0 ;
    arquivo =fopen(nomearquivo,"r");
    if (arquivo == NULL)
    {

        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    fgets(controle,500,arquivo);
    while(!feof(arquivo))
    {
        cont = cont + Contagem(controle);
        printf("%s",controle);
        fgets(controle,500,arquivo);

    }
    fclose(arquivo);
    return cont;
}
int Contagem ( char *palavra)
{

    int count=0,i;
    for(i = 0; palavra[i] != '\0'; i++)
    {
        if(palavra[i] == 65 || palavra[i] == 69 || palavra[i] == 73
                || palavra[i] == 79 || palavra[i] == 85 || palavra[i] == 97
                || palavra[i] == 101 || palavra[i] == 105 || palavra[i] == 111
                || palavra[i] == 117)
            count++;
    }
    return count;
}
