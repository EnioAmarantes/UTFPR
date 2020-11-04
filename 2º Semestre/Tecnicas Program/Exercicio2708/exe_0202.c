#include <stdio.h>

int main(){
  int x = 50;
  float s;

  do{
    s = s + 2 / x;
    x = x - 1;
  }while(x >= 1);
  printf("\n A soma final será:\t%f", s);
return 0;
}
