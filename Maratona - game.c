#include <stdio.h>

int main(void) {

  int n, d, a, resp;

  do{
    scanf("%d", &n);
  }while(n<3 || n>100);

  do{
    scanf("%d", &d);
  }while(d<1 || d>n);

  do{
    scanf("%d", &a);
  }while(a<1 || a>n);

  if(a<d)
  {
    resp = d-a;
  }

  else if(a>d)
  {
    resp = n-a+d;
  }

  printf("%d", resp);
  
  return 0;
}