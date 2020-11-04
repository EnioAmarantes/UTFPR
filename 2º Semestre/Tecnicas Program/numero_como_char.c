#include <stdio.h>
int main(){
  char num = 125;
  printf("\n%d",num);
  while(num > 0){
    if (!(isalpha(num % 10)))
       printf("\n%d",num % 10);
    num = num / 10;
  }

}
