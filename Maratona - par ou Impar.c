#include <stdio.h>

int main(void) {

  int P, D_1, D_2;

  do{
    scanf("%d", &P);
  }while(P!=0 && P!=1);

  do{
    scanf("%d", &D_1);
  }while(D_1<0 || D_1>5);
    
  do{
    scanf("%d", &D_2);
  }while(D_2<0 || D_2>5);

  if(P==0)
  {
    if((D_1 + D_2)%2 == 0)
      printf("0");
    else
      printf("1");
  }
  else if(P==1)
  {
    if((D_1 + D_2)%2 == 0)
      printf("1");
    else
      printf("0");
  }
  
  return 0;
}