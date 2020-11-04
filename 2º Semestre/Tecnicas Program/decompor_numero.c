#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
int main(){

  int n, tam, aux;

  n = 34567;

//  while (n != 0){
//    printf("%d",n % 10);
//    n = n / 10;
//  }

//  tam = 0;
//  while (n != 0){
//    n = n / 10;
//   tam = tam  + 1;
//  }
//  printf("\ntamanho --> %d",tam);

//  printf("\ntamanho --> %d",(int)log10(n)+1);

  tam = (int)pow(10,((int)log10(n))+1);
  tam = tam / 10;
  aux = 0;
  while (tam > 0){
    aux = aux + (n % 10) * tam;
    tam = tam / 10;
    n = n / 10;
  }
  printf("\nauxiliar --> %d",aux);

  return 0;
}
