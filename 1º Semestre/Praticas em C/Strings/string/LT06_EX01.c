#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Faça um programa em Linguagem C que receba o nome completo do usuário e apresente-o com uma mensagem de boas vindas.
int main (){
        setlocale(LC_ALL, "Portuguese");

        char nome_completo[40];
        printf("Digite seu nome completo:\n");
        fgets(nome_completo, 40, stdin);
        system("cls");
        printf("\nSeja bem vindo!\nSr. %s", nome_completo);
}
