#include <stdio.h>
#include <locale.h>

/*Elabore um algoritmo que calcule e apresente o valor do sal�rio fam�lia de um funcion�rio,
 que � de 2% do sal�rio por dependente.
 O sal�rio e o n�mero de dependentes ser�o lidos. */

int main () {
    setlocale(LC_ALL, "Portuguese");

    /* salF = Sal�rio Fam�lia; salM == Sal�rio m�nimo; dep == Dependentes */
    float salF, salM;
    int dep;

    printf ("C�lculo do Sal�rio Fam�lia!");
    printf ("Quantas pessoas dependem do seu sal�rio? \t");
        scanf ("%d", &dep);
    printf ("Qual � o valor do seu sal�rio? \t\tR$% ");
        scanf ("%f", &salM);

    salF = (dep * (salM * 0.02));

    printf ("\n\nO valor do sal�rio fam�lia ser� de R$%.2f referente a %d dependentes\n\n", salF, dep);

return 0;
}
