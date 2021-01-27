#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Conversao( char *string){
    int i;
    printf("FRASE: ");
    gets(string);
    for( i=0; string[i]!='\0';i++){
        if (string[i]!=' ')
            string[i] = string[i]-32;
    }
    string[i]='\0';
    printf("\n\nFrase Convertida: %s",string);
}

int main(){
    char palavra[200];
    Conversao(&palavra);
    return 0;
}