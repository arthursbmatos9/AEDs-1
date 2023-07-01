#include <stdio.h>

int calculeAmplitude(char* nomeA)
{
    FILE* arq = fopen(nomeA, "r");
    float valor;
    float maior = -9999;
    float menor = 10000;
    float ampli;
    
    if(arq!= NULL)
    {
        while(!feof(arq))
        {
            fscanf(arq, "%i", &valor);
            if(valor > maior)
                maior = valor;
            if(valor < menor)
                menor = valor;
        }
        
        ampli = maior - menor;
    }
    fclose(arq);
    
    return ampli;
}
