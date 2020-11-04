/*
01 - Obter o nome e a idade de um usuário e escrever na tela a seguinte 
mensagem:
Hello! FULANO, você tem XX anos, para um grupo de 10 pessoas.

entradas de dados: nome e idade para 10 pessoas
saídas de dados: mensagem: Hello! FULANO, você tem XX anos
processamento:
ler nome e idade e mostrar e mensagem 10 vezes;
utilizar um contador inicializado em 1 que é incrementado
de 1 em 1 para controlar a estrutura de repetição
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int idade, c;
	char nome[30];
  c = 1;
	while(c <= 2){
		printf("\nDigite seu nome: ");
		fflush(stdin);
		gets(nome);
		printf("\nDigite sua idade: ");
		scanf("%d",&idade);
		printf("\nHello! %s, voce tem %d anos", nome, idade);
		c = c + 1;
	}	
	return 0;
}

