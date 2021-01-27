#include <stdio.h>
#include <stdlib.h>


struct Cadastro
{

    char nome[30];
    int idade;
    char endereco[50];

};
struct Cadastro* Cadastrando( int N);


int main()
{
    struct Cadastro *pessoa;
    int tamanho;
    printf("Digite o Numero de Pessoas: ");
    scanf("%d",&tamanho);
    pessoa =  Cadastrando(tamanho);
    free(pessoa);
    pessoa = NULL;

    return 0;
}

struct Cadastro* Cadastrando( int N)
{
    struct Cadastro *Pessoa;
    int i;
    Pessoa = (struct Cadastro*)malloc(N*sizeof(struct Cadastro));

    if ( Pessoa == NULL )
    {
        printf("\nMemoria Insuficiente!");
        system("pause");
        exit(1);
    }
    for ( i = 0; i < N ; i++)
    {
        printf("\n\t\tPESSOA %d\n",i);
        printf("\nNome: ");
        setbuf(stdin,NULL);
        gets(Pessoa[i].nome);
        printf("\nIdade: ");
        scanf("%d",&Pessoa[i].idade);
        printf("\nEndereco: ");
        setbuf(stdin,NULL);
        gets(Pessoa[i].endereco);
    }
    return Pessoa;
};
