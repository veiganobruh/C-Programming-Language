#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void Raizes(float a,float b,float c, float *x1,float *x2, float delta);
void Delta (float a,float b, float c, float *delta);
int main()
{
    float A,B,C;
    float delta;
    setlocale(LC_ALL,"ptb");
    printf("\t\tCALCULANDO AS RAÍZES DA EQUAÇÃO DO SEGUNDO GRAU!\n\n\n"); // menu do programa
    printf("\t\nOBS:USAR VIRGULA PARA SEPARAR A CASA DECIMAL: 2,5 \n");
    printf("\n\tEQUAÇÃO GENERICA: Ax²+Bx¹+ C = 0 \n");
    printf("\t COEFICIENTES: A , B , C ");

    printf("\n\nDIGITE O COEFICIENTE A:");
    scanf("%f",&A);
    printf("\n\nDIGITE O COEFICIENTE B:");
    scanf("%f",&B);
    printf("\n\nDIGITE O COEFICIENTE C:");
    scanf("%f",&C);
    if ( A == 0 )
    {
        printf("\n\nNÃO É UMA EQUAÇÃO DE SEGUNDO GRAU! ");
        return -1;
    }
    Delta(A,B,C,&delta);
    if (delta < 0 )
    {
        printf("\n\nNÃO EXISTEM RAÍZES REAIS! ");
        return 0;
    }
    if (delta == 0)
    {
        float x1,x2 ;
        Raizes(A,B,C,&x1,&x2,delta);
        printf("\n\nX1 = X2 = %f",x1);
    }
    if (delta>0)
    {
        float x1,x2;
        Raizes(A,B,C,&x1,&x2,delta);
        printf("\n\nX1 = %f \nX2 = %f",x1,x2);
    }

    return 0;
}

void Raizes(float a,float b,float c, float *x1,float *x2, float delta)
{

    *x1 = (-b+sqrt(delta))/(2*a);
    *x2 = (-b-sqrt(delta))/(2*a);

}
void Delta (float a,float b, float c, float *delta)
{
    *delta = pow(b,2) -(4*a*c);
}
