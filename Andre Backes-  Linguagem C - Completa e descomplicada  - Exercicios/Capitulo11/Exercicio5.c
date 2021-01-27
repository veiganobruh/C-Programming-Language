#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamanho, i ;
    int *vetor;
inicio:
    printf("Tamanho do Vetor: ");
    scanf("%d",&tamanho);
    if ( tamanho >= 0 )
    {

        vetor = (int*)calloc(tamanho,sizeof(int));

        if ( vetor == NULL )
        {

            printf("\nMemoria Insuficiente! ");
            system("pause");
            exit(1);

        }
        printf("\n\n\t\tVETOR\n\n");
        for (i = 0; i < tamanho; )
        {
voltar:
            printf("\nVetor[%d]: ", i);
            scanf("%d",&vetor[i]);
            if ( vetor[i] <= 2 )
            {
                goto voltar;
            }
            i++;
        }
        printf("\n\n\t\tIMPRIMINDO \n\n");
        for (i = 0; i < tamanho; i ++)
        {
            printf("\nVetor[%d]: %d", i, vetor[i]);
        }

        free(vetor);
        vetor = NULL;

        return 0;
    }
    else
    {
        goto inicio;
    }
    return 0;

}

