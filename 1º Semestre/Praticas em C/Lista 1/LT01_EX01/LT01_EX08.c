#include <stdio.h>
#include <locale.h>

/* Elabore um algoritmo que calcule e apresente
a quantidade de gal�es cheios de 5 litros de combust�vel
necess�rio em uma viagem. Sabe-se que um autom�vel faz 12Km/l.
O usu�rio fornecer� o tempo gasto e a velocidade m�dia na viagem. */


int main () {
    setlocale(LC_ALL, "Portuguese");

    float vel, temp, gal, km;

    printf ("Qual a velocidade M�dia em Km/H\t");
        scanf ("%f", &vel);
    printf ("Quantos min voc� gastou no percurso?\t");
        scanf ("%f", &temp);

    km = (temp * (vel/60));
    gal = ((km/12)/5);
    printf ("\nForam gastos %.0f Gal�es de Gasolina.\n\n" ,gal);

return 0;
}
