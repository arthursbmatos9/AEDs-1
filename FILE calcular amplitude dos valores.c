/******************************************************************************
Construa uma função que receba um ponteiro do tipo FILE que aponta para um arquivo com um conjunto de valores do tipo real. A função deverá calcular
e retornar a amplitude dos valores nele armazenado.
Teste a função criada a partir da função principal. Para isto, gere um arquivo com valores que permita testar a função criada.
*******************************************************************************/
#include <stdio.h>

float calculoAmplitude(char* valores)
{
    FILE* arq = fopen("exAeds.txt", "r");
    
    float maior = -99999999;
    float menor = 100000000;
    float valor;
    
    if(arq != NULL)
    {
        fscanf(arq, " %f", &valor);
        
        while(!feof(arq))
        {
            if(valor > maior)
                maior = valor;
            if(valor < menor)
                menor = valor;
        }
    }
    
    
    float amplitude = maior - menor;
    
    printf(" \nAmplitude = %.2f ", amplitude);
    
    fclose(arq);
    
    return amplitude;
}

