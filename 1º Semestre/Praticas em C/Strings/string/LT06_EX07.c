#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
//Fa�a um programa em Linguagem C que receba o nome de usu�rio e sua senha de acesso a um sistema.
// Se o usu�rio for �joao� e a senha �123�, permita o acesso. Caso contr�rio, d� uma mensagem de ACESSO NEGADO.
int main (){
    setlocale(LC_ALL, "Portuguese");

    char nome[20], senha[20], login[]= "joao", pass[] = "123";

    printf("Login:");
    gets(nome);
    printf("Senha:");
    gets(senha);

    if (strcmp(nome,login)==0 && strcmp(senha,pass)==0){
        printf("acesso liberado");
    } else{
        printf("acesso negado");
    }



    return 0;
}
