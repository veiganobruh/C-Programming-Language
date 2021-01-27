void Quadrado_Perfeito(float valor){
    int aux;
    aux = sqrt(valor);
    if ( valor == pow(aux,2))
    {
        printf("EH UM QUADRADO PERFEITO");
    }
    else
    {
        printf("NAO EH UM QUADRADO PERFEITO");
    }
}
