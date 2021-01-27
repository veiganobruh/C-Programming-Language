#include <stdio.h>
#include <stdlib.h>
/* Formato do arquivo 

Arroz 2 8.50
feijao 3 4.5
macarrao 2 2.0
ovo 12 0.50

*/

int main()
{
    FILE *arquivo;
    char nome[30];
    char nomeproduto[30];
    float quant, valor, total = 0.0;

    printf("Digite o nome do arquivo com a extensao: ");
    gets(nome);

    arquivo = fopen(nome,"r");
    if (arquivo == NULL)
    {

        printf("Erro de abertura!\n");
        system("pause");
        exit(1);
    }

    while(!feof(arquivo))
    {

        fscanf(arquivo,"%s %f %f",nomeproduto,&quant,&valor);
        total = total + (quant*valor);
    }
    printf("Total: %f\n",total);
    system("pause");
    fclose(arquivo);

    return 0;

}
