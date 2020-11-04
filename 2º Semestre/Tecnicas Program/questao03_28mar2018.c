/*
� poss�vel calcular uma pot�ncia de grau 2 atrav�s da soma de n�meros �mpares.
Sabe-se que n2 � igual a soma dos n primeiros n�meros naturais �mpares.
Exemplo: 52 = 1 + 3 + 5 + 7 + 9 = 25.
1 - Escreva uma fun��o que preencha um vetor de 10 posi��es com n�meros inteiros menores do que 20 e maiores que 1;
2 - Escreva uma fun��o que receba um n�mero inteiro e que mostre na tela sua pot�ncia de grau 2 da seguinte forma:
16^2 = 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 + 21 + 23 + 25 + 27 + 29 + 31  = 256
3 - Escreva um programa que utilize as duas fun��es acima para mostrar na tela todas as potencias de grau 2
dos n�meros armazenados no vetor.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define Q 20
void preenche(int[],int);
void potencia(int);
void percorre(int[],int);
int main(){
  int vetor[Q];
  preenche(vetor,Q);
  percorre(vetor,Q);
  return 0;
}
void potencia(int n){
  int i, soma, q;
  printf("\n%3d^2 = ",n);
  for(i = 1, q = 1, soma = 0;q <= n;q = q + 1, i = i + 2){
    if (q < n)
       printf("%3d +",i);
       else
         printf("%3d ",i);
    soma = soma + i;
  }
  printf(" = %3d",soma);
}
void preenche(int v[],int q){
  int i;
  srand(time(NULL));
  for(i = 0;i < q;i = i + 1)
    do{
      v[i] = rand()/100;
    }while ((v[i] >= 20) || (v[i] <= 1));
}
void percorre(int v[], int q){
  int i;
  for(i = 0;i < q;i = i + 1)
    potencia(v[i]);
}
