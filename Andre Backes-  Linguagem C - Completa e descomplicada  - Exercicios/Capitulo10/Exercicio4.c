#include<stdio.h>
#include<stdlib.h>

int main()
{
    float matriz[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    float *p = matriz;
    int i;

    for(i=0; i<10; i++)
    {
        printf("%0.2p\n",(p+i));
    }
    return 0;
}
