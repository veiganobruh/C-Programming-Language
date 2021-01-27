#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char sexo;
    float altura;
    float peso_ideal;
    printf("Digite a sua altura: ");
    scanf("%f",&altura);
    setbuf(stdin,NULL);
    printf("Digite a primeira letra do seu sexo - \"m\" - p/ masculino e \"f\"- p/ feminino:" );
    sexo = getchar();
    if ( sexo == 'm')
    {
        peso_ideal = (72.7*altura) - 58;
        printf("Peso ideal: %f",peso_ideal);
    }
    else
    {
        if ( sexo == 'f')
        {
            peso_ideal = (62.1*altura) - 44.7;
            printf("Peso ideal: %f",peso_ideal);
        }
    }
    return 0;
}
