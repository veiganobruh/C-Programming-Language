#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Formato o arquivo

    juliana 2101957
    Lucas 4052000

*/

int CalculoIdade(int Dia, int Mes, int Ano, int DiaAtual, int MesAtual, int AnoAtual);
void separando ( int data, int *dia, int *mes, int *ano);

int main()
{
    FILE *arquivo1;
    FILE *arquivo2;
    char nomearquivo[30];
    char nomegerado[30];
    char nome[30];
    int dataatual,data, *dia, *mes, *ano, *diaatual,*mesatual,*anoatual;
    int idade;

    printf("Digite o nome do arquivo com a extensao: ");
    gets(nomearquivo);
    printf("Digite para o nome do arquivo gerado com a extensao:");
    gets(nomegerado);
    printf("Digite a data atual: ");
    scanf("%d",&dataatual);

    arquivo1 =fopen(nomearquivo,"r");
    if ( arquivo1 == NULL )
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    arquivo2 = fopen(nomegerado,"w+");
    if ( arquivo2 == NULL )
    {
        printf("Erro de abertura!");
        system("pause");
        exit(1);
    }
    while(!feof(arquivo1))
    {
        fscanf(arquivo1,"%s %d",nome,&data);
        separando(data,&dia,&mes,&ano);
        separando(dataatual,&diaatual,&mesatual,&anoatual);
        idade = CalculoIdade(dia,mes,ano,diaatual,mesatual,anoatual);
        if (!feof(arquivo1))
            fprintf(arquivo2,"%s %d\n",nome,idade);

    }
    fclose(arquivo1);
    fclose(arquivo2);
    return 0;
}

int CalculoIdade(int Dia, int Mes, int Ano, int DiaAtual, int MesAtual, int AnoAtual)
{
    int idade;
    if( Mes <= MesAtual )
    {
        if( Dia <= DiaAtual)
            idade = (AnoAtual-Ano);
        else
            idade = (AnoAtual-Ano);
    }
    else
        idade = (AnoAtual-Ano)-1;

    return idade;
}

void separando ( int data, int *dia, int *mes, int *ano)

{
    *ano = data%10000;
    data = data /10000;
    *mes = data% 100;
    *dia = data/100;
}
