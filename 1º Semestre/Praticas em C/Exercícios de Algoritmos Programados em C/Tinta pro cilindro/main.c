#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    float area, raio, comp, rend, custo, valor;

    printf("Qual é o raio do cilindro? \n");
    scanf("%f", &raio);
    printf("Qual é o comprimento do cilindro? \n");
    scanf("%f", &comp);
    printf("Qual é o preço da lata de tinta em R$? \n");
    scanf("%f", &custo);

    area = (pow(raio,2) * M_PI * 2) + (2 * M_PI * raio * comp);
    rend = (area/3)/5;
    valor = (custo * rend);

    printf("\n\nVocê precisará de %.0f latas de tinta\n", rend);
    printf("Que custará R$%.2f\n", valor);
    return 0;

}

