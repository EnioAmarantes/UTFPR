#include <stdio.h>
#include <locale.h>

/* Elabore um algoritmo que calcule o pre�o de venda de um carro.
O pre�o de venda � formado pelo pre�o da montadora,
mais 15% de lucro, mais 11% de IPI, mais 17% de ICM.
As porcentagens s�o sobre o pre�o da montadora, que � lido.
Apresente na tela o pre�o final e o valor dos impostos. */

int main () {
    setlocale(LC_ALL, "Portuguese");

    float pmont, lucro, ipi, icm;


    printf ("Qual � o valor do Carro pela montadora? ");
        scanf ("%f", &pmont);

    lucro = (pmont * 0.15);
    ipi = (pmont * 0.11);
    icm = (pmont * 0.17);

    printf ("\n\nO valor final do carro ser�:\tR$%.2f\n",pmont + lucro + ipi + icm);
    printf ("\n\t\t\tsendo R$%.2f de IPI.\n", ipi);
    printf ("\n\t\t\tsendo R$ %.2f de ICM.\n", icm);

return 0;
}
