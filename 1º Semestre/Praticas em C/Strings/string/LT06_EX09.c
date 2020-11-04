#include <stdio.h>
#include <string.h>

// Faça um programa em Linguagem C que receba 3 nomes completos (até 30 caracteres) e imprima-os em ordem crescente.

int main (){
    char nome1[30], nome2[30], nome3[30];
    int n1 = 0, n2 = 0, n3 = 0;

    printf("Digite dois nomes completos:\n");

    fgets(nome1, 30, stdin);
    fflush(stdin);
    fgets(nome2, 30, stdin);
    fflush(stdin);
    fgets(nome3, 30, stdin);

    printf("\nOs nomes digitados em ordem alfabética é:\n");


    if ((strcmp(nome1,nome2)< 0) && (strcmp(nome2, nome3) < 0)){
        printf("\n%s\n%s\n%s",nome1,nome2,nome3);
    }
    if ((strcmp(nome1, nome2 ) < 0) && (strcmp(nome2, nome3) > 0)){
        printf("\n%s\n%s\n%s",nome1,nome3,nome2);
    }
    if ((strcmp(nome1, nome2) > 0) && (strcmp(nome2, nome3) < 0)){
        printf("\n%s\n%s\n%s",nome2,nome1,nome3);
    }
    if ((strcmp(nome1, nome2) < 0) && (strcmp(nome2, nome3) > 0)){
        printf("\n%s\n%s\n%s",nome3,nome1,nome2);
    }
    if ((n1==3)&&(n2==1)&&(n3==2)){
        printf("\n%s\n%s\n%s",nome2,nome3,nome1);
    }
    if ((n1==3)&&(n2==2)&&(n3==1)){
        printf("\n%s\n%s\n%s",nome3,nome2,nome1);
    }

return 0;
}
