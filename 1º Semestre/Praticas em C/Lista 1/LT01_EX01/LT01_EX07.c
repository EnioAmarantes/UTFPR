#include <stdio.h>
#include <locale.h>

/* Elabore um algoritmo que leia uma temperatura em graus Centígrados e apresente-a convertida em graus Fahrenheit.
 A fórmula é: F = (9 * C + 160) / 5. */

 int main () {
    setlocale(LC_ALL, "Portuguese");

    float c, f;

    printf ("Qual a temperatura em º Celsius? \t");
    scanf ("%f", &c);

    f = (9 * c + 160)/5;

    printf ("\n\nA temperatura será de %.1fº F.\n\n",f );

return 0;
 }
