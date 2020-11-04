#include <stdio.h>
#include <string.h>

// Faça um programa em Linguagem C que receba 2 nome completos (até 30 caracteres) e imprima-os em ordem crescente.

int main (){
    char nome1[30], nome2[30];

    printf("Digite dois nomes completos:\n");

    fgets(nome1, 30, stdin);
    fflush(stdin);
    fgets(nome2, 30, stdin);

    printf("\nOs nomes digitados em ordem alfabética é:\n");

    if (strcmp(nome1, nome2)< 0){
        puts(nome1);
        puts(nome2);
    } else {
        puts(nome2);
        puts(nome1);
    }
return 0;
}
