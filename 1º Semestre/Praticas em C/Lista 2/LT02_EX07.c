#include <stdio.h>
#include <locale.h>

/*Escreva um algoritmo em pseudocódigo usando a seleção de múltipla
escolha para ler uma letra indicando o nome de uma nota musical
e escreva o nome correspondente da mesma.
Se uma nota inválida for informada então escreva uma mensagem informando o ocorrido.
Pesquise as letras - notas musicais básicas. Exemplo: “A” - Nota Lá. “H”: Nota Inválida.. */

int main () {
    setlocale (LC_ALL, "Portuguese");

char nota;

printf ("\nDescobrindo a nota musical");
printf ("\n====================================================================");
printf ("\nEscolha uma letra que corresponda a uma nota musical:");
printf ("\n A, B, C, D, E, F ou G");
printf ("\n====================================================================\n");
         scanf ("%c", &nota);

         switch (nota) {
             case 'a':
             printf ("\nVocê escolheu %c que corresponde a nota musical Lá!\n", nota);
             break;

             case 'b':
             printf ("\nVocê escolheu %c que corresponde a nota musical Sí!\n", nota);
             break;

             case 'c':
             printf ("\nVocê escolheu %c que corresponde a nota musical Dó!\n", nota);
             break;

             case 'd':
             printf ("\nVocê escolheu %c que corresponde a nota musical Ré!\n", nota);
             break;

             case 'e':
             printf ("\nVocê escolheu %c que corresponde a nota musical Mi!\n", nota);
             break;

             case 'f':
             printf ("\nVocê escolheu %c que corresponde a nota musical Fá!\n", nota);
             break;

             case 'g':
             printf ("\nVocê escolheu %c que corresponde a nota musical Sol!\n", nota);
             break;

             default:
             printf ("\nSua escolha não corresponde a nenhuma nota musical!\n");
             break;

         }
return 0:
}
