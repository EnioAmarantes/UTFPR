#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo em pseudoc�digo que leia o conceito anual de um aluno em uma disciplina
 e informe o desempenho dele.
  Se for um conceito inv�lido escreva uma mensagem informando o ocorrido.
  Exemplo: �A� - Conhecimento Pleno, �B� - Conhecimento Parcialmente Pleno,
  �C� - Conhecimento Suficiente, �D� - Conhecimento Insuficiente.
  �Qualquer outro valor�: Conceito Inv�lido.. */

int main () {
    setlocale (LC_ALL, "Portuguese");

    char aluno [11];
    int nota;


printf ("\nQualidade da nota do aluno");
printf ("\nQual aluno ser� avaliado? \n");
         scanf ("%s", &aluno);

         fflush (stdin);

printf ("\nQual a nota desse aluno? \n");
         scanf ("%d", &nota);

         switch (nota) {
             case 1:
             printf ("\n A nota de %s � uma nota p�ssima\n\n", aluno);
             break;

             case 2:
             printf ("\n A nota de %s � uma nota p�ssima\n\n", aluno);
             break;

             case 3:
             printf ("\n A nota de %s � uma nota ruim\n\n", aluno);
             break;

             case 4:
             printf ("\n A nota de %s � uma nota ruim\n\n", aluno);
             break;

             case 5:
             printf ("\n A nota de %s � uma nota razo�vel\n\n", aluno);
             break;

             case 6:
             printf ("\n A nota de %s � uma nota razo�vel\n\n", aluno);
             break;

             case 7:
             printf ("\n A nota de %s � uma nota boa\n\n", aluno);
             break;

             case 8:
             printf ("\n A nota de %s � uma nota muito boa\n\n", aluno);
             break;

             case 9:
             printf ("\n A nota de %s � uma nota muito boa\n\n", aluno);
             break;

             case 10:
             printf ("\n A nota de %s � uma nota �TIMA\n\n", aluno);
             break;

             default:
             printf ("\nA nota � inv�lida\n\n");
             break;

         }
}
