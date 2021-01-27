#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[30];
    printf("DIGITE UMA STRING: ");
    setbuf(stdin,NULL);
    gets(a);
    // fgets(a,30,stdin);
    printf("STRING: %s",a);

    return 0;
}
