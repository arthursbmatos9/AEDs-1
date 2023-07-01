/******************************************************************************
Declare, globalmente, um tipo para descrever uma data. Considere uma data descrita por três dados inteiros: dia, mês e ano.

Construa uma função que receba uma estrutura data e a escreva na tela.
Construa uma função que receba um ponteiro para uma estrutura data e a leia (pelo teclado).
Construa uma função que receba uma estrutura data e um mês chave da pesquisa. A função deverá retornar verdadeiro se o mês da data da estrutura parametrizada 
é igual ao mês chave da pesquisa, e falso, caso contrário.
Construa uma função que receba um vetor de estrutura de datas e um mês chave da pesquisa. A função deverá escrever na tela todas as datas cujo mês for igual 
à chave da pesquisa.

A função principal deverá declarar o vetor de datas com tamanho igual a TAM. Em seguida, ler os valores para cada data (lembrar de fazer passagem de parâmetro 
por referência). Após a leitura, permitir a pesquisa por datas relativas a um mês específico fornecido pelo usuário do programa.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 3

typedef struct
{
    int dia;
    int mes;
    int ano;
} Calendario;



void escreva(Calendario* data)
{
    printf("\n%i/%i/%i", data->dia, data->mes, data->ano);
}



void leia(Calendario* data)
{
    fflush(stdin);
    
    printf("\nDigite dia: ");
    scanf("%i", &data->dia);
    getchar();
    
    printf("Digite mes: ");
    scanf("%i", &data->mes);
    getchar();
    
    printf("Digite ano: ");
    scanf("%i", &data->ano);
    getchar();
}



void mesIgualChave(Calendario* data, int mesEscolhido)
{
    if(data->mes == mesEscolhido)
    {
        printf("\n%i/%i/%i", data->dia, data->mes, data->ano);
    }
}


int main()
{
    Calendario* data[TAM];
    
    for(int i= 0; i< TAM; i++)
    {
        data[i] = (Calendario*)malloc(sizeof(Calendario));
        leia(data[i]);
    }
    
    for(int i= 0; i< TAM; i++)
    {
        escreva(data[i]);
    }
    
    int mesEscolhido;
    printf("\n\nEscolha um mes: ");
    scanf(" %i", &mesEscolhido);
    
    for(int i= 0; i< TAM; i++)
    {
        mesIgualChave(data[i], mesEscolhido);
    }
    
    return 0;
}














