#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
//Faça um programa em Linguagem C receba uma string e um caractere, e apague todas as ocorrências desse caracter na string.
int main (){
    setlocale(LC_ALL, "Portuguese");

    char palavra[30], c = ' ';
    int i = 0;

    printf("Digite uma palavra:\n");
    fgets(palavra,  30, stdin);
    printf("Digite um caractere para apagar:\n");
    scanf("%c",&c);

    for (i = 0; i < strlen(palavra); i++){
        if (palavra[i] == c){
            palavra[i] = ' ';
        }
    }

    system("cls");
    puts(palavra);
    return 0;
}
