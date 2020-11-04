#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float raio, area;
    printf("Qual é o raio da sua circunferência em cm? \n");
    scanf("%f", &raio);
    area = (raio * 2 * M_PI);

    printf("A área de sua circunferência é de %.2f cm².\n\n", area);
    return 0;
}
