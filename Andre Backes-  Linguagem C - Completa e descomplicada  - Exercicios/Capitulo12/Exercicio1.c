#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char nome[30],c;
    int count=0;
    printf("Digite o nome do arquivo com a extensao: ");
    scanf("%s",&nome);
    arquivo = fopen(nome,"r");
    if (arquivo == NULL)
    {

        printf("Erro de abertura!\n");
        system("pause");
        exit(1);
    }

    while(!feof(arquivo))
    {

        c = fgetc(arquivo);
        if(c == 0x0A)
            count++;

    }
    if (count == 1 )
        printf("O arquivo possui %d linha",count);
    else
        printf("O arquivo possui %d linhas",count);
    fclose(arquivo);
    return 0;
}
