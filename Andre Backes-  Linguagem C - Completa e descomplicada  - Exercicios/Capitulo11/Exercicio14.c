#include <stdio.h>
#include <stdlib.h>

int* Lervetor( int N );
int* VETORC(int *A, int *B, int N);

int main()
{
    int tamanho;
    int i ;
    printf("Tamanho do vetor: ");
    scanf("%d",&tamanho);
    int VetorA[tamanho];
    int VetorB[tamanho];
    int *VetorC;
    printf("\n\t\tVETOR A \n");
    for( i = 0; i < tamanho; i ++)
    {
        printf("Vetor[%d]: ",i);
        scanf("%d",&VetorA[i]);
    }
    printf("\n\t\tVETOR B \n");
    for( i = 0; i < tamanho; i ++)
    {
        printf("Vetor[%d]: ",i);
        scanf("%d",&VetorB[i]);
    }
    VetorC = VETORC(VetorA,VetorB,tamanho);
    printf("\n\n\t\tIMPRIMINDO\n\n");
    for( i = 0; i < tamanho; i ++)
    {
        printf("\nC[%d]: %d",i,VetorC[i]);
    }
    free(VetorC);
    VetorC = NULL;
    return 0;

}

int* VETORC(int *A, int *B, int N)
{
    int i;
    int *C;

    C = (int*)malloc(N*sizeof(int));
    if ( C == NULL )
    {

        printf("\nMemoria Insuficiente!");
        system("pause");
        exit(1);
    }
    for( i = 0; i < N; i ++)
    {
        C[i] = A[i]+B[i];
    }
    return C;
}
