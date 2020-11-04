#include <stdio.h>
#include <math.h>
#include <locale.h>

/* A partir dos dados de entrada dois pontos quaisquer de um plano cartesiano P(X1,Y1)e Q(X2,Y2),
elabore um algoritmo que calcule e mostre a distância entre eles.
A distância é dada pela fórmula:
raiz((X2 - X1) ^ 2 + (Y2 - Y1) ^ 2) */

int main () {
    setlocale(LC_ALL, "Portuguese");

    float x1, x2, y1, y2, dist, px, py, pz;

    printf ("Em um plano cartesiano qualquer informe:\t");
    printf ("\nX1\t\t");
        scanf ("%f", &x1);
    printf ("\nX2\t\t");
        scanf ("%f", &x2);
    printf ("\nY1\t\t");
        scanf ("%f", &y1);
    printf ("\nY2\t\t");
        scanf ("%f", &y2);

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf ("\n\nA distância entre os dois pontos do plano cartesiano é de %f\n\n", dist);

return 0;
}
