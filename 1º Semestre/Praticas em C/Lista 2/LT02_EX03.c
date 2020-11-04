#include <stdio.h>
#include <locale.h>

/*Faça uma programa que leia 3 valores A, B e C e
verifique se esses valores representam os lados de um triângulo.
Para que seja um triângulo, todos os lados devem ser maiores que zero e
nenhum lado deve ser igual ou maior que a soma dos outros dois lados.

Informe também o tipo do triângulo:
Escaleno: todos os lados diferentes.
Isósceles: 2 lados iguais.
Equilátero: todos os lados iguais. */

int main () {
    setlocale (LC_ALL, "Portuguese");

    float a, b, c;

    printf ("Identificando um triângulo.\n");
    printf ("Digite um lado do seu suposto triângulo: \n");
        scanf ("%f", &a);
    printf ("Digite outro lado do seu suposto triângulo: \n");
        scanf ("%f", &b);
    printf ("Digite o lado que sobrou do seu suposto triângulo: \n");
        scanf ("%f", &c);

    if ((a != 0) && (b != 0) && (c != 0) && (a < b + c) && (b < a + c ) && (c < a + b)) {
        printf ("\nÉ um triângulo...\n");
            if ((a == b) && (a == c)) {
                printf ("...e digo mais, é um triângulo Equilátero!\n\n");
                } else {
                    if ((a == b) || (b == c)) {
                        printf ("...e digo mais, é um triângulo Isósceles!\n\n");
                    } else {
                    printf ("...e digo mais, é um triângulo Escaleno!\n\n");
                    }
                }
    } else {
    printf ("\nSinto muito, mas sua figura não é um triângulo!\n\n");
    }
return 0;
}
