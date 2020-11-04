#include <stdio.h>
int main(){
  char n;
  printf("Digite uma letra ou um numero inteiro: ");
  scanf("%c",&n);

//SINTAXE em linguagem C
/*
  switch (<express�o_de_sele��o>)
  {
    case <valor_de_avalia��o>:
      <comando(s) 1>
      break;
    case <valor_de_avalia��o>:
      <comando(s) 2>
      break;
    ...
    case <valor_de_avalia��o>:
      <comando(s) n>
      break;
    default:
      <comando(s)>
  }

express�o_de_sele��o --> uma vari�vel do tipo inteiro que ser� avaliada
valor_de_avalia��o --> valor para compara��o com a vari�vel da express�o_de_sele��o

*/

  switch (n)
  {
     case 'A'...'Z':
       printf("\nletra maiuscula\n");
       break;
     case 'a'...'z':
       printf("\nletra minuscula\n");
       break;
     case '0'...'9':
       printf("\nnumero\n");
       break;
     default:
       printf("\nERRO\n");
  }

  return 0;
}
