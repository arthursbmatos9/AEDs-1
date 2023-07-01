#include <stdio.h>

#define TAM 10
void armazenaPositivos(float A[], char* nomeArq)
{
    FILE* arq = fopen(nomeArq, "a");
    
    for(int i= 0; i< TAM; i++)
    {
        if(A[i] >= 0)
            fprintf(arq, " %f \n", A[i]);
    }
    
    fclose(arq);
}


