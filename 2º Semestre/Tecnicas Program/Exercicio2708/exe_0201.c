#include <stdio.h>

int main(){
  float x, y, s;

  for(s = 0,x = 1, y = 1; x <= 99;s = s + x / y, x = x + 2, y = y + 1);
 
  printf("\nO resultado da soma é:\t%f",s);
return 0; 
}
