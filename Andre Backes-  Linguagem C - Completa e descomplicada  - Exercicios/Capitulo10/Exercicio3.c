#include<stdio.h>
#include<stdlib.h>

int main()
{
    float array[10]= {0,1,2,3,4,5,6,7,8,9};
    float *p = array ;
    int i;

    for(i=0; i<10; i++)
    {
        printf("%0.2p\n",(p+i));
    }
    return 0;
}
