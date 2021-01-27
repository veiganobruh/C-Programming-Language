/*
    Projeto: Criando um programa para calcular um fatorial de um n�mero
    Criador: Bruno veiga lucas
    E-mail: Bruno.veigalucas@gmail.com

*/

// incluindo a biblioteca
#include <stdio.h>
#include <stdlib.h>
// incluindo biblioteca para mudar a localidade do computador
#include <locale.h>
//Alterar o link da biblioteca para o diret�rio correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programa��o\Linguagem_C\Bibliotecas\Fatorial\Fatorial.h"

// Programa principal
int main()
{
    // Declarando as variaveis
    int f,resultado;

    // Mudando a localidade do computador, para que se possar colocar acento
    setlocale(LC_ALL,"ptb");

    // colocando na tela o cabe�ario - Entrodu��o
    printf("\t\t\t Calculando o Fatorial \n\n\n");

    printf("\t\t\t-----------------------");

    // imprimindo a frase na tela "Digite o Numero:"
    printf("\n\nDigite o N�mero:");

    // lendo a variavel do usu�rio
    scanf("%d",&f);

    // Colocando a fun��o em uma variavel
    resultado = fatorial(f);

    //exibindo o resultado na tela
    printf("\n\n\tO fatorial do n�mero %d � %d\n\n",f,resultado);

    //fazendo um pausa no programa
    system("pause");

    // retorno
    return 0;
}

