#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo em pseudocódigo que leia duas variáveis dadas pelo usuário,
em seguida apresente um menu para o usuário perguntando qual operação matemática ele deseja executar.
Cuidado com a divisão que não pode ser por 0 (zero). */

int main () {
    setlocale (LC_ALL, "Portuguese");

    float n1, n2, n3;
    char op;

printf ("Calculadora!\n");
printf ("Entre com o primeiro número: \t");
    scanf ("%f", & n1);
    fflush(stdin);

printf ("Escolha a operação que deseja executar: \n\n");
printf ("\t\t (+ - * /) \t");
    scanf ("%c", & op);
    fflush (stdin);

printf ("Entre com o segundo número: \t");
    scanf ("%f", & n2);

    switch (op) {
        case '+':
            n3 = (n1 + n2);
            printf ("\nO resultado da sua Soma é:\t\t%f!\n\n", n3);
            break;

        case '-':
            n3 = (n1 - n2);
            printf ("\nO resultado da sua Subtração é:\t\t%f!\n\n", n3);
            break;

        case '*':
            n3 = (n1 * n2);
            printf ("\nO resultado da sua Multiplicação é:\t\t%f!\n\n", n3);
            break;

        case '/':
            if (n2 == 0) {
                printf ("\nImpossível dividir por zero!\n\n");
            } else {
                n3 = (n1 / n2);
                printf ("\nO resultado da sua Divisão é:\t\t%f!\n\n", n3);
            }
            break;

        default:
        printf ("\nOperador desconhecido!");
        break;

    }
return 0;
}
