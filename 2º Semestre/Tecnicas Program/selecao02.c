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

  if <condição>
  {
    <comando(s)>  ---> são executados se a condição for verdadeira
  }
  else
  {
    <comando(s)>  ---> são executados se a condição for falsa
  }

  as chaves {} são necessárias quando há mais de um comando no
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
