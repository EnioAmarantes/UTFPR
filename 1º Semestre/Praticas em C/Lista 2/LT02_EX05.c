#include <stdio.h>
#include <locale.h>



int main () {
    setlocale(LC_ALL, "Portuguese");

int n1, n2, n3, n4, n5, n6;

    printf ("Vamos ordenar os n�meros.\n");
    printf ("Digite um n�mero qualquer:\t");
         scanf ("%d", &n4);
    printf ("Digite um outro n�mero:\t\t");
         scanf ("%d", &n5);
    printf ("Digite mais um n�mero:\t\t");
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
    printf ("\nVamos l�,");
    printf ("\n===============================================================\n");
    printf ("Os n�meros que voc� digitou, em ordem crescente s�o:\n");
    printf ("\n\t\t1� ( ""%d"" )  \n\n\t\t2� ( ""%d"" )  \n\n\t\t3� ( ""%d"" )", n1, n2, n3);
    printf ("\n\n===============================================================\n");
    printf ("\n\t\t\t\t\t\tIsso � tudo pessoal\n");
return 0;
}
