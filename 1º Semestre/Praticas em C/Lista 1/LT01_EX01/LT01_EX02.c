#include <stdio.h>
#include <locale.h>
#include <math.h>

/*LT01_EX02: Elabore um algoritmo que leia o raio de uma circunferência,calcule e apresente sua área.*/

int main () {
    setlocale(LC_ALL, "Portuguese");

    float raio, area;

    printf("Para calcular a área de uma circunferência!\n");
    printf("Qual é o raio desta circunferência em cm? \n");
        scanf ("%f", &raio);

    area = pow(raio, 2) * M_PI;

    printf ("A área do seu círculo é de %.2f cm²\n\n", area);

return 0;

}
