#include <stdio.h>
#include <locale.h>

/* Elabore um algoritmo em pseudoc�digo que receba a idade de um nadador
 e apresente sua classifica��o em uma das categorias abaixo:
 Infantil A= de 5 a 7 anos, Infantil B= de 8 a 10 anos,
 Juvenil A= de 11 a 13 anos,
 Juvenil B= de 14 a 17 anos
 e S�nior= maiores de 18 anos. */

 int main () {
    setlocale (LC_ALL, "Portuguese");

int idade;
char nadador [11];

printf ("\nCategoria do Nadador");
printf ("\n ====================================================================");
printf ("\n  Qual o nome do nadador a ser avaliado\t\t");
         scanf ("%s", &nadador);

         fflush (stdin);

printf ("\n ====================================================================");
printf ("\n   Qual a idade do seu nadador? \t\t");
         scanf ("%d", &idade);

         if (idade >= 5) {
         switch (idade) {
            case 5:
            case 6:
            case 7:
             printf ("\n ====================================================================");
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ||               %s � da categoria Infantil A                     ||", nadador);
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ====================================================================");
             break;

             case 8, 9, 10:
             printf ("\n ====================================================================");
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ||              %s � da categoria Infantil B                      ||", nadador);
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ====================================================================");
             break;

             case 11, 12, 13:
             printf ("\n ====================================================================");
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ||             %s � da categoria Juvenil A                        ||", nadador);
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ====================================================================");
             break;

             case 14, 15, 16, 17:
             printf ("\n ====================================================================");
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ||             %s � da categoria Juvenil B                        ||", nadador);
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ====================================================================");
             break;

             default:
             printf ("\n ====================================================================");
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ||             %s � da categoria S�nior                           ||", nadador);
             printf ("\n ||                                                                ||");
             printf ("\n ||                                                                ||");
             printf ("\n ====================================================================");
             break;

         }

         } else {
         printf ("\n &s n�o tem idade ainda para nata��o", nadador);
         }
return 0;
 }
