/*******************************************************************************
Construa um procedimento que troque o primeiro elemento do arranjo com o último.
Argumento: um arranjo de reais e um valor inteiro relativo ao tamanho do arranjo.
********************************************************************************/
#include <stdio.h>
void troque(char[]);


int main()
{
    char elementos[] = {'2', '4', '6', '8', '\0'};
    
    printf("Sequencia original: %s ", elementos);
    
    troque(elementos);
    
    printf("\nSequencia trocando o ultimo com o primeiro elemento: %s ", elementos);

    return 0;
}

void troque(char elementos[])
{
    char aux = elementos[0];
    elementos[0] = elementos[3];
    elementos[3] = aux;
}






















