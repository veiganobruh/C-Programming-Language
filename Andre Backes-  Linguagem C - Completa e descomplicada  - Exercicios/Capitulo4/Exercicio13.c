#include <stdio.h>
#include <stdlib.h>


int main()
{
    int opcao;
    float num1, num2;
    printf("\n\n\t\tMENU\n\n 1 - ADICAO (+) 2 - SUBTRACAO(-) 3 - MULTIPLICACAO(*) 4 - DIVISAO (/)\n\n");
    printf("ESCOLHA UMA DAS OPCOES: ");
    scanf("%d",&opcao);

    if ( opcao == 1 ){
        printf("\nOpcao: Adicao");
        printf("\nDigite o primeiro numero: ");
        scanf("%f",&num1);
        printf("\nDigite o primeiro numero: ");
        scanf("%f",&num2);
        printf("\nResultado = %f ", num1+num2);
    }
    if ( opcao == 2 ){
        printf("\nOpcao: Subtracao");
        printf("\nDigite o primeiro numero: ");
        scanf("%f",&num1);
        printf("\nDigite o primeiro numero: ");
        scanf("%f",&num2);
        printf("\nResultado = %f ", num1-num2);
    }
    if ( opcao == 3 ){
        printf("\nOpcao: Multiplicacao");
        printf("\nDigite o primeiro numero: ");
        scanf("%f",&num1);
        printf("\nDigite o primeiro numero: ");
        scanf("%f",&num2);
        printf("\nResultado = %f ", num1*num2);
    }
    if ( opcao == 4 ){
        printf("\nOpcao: Divisao");
        printf("\nDigite o primeiro numero: ");
        scanf("%f",&num1);
        printf("\nDigite o primeiro numero: ");
        scanf("%f",&num2);
        printf("\nResultado = %f ", num1/num2);
    }

    return 0;
}
