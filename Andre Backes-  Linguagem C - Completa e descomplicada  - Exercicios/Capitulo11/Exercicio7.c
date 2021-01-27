#include <stdio.h>
#include <stdlib.h>


int vetor ( int tamanho );

int main()
{

    int tamanho, i ;
    int *V;
    printf("Tamanho do Vetor: ");
    scanf("%d",&tamanho);

    V = vetor(tamanho);
    for (i = 0; i < tamanho; i ++)
    {
        printf("\nVetor[%d]: %d ", i, V[i]);
    }
    free(V);
    V = NULL;

    return 0;

}

int vetor ( int tamanho )
{
    int *vetor,i;
    vetor = (int*)calloc(tamanho,sizeof(int));

    if ( vetor == NULL )
    {

        printf("\nMemoria Insuficiente! ");
        system("pause");
        exit(1);

    }
    printf("\n\n\t\tVETOR\n\n");
    for (i = 0; i < tamanho; i ++)
    {
        printf("\nVetor[%d]: ", i);
        scanf("%d",&vetor[i]);
    }
    return vetor;
}

