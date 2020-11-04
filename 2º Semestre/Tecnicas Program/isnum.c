#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //biblioteca p/ as funções isalpha isdigit toupper tolower

int main(void)
{
   char a[20];
   int i, ok, aux;

   printf("\nDigite um numero inteiro: ");
   gets(a);

   ok = 0;
   for(i = 0;i < strlen(a);i = i + 1)
     if (!(isdigit(a[i]))){
       ok = 1;
       break;
     }

   if (ok == 0){
      aux = atoi(a);
      printf("\nNumero inteiro: %d",aux);
   }

   return 0;
}
