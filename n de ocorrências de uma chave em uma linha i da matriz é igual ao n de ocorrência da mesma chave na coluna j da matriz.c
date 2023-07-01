#include <stdio.h>
#include <stdbool.h>

#define nLin 10
#define nCol 10

bool verificaIgualdade(float M[][nCol], float chave, int linha, int coluna)
{
    int cLinha = 0;
    int cColuna = 0;
    
    for(int i= 0; i< nLin; i++)
    {
        if(M[i][coluna] == chave)
            cColuna++;
    }
    
    for(int j= 0; j< nCol; j++)
    {
        if(M[linha][j] == chave)
            cLinha++;
    }
    
    return(cLinha == cColuna);
}
