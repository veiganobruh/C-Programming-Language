#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    int vetor[100];
    int controle;
    int i;
    arquivo = fopen("Arquivo","wb+");
    if (arquivo==NULL)
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    for(i=0; i<100; i++)
    {
        printf("Numero %d:",i+1);
        scanf("%d",&vetor[i]);
    }
    controle = fwrite(vetor,sizeof(int),100,arquivo);
    if ( controle !=100)
    {
        printf("Erro de escrita do arquivo!");
        system("pause");
        exit(1);
    }

    fclose(arquivo);

    return 0;
}
