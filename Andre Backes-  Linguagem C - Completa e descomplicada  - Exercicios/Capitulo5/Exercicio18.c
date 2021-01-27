#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=1;
    unsigned int num;
    int contador = 0 ;
    printf("\n\n\t\t\tDESCOBRINDO SE UM NUMERO EH PRIMO:\n\n\n ");
    printf("DIGITE UM NUMERO: ");
    scanf("%d",&num);

    while(i<=num)
    {
        if ( (num%i)==0){
            printf("%d\t",i);
            contador++;
        }
        i++;
    }
    if(contador ==2 ){
        printf("\n\nO NUMERO %d EH PRIMO!",num);
    }else{
        printf("\n\nO NUMERO %d NAO EH PRIMO!",num);
    }

    return 0;
}
