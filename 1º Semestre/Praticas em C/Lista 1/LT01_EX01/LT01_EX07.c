#include <stdio.h>
#include <locale.h>

/* Elabore um algoritmo que leia uma temperatura em graus Cent�grados e apresente-a convertida em graus Fahrenheit.
 A f�rmula �: F = (9 * C + 160) / 5. */

 int main () {
    setlocale(LC_ALL, "Portuguese");

    float c, f;

    printf ("Qual a temperatura em � Celsius? \t");
    scanf ("%f", &c);

    f = (9 * c + 160)/5;

    printf ("\n\nA temperatura ser� de %.1f� F.\n\n",f );

return 0;
 }
