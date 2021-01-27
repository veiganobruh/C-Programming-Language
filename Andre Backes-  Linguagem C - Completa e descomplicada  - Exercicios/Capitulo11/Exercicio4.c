#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamanho, i ;
    float *vetor;

    printf("Tamanho do Vetor: ");
    scanf("%d",&tamanho);

    vetor = (float*)calloc(tamanho,sizeof(float));

    if ( vetor == NULL ){

        printf("\nMemoria Insuficiente! ");
        system("pause");
        exit(1);

    }
    printf("\n\n\t\tVETOR\n\n");
    for (i = 0; i < tamanho; i ++){
        printf("\nVetor[%d]: ", i);
        scanf("%f",&vetor[i]);
    }
    printf("\n\n\t\tIMPRIMINDO \n\n");
    for (i = 0; i < tamanho; i ++){
        printf("\nVetor[%d]: %0.2f", i, vetor[i]);
    }

    free(vetor);
    vetor = NULL;

    return 0;

}

