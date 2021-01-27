#include<stdio.h>
#include<stdlib.h>

int* Vetor( int tamanho, int valor);
int main ()
{
    int n;
    int numero;
    int *vetor;
    printf("Tamanho do Vetor: ");
    scanf("%d",&n);
    printf("\nValor do Numero de preencher: ");
    scanf("%d",&numero);
    vetor = Vetor(n,numero);
    for ( int i = 0 ; i < n ; i++)
    {
        printf("Vetor[%d]:  %d\n",i,vetor[i]);
    }
    free(vetor);
    vetor = NULL;
    return 0;
}


int* Vetor( int tamanho, int valor)
{

    int i;
    int *vetor;
    if ( tamanho > 0 )
    {
        vetor = (int*)calloc(tamanho,sizeof(int));

        if ( vetor == NULL )
        {
            printf("\nMemoria Insuficiente!\n");
            system("pause");
            exit(1);
        }
        for (i = 0; i < tamanho; i ++ )
        {
            vetor[i] = valor;
        }
        return vetor;
    }
    else
    {
        vetor = NULL;
        return vetor;
    }
}
