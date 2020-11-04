/*
Questão 02:
Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos.
Exemplo: 120 é triangular, pois 4 * 5 * 6 = 120.
1 - Escreva uma função para preencher um vetor com dimensão 20, de números inteiros não negativos;
2 - Escreva uma função que mostre se cada número no vetor é triangular ou não.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define Q 20
void preenche(int[],int);
int triangular(int);
void percorre(int[],int);
int main(){
//  int vetor[Q] = {6,24,60,120,210,336,504,720,990,19656,5814,2184,111,222,333,444,555,777,888,999};
  int vetor[Q];
  preenche(vetor,Q);
  percorre(vetor,Q);
  return 0;
}
void preenche(int v[],int q){
  int i;
  srand(time(NULL));
  for(i = 0;i < q;i = i + 1)
    v[i] = rand()/100 + 1;
}
void percorre(int v[], int q){
  int i;
  for(i = 0;i < q;i = i + 1)
    if (triangular(v[i]))
      printf("\nO numero %d e triangular",v[i]);
      else
         printf("\nO numero %d nao e triangular",v[i]);
}
int triangular(int n){
  int i, ok;
  i = 1;
  ok = 0;
  while ((i *(i + 1) * (i + 2)) <= n){
    if ((i *(i + 1) * (i + 2)) == n)
      ok = 1;
      else
        ok = 0;
    i = i + 1;
  }
  return ok;
}

