#include <stdio.h>
int main(){
  int n;
  printf("Digite um numero inteiro: ");
  scanf("%d",&n);

//  se n MOD 2 = 0 entao
//    escreval("PAR")
//  fimse
//
/*SINTAXE em linguagem C

  if <condi��o>
  {
    <comando(s)>
  }

  as chaves {} s�o necess�rias quando h� mais de um comando no
  bloco
*/
  if ( (n % 2 == 0) && (n != 0) )
    printf("\nPAR\n");
  if (n % 2 != 0)
    printf("\nIMPAR\n");
  if (n == 0)
    printf("\nZERO\n");

  return 0;
}
