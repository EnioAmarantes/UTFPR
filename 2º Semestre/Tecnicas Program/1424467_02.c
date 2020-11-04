/*
Nome: Enio Amarantes Neto
RA: 1424467

Questão 02:
a) Escreva uma função em Linguagem C para verificar se um número é primo ou não.
A função deve receber um único valor do tipo inteiro e retornar 1 se o número for primo, 
ou 0 se o número não for primo.

b) Utilizando a função do item a), 
escreva um programa em Linguagem C para mostrar cada um dos números primos 
em um intervalo fechado [n1,n2] fornecido pelo usuário, 
além da soma de todos os números primos no intervalo. */

#include <stdio.h>
//Protótipo da função
int eprimo(int);

//função principal
int main(){
	//Declaração das variáveis
	int n1, n2, soma, i;
	//Atribuição de zero para não pegar lixo e memória
	soma = 0;
	
	//Comunicação com o usuário para pegar os valores
	printf("\nQuais são primos???\n");
	printf("\nDigite o primeiro número da sequência a ser analisada:\t");
	scanf("%d", &n1);
	printf("\nDigite o último número do intervalo a ser analisado:\t");
	scanf("%d", &n2);

	//Condicional para que o laço não tenha problema
	if (n2 > n1) {
		//Laço verificando se são primos os números do intervalo
		for(i = n1; i <= n2; i++){
			//Caso a função eprimo retorne verdadeiro imprime na tela o número primo e acumula na somatória
			if(eprimo(i)){
				printf("%d é primo!", i);
				soma = soma + i;
			}		
		}
	}
	//Impressão da somatória dos números primos
	printf("\nA soma dos números primos neste intervalo é:\t %d", soma);

return 0;
}

//função que calcula se é primo
int eprimo(int x){
	//Utiliza um contador para verificar quantas divisões são inteira entre o número e 1
	int cont = 0, i;
	
	//Laço para verificar as divisões inteiras
	for (i = x; i > 0; i--){
		if (i % x == 0){
			cont = cont + 1;
		}
	}
	
	//Caso seja divisível por ele mesmo e 1, logo cont = 2 então retornar verdadeiro e sair da função
	if (cont == 2){
		return 1;
	}

//caso negativo retorno de falso
return 0;
}

