
#include <stdio.h>

int main()
{
    char palavra1[50], palavra2[50];
    int i;
    printf("PALAVRAS 1: ");
    fgets(palavra1, 50, stdin);
    printf("\nPALAVRA 2: ");
    fgets(palavra2, 50, stdin);

    for(i = 0; palavra1[i] != '\0'; i++)
    {
        if(palavra1[i] < palavra2[i])
        {
            printf("\n%s%s", palavra1, palavra2);
            break;
        }
        else if(palavra1[i] > palavra2[i])
        {
            printf("\n%s%s", palavra2, palavra1);
            break;
        }
    }
    return 0;
}
