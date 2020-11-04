#include <stdio.h>
#include <locale.h>

/*Elabore um algoritmo que calcule e apresente o valor do salário família de um funcionário,
 que é de 2% do salário por dependente.
 O salário e o número de dependentes serão lidos. */

int main () {
    setlocale(LC_ALL, "Portuguese");

    /* salF = Salário Família; salM == Salário mínimo; dep == Dependentes */
    float salF, salM;
    int dep;

    printf ("Cálculo do Salário Família!");
    printf ("Quantas pessoas dependem do seu salário? \t");
        scanf ("%d", &dep);
    printf ("Qual é o valor do seu salário? \t\tR$% ");
        scanf ("%f", &salM);

    salF = (dep * (salM * 0.02));

    printf ("\n\nO valor do salário família será de R$%.2f referente a %d dependentes\n\n", salF, dep);

return 0;
}
