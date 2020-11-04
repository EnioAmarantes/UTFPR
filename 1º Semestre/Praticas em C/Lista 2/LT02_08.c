#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo em pseudocódigo que leia o conceito anual de um aluno em uma disciplina
 e informe o desempenho dele.
  Se for um conceito inválido escreva uma mensagem informando o ocorrido.
  Exemplo: “A” - Conhecimento Pleno, “B” - Conhecimento Parcialmente Pleno,
  “C” - Conhecimento Suficiente, “D” - Conhecimento Insuficiente.
  “Qualquer outro valor”: Conceito Inválido.. */

int main () {
    setlocale (LC_ALL, "Portuguese");

    char aluno [11];
    int nota;


printf ("\nQualidade da nota do aluno");
printf ("\nQual aluno será avaliado? \n");
         scanf ("%s", &aluno);

         fflush (stdin);

printf ("\nQual a nota desse aluno? \n");
         scanf ("%d", &nota);

         switch (nota) {
             case 1:
             printf ("\n A nota de %s é uma nota péssima\n\n", aluno);
             break;

             case 2:
             printf ("\n A nota de %s é uma nota péssima\n\n", aluno);
             break;

             case 3:
             printf ("\n A nota de %s é uma nota ruim\n\n", aluno);
             break;

             case 4:
             printf ("\n A nota de %s é uma nota ruim\n\n", aluno);
             break;

             case 5:
             printf ("\n A nota de %s é uma nota razoável\n\n", aluno);
             break;

             case 6:
             printf ("\n A nota de %s é uma nota razoável\n\n", aluno);
             break;

             case 7:
             printf ("\n A nota de %s é uma nota boa\n\n", aluno);
             break;

             case 8:
             printf ("\n A nota de %s é uma nota muito boa\n\n", aluno);
             break;

             case 9:
             printf ("\n A nota de %s é uma nota muito boa\n\n", aluno);
             break;

             case 10:
             printf ("\n A nota de %s é uma nota ÓTIMA\n\n", aluno);
             break;

             default:
             printf ("\nA nota é inválida\n\n");
             break;

         }
}
