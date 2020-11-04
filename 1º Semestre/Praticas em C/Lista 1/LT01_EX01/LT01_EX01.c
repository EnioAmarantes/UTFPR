#include <stdio.h>
#include <locale.h>

/* LT01_EX01: Elabore um algoritmo que leia as 4 notas bimestrais de um aluno, calcule e apresente a média obtida. */

int main () {
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media;
    char nome [11];

    printf ("Qual o nome do Aluno a ser avaliado? ");
        scanf ("%s", &nome);
    printf("Entre com a nota do primeiro Bimestre... ");
        scanf("%f", &n1);
    printf("Entre com a nota do segundo Bimestre... ");
        scanf("%f", &n2);
    printf("Entre com a nota do terceiro Bimestre... ");
        scanf("%f", &n3);
    printf("Entre com a nota do quarto Bimestre... ");
        scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4)/4;

    printf("\n\n==============================================\n");
    printf("A média de %s é de %.2f\n", nome, media);
    printf("==============================================\n\n");
    return 0;
}
