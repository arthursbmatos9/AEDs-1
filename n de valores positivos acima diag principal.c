/******************************************************************************
Construa uma função que receba uma matriz quadrada de reais. A função deverá calcular e retornar o número de valores positivos
posicionados acima da diagonal principal. Planeje bem a dimensão da matriz argumento da função.
Teste sua função a partir de chamadas na função principal.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define nLin 5;
#define nCol 5;
int qtPositivosAcimaDiagonal(M[nLin[nLin])
{
    int c = 0;
    
    for(int i = 0; i < nLin-1; i++)
    {
        for(int j = i+1; j < nLin; j++) /*matriz quadrade nLin = nCol*/
        {
            if(M[i][j] > 0)
                c++;
        }
    }
  
    return c;
}
