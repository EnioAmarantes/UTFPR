/*
1.	Construa um algoritmo que, dado um conjunto de valores inteiros e 
positivos, determine qual o menor e o maior valores do conjunto.  
O final do conjunto de valores é conhecido através do valor zero, 
que não deve ser considerado.
*/
#include <stdio.h>
int main(){
	int n, menor, maior;
  printf("\nDigite um numero inteiro e positivo (0 finaliza): ");
  scanf("%d",&n);
  menor = n;
  maior = n;
	while(n > 0){
    do{
		  printf("\nDigite um numero inteiro e positivo (0 finaliza): ");
      scanf("%d",&n);
		}while(n < 0);
		if((n < menor) && (n > 0))
		  menor = n;
		if((n > maior) && (n > 0))
			maior = n;
	}
	if(menor != 0){
	  printf("\nO menor numero digitado foi %d",menor);	
	  printf("\nO maior numero digitado foi %d",maior);	
	}
	return 0;
}