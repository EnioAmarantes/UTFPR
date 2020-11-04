#include <stdio.h>
#include <locale.h>



int main () {
    setlocale(LC_ALL, "Portuguese");

int n1, n2, n3, n4, n5, n6;

    printf ("Vamos ordenar os números.\n");
    printf ("Digite um número qualquer:\t");
         scanf ("%d", &n4);
    printf ("Digite um outro número:\t\t");
         scanf ("%d", &n5);
    printf ("Digite mais um número:\t\t");
         scanf ("%d", &n6);

         if ((n4 < n5) && (n4 < n6)) {
             n1 = n4;
         } else {
              if ((n4 > n5) && (n4 > n6)) {
                 n3 = n4;
              } else {
                n2 = n4;
              }

         }

          if ((n5 < n4) && (n5 < n6)){
             n1 = n5;
         } else {
              if ((n5 > n4) && (n5 > n6)) {
                 n3 = n5;
              } else {
                n2 = n5;
              }

         }

          if ((n6 < n5) && (n6 < n4)){
             n1 = n6;
         } else {
              if ((n6 > n5) && (n6 > n4)) {
                 n3 = n6;
              } else {
                n2 = n6;
              }

         }
    printf ("\nVamos lá,");
    printf ("\n===============================================================\n");
    printf ("Os números que você digitou, em ordem crescente são:\n");
    printf ("\n\t\t1º ( ""%d"" )  \n\n\t\t2º ( ""%d"" )  \n\n\t\t3º ( ""%d"" )", n1, n2, n3);
    printf ("\n\n===============================================================\n");
    printf ("\n\t\t\t\t\t\tIsso é tudo pessoal\n");
return 0;
}
