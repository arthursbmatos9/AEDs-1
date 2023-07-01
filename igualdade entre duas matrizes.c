/*Durante a aula foi discutido o custo de tempo do algoritmo apresentado para verificar a igualdade entre duas matrizes. Proponha sua versão para uma função
eficiente, utilizando alguma estratégia que reduza seu custo de tempo.*/

bool iguais(float A[][nCol], float B[][nCol])
{
    bool saoIguais = true;
    int i = 0;
    int j = 0;
    
    while(saoIguais /*= true*/ && i < nLin)
    {
        if(A[i][j]) != B[i][j])
            saoIguais = false;
        
        j++;
        
        if(j == nCol)
        {
            i++;
            j = 0;
        }
    }
    
    return saoIguais;
}







