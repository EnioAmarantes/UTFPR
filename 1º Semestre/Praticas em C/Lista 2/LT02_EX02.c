#include <stdio.h>
#include <locale.h>


/* Fa�a um programa que leia dois n�meros.
Caso a soma dos dois n�meros apresente um n�mero par e seja maior que 100
mostre a metade da soma na tela,
se a soma for um n�mero par menor que 100,
mostre a soma multiplicada por 2.
Se a soma resultar em um n�mero �mpar apenas apresente a soma. */

int main () {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    printf("Compara��es e Opera��es.\n\n");
    printf("Digite um n�mero inteiro qualquer: \n");
        scanf ("%d", &n1);
    printf ("Digite um outro n�mero inteiro qualquer: \n");
        scanf ("%d", &n2);

    n3 = n1 + n2;


    if (n3 % 2 == 0){
        if (n3 > 100){
            printf ("\nA metade da soma dos n�meros � %d\n\n",n3 / 2);
        } else {
            printf ("\nO dobro da soma dos dois n�meros � %d\n\n",n3 * 2);
        }
        } else {
        printf ("\nA soma dos n�meros � %d\n\n",n3);
    }
return 0;

}
