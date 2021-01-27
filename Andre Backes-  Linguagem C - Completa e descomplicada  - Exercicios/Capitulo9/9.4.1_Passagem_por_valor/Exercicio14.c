int Fatorial( unsigned int numero)
{
    int i;
    unsigned int soma= 1;

    for( i=1; i<=numero; i++)
    {
        soma = soma*i;
    }
    return soma;
}
