#include <stdio.h>
#include <stdlib.h>

void conversao (FILE *arquivo, int numero );

int main()
{
    FILE *arquivo;
    int numero;

    arquivo = fopen("ArquivoBinario.txt","w+");
    if ( arquivo == NULL )
    {
        printf("Erro de abertura");
        system("pause");
        exit(1);
    }
    printf("NUMERO:");
    scanf("%d",&numero);
    while(numero>0)
    {
        conversao(arquivo, numero);
        fprintf(arquivo,"\n");
        printf("NUMERO:");
        scanf("%d",&numero);

    }

    fclose(arquivo);
    system("pause");
    return 0;
}


void conversao (FILE *arquivo, int numero )
{
    if(numero == 1)
    {
        fprintf(arquivo, "%d", numero % 2);
        return;
    }
    conversao(arquivo, numero / 2);
    fprintf(arquivo, "%d", numero % 2);
}
