/******************************************************************************
Construa uma função recursiva que escreva em ordem decrescente os inteiros de N até 0.
*******************************************************************************/
#include <stdio.h>
int escolha();
void faca(int);

int main()
{
    int n = escolha();
    faca(n);
    
    return 0;
}

int escolha()
{
    int x;
    printf("Digite um numero: ");
    scanf(" %i", &x);
    
    return x;
}

void faca(int n)
{
    if(n >= 0)
    {
        printf(" %i,", n);
        faca(n-1);
    }
}






