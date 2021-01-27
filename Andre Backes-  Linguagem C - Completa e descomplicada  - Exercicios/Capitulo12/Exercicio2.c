#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo1, *arquivo2, *arquivo3;
    char nome1[30],nome2[30];
    char aux1[500],aux2[500];

    printf("Digite o nome do primeiro arquivo: ");
    gets(nome1);
    printf("\nDigite o nome do segundo arquivo:");
    gets(nome2);

    arquivo1 = fopen(nome1,"r");
    if (arquivo1 == NULL)
    {
        printf("Erro de abertura!\n");
        system("pause");
        exit(1);
    }
    arquivo2 = fopen(nome2,"r");
    if (arquivo2 == NULL)
    {
        printf("Erro de abertura!\n");
        system("pause");
        exit(1);
    }
    arquivo3 = fopen("arquivo3.txt","w+");
    if (arquivo3 == NULL)
    {
        printf("Erro de abertura!\n");
        system("pause");
        exit(1);
    }
    while(!feof(arquivo1))
    {
        if (feof(arquivo1))
            break;
        fprintf(arquivo3,"%s",aux1);
        fgets(aux1,500,arquivo1);
    }

    while(!feof(arquivo2))
    {
        fprintf(arquivo3,"%s",aux2);
        fgets(aux2,500,arquivo2);
    }
    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    return 0;
}
