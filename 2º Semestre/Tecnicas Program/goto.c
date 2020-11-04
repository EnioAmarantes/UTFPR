#include <stdio.h>
int main(){
  int n;

  n = 0;
p01:
  printf("\n%3d",n);
  n = n + 1;
  if (n < 11)
    goto p01;

  return 0;
}
