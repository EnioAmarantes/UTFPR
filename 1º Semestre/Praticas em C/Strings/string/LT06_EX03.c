#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
//Faça um programa em Linguagem C que receba uma palavra do usuário e retire o hífen se acaso existir.
// Não é apenas para imprimir, precisa retirar o hífen da palavra.
int main (){
    setlocale(LC_ALL, "Portuguese");

    char palavra[10];
    int i = 0;
    printf("Digite uma palavra:\n");
    fgets(palavra,  10, stdin);

    for (i = 0; i <
     strlen(palavra); i++){
        if (palavra[i] == '-'){
            palavra[i] = ' ';
        }
    }

    system("cls");
    //printf("%d", t);
    puts(palavra);
    return 0;
}
