#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float raio, area;
    printf("Qual � o raio da sua circunfer�ncia em cm? \n");
    scanf("%f", &raio);
    area = (raio * 2 * M_PI);

    printf("A �rea de sua circunfer�ncia � de %.2f cm�.\n\n", area);
    return 0;
}
