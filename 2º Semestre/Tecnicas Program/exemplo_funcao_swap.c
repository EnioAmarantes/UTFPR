#include <stdio.h>
#include <math.h>
Swap(int *a,int *b){
  int temp;
  printf("\nvalor de a --> \t\t\t%x \nendereco de memoria de a --> \t%x \nvalor para o qual a aponta --> \t%d", a, &a, *a);
  printf("\n\nvalor de b --> \t\t\t%x \nendereco de memoria de b --> \t%x \nvalor para o qual b aponta --> \t%d", b, &b, *b);
  temp=*a;
  *a=*b;
  *b=temp;
}
int main (void)
{
  int n1,n2;
  n1=111;
  n2=222;
  printf("\nvalor de n1 --> \t\t%d \nendereco de memoria de n1 --> %x", n1, & n1);
  printf("\n\nvalor de n2 --> \t\t%d \nendereco de memoria de n2 --> %x", n2, & n2);
  printf("\n\nantes da chamada da funcao --> n1 --> %d e n2 --> %d\n\n", n1, n2);
  Swap(&n1,&n2);
  printf("\n\ndepois da chamada da funcao --> n1 --> %d e n2 --> %d\n", n1, n2);
  return 0;
}
