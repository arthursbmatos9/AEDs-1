/******************************************************************************
Construa uma função que receba duas matrizes de reais, M e T. Calcular a matriz transposta de M, armazenando-a em T.     3 3 3     3 3 3
Planeje bem as dimensões da duas matrizes argumentos da função.                                                       M  3 3 3   T 3 3 3
Teste sua função a partir de chamadas na função principal.                                                                         
*******************************************************************************/
#include <stdio.h>

void transponha(float M[][nCol], float T[][nCol])
{
    for(int i = 0; i < nLin; i++)
    {
        for(int j = 0; j < nCol; j++)
        {
            T[j][i] = M[i][j];
        }
    }
}
