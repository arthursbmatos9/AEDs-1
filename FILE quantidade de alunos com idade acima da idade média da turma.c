/******************************************************************************
Construa um programa que calcule a quantidade de alunos com idade acima da idade média da turma. Para isto, o programa deverá ler a idade de cada aluno. 
A leitura de uma idade igual a zero deverá indicar o término dos valores – observe que zero não deve ser considerada uma idade válida, apenas a indicação 
de não haver mais valores a serem fornecidos (flag). As idades lidas deverão ser armazenadas no arquivo “idade.dat”. Após a leitura das idades, o arquivo
deverá ser fechado. Para realizar os cálculos, o arquivo deverá ser aberto no modo leitura.
*******************************************************************************/
#include <stdio.h>

int calculoAcimaMedia()
{
    int idades;
    int nIdades = 0;
    
    int somaIdades = 0;
    float media;
    int nAcimaMedia = 0;
    
    FILE* arq = fopen("idade.dat", "a");
        
        if(arq != NULL)
        {
            do{
                printf("\nDigite idade [0 para encerrar]: ");
                fscanf(arq, " %i", &idades);
                somaIdades += idades;
                nIdades++;
            
            }while(idades != 0);
        }
        
    fclose(arq);
    
    fopen("idade.dat", "r");
    
        media =  somaIdades / (float)nIdades;
        if(arq != NULL)
        {
            while(!feof(arq))
            {
                fscanf(arq, " %i", &idades);
                if(idades > media)
                    nAcimaMedia++;
            }
        }
        
    fclose(arq);
    
    return nAcimaMedia;
}










