#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    int controle, quantidade,i;
    int *vetor;
    int menor, maior;

    arquivo = fopen("Arquivo","rb");
    if(arquivo == NULL)
    {

        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    fread(&quantidade,sizeof(int),1,arquivo);
    vetor = calloc(quantidade,sizeof(int));
    controle = fread(vetor,sizeof(int),quantidade,arquivo);
    if (controle != quantidade)
    {
        printf("Erro de leitura!");
        system("pause");
        exit(1);
    }
    else
    {
        maior = vetor[0];
        menor = vetor [0];
        printf("\n\t\t ------ IMPRIMINDO O VETOR -------\n");
        for (i=0; i<quantidade; i++)
        {
            if ( vetor[i] <= menor )
            {
                menor = vetor[i];
            }
            if (vetor[i]>=maior)
            {
                maior = vetor[i];
            }
            printf("Vetor[%d]: %d\n",(i+1),vetor[i]);
        }

    }

    printf("\n\nMaior: %d\nMenor: %d\n\n",maior,menor);
    fclose(arquivo);
return 0;
}
