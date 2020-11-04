#include <stdio.h>

int main(){
  int sinal = 1;
  float x = 1, s = 0;

  while(x <= 10){
    if(x < 10){
        s = s + ((x * sinal) / (x * x));
        sinal = sinal * (-1);
        x = x + 1;
        printf("\n %f", s);
        printf("\n %f", x);
    }else{
       s = s - x / (x * x);
       x = x + 1;
     }
  }

  printf("\nO resultado será = %f", s);
  printf("\n%f",x);

return 0;
}
