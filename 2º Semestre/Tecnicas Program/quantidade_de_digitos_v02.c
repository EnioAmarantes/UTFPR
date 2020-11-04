#include <stdio.h>
#include <math.h>

int main(){
	int n = 97531, q = 0, tam;
	
	tam = (int)log10(n)+1;
	printf("\n %d possui %d digitos\n",n, tam);
	
	tam = (int)pow(10,tam-1);
	
	printf("\n %d \n", n / tam);	
	
  while (n > 0){
		printf("\n%d",n % 10);
		n = n / 10;
		q = q + 1;
	}	
	printf("\nQ --> %d",q);	
	
}