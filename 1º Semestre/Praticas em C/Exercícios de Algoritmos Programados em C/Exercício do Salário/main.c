#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    /*Foi utilizado sal_final para Sal�rio Final;*/
    /*sal_min para o sal�rio m�nimo;*/
    /*htab para horas trabalhadas;*/
    /*hext para horas extras;*/
    /*haus para horas ausentes*/
    float sal_final, sal_min, htab, hext, haus;

    printf("Qual � o valor do sal�rio m�nimo vigente? \n");
    scanf("%f", &sal_min);
    printf("Qual a quantidade de horas trabalhadas no per�odo? \n");
    scanf("%f", &htab);
    printf("Qual a quantidade de horas extras no per�do? \n");
    scanf("%f", &hext);
    printf("Qual a quantidade de horas ausentes no per�odo? \n");
    scanf("%f", &haus);
    /*Foi utilizado a f�rmula abaixo para poder imprimir as quantidades de horas depois */
    sal_final = (htab * (sal_min * 0.04)) + (hext * (sal_min * 0.06)) - (haus * (sal_min * 0.04));

    printf("\n\nForam trabalhadas %.0f horas normais.\n", htab);
    printf("%.0f horas extras,\n", hext);
    printf("%.0f horas � descontar.\n\n", haus);
    printf("Ao qual ser� pago R$ %.2f BRUTO.\n", sal_final);
    printf("Ser� descontado o valor de R$ %.2f referente a 11%% de INSS.\n\n", sal_final * 0.11);
    printf("Restando um sal�rio total L�QUIDO no valor de R$ %.2f\nGaste com sabedoria!\n\n\n", sal_final - (sal_final * 0.11));
    return 0;
}
