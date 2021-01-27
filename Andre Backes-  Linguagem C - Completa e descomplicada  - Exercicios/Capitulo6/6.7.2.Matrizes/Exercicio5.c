
#include <stdio.h>
#include <stdlib.h>

// prototipo da função

void Matriz_Negativo_N(int  , int  );
int main()
{
    int l,c;
    float numero;
    inicio:
    system("cls");
    printf("\n\n\n\t\tMATRIZ[L][C] --- VALORES NEGATIVOS DA MATRIZ");
    printf("\n\nDIGITE O NUMERO DE LINHA DA MATRIZ:");
    scanf("%d",&l);
    printf("\n\nDIGITE O NUMERO DE COLUNA DA MATRIZ:");
    scanf("%d",&c);
    if ((l>0) && (c>0)){
    Matriz_Negativo_N(l,c);
    system("pause");

    }else{
        printf("\n\nValores Invalidos! ");
        system("pause");
        goto inicio;
        return 0;}

    return 0;
}
void Matriz_Negativo_N(int linha , int coluna){
    int i,j;
    float aux = 0;
    int contador =0;
    float matriz[linha][coluna];
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("\nMatriz[%d][%d]:",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if (matriz[i][j]<aux){
               printf("\n\tMatriz[%d][%d]:%f",i,j,matriz[i][j]);
               contador++;
            }
        }
    }
    printf(" \n\n\nQUANTIDADE DE NUMEROS NEGATIVOS: %d\n\n",contador);

}
