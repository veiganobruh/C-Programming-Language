#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[10][3],aux;
    int i,j,auxi,auxj;

    for(i=0; i<10; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("ALUNO[%d] PROVA[%d]: ",i,j);
            scanf("%f",&matriz[i][j]);

        }

    }
    printf("\n\n\t-----------PROVAS DOS ALUNOS---------------\n\n");
    for(i=0; i<10; i++)
    {
        for(j=0; j<3; j++)
        {

            printf("%0.1f\t",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\t-----------IMPRIMINDO NA TELA AS PIORES NOTAS DAS PROVAS DOS ALUNOS--------------\n\n");
    for(i=0; i<10; i++)
    {
        auxi = 0;
        auxj = 0;
        aux = matriz[i][0];
        for(j=0; j<3; j++)
        {
            if( aux >= matriz[i][j])
            {
                aux = matriz[i][j];
                auxi = i;
                auxj =j;
            }

        }

        printf("ALUNO %d: %f --- PROVA %d",auxi,matriz[auxi][auxj],auxj);
        printf("\n");
    }

    return 0;
}
