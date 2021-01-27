float operacao ( float numero1, float numero2, char simbolo)
{
    float Resultado;
    if ( simbolo == '+')
    {
        Resultado = numero1 + numero2;
        return Resultado;
    }
    if ( simbolo == '-')
    {
        Resultado = numero1 - numero2;
        return Resultado;
    }
    if ( simbolo == '*')
    {
        Resultado = numero1 * numero2;
        return Resultado;
    }
    if ( simbolo == '/')
    {
        Resultado = numero1 / numero2;
        return Resultado;
    }
}
