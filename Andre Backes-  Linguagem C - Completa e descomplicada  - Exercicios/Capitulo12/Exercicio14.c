#include <stdio.h>
#include <stdlib.h>


int main()
{

    FILE *arquivo;
    char nome[30];
    char aux[30];
    int cont=0;
    printf("Nome do arquivo com a extensao: ");
    gets(nome);
    arquivo = fopen(nome,"r");
    if (arquivo == NULL )
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    while(!feof(arquivo))
    {
        fscanf(arquivo,"%s",aux);

        if (aux!='\0'&& !feof(arquivo))
            cont++;
    }
    printf("Total de palavra: %d",cont);
    fclose(arquivo);
    return 0;
}
