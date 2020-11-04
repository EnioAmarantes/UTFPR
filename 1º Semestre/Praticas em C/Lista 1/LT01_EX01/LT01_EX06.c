#include <stdio.h>
#include <locale.h>

/* Elabore um algoritmo que calcule o preço de venda de um carro.
O preço de venda é formado pelo preço da montadora,
mais 15% de lucro, mais 11% de IPI, mais 17% de ICM.
As porcentagens são sobre o preço da montadora, que é lido.
Apresente na tela o preço final e o valor dos impostos. */

int main () {
    setlocale(LC_ALL, "Portuguese");

    float pmont, lucro, ipi, icm;


    printf ("Qual é o valor do Carro pela montadora? ");
        scanf ("%f", &pmont);

    lucro = (pmont * 0.15);
    ipi = (pmont * 0.11);
    icm = (pmont * 0.17);

    printf ("\n\nO valor final do carro será:\tR$%.2f\n",pmont + lucro + ipi + icm);
    printf ("\n\t\t\tsendo R$%.2f de IPI.\n", ipi);
    printf ("\n\t\t\tsendo R$ %.2f de ICM.\n", icm);

return 0;
}
