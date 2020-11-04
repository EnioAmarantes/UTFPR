#include <stdio.h>
int main(){
  char n;
  printf("Digite uma letra ou um numero inteiro: ");
  scanf("%c",&n);

//SINTAXE em linguagem C
/*
  switch (<expressão_de_seleção>)
  {
    case <valor_de_avaliação>:
      <comando(s) 1>
      break;
    case <valor_de_avaliação>:
      <comando(s) 2>
      break;
    ...
    case <valor_de_avaliação>:
      <comando(s) n>
      break;
    default:
      <comando(s)>
  }

expressão_de_seleção --> uma variável do tipo inteiro que será avaliada
valor_de_avaliação --> valor para comparação com a variável da expressão_de_seleção

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
