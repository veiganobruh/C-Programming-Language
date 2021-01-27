#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    int vetor[10];
    int controle;
    int i,soma=0;
    arquivo = fopen("Arquivo","rb");
    if (arquivo==NULL)
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    controle = fread(vetor,sizeof(int),10,arquivo);
    if ( controle !=10)
    {
        printf("Erro de leitura do arquivo!");
        system("pause");
        exit(1);
    }
    else
    {
        printf("\n\t\t-----IMPRIMINDO OS NUMEROS ---------\n\n");
        for (i=0; i<10; i++)
        {
            printf("Vetor[%d]: %d\n",(i+1),vetor[i]);
            soma += vetor[i];
        }

    }
    printf("Soma: %d ",soma);
    fclose(arquivo);

    return 0;
}
