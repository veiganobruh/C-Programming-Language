#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, prestacao_emprestimo;
    printf("DIGITE SEU SALARIO: ");
    scanf("%f",&salario);
    printf("DIGITE a prestacao do emprestimo: ");
    scanf("%f",&prestacao_emprestimo);
    if ( prestacao_emprestimo > (20*salario/100)){
        printf("Emprestimo nao concedido!");
    }else {
        printf("Emprestimo concedido!");
    }

    return 0;
}
