#include <stdio.h>

#define nLin 10
#define nCol 10
int nOcorrenciasMaiorValor(float M[][nCol])
{
    int nOcorrencias = 0;
    float maiorValor = M[0][0];
    
    for(int i= 0; i< nLin; i++)
    {
        for(int j= 0; j< nCol; j++)
        {
            if(M[i][j] > maiorValor)
            {
                maiorValor = M[i][j];
                nOcorrencias = 0;
            }
            
            if(M[i][j] == maiorValor)
                nOcorrencias++;
        }
    }
    
   
    
    return nOcorrencias;
}


