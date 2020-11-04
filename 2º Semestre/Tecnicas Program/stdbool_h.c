#include <stdio.h>
#include <stdbool.h>

bool primo(int);

int main(){
  int n1, n2;
  printf("\nMostra todos os numeros primos em um intervalo");
  printf("\nInforme o inicio do intervalo: ");
  scanf("%d",&n1);
	printf("\nInforme o final do intervalo: ");
  scanf("%d",&n2);
  while(n1 <= n2){
		if (primo(n1))
			printf("\nO numero %d e primo",n1);
		  else
		    printf("\nO numero %d nao e primo",n1);
		n1 = n1 + 1;  
	}
	return 0;
}

bool primo(int n){
	int soma, aux;
	aux = n;
	soma = 0;
	while(aux >= 1){
		if (n % aux == 0){
			soma = soma + 1;
		  if (soma == 3)
		  	return (false);
		}
		aux = aux - 1;
	}
  return (true);	
}
