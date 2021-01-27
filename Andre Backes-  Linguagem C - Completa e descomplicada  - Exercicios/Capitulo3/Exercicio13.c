#include <stdio.h>
#include <math.h>

int main(){
    int a, b, hip;
printf("Digite os catetos a: ");
    scanf("%d", &a);
printf("Digite os catetos b: ");
    scanf("%d", &b);
    hip = sqrt((a * a) + (b * b)); 
    printf("\nHipotenusa: %d", hip);
    return 0;
}


