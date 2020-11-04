#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Elabore um algoritmo para calcular a quantidade de latas de tinta necessárias,
e também o custo, para pintar um tanque cilíndrico de combustível,
em que são fornecidos a altura e o raio do mesmo,
além do preço da lata de tinta. Sabe-se que:

a) cada lata contém 5 litros de tinta;
b) cada litro de tinta pinta 3 metros quadrados;*/

int main () {
    setlocale(LC_ALL, "Portuguese");

    float raio, altura, custo, rend, area;

    printf("Calculadora de latas de tintas para pintura de um cilindro\n");
    printf("Qual o raio desse cilindro? \n");
        scanf("%f", &raio);
    printf("Qual a altura deste cilindro? \n");
        scanf("%f", &altura);
    printf("Qual é o valor da lata de tinta? \n");
        scanf("%f", &custo);

    area = (M_PI * (raio * raio) * 2) + (M_PI * raio * altura * 2);
    rend = (area / 3) / 5;

    printf ("\n Você precisará de %.0f latas de tinta que custarão R$ %.2f \n", rend, rend * custo);

return 0;

}
