#include <stdbool.h>
#include <stdio.h>

#define nLin 5
#define nCol 5

bool haChave(float M[][nCol], float chave, int linha)
{
    bool existe = false;
    int j = 0;
    
    while(!existe && j < nCol)
    {
        if(M[linha][j] == chave)
            existe = true;
        else
            j++;
    }
    
    return existe;
}
