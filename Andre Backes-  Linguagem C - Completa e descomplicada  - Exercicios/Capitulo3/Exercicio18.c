#include <stdio.h>

int main()
{
    unsigned int  n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &n2);
    printf("\n\nDeslocamento a esquerda: %d\n", n1<<n2);
    printf("\nDeslocamento a direita: %d", n1 >> n2);
    return 0;
}
