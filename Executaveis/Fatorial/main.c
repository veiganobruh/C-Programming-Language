/*
    Projeto: Criando um programa para calcular um fatorial de um número
    Criador: Bruno veiga lucas
    E-mail: Bruno.veigalucas@gmail.com

*/

// incluindo a biblioteca
#include <stdio.h>
#include <stdlib.h>
// incluindo biblioteca para mudar a localidade do computador
#include <locale.h>
//Alterar o link da biblioteca para o diretório correspondente
#include "C:\Users\bruno\Documents\Linguagem de Programação\Linguagem_C\Bibliotecas\Fatorial\Fatorial.h"

// Programa principal
int main()
{
    // Declarando as variaveis
    int f,resultado;

    // Mudando a localidade do computador, para que se possar colocar acento
    setlocale(LC_ALL,"ptb");

    // colocando na tela o cabeçario - Entrodução
    printf("\t\t\t Calculando o Fatorial \n\n\n");

    printf("\t\t\t-----------------------");

    // imprimindo a frase na tela "Digite o Numero:"
    printf("\n\nDigite o Número:");

    // lendo a variavel do usuário
    scanf("%d",&f);

    // Colocando a função em uma variavel
    resultado = fatorial(f);

    //exibindo o resultado na tela
    printf("\n\n\tO fatorial do número %d é %d\n\n",f,resultado);

    //fazendo um pausa no programa
    system("pause");

    // retorno
    return 0;
}

