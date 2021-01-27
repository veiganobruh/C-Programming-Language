#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i=0,j;
    float vetor[10],aux[10];


    while(i<10)
    {
        if (i==0)
        {
            printf("\nVETOR[%d]: ",i);
            scanf("%f",&vetor[i]);
            i++;
            continue;
        }
        else
        {

            for(; i<10; i++)
            {
                printf("\nVETOR[%d]: ",i);
                scanf("%f",&vetor[i]);
                for(j=0; j<=i-1; j++)
                    if ( vetor[i]==vetor[j])
                    {
                        printf("\nNUMERO JA EXISTENTE, INSIRA OUTRO NUMERO");
                        i--;
                    }
            }

        }
    }
    printf("\n\nIMPRIMINDO OS VALORES DO VETOR\n");
for(i=0;i<10;i++){
    printf("\nVETOR[%d]: %f",i,vetor[i]);
}

    return 0;
}
