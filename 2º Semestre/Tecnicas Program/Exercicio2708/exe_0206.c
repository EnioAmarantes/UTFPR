#include <stdio.h>

int main(){

  int a = 480, b = 10, i, s, sinal = 1;

  for(i = 1; i < 31; i++){
    s = s + (a * sinal) / b;
    sinal = sinal * -1;
    a = a - 5;
    b = b + 1;
  }

  printf("\nO resultado será: %d", s);
return 0;
}
