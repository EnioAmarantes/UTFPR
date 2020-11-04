#include <stdio.h>
#include <locale.h>

/*Elabore um algoritmo para calcular o sal�rio final de um trabalhador,
recebendo a quantidade de horas trabalhadas,
a quantidade de horas extras,
quantidade de horas ausentes
e o valor do sal�rio m�nimo, sabendo que:
a) as horas trabalhadas e ausentes valem 4% do sal�rio m�nimo;
b) as horas extras valem 50% a mais do que as horas trabalhadas;
c) o sal�rio final � igual a soma das horas trabalhadas com as hora extras, descontadas as horas ausentes e 11% de INSS. */

int main () {
    setlocale (LC_ALL, "Portuguese");

    float htab, hext, haus, salMin, salFinal;

    printf ("C�lculo de Sal�rio!");
    printf ("Qual � o valor do sal�rio m�nimo atual... \tR$ ");
        scanf ("%f", &salMin);
    printf ("Quantas horas foram trabalhadas no per�odo... \t");
        scanf ("%f", &htab);
    printf ("Quantas horas extras tiveram no per�odo... \t");
        scanf ("%f", &hext);
    printf ("Qual a quantidade de horas ausentes... \t");
        scanf ("%f", &haus);

    salFinal = ((htab * (salMin * 0.04)) + (hext * (salMin * 0.06)) - (haus * (salMin * 0.04)) - (salMin * 0.11));

    printf ("\n\n\tSeu sal�rio final ser� de R$ %.2f sendo: \n", salFinal);
    printf ("===============================================================================");
    printf ("\n\t\t\tA Receber:\n");
    printf ("\tR$ %.2f pelas horas trabalhadas.\n", (htab * (salMin * 0.04)));
    printf ("\tR$ %.2f pelas horas extras.\n", (hext * (salMin * 0.06)));
    printf ("===============================================================================");
    printf ("\n\t\t\tA Descontar:\n");
    printf ("\tR$ %.2f pelas horas ausentes.\n", (haus * (salMin * 0.04)));
    printf ("\tR$ %.2f de INSS\n", (salMin * 0.11));
    printf ("\t\t\t\t\t\t\tIsso � tudo pessoal!\n\n");

return 0;
}
