/*
02 - Calcular a média final obtida por um grupo de 22 alunos,
 para 4 notas bimestrais.

entradas de dados:  4 notas, para 22 alunos
saídas de dados: média da turma
processamento:
							obter as 4 notas notas do primeiro aluno
							calcular a média do primeiro aluno
							armazenar a média do primeiro aluno
							repetir os passos anteriores para os próximo 21 alunos
							mostrar a média de cada aluno que foi armazenada dividida por 22
*/
#include <stdio.h>
int main(){
	float n1, n2, n3, n4, media, somamedias, nota;
	int num, i;
	num = 1;
	somamedias = 0;
/*	
	while(num <= 3){
		printf("\nDigite a primeiro nota do %d aluno: ",num);
		scanf("%f",&n1);
		printf("Digite a segunda nota do %d aluno: ",num);
		scanf("%f",&n2);
		printf("Digite a terceira nota do %d aluno: ",num);
		scanf("%f",&n3);
		printf("Digite a quarta nota do %d aluno: ",num);
		scanf("%f",&n4);
		media = (n1 + n2 + n3 + n4) / 4;
		printf("\nA media do %d aluno e %2.2f",num,media);
		somamedias = somamedias + media;
		num = num + 1;
	}
*/	
/*
	while(num <= 3){
		printf("\nDigite aa quatro notas do %d aluno: ",num);
		scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
		media = (n1 + n2 + n3 + n4) / 4;
		printf("\nA media do %d aluno e %2.2f",num,media);
		somamedias = somamedias + media;
		num = num + 1;
	}	
*/	
	while(num <= 3){
		i = 1;
		media = 0;
		while(i <= 4){
		  printf("\nDigite a %d nota do %d aluno: ",i,num);
		  scanf("%f",&nota);
		  media = media + nota;
		  i = i + 1;
		}
		media = media / 4;
		printf("\nA media do %d aluno e %2.2f",num,media);
		somamedias = somamedias + media;
		num = num + 1;
	}		
	
	
	printf("\nA media da turma e %2.2f",somamedias/3);
	return 0;
}