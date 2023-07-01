/******************************************************************************
Construa um procedimento que troque dois elementos de duas posições quaisquer de um arranjo.
Argumentos: Um arranjo de reais, o tamanho do arranjo e dois valores inteiros relativos às duas posições a serem trocadas.
*******************************************************************************/
#include <stdio.h>
int leia();
void preenchaArranjo(int, int[]);
void troque(int[]);
void novoArranjo(int[], int);

int main()
{
    int tam = leia();
    
    int arranjo[tam];
    preenchaArranjo(tam, arranjo);
    
    troque(arranjo);
    
    novoArranjo(arranjo, tam);
    
    return 0;
}

int leia()
{
    int tam;
    printf("Digite o tamanho do arranjo:\n ");
    scanf(" %i", &tam);
    
    return tam;
}

void preenchaArranjo(int tam, int arranjo[])
{
    for(int i = 0; i < tam; i++)
    {
        printf("\nDigite valor: ");
        scanf(" %i", &arranjo[i]);
    }

    printf("\nArranjo original: ");
    for(int i = 0; i < tam; i++)
    {
        printf("%i ", arranjo[i]);
    }
}

void troque(int arranjo[])
{
    int troca1;
    printf("\n\nQual a posicao do primeiro valor a ser trocado? ");
    scanf(" %i", &troca1);
    
    int troca2;
    printf("\nQual a posicao do segundo valor a ser trocado? ");
    scanf(" %i", &troca2);
    
    
    int aux = arranjo[troca1 - 1];
    arranjo[troca1 - 1] = arranjo[troca2 - 1];
    arranjo[troca2 - 1] = aux;
}

void novoArranjo(int arranjo[], int tam)
{
    printf("\nArranjo novo: ");
    for(int i = 0; i < tam; i++)
    {
        printf("%i ", arranjo[i]);
    }

}












