/******************************************************************************
Construa um programa que leia uma palavra pelo teclado e calcule e escreva:
- o tamanho da palavra (número de caracteres);
- o número de letras iguais à letra ‘A’ (maiúsculas ou minúsculas) presentes na palavra lida
*******************************************************************************/
#include <stdio.h>
void leia(char[]);
int letras(char[]);
int numeroAs(char[]);

int main()
{
    char palavra[46];   // maior palavra da lingua portuguesa tem 46 letras
    leia(palavra);  
    
    int nLetras = letras(palavra);
    int nAs = numeroAs(palavra);
    
    
    printf("\nNumero de letras = %i, numero de A = %i", nLetras, nAs);
    
    return 0;
}


void leia(char palavra[])
{
    printf("Digite alguma palavra: ");
    scanf(" %s", palavra);
}


int letras(char palavra[])
{
    int i = 0;        // contador
    while(palavra[i] != '\0' && i < 46)    // '\0' finaliza
    {
        i++;
    }
    return i;
}


int numeroAs(char palavra[])
{
    int As = 0;
    for(int i = 0; i < 46; i++)
    {
        if(palavra[i] == 'a' || palavra[i] == 'A')
            As++;
    }
    return As;
}

















