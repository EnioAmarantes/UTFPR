#include <stdio.h>
int main(){
  int n;
  printf("Digite um numero inteiro: ");
  scanf("%d",&n);

//  se n = 0 entao
//    escreval("ZERO")
//    senao
//      se n % 2 = 0 entao
//        escreva("PAR")
//        senao
//          escreva("ÍMPAR")
//      fimse
//  fimse

  if (n == 0)
  {
    printf("\nZERO\n");
  }
    else
   {
     if (n % 2 == 0)
     {
        printf("\nPAR\n");
     }
        else
        {
           printf("\nIMPAR\n");
        }
   }
  return 0;
}
