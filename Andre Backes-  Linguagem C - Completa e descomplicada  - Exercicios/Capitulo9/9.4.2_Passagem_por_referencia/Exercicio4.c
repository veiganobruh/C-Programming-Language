#include <stdio.h>
#include <stdlib.h>

void Soma_array(int linha, float *nota, float *media);
int main()
{
    float Notas[10] = {9.7,9.8,6.7,6,5.5,10,8.5,8,9.0,3.5};
    float Media= 0;

    Soma_array(10,&Notas,&Media);
    printf("\nMedia dos Alunos: %f",Media);

    return 0;
}

void Soma_array(int linha, float *nota, float *media)
{

    int i;
    printf("\n\n\t\tIMPRIMINDO AS NOTAS\n");
    for (i=0; i<linha; i++)
    {
        printf("\nAluno[%d]: %f ",i,*(nota+i));
    }
    printf("\n");
    for (i=0; i<linha; i++)
    {
        *media = *media + (*(nota+i));
    }
    *media = (float)*media/linha;
}
