#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i=0;
    int n=0;
    float vetor[n];
    float vetorQ[n];
inicio:
    printf("\n\nDIGITE A QUANTIDADE DE NUMERO DO VETOR: 0>NUMERO<=20:  ");
    scanf("%d",&n);
        if((n>0)&&(n<=20))
    {

        for(i=0; i<n; i++)
        {
            printf("\nVETOR[%d]: ",i);
            scanf("%f",&vetor[i]);
        }

    }
    else
    {
        printf("VALOR INVALIDO!");
        goto inicio;

    }
    printf("\n\nIMPRESSAO DO VALOR AO QUADRADO:\n\n");
       for(i=0; i<n; i++)
        {
            vetorQ[i]=pow(vetor[i],2);
            printf("\nVETOR AO QUADRADO[%d]: %f",i,vetorQ[i]);
        }

    return 0;
}
