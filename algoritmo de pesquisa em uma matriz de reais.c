/******************************************************************************
Construa uma função que implemente um algoritmo de pesquisa em uma matriz de reais.
Argumentos: Uma matriz de reais e o valor chave da pesquisa.
Retorno: Verdadeiro, se a chave existir na matriz, ou falso, caso contrário.
*******************************************************************************/
bool pesquisa(float M[][nCol], float chave)
{
    bool existe = false;

    for(int i = 0; i < nLin; i++)
    {
        for(int j = 0; j < nCol; j++)
        {
            if(M[i][j] == chave)
                existe = true;
        }
    }
    
    return existe;
}



















