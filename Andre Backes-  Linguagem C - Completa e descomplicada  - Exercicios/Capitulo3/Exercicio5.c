#include <stdio.h>
#include <stdlib.h>

// Inconsistente - P/ ficar mais coerente os resultados precisamos analisar o mês de nascimento também

int main()
{
    int idade;
    int ano_atual;
    printf("\nInforme sua idade:");
    scanf("%d",&idade);
    printf("\nInforme o ano atual:");
    scanf("%d",&ano_atual);
    printf("\n\nAno de nascimento entre %d e %d.", ano_de_nascimento(idade,ano_atual)-1,ano_de_nascimento(idade,ano_atual));

    return 0;
}
int ano_de_nascimento(int idade, int ano_atual){
    int ano;
    ano = ano_atual-(idade);
    return ano;
}
