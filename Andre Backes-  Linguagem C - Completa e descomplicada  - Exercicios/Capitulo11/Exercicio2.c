#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    int matricula;
    char nome[30];
    float nota[3];
};
int main()
{
    printf("Tamanho da estrutura: % d bytes", sizeof(struct Aluno));
    return 0;
}
