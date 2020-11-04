#include <stdio.h>

int main(){
  int i, a = 1000, sinal = 1, result;

  for(i = 1; i < 51; i++){
    result = result + (a * sinal) / i;
    sinal = sinal * -1;
    printf("\n%d", result);
  }
  printf("\nO Resultado será: %d", result);
return 0;
}
