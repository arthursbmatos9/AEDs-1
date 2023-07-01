/******************************************************************************
Construa uma função que calcule a média dos valores que compõe a diagonal principal de uma matriz quadrada.
Argumento: Uma matriz quadrada de reais, de dimensão NUM_LIN x NUM_LIN.
Retorno: Um valor real relativo ao resultado do cálculo da média da diagonal principal
*******************************************************************************/

float mediaPrincipal(float M[][nLin])
{
    float soma = 0;
    float media;
    
    for(int x = 0; x < nLin; x++)
    {
        soma = soma + M[x][x];
    }
    
    media = soma / nLin;
    
    return media;
}
