#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// criando um struct
struct Dados
{
    char nome[30];
    int idade;
    char endereco[40];
};
int main()
{
    struct Dados Cadastro; // declarando o struct

    printf("NOME: ");
    gets(Cadastro.nome);
    printf("\nIDADE: ");
    scanf("%d",&Cadastro.idade);
    setbuf(stdin,NULL);
    printf("\nENDERECO: ");
    gets(Cadastro.endereco);

    printf("\n\n\n--------------CADASTRO------------------\n\n");
    printf("NOME: %s\nIDADE: %d\nENDERECO: %s",Cadastro.nome,Cadastro.idade,Cadastro.endereco);
    return 0;
}
