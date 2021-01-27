#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *arquivo;
    char nomearquivo[30];
    char nometelefone[30];
    int numero;

    printf("Digite o nome para o arquivo com a extensao: ");
    gets(nomearquivo);

    arquivo = fopen(nomearquivo,"w+");
    if (arquivo == NULL )
    {
        printf("Erro de abertura! ");
        system("pause");
        exit(1);
    }
    printf("Nome:");
    gets(nometelefone);
    printf("Telefone: ");
    scanf("%d",&numero);
    while(numero !=0 )
    {
        fprintf(arquivo,"%s %d\n",nometelefone,numero);
        setbuf(stdin,NULL);
        printf("Nome:");
        gets(nometelefone);
        printf("Telefone: ");
        scanf("%d",&numero);
    }
    system("pause");
    fclose(arquivo);
    return 0;
}



