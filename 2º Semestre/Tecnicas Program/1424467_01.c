/*
Nome: Enio Amarantes Neto
RA: 1424467

Questão 01
a) Escreva uma função em Linguagem C para calcular o fatorial de um número. 
A função deve receber um único valor do tipo inteiro 
e retornar -1 se o valor for menor ou igual a 0 ou 
o fatorial do número se o mesmo for maior do que 0.

b) Utilizando a função do item a), 
escreva um programa em Linguagem C que calcule o somatório dos n primeiros termos da série:

soma = 1 + x + (x * 2 / 2!) + (x* 3 / 3!) + ...*/

#include <stdio.h>
//Declaração de Funções
int fatorial(int);
float somatoria(int, int);

int main(){
	//Declaração de Variáveis, usando float para receber a somatória pois pode retornar valor com casas após a vírgula
	int x, n;
	float res;
	
	//Comunicação com o usuário para receber os valores
	printf("\nPara calcular a somatória digite um valor a ser colocado na função:\n");
	scanf("%d", &x);
	printf("\nQuantas vezes deseja calcular a função:\t");
	scanf("%d", &n);
	//Chamada da função
	res = somatoria(x,n);
	//Resultado para o usuário
	printf("O resulado da somatória será: %2.3f", res);
	
return 0;
}

//Função fatorial
int fatorial(int x){
	//fat iniciando em 1 para que não interfira no resultado, que tenderia a zero
	int fat = 1, i = 0;

	//Verificação se o valor é positivo
	if(x > 0){
		//Laço de repetição para todos os cálculos usando o valor entregue pelo usuário para controle
		for (i = x; i > 1; i--){
			fat = fat * i;
		}
		//retorno do fatorial
		return (fat);
	}
//retorno pedido no enunciado
return (-1);
};
//Uso de float para o caso de valores com casas decimais
float somatoria(int x, int y){
	int i;
	float soma;
	soma = 1;
	//Implementação da função do enunciado utilizando o valor do usuário como controle
	for (i = 1; i <= y; i++){
		soma = soma + (x * i / (fatorial(i)));
	}
//retorno da somatória
return (soma);
};
