#include <stdio.h>
#include <locale.h>
#include <math.h>

/*LT01_EX02: Elabore um algoritmo que leia o raio de uma circunfer�ncia,calcule e apresente sua �rea.*/

int main () {
    setlocale(LC_ALL, "Portuguese");

    float raio, area;

    printf("Para calcular a �rea de uma circunfer�ncia!\n");
    printf("Qual � o raio desta circunfer�ncia em cm? \n");
        scanf ("%f", &raio);

    area = pow(raio, 2) * M_PI;

    printf ("A �rea do seu c�rculo � de %.2f cm�\n\n", area);

return 0;

}
