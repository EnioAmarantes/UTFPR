#include <stdio.h>
#include <locale.h>


/* Faça um programa que leia dois números.
Caso a soma dos dois números apresente um número par e seja maior que 100
mostre a metade da soma na tela,
se a soma for um número par menor que 100,
mostre a soma multiplicada por 2.
Se a soma resultar em um número ímpar apenas apresente a soma. */

int main () {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    printf("Comparações e Operações.\n\n");
    printf("Digite um número inteiro qualquer: \n");
        scanf ("%d", &n1);
    printf ("Digite um outro número inteiro qualquer: \n");
        scanf ("%d", &n2);

    n3 = n1 + n2;


    if (n3 % 2 == 0){
        if (n3 > 100){
            printf ("\nA metade da soma dos números é %d\n\n",n3 / 2);
        } else {
            printf ("\nO dobro da soma dos dois números é %d\n\n",n3 * 2);
        }
        } else {
        printf ("\nA soma dos números é %d\n\n",n3);
    }
return 0;

}
