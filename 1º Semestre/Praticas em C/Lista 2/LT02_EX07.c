#include <stdio.h>
#include <locale.h>

/*Escreva um algoritmo em pseudoc�digo usando a sele��o de m�ltipla
escolha para ler uma letra indicando o nome de uma nota musical
e escreva o nome correspondente da mesma.
Se uma nota inv�lida for informada ent�o escreva uma mensagem informando o ocorrido.
Pesquise as letras - notas musicais b�sicas. Exemplo: �A� - Nota L�. �H�: Nota Inv�lida.. */

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
             printf ("\nVoc� escolheu %c que corresponde a nota musical L�!\n", nota);
             break;

             case 'b':
             printf ("\nVoc� escolheu %c que corresponde a nota musical S�!\n", nota);
             break;

             case 'c':
             printf ("\nVoc� escolheu %c que corresponde a nota musical D�!\n", nota);
             break;

             case 'd':
             printf ("\nVoc� escolheu %c que corresponde a nota musical R�!\n", nota);
             break;

             case 'e':
             printf ("\nVoc� escolheu %c que corresponde a nota musical Mi!\n", nota);
             break;

             case 'f':
             printf ("\nVoc� escolheu %c que corresponde a nota musical F�!\n", nota);
             break;

             case 'g':
             printf ("\nVoc� escolheu %c que corresponde a nota musical Sol!\n", nota);
             break;

             default:
             printf ("\nSua escolha n�o corresponde a nenhuma nota musical!\n");
             break;

         }
return 0:
}
