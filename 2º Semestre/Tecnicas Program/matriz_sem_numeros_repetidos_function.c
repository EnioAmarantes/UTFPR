#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define L 5
#define C 13
void preencher(int[L][C]);
void imprimir(int[L][C]);
void zerar(int[L][C]);
int main(){
  int m[L][C];
  zerar(m);
  imprimir(m);
  preencher(m);
  imprimir(m);
  return 0;
}
void preencher(int m[L][C]){
//preenche a matriz com números randômicos não repetidos
 int i, j, aux, r, i2, j2;
 srand(time(NULL));
  i = 0;
  while (i < L){
    j = 0;
    while (j < C){
      aux = rand()/100;
      r = 0;
      for(i2 = 0; i2 <= i; i2++)
        for(j2 = 0; j2 <= j; j2++)
          if (m[i2][j2] == aux)
             r = 1;
      if (r == 0){
        m[i][j] = aux;
        j++;
      }
    }
    i++;
  }
}
void imprimir(int m[L][C]){
//imprime o conteúdo da matriz
  int x, y;
  printf("\n");
  for(x = 0;x < L;x++){
    for(y = 0;y < C;y++)
       printf("%4d ",m[x][y]);
    printf("\n");
  }
}
void zerar(int m[L][C]){
//inicializa a matriz com zeros
  int i, j;
  for(i = 0; i < L; i++)
    for(j = 0; j < C; j++)
       m[i][j] = 0;
}
