#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
//Fa�a um programa em Linguagem C que receba o nome completo do usu�rio e troque o �ltimo sobrenome por �XPTO�.
// N�o � apenas para imprimir, precisa substituir o �ltimo sobrenome.
int main (){
        setlocale(LC_ALL, "Portuguese");

        char nome[20], sobrenome[20], sub[]=" XPTO";
        int i = 0, x = 0;
        printf("Digite seu nome:\n");
        gets(nome);
        printf("Digite seu sobrenome:\n");
        gets(sobrenome);
        strcat(nome,sub);
        system("cls");
        printf("\nSeja bem vindo!\nSr. %s", nome);
}
