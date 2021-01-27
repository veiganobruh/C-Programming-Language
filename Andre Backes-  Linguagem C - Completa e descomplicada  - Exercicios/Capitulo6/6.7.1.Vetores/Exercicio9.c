#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i;
    float A[10],B[10],C[10];
    printf("\n\n\t\tDIGITE 10 NUMEROS DO A:");
    for(i=0; i<10; i++)
    {
        printf("\nA[%d]:",i);
        scanf("%f",&A[i]);
    }
    printf("\n\n\t\tDIGITE 10 NUMEROS DO B:");
    for(i=0; i<10; i++)
    {
        printf("\nB[%d]:",i);
        scanf("%f",&B[i]);
    }

    for(i=0; i<10; i++)
    {
        C[i]=A[i]-B[i];
    }
    printf("\\n\n IMPRIMINDO NA TELA O C = A - B\n\n");
    for(i=0; i<10; i++)
    {
        printf("C[%d]: %f\n",i,C[i]);

    }

    return 0;
}
