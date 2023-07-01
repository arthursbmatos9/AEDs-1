/******************************************************************************
Um aluno é descrito pelos seguintes dados: nome do aluno, uma string com tamanho igual a 50 caracteres, idade, um valor inteiro.
    Declare, no escopo global, o tipo Aluno.
    A função principal deverá:
        - Criar um arranjo de três alunos
        - Ler os três alunos
        - Escrever os três alunos
        - Escrever a idade média da turma
        
        
Altere o programa acima de forma que a escrita de um aluno seja realizada por uma função específica para isto


Crie uma nova versão para o programa substituindo o vetor de estruturas para um vetor de ponteiros para estruturas. Em seguida, 
crie as três estruturas (aloque, dinamicamente, o espaço de memória requerido para as três estruturas). Faça os ajustes no 
código substituindo a sintaxe de acesso às estruturas para a sintaxe de acesso aos ponteiros para estruturas (em resumo, ponto por seta).
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;
} Aluno;



void escrevaAluno(Aluno* A)
{
    printf("\nNome = %s", A->nome);
    printf("Idade = %i", A->idade);
}

void leia(Aluno* A)
{
    fflush(stdin); //limpa buffer
    
    printf("\nDigite nome: ");
    fgets(A->nome, 50, stdin);
        
    printf("\nDigite idade: ");
    scanf("%i", &A->idade);
    
    getchar(); //limpa buffer
}

float calculeMedia(Aluno* A)
{
    float soma = 0;
    float media;
    
    for(int i= 0; i< 3; i++)
    {
        soma+= A[i].idade;
    }
    
    media = soma / 3;
    
    return media;
}

int main()
{
    Aluno* A[3];
    float soma = 0;
    float media;
    
    for(int i= 0; i< 3; i++)
    {
        fflush(stdin); //limpa buffer
        
        A[i] = (Aluno*)malloc(sizeof(Aluno));
        leia(A[i]);
    }
        
    
    for(int i= 0; i< 3; i++)
    {
        escrevaAluno(A[i]);
    }
    
    media = calculeMedia(A);
    printf("\nMedia das idades = %f", media);
    
    return 0;
}

