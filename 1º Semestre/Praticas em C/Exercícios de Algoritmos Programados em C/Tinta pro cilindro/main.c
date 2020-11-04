#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    float area, raio, comp, rend, custo, valor;

    printf("Qual � o raio do cilindro? \n");
    scanf("%f", &raio);
    printf("Qual � o comprimento do cilindro? \n");
    scanf("%f", &comp);
    printf("Qual � o pre�o da lata de tinta em R$? \n");
    scanf("%f", &custo);

    area = (pow(raio,2) * M_PI * 2) + (2 * M_PI * raio * comp);
    rend = (area/3)/5;
    valor = (custo * rend);

    printf("\n\nVoc� precisar� de %.0f latas de tinta\n", rend);
    printf("Que custar� R$%.2f\n", valor);
    return 0;

}

