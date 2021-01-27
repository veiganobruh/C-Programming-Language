#include <stdio.h>
#include <stdlib.h>

struct alunos
{
    int matricula;
    char nome[30];
    float nota[3];
};
int main ()
{
    struct alunos aluno[5];
    int i,j,indice;
    float media[5] = {0,0,0}, aux = 0;
    for(i=0; i<=4; i++)
    {
        printf("\n\n----------ALUNO %d----------",i);
        printf("\nMATRICULA: ");
        scanf("%d",&aluno[i].matricula);
        setbuf(stdin,NULL);
        printf("\nNOME: ");
        gets(aluno[i].nome);
        for(j=0; j<=2; j++)
        {
            printf("\nNOTA %d: ",j);
            scanf("%f",&aluno[i].nota[j]);
            media[i]= media[i]+aluno[i].nota[j];
            if ( j==2 )
            {
                media[i] = media[i]/3;
                if (media[i] > aux )
                {
                    aux = media[i];
                    indice = i;
                }
            }
        }

    }

    printf("\n\n--------MELHOR MEDIA----------");
    for(i=indice; i<=indice; i++)
    {
        printf("\n\nMATRICULA: %d\nNOME: %s",aluno[i].matricula,aluno[i].nome);
        for(j=0; j<=2; j++)
        {
            printf("\nNOTA %d: %f",j,aluno[i].nota[j]);
        }
        printf("\nMEDIA: %f",media[i]);
    }

    return 0;
}
