#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
//Faça um programa em Linguagem C que receba uma string e depois um caractere
// e retorne o número de vezes que esse caracter aparece na string.
int main (){
    setlocale(LC_ALL, "Portuguese");

    char palavra[30], c = ' ';
    int i = 0, cont = 0;
    printf("Digite uma palavra:\n");
    fgets(palavra,  30, stdin);
    printf("Digite um caractere para pesquisar:\n");
    scanf("%c",&c);

    //fflush(stdin);
    for (i = 0; i < strlen(palavra); i++){
        if (palavra[i] == c){
            cont++;
        }
    }

    system("cls");
    //printf("%d", t);
    printf("O caractere %c aparece %d vezes", c, cont);
    return 0;
}
