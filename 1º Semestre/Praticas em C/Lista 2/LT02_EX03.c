#include <stdio.h>
#include <locale.h>

/*Fa�a uma programa que leia 3 valores A, B e C e
verifique se esses valores representam os lados de um tri�ngulo.
Para que seja um tri�ngulo, todos os lados devem ser maiores que zero e
nenhum lado deve ser igual ou maior que a soma dos outros dois lados.

Informe tamb�m o tipo do tri�ngulo:
Escaleno: todos os lados diferentes.
Is�sceles: 2 lados iguais.
Equil�tero: todos os lados iguais. */

int main () {
    setlocale (LC_ALL, "Portuguese");

    float a, b, c;

    printf ("Identificando um tri�ngulo.\n");
    printf ("Digite um lado do seu suposto tri�ngulo: \n");
        scanf ("%f", &a);
    printf ("Digite outro lado do seu suposto tri�ngulo: \n");
        scanf ("%f", &b);
    printf ("Digite o lado que sobrou do seu suposto tri�ngulo: \n");
        scanf ("%f", &c);

    if ((a != 0) && (b != 0) && (c != 0) && (a < b + c) && (b < a + c ) && (c < a + b)) {
        printf ("\n� um tri�ngulo...\n");
            if ((a == b) && (a == c)) {
                printf ("...e digo mais, � um tri�ngulo Equil�tero!\n\n");
                } else {
                    if ((a == b) || (b == c)) {
                        printf ("...e digo mais, � um tri�ngulo Is�sceles!\n\n");
                    } else {
                    printf ("...e digo mais, � um tri�ngulo Escaleno!\n\n");
                    }
                }
    } else {
    printf ("\nSinto muito, mas sua figura n�o � um tri�ngulo!\n\n");
    }
return 0;
}
