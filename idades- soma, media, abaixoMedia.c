#include <stdio.h>
void leia(int[]);
int somar(int[]);
float calculoMedia(int);
int abaixoMedia(int[], float);


int main()
{
    int idades[5];
    
    leia(idades);
    
    int soma = somar(idades);
    float media = calculoMedia(soma);
    int nAbaixo = abaixoMedia(idades, media);
   
    printf("\nSoma =  %i anos", soma);
    printf("\nMedia =  %f anos", media);
    printf("\nAbaixo da media =  %i pessoas" , nAbaixo);
    
    return 0;
}


void leia(int idades[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("Digite idade: ");
        scanf(" %i", &idades[i]);
    }
}  
    
    
int somar(int idades[])
{
    int soma = 0;
    for(int i = 0; i < 5; i++)
    {
        soma = soma + idades[i];
    }
    return soma;
} 
    
    
float calculoMedia(int soma)
{
    float media = (float)soma / 5;
    return media;
}


int abaixoMedia(int idades[], float media)
{
    int abaixoMedia = 0;
    for(int i = 0; i < 5; i++)
    {
        if(idades[i] < media)
            abaixoMedia++;
    }
    return abaixoMedia;
}     
    
    
    
    
    
    
    
    
    
