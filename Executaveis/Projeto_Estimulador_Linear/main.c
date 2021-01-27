/* ---------------------------------------------
|    PROJETO ESTIMADOR LINEAR                   |
|                                               |
|    ENG: BRUNO VEIGA                           |
|    CREA: 5070423901                           |
|						|
|    Y = mX + n --> EQUAÇÃO DA RETA             |
|    Ax = b                                     |
|                                               |
|    A = M x N  --> COEFICIENTE DA MATRIZ       |
|    x = N x 1  --> VETOR PARAMETROS            |
|    b = M x 1  --> VETOR SOLUÇÃO               |
|----------------------------------------------*/


// BIBLIOTECA
#include <stdio.h>
#include <stdlib.h>


// PROTÓTIPOS
void VetorX(int tamanho, float vetorx[tamanho][2]);
void VetorY(int tamanho, float vetory[tamanho]);
void Imprimindo_Matriz(int linha, int coluna, float matriz[linha][coluna]);
void Imprimindo_Vetor(int tamanho, float vetor[tamanho]);
void Matriz_Transposta( int linha, int coluna, float matriz[linha][coluna], float matriztransposta[coluna][linha]);
void Multiplicador_Matriz( int linhaA, int colunaA, int linhaB, int colunaB, float matrizA[linhaA][colunaA], float matrizB[linhaB][colunaB], float matrizC[linhaA][colunaB]);
void Matriz_Inversa(int linha, int coluna, float matriz[linha][coluna], float matrizinversa[linha][coluna]);
void Multiplicador_Matriz_Vetor(int linha, int coluna, float matriz[linha][coluna], float vetor[coluna], float solucao[linha]);


int main()
{
    int tamanho;

inicio:
    printf("\nTAMANHO: ");
    scanf("%d",&tamanho);

    if (tamanho > 1 ){
        float vetorx[tamanho][2]; // VETOR X
        float vetory[tamanho]; // VETOR Y
        float matriztransposta[2][tamanho]; // MATRIZ TRANSPOSTA DO VETOR X
        float aux1[2][2]; //  MATRIZ DA MULTIPLICAÇÃO AT x A
        float matrizinversa[2][2]; // MATRIZ INVERSA AT x A = (AT x A )^-1
        float aux2[2][tamanho]; // MATRIZ DA MULTIPLICAÇÃO DA (AT x A )^-1 x AT
        float solucao[2]; // SOLUÇÃO - PARAMETROS(M,N) DA EQUAÇÃO DA RETA Y = MX + N

        printf("\n\n---------------- VETOR X -----------------\n\n");
        VetorX(tamanho,vetorx);

        printf("\n\n---------------- VETOR Y -----------------\n\n");
        VetorY(tamanho,vetory);

        printf("\n\n---------------- IMRPIMINDO O VETOR X -----------------\n\n");
        Imprimindo_Matriz(tamanho,2,vetorx);

        printf("\n\n---------------- IMPRIMINDO O VETOR Y -----------------\n\n");
        Imprimindo_Vetor(tamanho,vetory);

        printf("\n\n---------------- MATRIZ TRANSPOSTA --------------------\n\n");
        Matriz_Transposta(tamanho,2,vetorx,matriztransposta);
        Imprimindo_Matriz(2,tamanho,matriztransposta);

        // x = ( AT x A)^-1 x AT x b
        printf("\n\n---------------- MULTIPLICACAO AT x A --------------------\n\n");
        Multiplicador_Matriz(2,tamanho,tamanho,2,matriztransposta,vetorx,aux1);
        Imprimindo_Matriz(2,2,aux1);

        printf("\n\n---------------- MATRIZ INVERSA AT x A  --------------------\n\n");
        Matriz_Inversa(2,2,aux1,matrizinversa);
        Imprimindo_Matriz(2,2,matrizinversa);

        printf("\n\n---------------- MULTIPLICACAO (AT x A)^-1 x AT  --------------------\n\n");
        Multiplicador_Matriz(2,2,2,tamanho,matrizinversa,matriztransposta,aux2);
        Imprimindo_Matriz(2,tamanho,aux2);

        printf("\n\n---------------- SOLUCAO --------------------\n\n");
        Multiplicador_Matriz_Vetor(2,tamanho,aux2,vetory,solucao);
        Imprimindo_Vetor(2,solucao);

        printf("\n\n SOLUCAO: Y = %f x + %f ", solucao[0],solucao[1]);
        printf("\n\n");
        system("pause");
    }else{
        printf("TAMANHO INVALIDO!");
        goto inicio;
    }
    return 0;
}

void VetorX(int tamanho, float vetorx[tamanho][2])
{
    int i;

    for (i=0; i<tamanho; i++)
    {
        printf("X[%d]: ",i);
        scanf("%f",&vetorx[i][0]);
        vetorx[i][1]=1;
    }
}

void VetorY(int tamanho, float vetory[tamanho])
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("Y[%d]: ",i);
        scanf("%f",&vetory[i]);
    }
}

void Imprimindo_Matriz(int linha, int coluna, float matriz[linha][coluna])
{
    int i,j;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("\t%.2f\t",matriz[i][j]);
        }
        printf("\n");
    }
}

void Imprimindo_Vetor(int tamanho, float vetor[tamanho])
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("\n\t\t%.2f",vetor[i]);
    }
}


void Matriz_Transposta( int linha, int coluna, float matriz[linha][coluna], float matriztransposta[coluna][linha])
{
    int i,j;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            matriztransposta[j][i]=matriz[i][j];
        }
    }
}

void Multiplicador_Matriz( int linhaA, int colunaA, int linhaB, int colunaB, float matrizA[linhaA][colunaA], float matrizB[linhaB][colunaB], float matrizC[linhaA][colunaB])
{
    int i, j, k;

    for(i=0; i<linhaA; i++)
    {
        for (j=0; j<colunaB; j++)
        {
            matrizC[i][j] = 0;
        }
    }

    for(i=0; i<linhaA; i++)
    {
        for(j=0; j<colunaB; j++)
        {
            for(k=0; k<colunaA; k++)
            {
                matrizC[i][j] = matrizC[i][j] + ( matrizA[i][k]*matrizB[k][j]);
            }
        }
    }
}

void Matriz_Inversa(int linha, int coluna, float matriz[linha][coluna], float matrizinversa[linha][coluna])
{
    float aux;

    aux = ((matriz[0][0]*matriz[1][1])-(matriz[1][0]*matriz[0][1]));

    matrizinversa[0][0] =    matriz[1][1]/aux;
    matrizinversa[0][1] =  -(matriz[0][1])/aux;
    matrizinversa[1][0] =  -(matriz[1][0])/aux;
    matrizinversa[1][1] =    matriz[0][0]/aux;
}

void Multiplicador_Matriz_Vetor(int linha, int coluna, float matriz[linha][coluna], float vetor[coluna], float solucao[linha])
{
    int i, j;

    for (i=0; i<linha; i++)
    {
        solucao[i] = 0 ;
        for (j=0; j<coluna; j++)
        {
            solucao[i] = solucao[i] + matriz[i][j]*vetor[j];
        }
    }

}
