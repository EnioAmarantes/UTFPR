#include <stdio.h>
#include <locale.h>

/*Criar um algoritmo que leia 2 números.
Caso o primeiro número lido seja maior que o segundo, imprima na tela o primeiro número menos o segundo,
caso contrário mostre a soma dos dois números.
*/

int main () {
    setlocale (LC_ALL, "Portuguese");

    int n1, n2;
    printf ("Calculo baseado na diferença dos números!");
    printf ("\nDigite o primeiro número: ");
        scanf("%d", &n1);
    printf ("\nDigite o segundo número: ");
        scanf ("%d", &n2);

    if (n1 > n2) {
        printf ("\nO Primeiro número é maior que o segundo e a subtração dos dois é %d\n\n\n",n1 - n2);

        } else {
            printf ("\nO Primeiro número é menor que o segundo e a soma dos dois é %d\n\n\n",n1 + n2);
    }


return 0;
}
