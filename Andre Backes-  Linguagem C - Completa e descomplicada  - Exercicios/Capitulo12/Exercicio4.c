#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void procurar(char *palavra1, char *palavra2, int *count);
int main ()
{
    FILE *arquivo;
    char nome[30], palavra[30], texto[100];
    int cont =0 ;

    printf("Informe o nome do arquivo com a extensao:");
    gets(nome);
    printf("Informe a palavra:");
    gets(palavra);
    arquivo = fopen(nome,"r");
    if (arquivo == NULL)
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    printf("\t\tIMPRIMINDO O TEXTO\n\n");
    while(!feof(arquivo))
    {
        fgets(texto,100,arquivo);
        if (texto[strlen(texto)-1] == '\n')
            texto[strlen(texto)-1] = '\0';

        if (!feof(arquivo))
        {
            printf("%s\n",texto);
            procurar(texto,palavra,&cont);
        }

    }
    printf("Contador: %d", cont);
    fclose(arquivo);
    return 0;
}


void procurar(char *palavra1, char *palavra2, int *count)
{

    int i,j,contador =0;
    char aux[100];

    for(i=0, j=0; palavra1[i]!='\0'; i++)  // fazer uma varredura na palavra1
    {

        while((palavra1[i]!=' ')&&(palavra1[i]!='\0'))  // Quebrando as palavras  e armazenando em uma variavel aux
        {

            aux[j]=palavra1[i];
            j++;
            i++;

        }
        aux[j]='\0'; // indicando o final da palavra

        if (strcmp(aux,palavra2)==0)  // faz a comparação das palavras
        {
            contador++;
            j=0;
        }
        else
        {
            j=0; // caso for diferente volta para o laço "for" com o indice i na mesma posição e com o j = 0;
        }

    }
    *count +=contador;
}
