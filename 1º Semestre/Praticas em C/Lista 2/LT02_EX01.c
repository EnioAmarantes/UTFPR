#include <stdio.h>
#include <locale.h>

/*Criar um algoritmo que leia 2 n�meros.
Caso o primeiro n�mero lido seja maior que o segundo, imprima na tela o primeiro n�mero menos o segundo,
caso contr�rio mostre a soma dos dois n�meros.
*/

int main () {
    setlocale (LC_ALL, "Portuguese");

    int n1, n2;
    printf ("Calculo baseado na diferen�a dos n�meros!");
    printf ("\nDigite o primeiro n�mero: ");
        scanf("%d", &n1);
    printf ("\nDigite o segundo n�mero: ");
        scanf ("%d", &n2);

    if (n1 > n2) {
        printf ("\nO Primeiro n�mero � maior que o segundo e a subtra��o dos dois � %d\n\n\n",n1 - n2);

        } else {
            printf ("\nO Primeiro n�mero � menor que o segundo e a soma dos dois � %d\n\n\n",n1 + n2);
    }


return 0;
}
