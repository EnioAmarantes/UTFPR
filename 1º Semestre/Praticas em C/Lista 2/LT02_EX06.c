#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo em pseudoc�digo que leia duas vari�veis dadas pelo usu�rio,
em seguida apresente um menu para o usu�rio perguntando qual opera��o matem�tica ele deseja executar.
Cuidado com a divis�o que n�o pode ser por 0 (zero). */

int main () {
    setlocale (LC_ALL, "Portuguese");

    float n1, n2, n3;
    char op;

printf ("Calculadora!\n");
printf ("Entre com o primeiro n�mero: \t");
    scanf ("%f", & n1);
    fflush(stdin);

printf ("Escolha a opera��o que deseja executar: \n\n");
printf ("\t\t (+ - * /) \t");
    scanf ("%c", & op);
    fflush (stdin);

printf ("Entre com o segundo n�mero: \t");
    scanf ("%f", & n2);

    switch (op) {
        case '+':
            n3 = (n1 + n2);
            printf ("\nO resultado da sua Soma �:\t\t%f!\n\n", n3);
            break;

        case '-':
            n3 = (n1 - n2);
            printf ("\nO resultado da sua Subtra��o �:\t\t%f!\n\n", n3);
            break;

        case '*':
            n3 = (n1 * n2);
            printf ("\nO resultado da sua Multiplica��o �:\t\t%f!\n\n", n3);
            break;

        case '/':
            if (n2 == 0) {
                printf ("\nImposs�vel dividir por zero!\n\n");
            } else {
                n3 = (n1 / n2);
                printf ("\nO resultado da sua Divis�o �:\t\t%f!\n\n", n3);
            }
            break;

        default:
        printf ("\nOperador desconhecido!");
        break;

    }
return 0;
}
