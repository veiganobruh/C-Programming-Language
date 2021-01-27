void Exclamacao(int numero)
{
    int i,j;
    for( i=0; i<numero; i++)
    {
        for (j=0; j<=i; j++ )
        {
            printf("*");
        }
        printf("\n");
    }
    for( i=numero-1; i>0; i--)
    {
        for (j=0; j<i; j++ )
        {
            printf("*");
        }
        printf("\n");

    }

}
