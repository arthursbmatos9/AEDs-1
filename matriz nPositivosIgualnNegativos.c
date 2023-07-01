#include <stdbool.h>
#include <stdio.h>

#define nLin 10
#define nCol 10

bool nPositivosIgualnNegativos(float M[][nCol])
{
    int contaPosi = 0;
    int contaNeg = 0;
    bool mesmaQtd;
    
    for(int i= 0; i< nLin; i++)
    {
        for(int j= 0; j< nCol; j++)
        {
            if(M[i][j] < 0)
                contaNeg++;
            else if(M[i][j] >= 0)
                contaPosi++;
        }
    }
    
    if(contaPosi == contaNeg)
        mesmaQtd = true;
    else
        mesmaQtd = false;
        
    return mesmaQtd;
}
