#include <stdio.h>

int main(){
  float a = 2, b = 1, pi = 1;
  float i;

  for(i = 1; i < 10000000; i++){
    pi = pi * (a * a) / (b * (b + 2));
    a = a + 2;
    b = b + 2;  
  }
  pi = pi * 2;

  printf("\n pi = %1.6f", pi);

return 0;
}
