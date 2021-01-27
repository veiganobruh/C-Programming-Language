#include <stdio.h>
#include <stdlib.h>

float fatorial(int );
int main()
{
    int i,n;
    float f,soma =0 ;
    printf("\n\n\t CALCULANDO: 1/1!+1/2!+1/3!+1/4!+...+1/N!\n\n\n");
    printf("\n\nDIGITE O NUMERO:");
    scanf("%d",&n);
    if (n>0)
    {
        for(i=1; i<=n; i++)
        {
            f = fatorial(i);
            soma = soma + 1/f;
        }
        printf("\n\n\t\tE:%0.6f\n\n",soma);
    }
    else
    {
        return 0;
    }

    return 0;
}
float fatorial(int a)
{
    int i;
    float f=1;
    for(i=1; i<=a; i++)
    {
        f = i*f;
    }
    return f;
}


