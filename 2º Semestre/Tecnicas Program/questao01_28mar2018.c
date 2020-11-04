/*
Quest�o 01:
Um n�mero A � dito permuta��o de um n�mero B se os d�gitos de A formam uma permuta��o
dos d�gitos de B.
Exemplo: 5412434 � uma permuta��o de 4321445, mas n�o � uma permuta��o de 4312455.
1 � Fa�a uma fun��o que receba um inteiro N e um inteiro D (D sendo maior do que 0 e
menor ou igual a 9) e que devolve quantas vezes o d�gito D aparece em no n�mero N.
2 � Usando a fun��o do item anterior, fa�a um programa que l� dois inteiros positivos
X e Y e que responda se X � permuta��o de Y.
*/
#include <stdio.h>
#include <stdlib.h>
int verifica(int,int);
int main(){
  int a, b, i;
  printf("\nVerifica se o numero A e permutacao do numero B\n");
  printf("\nInforme o valor de A: ");
  scanf("%d",&a);
  printf("\nInforme o valor de B: ");
  scanf("%d",&b);
  for(i = 1;i < 10;i = i + 1){
    if ((verifica(a,i)) != (verifica(b,i))){
      printf("\nO numero %d nao e uma permutacao de %d",a,b);
      exit(1);
    }
  }
  printf("\nO numero %d e uma permutacao de %d",a,b);
  return 0;
}
int verifica(int n, int d){
  int q;
  q = 0;
  while(n > 0){
    if (n % 10 == d)
      q = q + 1;
    n = n / 10;
  }
  return q;
}
