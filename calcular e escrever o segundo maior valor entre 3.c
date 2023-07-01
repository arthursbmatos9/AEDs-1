/******************************************************************************
Ler três valores reais. Calcular e escrever o segundo maior valor. Utilize a estratégia de ordenar os três valores lidos.
Em sua solução, considere:
- uma função pode receber parâmetros por valor;
- uma função pode receber parâmetros por referência;
- uma função pode ou não retornar algum valor.
O programa deverá conter, além da função principal, as seguintes outras:
- uma função para ler um valor real;
- uma função para ordenar três valores reais;
- uma função para escrever o resultado (o segundo maior valor lido).
*******************************************************************************/
#include <stdio.h>
int escreva();
float verifique(float, float, float);
void resposta(float);

int main()
{
    puts("Segundo maior valor lido [entre 3]\n");
    
    float n1 = escreva();
    float n2 = escreva();
    float n3 = escreva();
    
    float maior2 = verifique(n1, n2, n3);
    
    resposta(maior2);
    
    return 0;
}

int escreva()
{
    float x;
    printf("Digite valor: ");
    scanf(" %f", &x);
    
    return x;
}

float verifique(float n1, float n2, float n3)  // 1>2>3      1>3>2     2>1>3   2>3>1    3>2>1    3>1>2  
{
    float segMaior;
    
    if(n1 > n2 && n3 < n2 || n3 > n2 && n1 < n2)
        segMaior = n2;
    else if(n1 > n3 && n2 < n3 || n2 > n3 && n1 < n3)
        segMaior = n3;
    else if(n2 > n1 && n3 < n1 || n3 > n1 && n2 < n1)
        segMaior = n1;
    else
        segMaior = n1;
        
    return segMaior;
}

void resposta(float maior2)
{
    printf("\nO segundo maior valor e = %.1f.", maior2);
}












