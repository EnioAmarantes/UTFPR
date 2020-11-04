#include <stdio.h>
int main(){
	int num, i, vetor[64], dim, aux;
	
	printf("\nDigite um numero inteiro base 10: ");
	scanf("%d",&num);
	
	printf("\n");
	for(i = 0;num > 0;i = i + 1){
		vetor[i] = num % 2;
		num = num / 2;
	}
	dim = i;
/*	
	printf("\na partir do final");
	for(i = i - 1;i >= 0;i = i - 1){
		printf("\n%d - %d",vetor[i], i);
	}
	printf("\n");
*/
/*INVERTER O VETOR
	0 1 2 3 4 5 6 7 8 (dimensão 9)
	1 1 0 1 0 1 0 0 1
	
	L C
	0 8
	1 7
	2 6
	3 5
	
	linha vai até (dimensão / 2 - 1)
	coluna é (dimensão - L - 1)
*/

 for(i = 0;i < (dim / 2 - 1);i = i + 1){
	 aux = vetor[i];
	 vetor[i] = vetor[dim - i - 1];
	 vetor[dim - i - 1] = aux;
 }
	 
	printf("\n");
	for(i = 0;i < dim;i = i+ 1){
		printf("%d",vetor[i]);
	}
	printf("\n");	 

	
	return 0;
}






