#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[30];
    int i;
    printf("DIGITE UMA STRING: ");
    setbuf(stdin,NULL);
    gets(a);
    printf("\nSTRING: ");
    for(i=0;i<4;i++){
        printf("%c",a[i]);
    }
    return 0;
}
