float media ( float nota1, float nota2, float nota3, char letra)
{
    float Media;
    if ( letra == 'A'|| letra == 'a')
    {
        Media = (nota1+nota2+nota3)/3.0;
        return Media;
    }
    if ( letra == 'P' || letra == 'p')
    {
        Media = ((5*nota1)+(3*nota2)+(2*nota3))/10.0;
        return Media;
    }
}
