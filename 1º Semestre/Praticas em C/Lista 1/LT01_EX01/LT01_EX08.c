#include <stdio.h>
#include <locale.h>

/* Elabore um algoritmo que calcule e apresente
a quantidade de galões cheios de 5 litros de combustível
necessário em uma viagem. Sabe-se que um automóvel faz 12Km/l.
O usuário fornecerá o tempo gasto e a velocidade média na viagem. */


int main () {
    setlocale(LC_ALL, "Portuguese");

    float vel, temp, gal, km;

    printf ("Qual a velocidade Média em Km/H\t");
        scanf ("%f", &vel);
    printf ("Quantos min você gastou no percurso?\t");
        scanf ("%f", &temp);

    km = (temp * (vel/60));
    gal = ((km/12)/5);
    printf ("\nForam gastos %.0f Galões de Gasolina.\n\n" ,gal);

return 0;
}
