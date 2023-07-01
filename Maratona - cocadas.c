#include <stdio.h>

int main(void) {
  int x;

  do{
    scanf("%d", &x);
  }while(x<1 || x>99);
  
  int y;
  int soma = 0;

  for(int i=0; i<x; i++)
    {
        scanf("%d", &y);
        if(y>0)
          soma+= y;
    }

  int z = soma / 30;
  printf("%d", z);

  
  return 0;
}