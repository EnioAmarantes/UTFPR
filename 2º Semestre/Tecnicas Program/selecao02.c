#include <stdio.h>
int main(){
  int n;
  printf("Digite um numero inteiro: ");
  scanf("%d",&n);

//  se n MOD 2 = 0 entao
//    escreval("PAR")
//    senao
//      escreval("IMPAR")
//  fimse
//
/*SINTAXE em linguagem C

  if <condi��o>
  {
    <comando(s)>  ---> s�o executados se a condi��o for verdadeira
  }
  else
  {
    <comando(s)>  ---> s�o executados se a condi��o for falsa
  }

  as chaves {} s�o necess�rias quando h� mais de um comando no
  bloco
*/
  if (n % 2 == 0)
  {
    printf("\nPAR\n");
  }
    else
   {
      printf("\nIMPAR\n");
   }
  return 0;
}
