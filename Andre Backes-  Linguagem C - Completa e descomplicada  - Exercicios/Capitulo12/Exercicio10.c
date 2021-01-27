#include <stdio.h>
#include <stdlib.h>

int *Matriz(char *nome);


int main()
{

    char nome[30];
    int *p;
    printf("Nome do arquivo com a extensao: ");
    gets(nome);
    p = Matriz(nome);

    free(p);
    return 0;

}

int *Matriz(char *nome)
{
    FILE *arquivo;
    int cont=0,i,j,valor;
    int linha,coluna;
    int *p;

    arquivo = fopen(nome,"r");
    if  (arquivo == NULL)
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    fscanf(arquivo,"%d %d",&linha,&coluna);
    p = (int*)malloc(linha*coluna*sizeof(int));
    if(p == NULL)
    {
        printf("Erro de Memoria");
        system("pause");
        exit(1);
    }
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            fscanf(arquivo,"%d",&valor);
            p[i*coluna +j]= valor;
        }
    }
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%d\t",p[i*3+j]);

        }
        printf("\n");

    }

    fclose(arquivo);
    return p;
}
