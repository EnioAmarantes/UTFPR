#include <stdio.h>
#include <locale.h>

/*  Elabore um algoritmo que leia um número inteiro representando a quantidade de alunos de uma turma.
Apresente a quantidade de grupos de 4 alunos que podem ser formados,
e quantos alunos ficam de fora, sem formar um grupo completo. */

int main () {
    setlocale (LC_ALL, "Portuguese");

    int qaluno, qgrupo, qrest;

    printf ("Qual é a quantidade de alunos?\t");
        scanf ("%d", &qaluno);

    qgrupo = (qaluno/4);
    qrest = (qaluno%4);

    printf ("Podem ser formados %d grupos com 4 alunos cada e outro grupo com %d alunos.",qgrupo , qrest);

return 0;
}
